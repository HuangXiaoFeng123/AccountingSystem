/********************************************************************************
** Form generated from reading UI file 'changepasswork.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORK_H
#define UI_CHANGEPASSWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassWork
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *OldlineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *NewlineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *RepeatlineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ButtonOK;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonNo;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ChangePassWork)
    {
        if (ChangePassWork->objectName().isEmpty())
            ChangePassWork->setObjectName(QString::fromUtf8("ChangePassWork"));
        ChangePassWork->resize(439, 326);
        gridLayout = new QGridLayout(ChangePassWork);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ChangePassWork);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        OldlineEdit = new QLineEdit(ChangePassWork);
        OldlineEdit->setObjectName(QString::fromUtf8("OldlineEdit"));
        OldlineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(OldlineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ChangePassWork);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        NewlineEdit = new QLineEdit(ChangePassWork);
        NewlineEdit->setObjectName(QString::fromUtf8("NewlineEdit"));
        NewlineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(NewlineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ChangePassWork);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        RepeatlineEdit = new QLineEdit(ChangePassWork);
        RepeatlineEdit->setObjectName(QString::fromUtf8("RepeatlineEdit"));
        RepeatlineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(RepeatlineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ButtonOK = new QPushButton(ChangePassWork);
        ButtonOK->setObjectName(QString::fromUtf8("ButtonOK"));

        horizontalLayout->addWidget(ButtonOK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonNo = new QPushButton(ChangePassWork);
        ButtonNo->setObjectName(QString::fromUtf8("ButtonNo"));

        horizontalLayout->addWidget(ButtonNo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ChangePassWork);

        QMetaObject::connectSlotsByName(ChangePassWork);
    } // setupUi

    void retranslateUi(QWidget *ChangePassWork)
    {
        ChangePassWork->setWindowTitle(QApplication::translate("ChangePassWork", "Form", nullptr));
        label->setText(QApplication::translate("ChangePassWork", "\346\227\247\345\257\206\347\240\201", nullptr));
        OldlineEdit->setText(QString());
        label_2->setText(QApplication::translate("ChangePassWork", "\346\226\260\345\257\206\347\240\201", nullptr));
        NewlineEdit->setText(QString());
        label_3->setText(QApplication::translate("ChangePassWork", "\350\257\267\345\206\215\347\241\256\350\256\244", nullptr));
        RepeatlineEdit->setText(QString());
        ButtonOK->setText(QApplication::translate("ChangePassWork", "\347\241\256\350\256\244", nullptr));
        ButtonNo->setText(QApplication::translate("ChangePassWork", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassWork: public Ui_ChangePassWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORK_H
