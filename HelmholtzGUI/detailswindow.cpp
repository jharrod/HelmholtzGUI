#include "detailswindow.h"
#include "ui_detailswindow.h"
#include <qdebug.h>

DetailsWindow::DetailsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailsWindow)
{
    ui->setupUi(this);
}

DetailsWindow::~DetailsWindow()
{
    delete ui;
}

void DetailsWindow::closeEvent(QCloseEvent *event) {
    //closing
    qDebug() << "details closed";
    // set controller to stop state
    serial->write("~d");
}

void DetailsWindow::updateMagDetailsTable(MagData &data) {
   // qDebug() << "Searching add: " << magData.address << " Bus: " << magData.bus;
        int row = findRow(data.address, data.bus);
        if (row == -1) { //mag doesn't exist in table, create it
            //qDebug() << "row not found ";
            ui->tableWidget->insertRow(0);
            row = 0;
        }
        setCellText(row, 0, data.address);
        setCellText(row, 1, data.bus);
        setCellText(row, 2, data.calx);
        setCellText(row, 3, data.caly);
        setCellText(row, 4, data.calz);
        setCellText(row, 5, data.rawx);
        setCellText(row, 6, data.rawy);
        setCellText(row, 7, data.rawz);
}

int DetailsWindow::findRow(QString address, QString bus) {
    //returns -1 if not found
    //search if mag exists
    int rowCount = ui->tableWidget ->rowCount();
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

void DetailsWindow::setCellText(int row, int col, QString text) {

    QTableWidgetItem *cell = ui->tableWidget->item(row, col);
    if (!cell) {
        cell = new QTableWidgetItem;
        ui->tableWidget->setItem(row, col, cell);
    }

    cell->setText(text);
}

void DetailsWindow::on_cancel_clicked()
{
    this->close();
}
