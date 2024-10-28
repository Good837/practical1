/********************************************************************************
** Form generated from reading UI file 'busdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSDIALOG_H
#define UI_BUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BusDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLineEdit *idEdit;
    QLabel *label;
    QLineEdit *modelEdit;
    QLabel *label_2;
    QLineEdit *priceEdit;
    QLabel *label_3;
    QLineEdit *RegNumberEdit;
    QLabel *label_4;
    QLineEdit *yearEdit;
    QLabel *label_5;
    QLineEdit *seatsEdit;
    QLabel *label_6;
    QCheckBox *dissabledAccesCheck;
    QPushButton *createButton;
    QPushButton *exitButton;

    void setupUi(QDialog *BusDialog)
    {
        if (BusDialog->objectName().isEmpty())
            BusDialog->setObjectName("BusDialog");
        BusDialog->resize(400, 300);
        gridLayout = new QGridLayout(BusDialog);
        gridLayout->setObjectName("gridLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        idEdit = new QLineEdit(BusDialog);
        idEdit->setObjectName("idEdit");

        formLayout->setWidget(0, QFormLayout::LabelRole, idEdit);

        label = new QLabel(BusDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        modelEdit = new QLineEdit(BusDialog);
        modelEdit->setObjectName("modelEdit");

        formLayout->setWidget(1, QFormLayout::LabelRole, modelEdit);

        label_2 = new QLabel(BusDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        priceEdit = new QLineEdit(BusDialog);
        priceEdit->setObjectName("priceEdit");

        formLayout->setWidget(2, QFormLayout::LabelRole, priceEdit);

        label_3 = new QLabel(BusDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);

        RegNumberEdit = new QLineEdit(BusDialog);
        RegNumberEdit->setObjectName("RegNumberEdit");

        formLayout->setWidget(3, QFormLayout::LabelRole, RegNumberEdit);

        label_4 = new QLabel(BusDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, label_4);

        yearEdit = new QLineEdit(BusDialog);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(4, QFormLayout::LabelRole, yearEdit);

        label_5 = new QLabel(BusDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::FieldRole, label_5);

        seatsEdit = new QLineEdit(BusDialog);
        seatsEdit->setObjectName("seatsEdit");

        formLayout->setWidget(5, QFormLayout::LabelRole, seatsEdit);

        label_6 = new QLabel(BusDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::FieldRole, label_6);

        dissabledAccesCheck = new QCheckBox(BusDialog);
        dissabledAccesCheck->setObjectName("dissabledAccesCheck");

        formLayout->setWidget(6, QFormLayout::LabelRole, dissabledAccesCheck);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        createButton = new QPushButton(BusDialog);
        createButton->setObjectName("createButton");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, createButton);

        exitButton = new QPushButton(BusDialog);
        exitButton->setObjectName("exitButton");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, exitButton);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);


        retranslateUi(BusDialog);

        QMetaObject::connectSlotsByName(BusDialog);
    } // setupUi

    void retranslateUi(QDialog *BusDialog)
    {
        BusDialog->setWindowTitle(QCoreApplication::translate("BusDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BusDialog", "id", nullptr));
        label_2->setText(QCoreApplication::translate("BusDialog", "model", nullptr));
        label_3->setText(QCoreApplication::translate("BusDialog", "price", nullptr));
        label_4->setText(QCoreApplication::translate("BusDialog", "reg number", nullptr));
        label_5->setText(QCoreApplication::translate("BusDialog", "year", nullptr));
        label_6->setText(QCoreApplication::translate("BusDialog", "seats", nullptr));
        dissabledAccesCheck->setText(QCoreApplication::translate("BusDialog", "dissabled seats", nullptr));
        createButton->setText(QCoreApplication::translate("BusDialog", "create", nullptr));
        exitButton->setText(QCoreApplication::translate("BusDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusDialog: public Ui_BusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSDIALOG_H
