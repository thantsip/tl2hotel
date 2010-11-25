#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InsertCustomerButton_clicked()
{
    CustomerManagement cm;
    cm.newCustomer(ui->CIDEdit->text(), ui->CNameEdit->text(), ui->CSurnameEdit->text());
    ui->CIDEdit->clear();
    ui->CNameEdit->clear();
    ui->CSurnameEdit->clear();
}

void MainWindow::on_InsertRoomButton_clicked()
{
    RoomManagement rm;
    rm.newRoom(ui->RIDEdit->text().toInt(),ui->RNumEdit->text().toInt(),ui->RFlEdit->text().toInt(),ui->RCapEdit->text().toInt(),QString("extra"));
    ui->RIDEdit->clear();
    ui->RNumEdit->clear();
    ui->RFlEdit->clear();
    ui->RCapEdit->clear();
}

void MainWindow::on_InsertReservation_clicked()
{
    ReservationManagement resm;
    resm.roomReservation(ui->DateFrom->text(),ui->DateTo->text(),ui->ResRIDEdit->text().toInt(),ui->ResRIDEdit->text().toInt());

    ui->ResCIDEdit->clear();
    ui->ResRIDEdit->clear();
}
