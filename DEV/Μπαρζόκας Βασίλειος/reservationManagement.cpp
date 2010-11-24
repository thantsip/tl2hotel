#include <QtCore/QCoreApplication>
#include “reservationManagement.h”
#include <QMessageBox>



 /**
       *Default Constructors
*/
ReservationManagement::Reservation()
{
    reservationId=0;
	strcpy(dateFrom,"");
	strcpy(dateTo,"");
}


ReservationManagement::Reservation(int reservationId1,char *dateFrom1,char *dateTo1)
{
    reservationId=reservationId1;
	strcpy(dateFrom,dateFrom1);
	strcpy(dateTo,dateTo1);
}


int ReservationManagement::getReservationId()
{
    return reservationId;
}



char * ReservationManagement::getDateFrom()
{
    return dateFrom;
}



char * ReservationManagement::getDateTo()
{
    return dateTo;
}



void ReservationManagement::setReservationId(int reservationId1 )
{
     reservationId=reservationId1;
}


void ReservationManagement::setDateFrom(char * dateFrom1 )
{
     strcpy(dateFrom,dateFrom1);
}

void ReservationManagement::setDateTo(char * dateTo1 )
{
      strcpy(dateTo,dateTo);
}





void ReservationManagement::roomReservation(void)
{
    if( true==room.isFree() )
    {
        sqlMechanism.execQuery("insert into RoomsReservation(prIdReservation,fkCustomerId,fkRoomId) values('"+ReservationManagement.getReservationId()+"','"+room.getId()+"','"+costumer.getId()+"') ");
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Reservation not made.Room is not free at the moment.");
        msgBox.exec();
    }
}
