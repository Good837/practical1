#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->carTableView->setVisible(false);
    ui->BusTableView->setVisible(false);
    dbManager = new SqliteDBManager();
    dbManager->createTables();
    loadCarTable();
    loadBusTable();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dbManager;
}

void MainWindow::onCarCreated(Car* newCar)
{
    dbManager->insertIntoTable(*newCar);
    loadCarTable();
    QMessageBox::information(this, "Car Created", "A new car has been created.");
}

void MainWindow::onBusCreated(Bus* newBus){
    dbManager->insertIntoTable(*newBus);
    loadBusTable();
    QMessageBox::information(this, "Bus Created", "A new bus has been created.");
}

void MainWindow::loadCarTable(){
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("car");
    model->select();
    ui->carTableView->setModel(model);
    ui->carTableView->hideColumn(0);
}

void MainWindow::loadBusTable(){
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("bus");
    model->select();
    ui->BusTableView->setModel(model);
    ui->BusTableView->hideColumn(0);
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
    ui->carTableView->setVisible(!ui->carTableView->isVisible());
}


void MainWindow::on_toggleListBus_clicked()
{
    ui->BusTableView->setVisible(!ui->BusTableView->isVisible());
}


void MainWindow::on_exit_clicked()
{
    this->close();
}

