#ifndef RESERVATIONMANAGEMENT_H
#define RESERVATIONMANAGEMENT_H
#include “SQLMechanism.h”
#include “Customer.h”
#include “Room.h”


class ReservationManagement:public Customer,public Room,public SQLMechanism
{
private:
    Customer::costumer;
    Room::room;
    SQLMechanism::sqlMechanism;
    int reservationId;
public:
       /**
       *Default Constructors
       */
       reservation();
       roomReservation();


       /** Copy Constructors
       *
       * @param reservationId1 is a copy variable
       */
       reservation(int reservationId1);
       int getReservationId();
       void setReservationId(int reservationId1);


       /**
       * Destructors
       */
       ~reservation(var1);


};





#endif // RESERVATIONMANAGEMENT_H
