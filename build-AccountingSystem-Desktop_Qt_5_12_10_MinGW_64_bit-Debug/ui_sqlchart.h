/********************************************************************************
** Form generated from reading UI file 'sqlchart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLCHART_H
#define UI_SQLCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_SqlChart
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QChartView *chartView;

    void setupUi(QWidget *SqlChart)
    {
        if (SqlChart->objectName().isEmpty())
            SqlChart->setObjectName(QString::fromUtf8("SqlChart"));
        SqlChart->resize(790, 597);
        gridLayout = new QGridLayout(SqlChart);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(SqlChart);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(140, 40));
        comboBox->setMaximumSize(QSize(140, 40));
        comboBox->setEditable(false);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        chartView = new QChartView(SqlChart);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        sizePolicy.setHeightForWidth(chartView->sizePolicy().hasHeightForWidth());
        chartView->setSizePolicy(sizePolicy);
        chartView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        chartView->setSceneRect(QRectF(0, 0, 0, 0));

        verticalLayout->addWidget(chartView);

        verticalLayout->setStretch(1, 9);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SqlChart);

        QMetaObject::connectSlotsByName(SqlChart);
    } // setupUi

    void retranslateUi(QWidget *SqlChart)
    {
        SqlChart->setWindowTitle(QApplication::translate("SqlChart", "Form", nullptr));
        comboBox->setItemText(0, QApplication::translate("SqlChart", "\350\277\221\344\270\211\346\234\210", nullptr));
        comboBox->setItemText(1, QApplication::translate("SqlChart", "\350\277\221\345\215\212\345\271\264", nullptr));
        comboBox->setItemText(2, QApplication::translate("SqlChart", "\350\277\221\344\270\200\345\271\264", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SqlChart: public Ui_SqlChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLCHART_H
