#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->CheckInDate->setDate(QDate(QDate::currentDate()));
    ui->CheckOutDate->setDate(QDate(QDate::currentDate()));
    ui->CustomerIdReservation->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_Exit_triggered()
{
    MainWindow::close();
}

void MainWindow::on_Clean_triggered()
{
    ui->CheckInDate->setDate(QDate(QDate::currentDate()));
    ui->CheckOutDate->setDate(QDate(QDate::currentDate()));
    ui->CustomerIdReservation->setText("");
    ui->RoomNumberReservation->setText("");
    ui->CustomerIdReservation->setFocus();

    ui->CustomerName->clear();
    ui->CustomerSurname->setText("");
    ui->CustomerID->setText("");
    ui->CustomerGroupId->setText("");
    ui->CustomerIDDelete->setText("");
    ui->FindID->setText("");
    ui->FindGroupID->setText("");
    ui->FindName->setText("");
    ui->FindSurname->setText("");
    ui->CustomerID->setFocus();

    ui->RoomCapacity->setText("");
    ui->RoomFloor->setText("");
    ui->RoomNumber->setText("");
    ui->DeleteRoomNumber->setText("");
    ui->FindRoomCapacity->setText("");
    ui->FindRoomFloor->setText("");
    ui->FindRoomNumber->setText("");
    ui->RoomNumber->setFocus();
}

void MainWindow::on_Tabs_selected(QString )
{
    if(0==ui->Tabs->currentIndex())
    {
        ui->CustomerIdReservation->setFocus();
    }
    if(1==ui->Tabs->currentIndex())
    {
        ui->CustomerID->setFocus();
    }
    if(2==ui->Tabs->currentIndex())
    {
        ui->RoomNumber->setFocus();
    }
}

void MainWindow::on_CleanTab_triggered()
{
    if(0==ui->Tabs->currentIndex())
    {
        ui->CheckInDate->setDate(QDate(QDate::currentDate()));
        ui->CheckOutDate->setDate(QDate(QDate::currentDate()));
        ui->CustomerIdReservation->setText("");
        ui->RoomNumberReservation->setText("");
        ui->CustomerIdReservation->setFocus();
    }
    if(1==ui->Tabs->currentIndex())
    {
        ui->CustomerName->setText("");
        ui->CustomerSurname->setText("");
        ui->CustomerID->setText("");
        ui->CustomerGroupId->setText("");
        ui->CustomerIDDelete->setText("");
        ui->FindID->setText("");
        ui->FindGroupID->setText("");
        ui->FindName->setText("");
        ui->FindSurname->setText("");
        ui->CustomerID->setFocus();
    }
    if(2==ui->Tabs->currentIndex())
    {
        ui->RoomCapacity->setText("");
        ui->RoomFloor->setText("");
        ui->RoomNumber->setText("");
        ui->DeleteRoomNumber->setText("");
        ui->FindRoomCapacity->setText("");
        ui->FindRoomFloor->setText("");
        ui->FindRoomNumber->setText("");
        ui->RoomNumber->setFocus();
    }
}

void MainWindow::on_NewReservation_clicked()
{
    if("" == ui->CustomerIdReservation->text() || "" == ui->RoomNumberReservation->text())
    {
        QMessageBox::about(0,Title,EmptyRes);
        ui->CustomerIdReservation->setFocus();
    }
    else
    {
        if(ui->CheckInDate->date() < QDate::currentDate())
        {
            QMessageBox::about(0,Title,DateBeforeCurrentDate);
            ui->CheckInDate->setDate(QDate(QDate::currentDate()));
        }
        else if(ui->CheckOutDate->date() < ui->CheckInDate->date())
        {
            QMessageBox::about(0,Title,CheckOutBeforeCheckIn);
            ui->CheckOutDate->setDate(ui->CheckInDate->date());
        }
        else
        {
            //ReservationManagement Res;
            //Res.roomReservation(ui->CheckInDate->text(),ui->CheckOutDate->text(),ui->RoomNumberReservation->text().toInt(),ui->CustomerIdReservation->text().toInt());

            ui->CheckInDate->setDate(QDate(QDate::currentDate()));
            ui->CheckOutDate->setDate(QDate(QDate::currentDate()));
            ui->CustomerIdReservation->setText("");
            ui->RoomNumberReservation->setText("");
            ui->CustomerIdReservation->setFocus();
        }
    }
}

void MainWindow::on_InsertCustomer_clicked()
{
    if("" == ui->CustomerID->text() || "" == ui->CustomerName->text() || "" == ui->CustomerSurname->text() || "" == ui->CustomerGroupId->text())
    {
        QMessageBox::about(0,Title,NotAllCustomerData);
        ui->CustomerID->setFocus();
    }
    else
    {
        //CustomerManagement CM;
        //CM.newCustomer(ui->CustomerID->text(), ui->CustomerName->text(), ui->CustomerSurname->text(), ui->CustomerGroupId->text());

        ui->CustomerName->setText("");
        ui->CustomerSurname->setText("");
        ui->CustomerID->setText("");
        ui->CustomerGroupId->setText("");
        ui->CustomerID->setFocus();
    }
}

void MainWindow::on_DeleteCustomer_clicked()
{
    if("" == ui->CustomerIDDelete->text())
    {
        QMessageBox::about(0,Title,NoCustomerID);
        ui->CustomerIDDelete->setFocus();
    }
    else
    {
        //CustomerManagement CM;
        //CM.deleteCustomer(ui->CustomerID->text());

        ui->CustomerIDDelete->setText("");
        ui->CustomerIDDelete->setFocus();
    }
}

void MainWindow::on_FindCustomer_clicked()
{
    if("" == ui->FindID->text())
    {
        QMessageBox::about(0,Title,NoCustomerID);
        ui->FindID->setFocus();
    }
    else
    {
        QMessageBox::about(0,Title,"OK");
        ui->FindName->setFocus();
    }
}

void MainWindow::on_SaveCustomer_clicked()
{
    if("" == ui->FindName->text() || "" == ui->FindSurname->text() || "" == ui->FindGroupID->text())
    {
        QMessageBox::about(0,Title,NotAllCustomerData);
        ui->FindName->setFocus();
    }
    else
    {
        QMessageBox::about(0,Title,"OK");
        ui->FindID->setText("");
        ui->FindGroupID->setText("");
        ui->FindName->setText("");
        ui->FindSurname->setText("");
        ui->FindID->setFocus();
    }
}

void MainWindow::on_InsertRoom_clicked()
{
    if("" == ui->RoomNumber->text() || "" == ui->RoomFloor->text() || "" == ui->RoomCapacity->text())
    {
        QMessageBox::about(0,Title,NotAllRoomData);
        ui->RoomNumber->setFocus();
    }
    else
    {
        //RoomManagement RM;
        //RM.newRoom(ui->RoomNumber->text().toInt(),ui->RoomFloor->text().toInt(),ui->RoomCapacity->text());

        ui->RoomCapacity->setText("");
        ui->RoomFloor->setText("");
        ui->RoomNumber->setText("");
        ui->RoomNumber->setFocus();
    }
}

void MainWindow::on_DeleteRoom_clicked()
{
    if("" == ui->DeleteRoomNumber->text())
    {
        QMessageBox::about(0,Title,NoRoomNumber);
        ui->DeleteRoomNumber->setFocus();
    }
    else
    {
        QMessageBox::about(0,Title,"OK");
        ui->DeleteRoomNumber->setText("");;
        ui->DeleteRoomNumber->setFocus();
    }
}

void MainWindow::on_pushButton_clicked()
{
    if("" == ui->FindRoomNumber->text())
    {
        QMessageBox::about(0,Title,NoRoomNumber);
        ui->FindRoomNumber->setFocus();
    }
    else
    {
        //RoomManagement RM;
        //RM.deleteRoom(ui->RoomNumber->text().toInt());

        ui->FindRoomFloor->setFocus();
    }
}

void MainWindow::on_SaveRoom_clicked()
{
    if("" == ui->FindRoomFloor->text() || "" == ui->FindRoomCapacity->text())
    {
        QMessageBox::about(0,Title,NotAllRoomData);
        ui->FindRoomFloor->setFocus();
    }
    else
    {
        QMessageBox::about(0,Title,"OK");
        ui->FindRoomCapacity->setText("");
        ui->FindRoomFloor->setText("");
        ui->FindRoomNumber->setText("");
        ui->FindRoomNumber->setFocus();
    }
}
