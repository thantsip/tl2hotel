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
 *@param roomId is an integer variable
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
			{
				QMessageBox::information(0,"Search Error","There is no room with that number");
				return -1;
			}
           
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
                    return -1;
                }
            }

            /*
             *select DateFrom, DateTo and reservation id of the current reservation
             */
            if(check)
            {
                query.prepare("select DateFrom,DateTo,prIdReservation from RoomsReservation where fkRoomId = :rNum");
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
                    return -1;
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
             {
                 QMessageBox::information(0,"Error","Operation Failed");
                 return -1;
             }

}

/**
 *
 *@param day,month,year passing the day the month and the year to QDate objects
 *@param dateString is the object holding the full date text e.g. "10/2/2010"
 *@param dayString is the object holding only the day e.g."10" (10/2/2010)
 *@param monthString is the object holding only the month e.g."5" (10/5/2010)
 *@param yearString is the object holding only the year e.g."2010" (3/6/2010)
 *@param position_1 and position_2 holding the integer value of position found the "/" character
 *@param dateF and dateT are the objects that hold the parameters given in function call
 *@param query is the object doing the query and get values from database
 *@param dateFdb , dateTdb objects holding dates from the database
 *@return A container with the rooms which are free between two dates given. ( roomContainer )
 */
vector<Room> ReservationManagement::searchRoomByDate(QString dateFrom , QString dateTo )
{
    int day ;
    int month ;
    int year ;

    string dateString ;
    string dayString ;
    string monthString;
    string yearString ;
    string slash = "/" ;
    int position_1 ;
    int position_2 ;

    QDate dateF ;
    QDate dateT ;

    vector<Room> roomContainer ;

    /*
     * Here dateF will hold the whole "date from" , given from functionm call
     */
    dateString =  dateFrom.toStdString()  ;
    position_1 = dateString.find(slash) ;
    position_2 = dateString.find(slash,position_1+1) ;
    dayString = dateString.substr(0,position_1) ;
    monthString = dateString.substr(position_1+1 , position_2-position_1-1 ) ;
    yearString = dateString.substr(position_2+1,dateString.length() ) ;
    day = atoi(dayString.c_str());
    month = atoi(monthString.c_str());
    year = atoi(yearString.c_str());
    dateF.setYMD(year,month,day) ;

    /*
     * Here dateT will hold the whole "date to" , given from function call
     */
    dateString =  dateTo.toStdString()  ;
    position_1 = dateString.find(slash) ;
    position_2 = dateString.find(slash,position_1+1) ;
    dayString = dateString.substr(0,position_1) ;
    monthString = dateString.substr(position_1+1 , position_2-position_1-1 ) ;
    yearString = dateString.substr(position_2+1,dateString.length() ) ;
    day = atoi(dayString.c_str());
    month = atoi(monthString.c_str());
    year = atoi(yearString.c_str());
    dateT.setYMD(year,month,day) ;

    /*
     * Selecting all data from RoomsReservation
     */
    QSqlQuery query;
    query = sqlMechanism.myQuery();
    query.prepare("select DateFrom,DateTo,fkRoomid from RoomsReservation") ;
    query.exec() ;

    QDate dateFdb ;
    QDate dateTdb ;

    /*
     * While we have data downloading from database , we check if the dates given in function call
     * are outside the scope of reserved rooms , meaning that the given values must be smaller than
     * the range of reservation OR the given values must be bigger
     *
     *    |---RESERVED---| x    x     OK Room is free betweeen x-x values
     *    x    x  |---RESERVED---|    OK Room is free betweeen x-x values
     *    x      |x---RESERVED---|    Error Room is not free between x-x values
     *          |x---RESERVED---x|    Error Room is not free between x-x values
     *    |---RESERVED---x|      x    Error Room is not free between x-x values
     *
     */
    while( query.next() )
    {
        dateString =  query.value(0).toString().toStdString()  ;
        position_1 = dateString.find(slash) ;
        position_2 = dateString.find(slash,position_1+1) ;
        dayString = dateString.substr(0,position_1) ;
        monthString = dateString.substr(position_1+1 , position_2-position_1-1 ) ;
        yearString = dateString.substr(position_2+1,dateString.length() ) ;
        day = atoi(dayString.c_str());
        month = atoi(monthString.c_str());
        year = atoi(yearString.c_str());

        dateFdb.setYMD(year,month,day) ;

        dateString =  query.value(1).toString().toStdString()  ;
        position_1 = dateString.find(slash) ;
        position_2 = dateString.find(slash,position_1+1) ;
        dayString = dateString.substr(0,position_1) ;
        monthString = dateString.substr(position_1+1 , position_2-position_1-1 ) ;
        yearString = dateString.substr(position_2+1,dateString.length() ) ;
        day = atoi(dayString.c_str());
        month = atoi(monthString.c_str());
        year = atoi(yearString.c_str());

        dateTdb.setYMD(year,month,day) ;

        if ( ( (dateF < dateFdb) && (dateT < dateTdb) )  || ( (dateF > dateFdb) && (dateT > dateTdb) ) )
        {
            QSqlQuery rmQuery ;
            rmQuery = sqlMechanism.myQuery();
            rmQuery.prepare("select RoomFloor,Capacity from Rooms where RoomNumber= :roomNum") ;
            rmQuery.bindValue(":roomNum",query.value(2).toInt());
            rmQuery.exec() ;
            rmQuery.next() ;

            Room rm ;
            rm.setRoomNumber( query.value(2).toInt() ) ;
            rm.setRoomFloor( rmQuery.value(0).toInt() ) ;
            rm.setCapacity( rmQuery.value(1).toInt() ) ;
            roomContainer.push_back(rm) ;
        }
    }

     return roomContainer ;
}


