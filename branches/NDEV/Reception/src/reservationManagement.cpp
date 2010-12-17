#include "reservationManagement.h"
/**
 *Reservation Management Class
 *Checks if selected room is free and adds reservation to the database,or cancels existing reservation or makes checkout of reservation
 *@param reservationId is an integer identifier number
 */

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
  *@param reservationId1 is an integer copy variable
  *@param dateFrom1 is a string copy variable
  *@param dateTo1 is a string copy variable
  */
ReservationManagement::ReservationManagement(int reservationId1,QString dateFrom1,QString dateTo1)
{
    reservationId = reservationId1;
    dateFrom = dateFrom1;
    dateTo = dateTo1;
}


/**
  *returns the reservation id
  *@param reservationId is an integer argument
  *@return the reservationId result
  */
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
  *makes the reservation of the selected room and inserts it into table RoomsResevation
  *@param query is an sql query
  *@param room is a room class item
  *@param customer is a customer class item
*/  
void ReservationManagement::roomReservation(QString DateFrom,QString DateTo,Room room,Customer customer)
{
    QMessageBox msgBox;



   /* if(!room.getFree())
    {

        msgBox.setText("Reservation not made.Room is not free at the moment.");
        msgBox.exec();

    }*/


    if( ReservationManagement::checkInData(room,customer) )
    {
 
         QSqlQuery query;
         query = sqlMechanism.myQuery();
         query.prepare("insert into RoomsReservation (DateFrom,DateTo,fkCustomerId,fkRoomId)"
                                  "values(:datefrom, :dateto, :custid, :roomid)");

        query.bindValue(":datefrom", DateFrom);
        query.bindValue(":dateto", DateTo);
        query.bindValue(":custid", customer.getId());
        query.bindValue(":roomid", room.getRoomNumber());
        query.exec();



    }

}
/**
  *checks if the data given by the user is correct
  *@param rNum is an integer variable
  *@param cId is a string variable
  *@param c is a character variable
  *@param error is and integer variable
  *@param ret is a boolean
  *@return the statement whether the data is correct or not
  */
bool ReservationManagement::checkInData(Room room, Customer customer)
{

    int rNum=room.getRoomNumber();
    QString cId=customer.getId();
    QChar c;
    int error = 0;
    bool ret = false;


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


    return ret;
}

/**
 *checks out the selected reservation and calculates the charge for the room
 *@param total is a double variable
 *@param customerId is a string variable
 *@param cId is a string variable
 *@param q is an sql query
 *@param diff is an integer variable
 *@param roomId is an integer variable
 *@param capacity is an integer variable
 *@param d1 is a date variable
 *@param d2 is a date variable
 *@return the total charge the customer has to pay
 */

double ReservationManagement::roomCheckout(int reservationId)
{
   double total;
   QString query,customerId,cId;
   QSqlQuery q;
   int diff=0,roomId=0,capacity=0;
   QDate d1,d2;

   query = "SELECT DateFrom,DateTo,fkCustomerId,fkRoomId FROM RoomsReservation WHERE prIdReservation = :resId";
   q = sqlMechanism.myQuery();
   q.prepare(query);
   q.bindValue(":resId",reservationId);
   q.exec();

     while ( q.next() ) {
                         //DateFrom
                         d1 = q.value(0).toDate();

                         //DateTo
                         d2 = q.value(1).toDate();

                         //Diff in days
                         diff = d1.daysTo(d2);

                        //customerId
                         cId = q.value(2).toString();
                         customerId = cId;

                         //RoomId
                         int rid = q.value(3).toInt();
                         roomId = rid;
                    }

     query = "SELECT Capacity FROM Rooms WHERE RoomNumber = :rNum";
     q = sqlMechanism.myQuery();
     q.prepare(query);
     q.bindValue(":rNum",roomId);
     q.exec();

     while ( q.next() )
     {
         capacity =  q.value(0).toInt();
     }


     if(0==diff)
     {
         diff = 1;
     }

     total = roomcharge*diff*capacity;

     QMessageBox msgBox;
     msgBox.setText(QString("%1").arg(total));
     msgBox.exec();

    return (total);
}

