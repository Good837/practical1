#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "car.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_create_object_clicked()
{
    if (ui->lineEdit_id->text().isEmpty() || ui->lineEdit_model->text().isEmpty() || ui->lineEdit_year->text().isEmpty() || ui->lineEdit_price->text().isEmpty()) {
        QMessageBox::warning(this, "Error", "fill all line");
        return;
    }
    int id = ui->lineEdit_id->text().toInt();
    QString model = ui->lineEdit_model->text();
    int year = ui->lineEdit_year->text().toInt();
    double price = ui->lineEdit_price->text().toDouble();
    QString registrationNumber = ui->lineEdit_regNumber->text();
    QString vinNumber = ui->lineEdit_vinNumber->text();
    int passengerSeats = ui->lineEdit_seats->text().toInt();
    int doors = ui->lineEdit_doors->text().toInt();
    carObject = new Car(id, model, year, price, registrationNumber, vinNumber, passengerSeats, doors);
    QMessageBox::information(this, "Object created", "Object created:\n\n" + carObject->toString());
}


void MainWindow::on_pushButton_display_clicked()
{
    if (carObject) {
        QMessageBox::information(this, "Object information", carObject->toString());
    } else {
        QMessageBox::warning(this, "Waring", "No object");
    }
}


void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

