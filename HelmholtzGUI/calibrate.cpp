#include "calibrate.h"
#include "ui_calibrate.h"
#include "calibrate.h"
#include "ui_calibrate.h"
#include <qdebug.h>
#include <QFile>

#include <QDir>

Calibrate::Calibrate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calibrate)
{
    ui->setupUi(this);


    //ui->tableWidget->setRowCount(10);
    QTableWidgetItem *cell = ui->tableWidget->item(1, 1);
    if (!cell) {
        cell = new QTableWidgetItem;
        ui->tableWidget->setItem(1, 1, cell);
    }

    saveCal = false;
    calibrated = false;

}

Calibrate::~Calibrate()
{
    delete ui;
}

void Calibrate::closeEvent(QCloseEvent *event) {
    //closing

    // set controller to stop state
    serial->write("~s");
}

void Calibrate::on_cancel_clicked()
{
    qDebug() << "cancel clicked";
    this->close();
}

void Calibrate::setPort(QSerialPort *ser) {
    serial = ser;
}

void Calibrate::updateCalTable(CalibrationData &magData) {
   // qDebug() << "Searching add: " << magData.address << " Bus: " << magData.bus;
        int row = findRow(magData.address, magData.bus);
        if (row == -1) { //mag doesn't exist in table, create it
            //qDebug() << "row not found ";
            ui->tableWidget->insertRow(0);
            row = 0;
        }
        setCellText(row, 0, magData.address);
        setCellText(row,1, magData.bus);
        setCellText(row,2, magData.xmin);
        setCellText(row,3, magData.xmax);
        setCellText(row,4, magData.ymin);
        setCellText(row,5, magData.ymax);
        setCellText(row,6, magData.zmin);
        setCellText(row,7, magData.zmax);
}

int Calibrate::findRow(QString address, QString bus) {
    //returns -1 if not found
    //search if mag exists
    int rowCount = ui->tableWidget->rowCount();
    //col 0 = address
    //col 1 = bus
    QTableWidgetItem *cell;
    QString add, _bus;

    //check bus and address for match
    for (int i = 0; i < rowCount; i++ ) {
        add = "-1";
        _bus = "-2";
        cell = ui->tableWidget->item(i, 0);
        //if cell exists
        if (cell) {
            add = cell->text();

          //  add.remove(add.size()-1, 1);
            cell = ui->tableWidget->item(i, 1);
            if (cell) {
                _bus = cell->text();
                //_bus.remove(_bus.size()-1, 1);

            }

            //qDebug() << " Checking Bus: " << _bus << " = " <<  bus << " ?";
            //qDebug() << " Checking Add: " << add << " = " <<  address << " ?";
            if (address == add && _bus == bus) {
                //qDebug() << "row found";
                return cell->row();
            }
        }

    }
    return -1;
}

void Calibrate::setCellText(int row, int col, QString text) {

    QTableWidgetItem *cell = ui->tableWidget->item(row, col);
    if (!cell) {
        cell = new QTableWidgetItem;
        ui->tableWidget->setItem(row, col, cell);
    }

    cell->setText(text);
}

void Calibrate::on_save_clicked()
{
    QFile file;
    file.setFileName("calibration.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qDebug() << "File didn't open";
    }
    else {
        QTableWidgetItem *cell;
        int rowCount = ui->tableWidget->rowCount();
        for (int i = 0; i < rowCount; i++ ) {
            for (int k = 0; k < 8; k++) {
                cell = ui->tableWidget->item(i,k);
                if (cell) {
                    QString text = cell->text();
                    //remove \r off end of string
                    text.remove(text.size()-1, 1);
                    text.push_back(",");
                    qDebug() << "Writing " << text << " to file";
                    file.write(text.toLocal8Bit());

                }
            }
            file.write("\n");
         }

        qDebug() << "cur dir = " << QDir::currentPath();
        file.close();
    }

    serial->write("~S");
    setCalibrated(true);
    this->close();
}

void Calibrate::setCalibrated(bool set) {
    calibrated = set;
}

bool Calibrate::isCalibrated() {
    return calibrated;
}
