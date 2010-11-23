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


roomReservation(void)
{
    if(true==Room.free)//den ksero an einai sosto na anafertho etsi se antikeimeno tis klasis
    {
        sqlMechanism.exec("insert into Reservations values('"+ReservationManagement.getReservationId+"','"+Room.getId+"','"+Costumer.getId+"' ");
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.exec();
    }
}
