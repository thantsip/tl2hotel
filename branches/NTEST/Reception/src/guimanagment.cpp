#include "guimanagment.h"

GuiManagment::GuiManagment()
{
}


void GuiManagment::CustomerTableView(QTableWidget *customerTable ,  QLineEdit *edt )
{
    int i;

    if( edt->text()!="")
    {
        vector<Customer> searchCustomers;

        searchCustomers = CM.searchCustomerByValue( edt->text());

        customerTable->setRowCount(searchCustomers.size());
        customerTable->setColumnCount(4);
        customerTable->setHorizontalHeaderLabels(QStringList() << QObject::tr("ID")
                                                                      << QObject::tr("Name")
                                                                      << QObject::tr("SurName")
                                                                      << QObject::tr("Group ID"));

        for (i=0;i<(int)searchCustomers.size();i++)
        {
            customerTable->setItem(i,0,new QTableWidgetItem(searchCustomers[i].getId()));
            customerTable->setItem(i,1,new QTableWidgetItem(searchCustomers[i].getName()));
            customerTable->setItem(i,2,new QTableWidgetItem(searchCustomers[i].getSurname()));
            customerTable->setItem(i,3,new QTableWidgetItem(QString("%1").arg(searchCustomers[i].getGroupId())));
        }
    }
    else
    {
        customerTable->setRowCount(0);
        customerTable->setColumnCount(4);
        customerTable->setHorizontalHeaderLabels(QStringList() << QObject::tr("ID")
                                                                      << QObject::tr("Name")
                                                                      << QObject::tr("SurName")
                                                                      << QObject::tr("Group ID"));
    }
}

void GuiManagment::RoomtableView( QTableWidget *RoomTable )
{
    int i;
    vector<Room> Room;
    Room = RM.fetchAllRooms();
    RoomTable->setRowCount(Room.size());

    for (i=0;i<(int)Room.size();i++)
    {
        RoomTable->setItem(i,0,new QTableWidgetItem( QString("%1").arg(Room[i].getRoomNumber()) ));
        RoomTable->setItem(i,1,new QTableWidgetItem( QString("%1").arg(Room[i].getRoomFloor()) ));
        RoomTable->setItem(i,2,new QTableWidgetItem( QString("%1").arg(Room[i].getCapacity()) ));
        //RoomTable->setItem(i,3,new QTableWidgetItem( QString("%1").arg((Room[i].getExtras() ) )));
    }

}

void GuiManagment::ShowRoomGrid( QGridLayout *Grid , QMainWindow *wnd  )
{
    vector<Room> Room;
    QString RoomNumTitle,RoomFloor;

    Room = RM.fetchAllRooms();

    int RoomSize=Room.size();
    int i=0,j=0;
    int num=0,RoomNum=0;

    while(num!=RoomSize)
    {
        QLabel * RoomLabel = new QLabel(wnd);
        RoomLabel->setGeometry(0,0,310,180);
        RoomLabel->setFrameShape(QFrame::Box);
        RoomLabel->setFrameShadow(QFrame::Sunken);
        RoomLabel->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        RoomLabel->setFont(QFont( "Comic Sans MS", 8, QFont::Bold ));
        //-----------------------------------------------------------
        RoomNumTitle.setNum(Room[RoomNum].getRoomNumber());
        RoomFloor.setNum(Room[RoomNum].getRoomFloor());
        RoomLabel->setObjectName(RoomNumTitle);
        RoomLabel->setText("Number: "+RoomNumTitle+"\n Floor: "+RoomFloor);
        //-----------------------------------------------------------
        if(RM.getStatus(Room[RoomNum].getRoomNumber())==true)
            RoomLabel->setStyleSheet("color: white; background-color:green;");
        else
            RoomLabel->setStyleSheet("color: white; background-color:red;");
        //-----------------------------------------------------------
        RoomLabel->installEventFilter(wnd);
        Grid->addWidget(RoomLabel,i,j);
        num++;
        if(j<7)
        {
            j++;
        }
        else
        {
            j=0;
            i++;
        }
        RoomNum++;
    }
}

void GuiManagment::CreateNewReservation( QLineEdit *CustomerIdReservation , QLineEdit *RoomNumberReservation , QDateEdit *CheckInDate , QDateEdit *CheckOutDate )
{
    if("" == CustomerIdReservation->text() || "" == RoomNumberReservation->text())
    {
        QMessageBox::about(0,Title,EmptyRes);
        CustomerIdReservation->setFocus();
    }
    else
    {
        if(CheckInDate->date() < QDate::currentDate())
        {
            QMessageBox::about(0,Title,DateBeforeCurrentDate);
            CheckInDate->setDate(QDate(QDate::currentDate()));
        }
        else if(CheckOutDate->date() < CheckInDate->date())
        {
            QMessageBox::about(0,Title,CheckOutBeforeCheckIn);
            CheckOutDate->setDate(CheckInDate->date());
        }
        else
        {
            Room room;
            Customer customer;

            customer.setId(CustomerIdReservation->text());
            room.setRoomNumber(RoomNumberReservation->text().toInt());

            ResM.roomReservation(CheckInDate->text(),CheckOutDate->text(),room,customer);

            CheckInDate->setDate(QDate(QDate::currentDate()));
            CheckOutDate->setDate(QDate(QDate::currentDate()));
            CustomerIdReservation->setText("");
            RoomNumberReservation->setText("");
            CustomerIdReservation->setFocus();
        }
    }
}































