/********************************************************************************
** Form generated from reading UI file 'detailswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSWINDOW_H
#define UI_DETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *cancel;

    void setupUi(QDialog *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName(QStringLiteral("DetailsWindow"));
        DetailsWindow->resize(841, 290);
        label = new QLabel(DetailsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 5, 312, 29));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(DetailsWindow);
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
        tableWidget->setGeometry(QRect(10, 40, 823, 239));
        cancel = new QPushButton(DetailsWindow);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(750, 10, 75, 23));
        cancel->setFocusPolicy(Qt::NoFocus);

        retranslateUi(DetailsWindow);

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QApplication::translate("DetailsWindow", "Dialog", 0));
        label->setText(QApplication::translate("DetailsWindow", "Magnetometer Details", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DetailsWindow", "Mag Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DetailsWindow", "Bus", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DetailsWindow", "X Cal", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DetailsWindow", "Y Cal", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DetailsWindow", "Z Cal", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DetailsWindow", "X Raw", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DetailsWindow", "Y Raw", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("DetailsWindow", "Z Raw", 0));
        cancel->setText(QApplication::translate("DetailsWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSWINDOW_H
