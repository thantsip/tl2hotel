#include <QtCore/QCoreApplication>
#include “reservationManagement.h”
#include <QMessageBox>




ReservationManagement::Reservation()
{
    reservationId=0;
}


ReservationManagement::Reservation(int reservationId1)
{
    reservationId=reservationId1;
}


int ReservationManagement::getReservationId()
{
    return reservationId;
}


void ReservationManagement::setReservationId(int reservationId1 )
{
     reservationId=reservationId1;
}


void ReservationManagement::roomReservation(void)
{
    if( true==costumer.isFree() )
    {
        sqlMechanism.exec("insert into Reservations values('"+ReservationManagement.getReservationId()+"','"+room.getId()+"','"+costumer.getId()+"' ");
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Reservation not made.Room is not free at the moment.");
        msgBox.exec();
    }
}
