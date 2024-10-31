#ifndef CARDIALOG_H
#define CARDIALOG_H

#include <QDialog>
#include "car.h"

namespace Ui {
class CarDialog;
}

class CarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CarDialog(QWidget *parent = nullptr);
    ~CarDialog();
    void logError(const QString &message);

signals:
    void carCreated(Car *newCar);

private slots:
    void on_createButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::CarDialog *ui;
};

#endif // CARDIALOG_H
