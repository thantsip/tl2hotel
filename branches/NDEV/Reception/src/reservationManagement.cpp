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
    RoomManagement RM;

    //if room is not free in this period
   if(!RM.getStatus(room.getRoomNumber()))
    {
        msgBox.setText("Reservation not made.\nRoom is not free at the moment.");
        msgBox.exec();
    }
   else
   {
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
 *@param totAmount is a double variable
 *@param resId is a string variable
 *@param check is a bool variable
 *@param query is an sql query
 *@param daysToPay is an integer variable
 *@param roomId is an integer variable
 *@param checkIn is a date variable
 *@param checkOut is a date variable
 *@return the totAmount charge the customer has to pay
 */
double ReservationManagement::roomCheckout(int RoomNumber)
{
            Room room;
            QDateTime checkIn;
            QDateTime checkOut;
            bool check = false;
            int daysToPay = 0;
            int resId = 0;
            double totAmount = 0;
            double price = 0;
            QSqlQuery query;
            query = sqlMechanism.myQuery();



            /*
             *select the capacity of the room that is about to Check Out
             */
            query.prepare("select Capacity from Rooms where RoomNumber = :rNum");
            query.bindValue(":rNum",RoomNumber);
            query.exec();

            if(query.next())
            {
                    room.setCapacity(query.value(0).toInt());
                    check = true;
            }
                    else
                    QMessageBox::information(0,"Search Error","There is no room with that number");
            /*
             *select the price of a room with the current capacity
             */
            if(check)
             {

                query.prepare("select Price from Prices where RoomCapacity = :cap");
                query.bindValue(":cap",room.getCapacity());
                query.exec();

                if(query.next())
                {
                    price = query.value(0).toDouble();
                    check = true;
                }
                else
                {
                    QMessageBox::information(0,"Search Error","There is no price for that capacity");
                    check = false;
                }
            }
            /*
             *select DateFrom, DateTo and reservation id of the current reservation
             */
            if(check)
            {
                query.prepare("select DateFrom,DateTo,prIdReservation, from RoomsReservation where fkRoomId = :rNum");
                query.bindValue(":rNum",RoomNumber);
                query.exec();

                if(query.next())
                {

                    checkIn = query.value(0).toDateTime();
                    checkOut = query.value(1).toDateTime();
                    resId = query.value(2).toInt();
                    check  = true;
                }

                else
                {
                    QMessageBox::information(0,"Search Error","There is no reservation for that room");
                    check = false;
                }
             }
             if(check)
             {
             /*
              *calculate the final price
              */
                daysToPay = checkIn.daysTo(checkOut);
                totAmount = daysToPay * price;
                /*
                 *delete the current reservation from the database
                 */
                query.prepare("delete from RoomsReservation where prIdReservation =:resId");
                query.bindValue(":resId",resId);
                query.exec();

                return totAmount;
             }
             else
                 QMessageBox::information(0,"Error","Operation Failed");

}

