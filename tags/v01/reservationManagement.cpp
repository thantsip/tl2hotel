#include "reservationManagement.h"


 /** Default Constructors
*/
ReservationManagement::ReservationManagement()
{
    reservationId=0;
    dateFrom = "";
    dateTo = "";
}



/** Copy,set,get Constructors
       
*/
ReservationManagement::ReservationManagement(int reservationId1,QString dateFrom1,QString dateTo1)
{
    reservationId=reservationId1;
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

/** Room Reservation Function
	*makes the reservation of the selected room
        *
*/

void ReservationManagement::roomReservation(QString DateFrom,QString DateTo,int roomId,int CustomerId)
{
    if( room.getFree() )
    {
        sqlMechanism.execQuery("insert into RoomsReservation (DateFrom,DateTo,fkCustomerId,fkRoomId) values('"+DateFrom+"','"+DateTo+"','"+QString("%1").arg(roomId)+"','"+QString("%1").arg(CustomerId)+"') ");
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Reservation not made.Room is not free at the moment.");
        msgBox.exec();
    }
}
