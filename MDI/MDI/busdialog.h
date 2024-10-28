#ifndef BUSDIALOG_H
#define BUSDIALOG_H

#include <QDialog>
#include <bus.h>

namespace Ui {
class BusDialog;
}

class BusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BusDialog(QWidget *parent = nullptr);
    ~BusDialog();

signals:
    void busCreated(Bus *newBus);

private slots:
    void on_createButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::BusDialog *ui;
};

#endif // BUSDIALOG_H
