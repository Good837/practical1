#include "busdialog.h"
#include "ui_busdialog.h"
#include <QMessageBox>

BusDialog::BusDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BusDialog)
{
    ui->setupUi(this);
}

BusDialog::~BusDialog()
{
    delete ui;
}

void BusDialog::on_createButton_clicked()
{
    int id = ui->idEdit->text().toInt();
    QString model = ui->modelEdit->text();
    int year = ui->yearEdit->text().toInt();
    double price = ui->priceEdit->text().toDouble();
    QString regNumber = ui->RegNumberEdit->text();
    int passengerSeats = ui->seatsEdit->text().toInt();
    bool seatsDisabled = ui->dissabledAccesCheck->isChecked();

    Bus *newBus = new Bus(id, model, year, price, regNumber, passengerSeats, seatsDisabled);

    emit busCreated(newBus);
    this->close();

}


void BusDialog::on_exitButton_clicked()
{
    this->close();
}

