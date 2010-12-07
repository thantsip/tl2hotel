#include "reservationManagement.h"


 /**
   *Default Constructors
   */
ReservationManagement::ReservationManagement()
{
    reservationId=0;
    dateFrom = "";
    dateTo = "";
}



/**
  *Copy,set,get Constructors
  */
ReservationManagement::ReservationManagement(int reservationId1,QString dateFrom1,QString dateTo1)
{
    reservationId = reservationId1;
    dateFrom = dateFrom1;
    dateTo = dateTo1;
}


int ReservationManagement::getReservationId()
{
    return reservationId;
}


QString ReservationManagement::getDateFrom()
{
    return dateFrom;
}


QString ReservationManagement::getDateTo()
{
    return dateTo;
}


void ReservationManagement::setReservationId(int reservationId1 )
{
     reservationId=reservationId1;
}


void ReservationManagement::setDateFrom(QString dateFrom1 )
{
     dateFrom = dateFrom1;
}

void ReservationManagement::setDateTo(QString dateTo1 )
{
     dateTo = dateTo1;
}

/**
  *Room Reservation Function
  *makes the reservation of the selected room
  */

void ReservationManagement::roomReservation(QString DateFrom,QString DateTo,Room room,Customer customer)
{
    /**
      *check if there is any available room
      *if there is insert a reservation
      */
    if(!room.getFree())
    {
        /**
          *message that informs that there is none available room
          */
        QMessageBox msgBox;
        msgBox.setText("Reservation not made.Room is not free at the moment.");
        msgBox.exec();
    }
    /**
      *check if the data given by the user are correct
      */
    if( ReservationManagement::checkInData(room,customer) )
    {
        /**
          *insert the data into table RoomsResevation
          */
        sqlMechanism.execQuery("insert into RoomsReservation (DateFrom,DateTo,fkCustomerId,fkRoomId) values('"+DateFrom+"','"+DateTo+"','"+QString("%1").arg(customer.getId())+"','"+QString("%1").arg(room.getRoomNumber())+"') ");
    }
}
/**
  *a function that checks if the data given by the user are correct
  *if not a message appears that informs for an error
  */
bool ReservationManagement::checkInData(Room room, Customer customer)
{

    int rNum=room.getRoomNumber();
    QString cId=customer.getId();
    QChar c;
    int error = 0;
    bool ret = false;

    /**
      *check that the customerId has no spaces or symbols
      */
    foreach(c,cId)
    {
        if(!c.isLetterOrNumber())
        {
           error++;
        }
    }
    if(error != 0 || rNum == 0)
    {
      QMessageBox::warning(0,"Input Data Error","Invalid customer id\nOr room number");
      ret = false;
    }


    else
        ret = true;

    /**
      *@return true data is correct
      *@return false if data is incorrect
      */
    return ret;

double ReservationManagement::roomCheckout(int reservationId)
{
   QString query = "SELECT DateFrom,DateTo,fkCustomerId,fkRoomId FROM RoomsReservation WHERE prIdReservation = ";

    query.append(QString("%1").arg(id));

    //cout << query.toStdString();

    QSqlQuery q = sqlMechanism.execQuery(query);

    int diff=0;
    QString customerId;
    int roomId=0;

     while ( q.next() ) {
                         //DateFrom
                         QDate d1 = q.value(0).toDate();

                         //DateTo
                         QDate d2 = q.value(1).toDate();

                         //Diff in days
                         diff = d1.daysTo(d2);

                        //customerId
                         QString cId = q.value(2).toString();
                         customerId = cId;

                         //RoomId
                         int rid = q.value(3).toInt();
                         roomId = rid;

                    }
 /**
   *@getCustomer
   *@et the Object
   */    

    query = "SELECT CustomerName ,CustomerSurname ,fkGroupId  FROM Customers WHERE prIdCustomer  = '";

    query.append(customerId);
    query.append("'");

    //cout << "\n";
    //cout << query.toStdString();

    q = sqlMechanism.execQuery(query);

    while ( q.next() ) {
        QString name = q.value(0).toString();
        QString surname = q.value(1).toString();
        int groupId = q.value(2).toInt();
        Customer c(customerId,name,surname,groupId);

    /**
      *associate customer with reservation
      */
        customer = c;
    }


}
