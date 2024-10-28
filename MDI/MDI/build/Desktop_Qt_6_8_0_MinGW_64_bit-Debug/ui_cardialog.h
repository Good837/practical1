/********************************************************************************
** Form generated from reading UI file 'cardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDIALOG_H
#define UI_CARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CarDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLineEdit *idEdit;
    QLabel *label;
    QLineEdit *modelEdit;
    QLabel *label_2;
    QLineEdit *yearEdit;
    QLabel *label_3;
    QLineEdit *priceEdit;
    QLineEdit *regNumberEdit;
    QLabel *label_5;
    QLineEdit *vinEdit;
    QLabel *label_6;
    QLineEdit *passengerSeatsEdit;
    QLabel *label_7;
    QLineEdit *doorsEdit;
    QLabel *label_8;
    QLabel *label_4;
    QPushButton *createButton;
    QPushButton *exitButton;

    void setupUi(QDialog *CarDialog)
    {
        if (CarDialog->objectName().isEmpty())
            CarDialog->setObjectName("CarDialog");
        CarDialog->resize(400, 300);
        gridLayout = new QGridLayout(CarDialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        idEdit = new QLineEdit(CarDialog);
        idEdit->setObjectName("idEdit");

        formLayout->setWidget(0, QFormLayout::LabelRole, idEdit);

        label = new QLabel(CarDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        modelEdit = new QLineEdit(CarDialog);
        modelEdit->setObjectName("modelEdit");

        formLayout->setWidget(1, QFormLayout::LabelRole, modelEdit);

        label_2 = new QLabel(CarDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        yearEdit = new QLineEdit(CarDialog);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(2, QFormLayout::LabelRole, yearEdit);

        label_3 = new QLabel(CarDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);

        priceEdit = new QLineEdit(CarDialog);
        priceEdit->setObjectName("priceEdit");

        formLayout->setWidget(3, QFormLayout::LabelRole, priceEdit);

        regNumberEdit = new QLineEdit(CarDialog);
        regNumberEdit->setObjectName("regNumberEdit");

        formLayout->setWidget(4, QFormLayout::LabelRole, regNumberEdit);

        label_5 = new QLabel(CarDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::FieldRole, label_5);

        vinEdit = new QLineEdit(CarDialog);
        vinEdit->setObjectName("vinEdit");

        formLayout->setWidget(5, QFormLayout::LabelRole, vinEdit);

        label_6 = new QLabel(CarDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::FieldRole, label_6);

        passengerSeatsEdit = new QLineEdit(CarDialog);
        passengerSeatsEdit->setObjectName("passengerSeatsEdit");

        formLayout->setWidget(6, QFormLayout::LabelRole, passengerSeatsEdit);

        label_7 = new QLabel(CarDialog);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::FieldRole, label_7);

        doorsEdit = new QLineEdit(CarDialog);
        doorsEdit->setObjectName("doorsEdit");

        formLayout->setWidget(7, QFormLayout::LabelRole, doorsEdit);

        label_8 = new QLabel(CarDialog);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::FieldRole, label_8);

        label_4 = new QLabel(CarDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, label_4);


        gridLayout->addLayout(formLayout, 0, 0, 2, 1);

        createButton = new QPushButton(CarDialog);
        createButton->setObjectName("createButton");

        gridLayout->addWidget(createButton, 0, 1, 1, 1);

        exitButton = new QPushButton(CarDialog);
        exitButton->setObjectName("exitButton");

        gridLayout->addWidget(exitButton, 1, 1, 1, 1);


        retranslateUi(CarDialog);

        QMetaObject::connectSlotsByName(CarDialog);
    } // setupUi

    void retranslateUi(QDialog *CarDialog)
    {
        CarDialog->setWindowTitle(QCoreApplication::translate("CarDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CarDialog", "id", nullptr));
        label_2->setText(QCoreApplication::translate("CarDialog", "model", nullptr));
        label_3->setText(QCoreApplication::translate("CarDialog", "year", nullptr));
        label_5->setText(QCoreApplication::translate("CarDialog", "reg number", nullptr));
        label_6->setText(QCoreApplication::translate("CarDialog", "vin number", nullptr));
        label_7->setText(QCoreApplication::translate("CarDialog", "seats", nullptr));
        label_8->setText(QCoreApplication::translate("CarDialog", "doors", nullptr));
        label_4->setText(QCoreApplication::translate("CarDialog", "price", nullptr));
        createButton->setText(QCoreApplication::translate("CarDialog", "create", nullptr));
        exitButton->setText(QCoreApplication::translate("CarDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarDialog: public Ui_CarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDIALOG_H
