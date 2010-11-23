#include <QtCore/QCoreApplication>
#include “reservationManagement.h”





reservationManagement::Reservation()
{
    reservationId=0;
}


reservationManagement::Reservation(int reservationId1)
{
    reservationId=reservationId1;
}


int reservationManagement::getReservationId()
{
    return reservationId;
}


void reservationManagement::setReservationId(int reservationId1 )
{
     reservationId=reservationId1;
}


roomReservation(void)
{
    if(true==Room.free)//den ksero an einai sosto na anafertho etsi se antikeimeno tis klasis
    {
        sqlMechanism.exec("insert into Reservations values(reservationManagement.getReservationId,Room.getId,Costumer.getId");
    }
}
