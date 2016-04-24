#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <qvalidator.h>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    struct PortSettings {
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };

     PortSettings getSettings() const;


    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
     void showPortInfo(int idx);
     void apply();
     void checkCustomBaudRatePolicy(int idx);
     void checkCustomDevicePathPolicy(int idx);
     void updateSettings();

private:

    Ui::Settings *ui;
    QIntValidator *intValidator;
    PortSettings currentSettings;
    void fillPortsParameters();
    void fillPortsInfo();

};

#endif // SETTINGS_H
