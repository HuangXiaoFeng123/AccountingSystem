/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ButtonAdd;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonDel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *ButtonSure;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ButtonCancel;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *ButtonSearch;
    QPushButton *ButtonNext;

    void setupUi(QWidget *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(800, 600);
        gridLayout = new QGridLayout(MainDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(MainDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->horizontalHeader()->setDefaultSectionSize(180);

        verticalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ButtonAdd = new QPushButton(MainDialog);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonAdd->sizePolicy().hasHeightForWidth());
        ButtonAdd->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ButtonAdd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonDel = new QPushButton(MainDialog);
        ButtonDel->setObjectName(QString::fromUtf8("ButtonDel"));
        sizePolicy.setHeightForWidth(ButtonDel->sizePolicy().hasHeightForWidth());
        ButtonDel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ButtonDel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        ButtonSure = new QPushButton(MainDialog);
        ButtonSure->setObjectName(QString::fromUtf8("ButtonSure"));
        sizePolicy.setHeightForWidth(ButtonSure->sizePolicy().hasHeightForWidth());
        ButtonSure->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(ButtonSure);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        ButtonCancel = new QPushButton(MainDialog);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));
        sizePolicy.setHeightForWidth(ButtonCancel->sizePolicy().hasHeightForWidth());
        ButtonCancel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(ButtonCancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        lineEdit = new QLineEdit(MainDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(10);
        lineEdit->setFont(font);

        horizontalLayout_3->addWidget(lineEdit);

        ButtonSearch = new QPushButton(MainDialog);
        ButtonSearch->setObjectName(QString::fromUtf8("ButtonSearch"));
        sizePolicy.setHeightForWidth(ButtonSearch->sizePolicy().hasHeightForWidth());
        ButtonSearch->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(ButtonSearch);

        ButtonNext = new QPushButton(MainDialog);
        ButtonNext->setObjectName(QString::fromUtf8("ButtonNext"));
        ButtonNext->setMinimumSize(QSize(40, 40));
        ButtonNext->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(8);
        ButtonNext->setFont(font1);

        horizontalLayout_3->addWidget(ButtonNext);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 13);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QWidget *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", nullptr));
        ButtonAdd->setText(QApplication::translate("MainDialog", "\345\242\236\345\212\240", nullptr));
        ButtonDel->setText(QApplication::translate("MainDialog", "\345\210\240\351\231\244", nullptr));
        ButtonSure->setText(QApplication::translate("MainDialog", "\347\241\256\345\256\232", nullptr));
        ButtonCancel->setText(QApplication::translate("MainDialog", "\345\217\226\346\266\210", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainDialog", "\350\257\267\350\276\223\345\205\245\346\237\245\346\211\276\347\232\204\346\227\245\346\234\237", nullptr));
        ButtonSearch->setText(QApplication::translate("MainDialog", "\346\237\245\346\211\276", nullptr));
        ButtonNext->setText(QApplication::translate("MainDialog", "-->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
