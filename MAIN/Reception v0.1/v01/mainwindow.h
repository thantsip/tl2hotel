#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "customerManagement.h"
#include "roomManagement.h"
#include "reservationManagement.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_InsertReservation_clicked();
    void on_InsertRoomButton_clicked();
    void on_InsertCustomerButton_clicked();
};

#endif // MAINWINDOW_H
