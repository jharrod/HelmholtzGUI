/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *serialPortBox;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumLabel;
    QLabel *locationLabel;
    QLabel *vendorLabel;
    QLabel *productLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QComboBox *baudRateBox;
    QLabel *label_8;
    QComboBox *dataBitsBox;
    QLabel *label_9;
    QComboBox *parityBox;
    QLabel *label_10;
    QComboBox *stopBitsBox;
    QLabel *label_11;
    QComboBox *flowControlBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(438, 280);
        gridLayout_3 = new QGridLayout(Settings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(Settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialPortBox = new QComboBox(groupBox);
        serialPortBox->setObjectName(QStringLiteral("serialPortBox"));

        gridLayout->addWidget(serialPortBox, 0, 0, 1, 1);

        descriptionLabel = new QLabel(groupBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 1, 0, 1, 1);

        manufacturerLabel = new QLabel(groupBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout->addWidget(manufacturerLabel, 2, 0, 1, 1);

        serialNumLabel = new QLabel(groupBox);
        serialNumLabel->setObjectName(QStringLiteral("serialNumLabel"));

        gridLayout->addWidget(serialNumLabel, 3, 0, 1, 1);

        locationLabel = new QLabel(groupBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout->addWidget(locationLabel, 4, 0, 1, 1);

        vendorLabel = new QLabel(groupBox);
        vendorLabel->setObjectName(QStringLiteral("vendorLabel"));

        gridLayout->addWidget(vendorLabel, 5, 0, 1, 1);

        productLabel = new QLabel(groupBox);
        productLabel->setObjectName(QStringLiteral("productLabel"));

        gridLayout->addWidget(productLabel, 6, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Settings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        baudRateBox = new QComboBox(groupBox_2);
        baudRateBox->setObjectName(QStringLiteral("baudRateBox"));

        gridLayout_2->addWidget(baudRateBox, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        dataBitsBox = new QComboBox(groupBox_2);
        dataBitsBox->setObjectName(QStringLiteral("dataBitsBox"));

        gridLayout_2->addWidget(dataBitsBox, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        parityBox = new QComboBox(groupBox_2);
        parityBox->setObjectName(QStringLiteral("parityBox"));

        gridLayout_2->addWidget(parityBox, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        stopBitsBox = new QComboBox(groupBox_2);
        stopBitsBox->setObjectName(QStringLiteral("stopBitsBox"));

        gridLayout_2->addWidget(stopBitsBox, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        flowControlBox = new QComboBox(groupBox_2);
        flowControlBox->setObjectName(QStringLiteral("flowControlBox"));

        gridLayout_2->addWidget(flowControlBox, 4, 1, 1, 1);

        baudRateBox->raise();
        dataBitsBox->raise();
        parityBox->raise();
        stopBitsBox->raise();
        flowControlBox->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();

        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(Settings);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Port Settings", 0));
        groupBox->setTitle(QApplication::translate("Settings", "Select Serial Port", 0));
        descriptionLabel->setText(QApplication::translate("Settings", "Description:", 0));
        manufacturerLabel->setText(QApplication::translate("Settings", "Manufacturer:", 0));
        serialNumLabel->setText(QApplication::translate("Settings", "Serial Number:", 0));
        locationLabel->setText(QApplication::translate("Settings", "Location:", 0));
        vendorLabel->setText(QApplication::translate("Settings", "Vendoor ID:", 0));
        productLabel->setText(QApplication::translate("Settings", "Product ID:", 0));
        groupBox_2->setTitle(QApplication::translate("Settings", "Settings", 0));
        label_7->setText(QApplication::translate("Settings", "Baud Rate:", 0));
        label_8->setText(QApplication::translate("Settings", "Data Bits:", 0));
        label_9->setText(QApplication::translate("Settings", "Parity:", 0));
        label_10->setText(QApplication::translate("Settings", "Stop Bits:", 0));
        label_11->setText(QApplication::translate("Settings", "Flow Control:", 0));
        applyButton->setText(QApplication::translate("Settings", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
