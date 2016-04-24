#ifndef CALIBRATE_H
#define CALIBRATE_H

#include <QDialog>
#include "calibrationdata.h"
#include <QCloseEvent>
#include <qserialport.h>
#include "mainwindow.h"


namespace Ui {
class Calibrate;
}

class Calibrate : public QDialog
{
    Q_OBJECT

public:
    explicit Calibrate(QWidget *parent = 0);
    void updateCalTable(CalibrationData &calData);
    void setPort(QSerialPort *ser);

    ~Calibrate();

private slots:
    void on_cancel_clicked();
    int findRow(QString address, QString bus);
    void setCellText(int row, int col, QString text);
    void closeEvent(QCloseEvent *event);


    void on_save_clicked();

private:
    bool saveCal;
    QSerialPort *serial;
    Ui::Calibrate *ui;
};

#endif // CALIBRATE_H
