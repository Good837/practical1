#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "car.h"

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
    void on_create_object_clicked();

    void on_pushButton_display_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::MainWindow *ui;
    Car* carObject = nullptr;
};
#endif // MAINWINDOW_H
