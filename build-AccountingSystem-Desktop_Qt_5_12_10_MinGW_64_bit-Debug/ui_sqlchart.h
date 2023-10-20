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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_SqlChart
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *ButtonBack;
    QSpacerItem *verticalSpacer;
    QChartView *chartView;

    void setupUi(QWidget *SqlChart)
    {
        if (SqlChart->objectName().isEmpty())
            SqlChart->setObjectName(QString::fromUtf8("SqlChart"));
        SqlChart->resize(790, 597);
        gridLayout = new QGridLayout(SqlChart);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ButtonBack = new QPushButton(SqlChart);
        ButtonBack->setObjectName(QString::fromUtf8("ButtonBack"));
        ButtonBack->setMinimumSize(QSize(40, 40));
        ButtonBack->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(8);
        ButtonBack->setFont(font);

        verticalLayout->addWidget(ButtonBack);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        chartView = new QChartView(SqlChart);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chartView->sizePolicy().hasHeightForWidth());
        chartView->setSizePolicy(sizePolicy);
        chartView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        chartView->setSceneRect(QRectF(0, 0, 0, 0));

        horizontalLayout->addWidget(chartView);

        horizontalLayout->setStretch(1, 10);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(SqlChart);

        QMetaObject::connectSlotsByName(SqlChart);
    } // setupUi

    void retranslateUi(QWidget *SqlChart)
    {
        SqlChart->setWindowTitle(QApplication::translate("SqlChart", "Form", nullptr));
        ButtonBack->setText(QApplication::translate("SqlChart", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SqlChart: public Ui_SqlChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLCHART_H
