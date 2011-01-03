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
    showRoomGrid();
    ui->InstantTableView->setColumnCount(4);
    ui->InstantTableView->setHorizontalHeaderLabels(QStringList() << tr("ID")
                                                                  << tr("Name")
                                                                  << tr("SurName")
                                                                  << tr("Group ID"));
    ui->CustomerTable->setColumnCount(4);
    ui->CustomerTable->setHorizontalHeaderLabels(QStringList() << tr("ID")
                                                               << tr("Name")
                                                               << tr("SurName")
                                                               << tr("Group ID"));
    ui->RoomTable->setColumnCount(4);
    ui->RoomTable->setHorizontalHeaderLabels(QStringList() << tr("Room Number")
                                                           << tr("Room Floor")
                                                           << tr("Capacity")
                                                           << tr("Extras"));
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

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    QString floor,num,cap;
    vector<Room> Room;
    Room = RM.fetchAllRooms();
    int RoomSize=Room.size();

    if (event->type() == QEvent::MouseButtonDblClick)
    {
        ui->RoomNumberReservation->setText(obj->objectName());
        return true;
    }
    else if (event->type() == QEvent::MouseButtonRelease)
    {
        ui->PopNum->setText(obj->objectName());
        num.setNum(obj->objectName().toInt());
        for(int i=0;i<RoomSize;i++)
            if(Room[i].getRoomNumber()==num.toInt())
            {
                floor.setNum(Room[i].getRoomFloor());
                cap.setNum(Room[i].getCapacity());
            }
        ui->PopFloor->setText(floor);
        ui->PopCap->setText(cap);
        return true;
    }
    else
    {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}

void MainWindow::CustomerTableView()
{
    int i;
    vector<Customer> Customers;
    Customers = CM.fetchAllCustomers();
    ui->CustomerTable->setRowCount(Customers.size());

    for (i=0;i<(int)Customers.size();i++)
    {
        ui->CustomerTable->setItem(i,0,new QTableWidgetItem(Customers[i].getId()));
        ui->CustomerTable->setItem(i,1,new QTableWidgetItem(Customers[i].getName()));
        ui->CustomerTable->setItem(i,2,new QTableWidgetItem(Customers[i].getSurname()));
        ui->CustomerTable->setItem(i,3,new QTableWidgetItem(QString("%1").arg(Customers[i].getGroupId())));
    }
}

void MainWindow::RoomTableView()
{
   GuiManagment mng ;
   mng.RoomtableView( ui->RoomTable );
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
        CustomerTableView();
    }
    if(2==ui->Tabs->currentIndex())
    {
        ui->RoomNumber->setFocus();
        RoomTableView();
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
   GuiManagment mng ;
   mng.CreateNewReservation(ui->CustomerIdReservation , ui->RoomNumberReservation ,ui->CheckInDate ,ui->CheckOutDate);
   showRoomGrid();
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
        Customer customer;

        customer.setId( ui->CustomerID->text() );
        customer.setName( ui->CustomerName->text());
        customer.setSurname( ui->CustomerSurname->text());
        customer.setGroupId( ui->CustomerGroupId->text().toInt());

        CM.newCustomer(customer);

        ui->CustomerName->setText("");
        ui->CustomerSurname->setText("");
        ui->CustomerID->setText("");
        ui->CustomerGroupId->setText("");
        ui->CustomerID->setFocus();
        CustomerTableView();
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
        Customer customer;

        customer.setId(ui->CustomerIDDelete->text());
        CM.deleteCustomer(customer);


        ui->CustomerIDDelete->setText("");
        ui->CustomerIDDelete->setFocus();
        CustomerTableView();
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
        Customer customer;

        customer = CM.fetchCustomer(ui->FindID->text());
        if(customer.getName()!="")
        {
            ui->FindName->setText(customer.getName());
            ui->FindSurname->setText(customer.getSurname());
            ui->FindGroupID->setText(QString("%1").arg(customer.getGroupId()));
         }
        else
        {
          QMessageBox::about(0,Title,NoCustomerID);
        }
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
        Customer customer;

        customer.setId( ui->FindID->text() );
        customer.setName( ui->FindName->text());
        customer.setSurname( ui->FindSurname->text());
        customer.setGroupId( ui->FindGroupID->text().toInt());

        CM.editCustomer(customer);

        ui->FindID->setText("");
        ui->FindGroupID->setText("");
        ui->FindName->setText("");
        ui->FindSurname->setText("");
        ui->FindID->setFocus();
        CustomerTableView();
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
        Room room;
        room.setCapacity( ui->RoomCapacity->text().toInt() );
        room.setRoomFloor( ui->RoomFloor->text().toInt() );
        room.setRoomNumber( ui->RoomNumber->text().toInt() );

        RM.newRoom(room);

        ui->RoomCapacity->setText("");
        ui->RoomFloor->setText("");
        ui->RoomNumber->setText("");
        ui->RoomNumber->setFocus();
        showRoomGrid();
        RoomTableView();
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
        Room room;
        room.setRoomNumber(ui->DeleteRoomNumber->text().toInt());

        RM.deleteRoom(room);
        ui->DeleteRoomNumber->setText("");
        ui->DeleteRoomNumber->setFocus();
        showRoomGrid();
        RoomTableView();
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
        Room room;

        room = RM.fetchRoom(ui->FindRoomNumber->text().toInt());
        if(room.getCapacity()!=0)
        {
            ui->FindRoomFloor->setText(QString("%1").arg(room.getRoomFloor()));
            ui->FindRoomCapacity->setText(QString("%1").arg(room.getCapacity()));
        }
        else
        {
           QMessageBox::about(0,Title,NoRoomNumber);
        }
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
        Room room;
        room.setRoomNumber( ui->FindRoomNumber->text().toInt() );
        room.setCapacity( ui->FindRoomCapacity->text().toInt() );
        room.setRoomFloor( ui->FindRoomFloor->text().toInt() );

        RM.editRoom(room);

        ui->FindRoomCapacity->setText("");
        ui->FindRoomFloor->setText("");
        ui->FindRoomNumber->setText("");
        ui->FindRoomNumber->setFocus();
        showRoomGrid();
        RoomTableView();
    }
}

void MainWindow::showRoomGrid()
{
    GuiManagment mng ;
    mng.ShowRoomGrid(ui->Grid , this );
}

void MainWindow::on_Tabs2_selected(QString )
{
    if(1==ui->Tabs2->currentIndex())
    {
        ui->BedCapacity->setText("");
        ui->RoomFloorFind->setText("");
        ui->FreeRoomWhatEver->setChecked(true);
        ui->BedCapacity->setFocus();
    }
    if(2==ui->Tabs2->currentIndex())
    {
        ui->InstantEdit->setText("");
        ui->InstantEdit->setFocus();
    }
}

void MainWindow::on_InstantEdit_textChanged(QString )
{
    GuiManagment mng ;
    mng.CustomerTableView(ui->InstantTableView,ui->InstantEdit);
}

void MainWindow::on_InstantTableView_cellClicked(int row, int column)
{
     ui->CustomerIdReservation->setText( ui->InstantTableView->item(row,0)->text());
}

void MainWindow::on_About_triggered()
{
    About ab;

   // ab.show();
    ab.showNormal();
}

void MainWindow::on_CreateMassiveRoomTable_clicked()
{
    if(ui->MassiveRoomTableNum->text().toInt()>0)
    {
        ui->MassiveRoomTable->setColumnCount(4);
        ui->MassiveRoomTable->setHorizontalHeaderLabels(QStringList() << tr("Room Number")
                                                               << tr("Room Floor")
                                                               << tr("Capacity")
                                                               << tr("Extras"));

        ui->MassiveRoomTable->setRowCount(ui->MassiveRoomTableNum->text().toInt());
        ui->CreateMassiveRoom->setEnabled(true);
    }
    else
    {
        QMessageBox::about(0,Title,"Fill the number of rooms");
    }
}

void MainWindow::on_CreateMassiveRoom_clicked()
{
    int i;

    for(i=0;i<(int)ui->MassiveRoomTableNum->text().toInt();i++)
    {
        Room room;
        room.setCapacity(ui->MassiveRoomTable->item(i,2)->text().toInt());
        room.setRoomFloor(ui->MassiveRoomTable->item(i,1)->text().toInt());
        room.setRoomNumber(ui->MassiveRoomTable->item(i,0)->text().toInt());
        RM.newRoom(room);
    }
    showRoomGrid();
    RoomTableView();
    QMessageBox::about(0,Title,"Done!");
    ui->MassiveRoomTable->setColumnCount(0);
    ui->MassiveRoomTable->setRowCount(0);
    ui->CreateMassiveRoom->setEnabled(false);
}

void MainWindow::on_CheckOut_clicked()
{
    ResM.roomCheckout(ui->CheckOutNum->text().toInt());
    ui->CheckOutNum->setText("");
    showRoomGrid();
}
