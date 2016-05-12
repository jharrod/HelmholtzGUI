#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <qmessagebox.h>
#include <QPlainTextEdit>
#include <settings.h>
#include <calibrate.h>
#include <qmath.h>
#include <qdebug.h>
#include <QFileInfo>
#include "calibrationdata.h"
#include "magdata.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette p;
    p.setColor(QPalette::Base, Qt::black);
    p.setColor(QPalette::Text, Qt::green);
    ui->plainTextEdit->setPalette(p);

    ui->lineEdit_X->setValidator(new QDoubleValidator(this));
    ui->lineEdit_Y->setValidator(new QDoubleValidator(this));
    ui->lineEdit_Z->setValidator(new QDoubleValidator(this));

    connected = false;
    status = new QLabel;
    ui->statusBar->addWidget(status);

    usrSettings = new Settings;
    cal = new Calibrate;
    details = new DetailsWindow;

    serial = new QSerialPort(this);

    ui->action_Connect->setEnabled(true);
    ui->action_Disconnect->setEnabled(false);
    ui->action_Quit->setEnabled(true);
    ui->action_Configure->setEnabled(true);

    ui->statusBar->addWidget(status);

    initConnections();

    ui->plainTextEdit->appendPlainText(tr("Connecting..."));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::openSerialPort()
{
    Settings::PortSettings p = usrSettings->getSettings();
    serial->setPortName(p.name);
    serial->setBaudRate(p.baudRate);
    serial->setDataBits(p.dataBits);
    serial->setParity(p.parity);
    serial->setStopBits(p.stopBits);
    serial->setFlowControl(p.flowControl);
    if (serial->open(QIODevice::ReadWrite)) {
        connected = true;
        ui->action_Connect->setEnabled(false);
        ui->action_Disconnect->setEnabled(true);
        ui->action_Configure->setEnabled(false);
        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                          .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                          .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));
        serial->clear();
        //serial->write("~*");
       // qDebug() << "sent " << sent << " bytes";
    } else {
        QMessageBox::critical(this, tr("Error"), serial->errorString());
        connected = false;
        showStatusMessage(tr("Open error"));
    }
}

void MainWindow::closeSerialPort()
{
    if (serial->isOpen())
        serial->close();
    qDebug() << "Serial port closed";
    ui->action_Connect->setEnabled(true);
    ui->action_Disconnect->setEnabled(false);
    ui->action_Configure->setEnabled(true);
    showStatusMessage(tr("Disconnected"));
}

void MainWindow::writeData(const QByteArray &data){
    serial->write(data);
}

void MainWindow::readData(){
    static CalibrationData magData;
    static MagData detailsData;
    static bool start = false, _x = false, _y = false, _z = false, _e = false;
    static bool A = false, B = false, X = false, Y = false, Z = false;
    static bool I = false, J = false, K = false;
    static bool D = false;
    static double x,y,z;


    // _x, _y. _z: current x, y, and z magnetic field
    // X, Y, Z: calibration maxs x, y, z incoming
    // I, J, K: calibration mins x, y, z incoming
    // I: index incoming, A: address incomming, B: Bus incoming
    //D: mag details incoming

    QByteArray buffer = serial->readAll(); //TO DO, MAKE SWICH INSTEAD OF IF ELSE
    for (int i=0; i<buffer.size(); i++) {
       // qDebug() << "Recieved: " << buffer[i];
        if (buffer[i] == '\n') {

            if (_x) {
                //qDebug() << "buf for x = " << buf;
                buf.remove(buf.size()-1, 1); //remove '\r' off the end of data
                x = buf.toDouble();
                //qDebug() << "x = "<< x;
                _x = false;
            }
            else if(_y) {
               // qDebug() << "buf for y = " << buf;
                buf.remove(buf.size()-1, 1); //remove '\r' off the end of data
                y = buf.toDouble();
               // qDebug()<<"y = " << y;
                _y = false;
            }
            else if(_z) {
                //qDebug() << "buf for z = " << buf;
                buf.remove(buf.size()-1, 1); //remove '\r' off the end of data
                z = buf.toDouble();
               // qDebug() << "z = " << z;
                updateCurField(x,y,z);
                _z = false;
            }
            else if (D) {
                parseMagDetails(buf);
                D = false;
            }
            else if (_e) {
                QMessageBox::critical(this, tr("Error"), tr(buf));
                _e = false;
            }
            else if (A) {
                magData.address = buf;
                A = false;
            }
            else if (B) {
                magData.bus = buf;
                B = false;
            }
            else if (X) {
                magData.xmax = buf;
                X = false;
            }
            else if (Y) {
                magData.ymax = buf;
                Y = false;
            }
            else if (Z) {
                magData.zmax = buf;
                Z = false;
            }
            else if (I) {
                magData.xmin = buf;
                I = false;
            }
            else if (J) {
                magData.ymin = buf;
                J = false;
            }
            else if (K) { //last data form mags, send to table
                magData.zmin = buf;
                K = false;
                cal->updateCalTable(magData);
            }
            else {
                //remove '\n' (new line is handled automatically in qt)
                buf.remove(buf.size()-1, 1);
                ui->plainTextEdit->appendPlainText(buf);
            }
            buf.clear();
        }
        else {
            if (buffer[i] == '~') {
                start = true;
            }
            else if(start == true) {
                if (buffer[i] == 'x') {
                    _x = true;
                }
                else if (buffer[i] == 'D') {
                    D = true;
                }
                else if(buffer[i] == 'y') {
                    _y = true;
                }
                else if (buffer[i] == 'z') {
                    _z = true;
                }
                else if(buffer[i] == 'e') {
                    _e = true;
                }
                else if (buffer[i] == 'A') {
                    A = true;
                }
                else if (buffer[i] == 'B') {
                    B = true;
                }
                else if (buffer[i] == 'X') {
                    X = true;
                }
                else if (buffer[i] == 'Y') {
                    Y = true;
                }
                else if (buffer[i] == 'Z') {
                    Z = true;
                }
                else if (buffer[i] == 'I') {
                    I = true;
                }
                else if (buffer[i] == 'J') {
                    J = true;
                }
                else if (buffer[i] == 'K') {
                    K = true;
                }
                else if (buffer[i] == '*') {
                    ui->plainTextEdit->appendPlainText(tr("Connected."));
                }
                start = false;
            }
            else {
                //qDebug() << "Appended: " << buffer[i];
                buf.append(buffer[i]);
            }
        }
    }
}

void MainWindow::parseMagDetails(QByteArray buffer) {
    //format:
    // "add,bus,rawx,rawy,rawz,calx,caly,calz,\n"
    // add is two chars
    // bus is 1 char

    enum CurData {rawx,rawy,rawz,calx,caly,calz,none};
    CurData curData;
    curData = rawx;

    MagData data;
    QByteArray tempBuf;
    int size = buffer.size();

    tempBuf.append(buffer[0]);
    tempBuf.append(buffer[1]);
    data.address = tempBuf;
    tempBuf.clear();
    //buffer[3] is ','
    data.bus = buffer[3];
    //buffer[4] is ','

    int i = 5;
    while (buffer [i] != '\n' && i < size) {
        while (buffer[i] != ',') {
            tempBuf.append(buffer[i]);
            i++;
        }
        i++; //skip ','

        switch (curData) {

        case rawx:
                data.rawx = tempBuf;
                curData = rawy;
                break;
        case rawy:
                data.rawy = tempBuf;
                curData = rawz;
                break;
        case rawz:
                data.rawz = tempBuf;
                curData = calx;
                break;
        case calx:
                data.calx = tempBuf;
                curData = caly;
                break;
        case caly:
                data.caly = tempBuf;
                curData = calz;
                break;
        case calz:
                data.calz = tempBuf;
                curData = none;
                break;
        }
        tempBuf.clear();

    }
    details->updateMagDetailsTable(data);
}

void MainWindow::updateCurField(double x, double y, double z) {
    qDebug() << "Updating mag field: {"<<x<<","<<y<<","<<z<<"}";
   //ui->curField->setText(tr("{%1,%2,%3}").arg(x).arg(y).arg(z));
   ui->x->setText(tr("Current X: ") + QString::number(x));
   ui->y->setText(tr("Current Y: ") + QString::number(y));
   ui->z->setText(tr("Current Z: ") + QString::number(z));
   ui->curMag->setText(tr("Magnitude: %1").arg(qSqrt(x*x+y*y+z*z)));
}


void MainWindow::handleError(QSerialPort::SerialPortError error){
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
        qDebug() << "Serial port closed due to error";
        closeSerialPort();
        connected = false;
    }
}

void MainWindow::on_pushButton_clicked()
{


    if (connected == false) {
        QMessageBox::critical(this, tr("Error"), tr("Not connected to controller."));
    }
    else if (!cal->isCalibrated()) {
        QMessageBox::critical(this, tr("Warning"), tr("Magnetometers have not been calibrated."));
    }
    else if (ui->lineEdit_X->text().isEmpty() || ui->lineEdit_Y->text().isEmpty() || ui->lineEdit_Z->text().isEmpty()){
        QMessageBox::critical(this, tr("Error"), tr("One or more of magnetic feild vector inputs are empty."));
    }
    else {
        //send mag field

        QByteArray value = ui->lineEdit_X->text().toLocal8Bit();

        int status = serial->write("~x"+value+"\n");
        qDebug() << "status = " << status;

        value = ui->lineEdit_Y->text().toLocal8Bit();
        serial->write("~y"+value+"\n");

        value = ui->lineEdit_Z->text().toLocal8Bit();
        serial->write("~z"+value+"\n");

        //tell controller to go to running state
        serial->write("~r");
    }
}

void MainWindow::showStatusMessage(const QString &message)
{
    status->setText(message);
}

void MainWindow::initConnections() {
    connect(ui->action_Configure, SIGNAL(triggered()), usrSettings, SLOT(show()));
    connect(serial, SIGNAL(error(QSerialPort::SerialPortError)), this,
            SLOT(handleError(QSerialPort::SerialPortError)));
    connect(serial, SIGNAL(readyRead()), this, SLOT(readData()));
    connect(ui->action_Connect, SIGNAL(triggered()), this, SLOT(openSerialPort()));
    connect(ui->action_Disconnect, SIGNAL(triggered()), this, SLOT(closeSerialPort()));
    connect(ui->action_Quit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_About, SIGNAL(triggered()), this, SLOT(about()));

}

void MainWindow::about() {

    QMessageBox::about(this, tr("About Helmholtz Cage GUI Controller"),
                       tr("<b>Helmholtz Cage Controller</b><br>Developers: Phil Van Every, "
                          "Jeremy Harrod, Wesley Hutchins.<br><a href='http://cosmiac.org/'>COSMIAC")); //, 2016<br>http://cosmiac.org/"));

}

void MainWindow::on_calibrateBtn_clicked()
{
    if (!serial->isOpen()) {
        QMessageBox::critical(this, tr("Error"), tr("Not connected to controller."));
    }
    else {
        cal->setPort(serial);
        //tell contrl board to start calibration
        int sentcal = serial->write("~c",2);
        qDebug() << "cal sent: " << sentcal;

        //show calibration gui
        cal->show();
    }
}

void MainWindow::on_stopBtn_clicked()
{
    if (connected == false) {
        QMessageBox::critical(this, tr("Error"), tr("Not connected to controller."));
    }
    else {
        serial->write("~s");
    }
}

void MainWindow::on_loadCalBtn_clicked()
{
    if (connected == false) {
        QMessageBox::critical(this, tr("Error"), tr("Not connected to controller."));
    }
    else {
        QFile file;
        file.setFileName("calibration.txt");
        if (fileExists("calibrate.txt")) {
            if (!file.open(QIODevice::ReadOnly)) {
                 QMessageBox::critical(this, tr("Error"), tr("Could not open calibration file."));
            }
            else {
               QTextStream in(&file);
               while (!in.atEnd()) {
                   serial->write("~C");
                   QString line = in.readLine();
                   serial->write(line.toLocal8Bit());
                   serial->write("\n");

               }
               cal->setCalibrated(true);
               file.close();
            }
        }
        else {
            QMessageBox::critical(this, tr("Error"), tr("No saved calibration found, please re-calibrate magnetometers."));
        }
    }
}

bool MainWindow::fileExists(QString path) {
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    if (check_file.exists() && check_file.isFile()) {
        return true;
    } else {
        return false;
    }

}



void MainWindow::on_detailsBtn_clicked()
{
    if (connected == false) {
        QMessageBox::critical(this, tr("Error"), tr("Not connected to controller."));
    }
    else {
        details->setPort(serial);
        serial->write("~D");
        details->show();
    }
}
