/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Connect;
    QAction *action_Disconnect;
    QAction *action_Configure;
    QAction *action_Quit;
    QAction *action_About;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_X;
    QLabel *label_2;
    QLineEdit *lineEdit_Y;
    QLabel *label_3;
    QLineEdit *lineEdit_Z;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *calibrateBtn;
    QPushButton *loadCalBtn;
    QPushButton *stopBtn;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *x;
    QLabel *y;
    QLabel *z;
    QLabel *curMag;
    QPushButton *detailsBtn;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(816, 578);
        action_Connect = new QAction(MainWindow);
        action_Connect->setObjectName(QStringLiteral("action_Connect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Connect->setIcon(icon);
        action_Disconnect = new QAction(MainWindow);
        action_Disconnect->setObjectName(QStringLiteral("action_Disconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Disconnect->setIcon(icon1);
        action_Configure = new QAction(MainWindow);
        action_Configure->setObjectName(QStringLiteral("action_Configure"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Configure->setIcon(icon2);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quit->setIcon(icon3);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEdit_X = new QLineEdit(centralWidget);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));

        gridLayout_2->addWidget(lineEdit_X, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 2, 1, 1);

        lineEdit_Y = new QLineEdit(centralWidget);
        lineEdit_Y->setObjectName(QStringLiteral("lineEdit_Y"));

        gridLayout_2->addWidget(lineEdit_Y, 1, 3, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 4, 1, 1);

        lineEdit_Z = new QLineEdit(centralWidget);
        lineEdit_Z->setObjectName(QStringLiteral("lineEdit_Z"));

        gridLayout_2->addWidget(lineEdit_Z, 1, 5, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 6, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        calibrateBtn = new QPushButton(centralWidget);
        calibrateBtn->setObjectName(QStringLiteral("calibrateBtn"));

        verticalLayout->addWidget(calibrateBtn);

        loadCalBtn = new QPushButton(centralWidget);
        loadCalBtn->setObjectName(QStringLiteral("loadCalBtn"));

        verticalLayout->addWidget(loadCalBtn);

        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        verticalLayout->addWidget(stopBtn);


        gridLayout_3->addLayout(verticalLayout, 5, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(283, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 1, 1, 2);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setMaximumBlockCount(200);

        gridLayout_3->addWidget(plainTextEdit, 1, 0, 5, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(280, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        x = new QLabel(groupBox);
        x->setObjectName(QStringLiteral("x"));

        gridLayout->addWidget(x, 0, 0, 1, 1);

        y = new QLabel(groupBox);
        y->setObjectName(QStringLiteral("y"));

        gridLayout->addWidget(y, 1, 0, 1, 1);

        z = new QLabel(groupBox);
        z->setObjectName(QStringLiteral("z"));

        gridLayout->addWidget(z, 2, 0, 1, 1);

        curMag = new QLabel(groupBox);
        curMag->setObjectName(QStringLiteral("curMag"));

        gridLayout->addWidget(curMag, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 1, 1, 1);

        detailsBtn = new QPushButton(centralWidget);
        detailsBtn->setObjectName(QStringLiteral("detailsBtn"));

        gridLayout_3->addWidget(detailsBtn, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        plainTextEdit->raise();
        groupBox->raise();
        detailsBtn->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 816, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_Connect);
        menuFile->addAction(action_Disconnect);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);
        menuTools->addAction(action_Configure);
        menuHelp->addAction(action_About);
        mainToolBar->addAction(action_Connect);
        mainToolBar->addAction(action_Disconnect);
        mainToolBar->addAction(action_Configure);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Helmholtz Cage GUI", 0));
        action_Connect->setText(QApplication::translate("MainWindow", "&Connect", 0));
#ifndef QT_NO_TOOLTIP
        action_Connect->setToolTip(QApplication::translate("MainWindow", "Connect to Serial Port", 0));
#endif // QT_NO_TOOLTIP
        action_Disconnect->setText(QApplication::translate("MainWindow", "&Disconnect", 0));
#ifndef QT_NO_TOOLTIP
        action_Disconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect From Serial Port", 0));
#endif // QT_NO_TOOLTIP
        action_Configure->setText(QApplication::translate("MainWindow", "&Configure", 0));
#ifndef QT_NO_TOOLTIP
        action_Configure->setToolTip(QApplication::translate("MainWindow", "Configure Srial Port", 0));
#endif // QT_NO_TOOLTIP
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0));
#ifndef QT_NO_TOOLTIP
        action_Quit->setToolTip(QApplication::translate("MainWindow", "Quit", 0));
#endif // QT_NO_TOOLTIP
        action_About->setText(QApplication::translate("MainWindow", "&About", 0));
#ifndef QT_NO_TOOLTIP
        action_About->setToolTip(QApplication::translate("MainWindow", "About Program", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Magnetic Field (uT):</span></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "X:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Y:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Z:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Send", 0));
        calibrateBtn->setText(QApplication::translate("MainWindow", "New Calibration", 0));
        loadCalBtn->setText(QApplication::translate("MainWindow", "Load Previous Calibration", 0));
        stopBtn->setText(QApplication::translate("MainWindow", "Stop", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Magnetic Field Readings:", 0));
        x->setText(QApplication::translate("MainWindow", "Current X:   ", 0));
        y->setText(QApplication::translate("MainWindow", "Current Y:     ", 0));
        z->setText(QApplication::translate("MainWindow", "Current Z:    ", 0));
        curMag->setText(QApplication::translate("MainWindow", "Magnitude:     ", 0));
        detailsBtn->setText(QApplication::translate("MainWindow", "Show Details", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
