#include "busdialog.h"
#include "ui_busdialog.h"
#include <QMessageBox>
#include <QFile>

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
void BusDialog::logError(const QString &message) {
    QFile logFile("C:/Users/Redmi/CLionProjects/untitled/MDI/MDI/log.txt");
    if (logFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&logFile);
        out << message << "\n";
    }
    logFile.close();
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
        if (year <= 0 || year > 2024) { // Перевірте, чи рік валідний
            QString errorMsg = QString("Invalid year entered: %1").arg(year);
            QMessageBox::warning(this, "Input Error", "Please enter a valid year.");
            qWarning() << errorMsg; // Виводимо попередження у консоль
            logError(errorMsg); // Логуємо помилку
            return; // Вихід з функції, якщо рік некоректний
        }

    Bus *newBus = new Bus(id, model, year, price, regNumber, passengerSeats, seatsDisabled);

    emit busCreated(newBus);
    this->close();
}


void BusDialog::on_exitButton_clicked()
{
    this->close();
}

