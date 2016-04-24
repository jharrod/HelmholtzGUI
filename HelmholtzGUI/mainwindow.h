#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QTextEdit>


class QLabel;
class Settings;
class Calibrate;

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:

    void writeData(const QByteArray &data);
    void readData();
    void openSerialPort();
    void closeSerialPort();
    void handleError(QSerialPort::SerialPortError);
    void on_pushButton_clicked();
    void about();

    void on_calibrateBtn_clicked();

    void on_stopBtn_clicked();

    void on_loadCalBtn_clicked();

private:
    Ui::MainWindow *ui;
    QByteArray buf;
    Settings *usrSettings;
    Calibrate *cal;
    QSerialPort *serial;
    void initConnections();
    void showStatusMessage(const QString &msg);
    void updateCurField(double x, double y, double z);
    bool fileExists(QString path);
    QMenu *fileMenu;
    QMenu *settingsMenu;
    QMenu *portMenu;
    //QAction *portsAct;
    QAction *exitAct;
    QAction *refreshPortAct;
    QAction *devInputTextAct;
    QScrollBar *textScrollBar;
    QLabel *status;
    bool connected;

    QString device;
};

#endif // MAINWINDOW_H
