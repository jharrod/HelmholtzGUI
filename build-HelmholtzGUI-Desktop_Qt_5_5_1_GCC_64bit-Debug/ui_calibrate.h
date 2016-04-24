/********************************************************************************
** Form generated from reading UI file 'calibrate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATE_H
#define UI_CALIBRATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Calibrate
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *cancel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Calibrate)
    {
        if (Calibrate->objectName().isEmpty())
            Calibrate->setObjectName(QStringLiteral("Calibrate"));
        Calibrate->resize(841, 292);
        gridLayout = new QGridLayout(Calibrate);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Calibrate);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(274, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        save = new QPushButton(Calibrate);
        save->setObjectName(QStringLiteral("save"));
        save->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(save, 0, 2, 1, 1);

        cancel = new QPushButton(Calibrate);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cancel, 0, 3, 1, 1);

        tableWidget = new QTableWidget(Calibrate);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 4);


        retranslateUi(Calibrate);

        QMetaObject::connectSlotsByName(Calibrate);
    } // setupUi

    void retranslateUi(QDialog *Calibrate)
    {
        Calibrate->setWindowTitle(QApplication::translate("Calibrate", "Calibration", 0));
        label->setText(QApplication::translate("Calibrate", "Magnetometer Calibration", 0));
        save->setText(QApplication::translate("Calibrate", "Save Calibration", 0));
        cancel->setText(QApplication::translate("Calibrate", "Cancel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Calibrate", "Mag Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Calibrate", "Bus", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Calibrate", "X Min", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Calibrate", "X Max", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Calibrate", "Y Min", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Calibrate", "Y Max", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Calibrate", "Z Min", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Calibrate", "Z Max", 0));
    } // retranslateUi

};

namespace Ui {
    class Calibrate: public Ui_Calibrate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATE_H
