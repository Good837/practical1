#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QListWidget>
#include "cardialog.h"
#include "busdialog.h"
#include "bus.h"
#include "car.h"
#include <QVector>
#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createCarButton_clicked();

    void on_createBusButton_clicked();

    void on_toggleListCar_clicked();

    void on_toggleListBus_clicked();

    void on_exit_clicked();

    void onCarCreated(Car* newCar);
    void onBusCreated(Bus* newBus);

private:
    Ui::MainWindow *ui;
    QVector<Car*> carList;
    QVector<Bus*> busList;
};
#endif // MAINWINDOW_H
