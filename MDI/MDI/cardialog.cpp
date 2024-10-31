#include "cardialog.h"
#include "ui_cardialog.h"
#include <QMessageBox>
#include <QFile>

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

void CarDialog::logError(const QString &message) {
    QFile logFile("C:/Users/Redmi/CLionProjects/untitled/MDI/MDI/log.txt");
    if (logFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&logFile);
        out << message << "\n";
    }
    logFile.close();
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
    if (year < 1900 || year > 2100) {
        if (year <= 0 || year > 2024) { // Перевірте, чи рік валідний
            QString errorMsg = QString("Invalid year entered: %1").arg(year);
            QMessageBox::warning(this, "Input Error", "Please enter a valid year.");
            qWarning() << errorMsg; // Виводимо попередження у консоль
            logError(errorMsg); // Логуємо помилку
            return; // Вихід з функції, якщо рік некоректний
        }
    }

}


void CarDialog::on_exitButton_clicked()
{
    this->close();
}

