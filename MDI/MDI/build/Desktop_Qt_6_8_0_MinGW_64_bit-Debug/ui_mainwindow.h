/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_4;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout;
    QPushButton *createCarButton;
    QPushButton *createBusButton;
    QPushButton *toggleListCar;
    QPushButton *toggleListBus;
    QFormLayout *formLayout_2;
    QListWidget *carListWidget;
    QListWidget *busListWidget;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 409);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        createCarButton = new QPushButton(centralwidget);
        createCarButton->setObjectName("createCarButton");

        formLayout->setWidget(0, QFormLayout::LabelRole, createCarButton);

        createBusButton = new QPushButton(centralwidget);
        createBusButton->setObjectName("createBusButton");

        formLayout->setWidget(1, QFormLayout::LabelRole, createBusButton);

        toggleListCar = new QPushButton(centralwidget);
        toggleListCar->setObjectName("toggleListCar");

        formLayout->setWidget(2, QFormLayout::LabelRole, toggleListCar);

        toggleListBus = new QPushButton(centralwidget);
        toggleListBus->setObjectName("toggleListBus");

        formLayout->setWidget(3, QFormLayout::LabelRole, toggleListBus);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        carListWidget = new QListWidget(centralwidget);
        carListWidget->setObjectName("carListWidget");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, carListWidget);

        busListWidget = new QListWidget(centralwidget);
        busListWidget->setObjectName("busListWidget");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, busListWidget);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        formLayout_4->setLayout(0, QFormLayout::LabelRole, formLayout_3);

        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, exit);


        gridLayout->addLayout(formLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 735, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        createCarButton->setText(QCoreApplication::translate("MainWindow", "create car", nullptr));
        createBusButton->setText(QCoreApplication::translate("MainWindow", "create bus", nullptr));
        toggleListCar->setText(QCoreApplication::translate("MainWindow", "list car", nullptr));
        toggleListBus->setText(QCoreApplication::translate("MainWindow", "list bus", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
