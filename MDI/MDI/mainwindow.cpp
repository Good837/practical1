#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->carListWidget->setVisible(false);
    ui->busListWidget->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCarCreated(Car* newCar)
{
    QListWidgetItem* item = new QListWidgetItem(newCar->toString());
    ui->carListWidget->addItem(item);
    QMessageBox::information(this, "Car Created", "A new car has been created.");
}

void MainWindow::onBusCreated(Bus* newBus){
    QListWidgetItem* item = new QListWidgetItem(newBus->toString());
    ui->busListWidget->addItem(item);
    QMessageBox::information(this, "Bus Created", "A new bus has been created.");
}


void MainWindow::on_createCarButton_clicked()
{
    CarDialog *dialog = new CarDialog(this);
    connect(dialog, &CarDialog::carCreated, this, &MainWindow::onCarCreated);
    dialog->exec();
}


void MainWindow::on_createBusButton_clicked()
{
    BusDialog *dialog = new BusDialog(this);
    connect(dialog, &BusDialog::busCreated, this, &MainWindow::onBusCreated);
    dialog->exec();
}


void MainWindow::on_toggleListCar_clicked()
{
    ui->carListWidget->setVisible(!ui->carListWidget->isVisible());
}


void MainWindow::on_toggleListBus_clicked()
{
    ui->busListWidget->setVisible(!ui->busListWidget->isVisible());
}


void MainWindow::on_exit_clicked()
{
    this->close();
}

