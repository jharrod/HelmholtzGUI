#ifndef DETAILSWINDOW_H
#define DETAILSWINDOW_H

#include <QDialog>
#include <magdata.h>
#include <qserialport.h>

namespace Ui {
class DetailsWindow;
}

class DetailsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsWindow(QWidget *parent = 0);
    void updateMagDetailsTable(MagData &data);
    void setPort(QSerialPort *ser);
    ~DetailsWindow();

private slots:
    void on_cancel_clicked();

private:
    Ui::DetailsWindow *ui;
    QSerialPort *serial;
    void closeEvent(QCloseEvent *event);
    int findRow(QString address, QString bus);
    void setCellText(int row, int col, QString text);
};

#endif // DETAILSWINDOW_H
