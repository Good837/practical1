#include "cardialog.h"
#include "ui_cardialog.h"
#include <QMessageBox>

CarDialog::CarDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CarDialog)
{
    ui->setupUi(this);
}

CarDialog::~CarDialog()
{
    delete ui;
}

void CarDialog::on_createButton_clicked()
{
    int id = ui->idEdit->text().toInt();
    QString model = ui->modelEdit->text();
    int year = ui->yearEdit->text().toInt();
    double price = ui->priceEdit->text().toDouble();
    QString regNumber = ui->regNumberEdit->text();
    QString vinNumber = ui->vinEdit->text();
    int passengerSeats = ui->passengerSeatsEdit->text().toInt();
    int doors = ui->doorsEdit->text().toInt();
    Car *newCar = new Car(id, model, year, price, regNumber, vinNumber, passengerSeats, doors);
    emit carCreated(newCar);
    this->close();
}


void CarDialog::on_exitButton_clicked()
{
    this->close();
}

