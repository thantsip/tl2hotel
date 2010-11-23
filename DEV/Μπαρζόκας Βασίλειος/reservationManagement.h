#ifndef RESERVATIONMANAGEMENT_H
#define RESERVATIONMANAGEMENT_H
#include “SQLMechanism.h”
#include “Customer.h”
#include “Room.h”

/**
       *Reservation Management Class
	   *Checks if selected room is free and adds reservation to the database,or cancels existing reservation or makes checkout of reservation
	   @param reservationId is an integer identifier number
	   @see roomReservation()
	   @makes the reservation of the selected room
	   
*/
class ReservationManagement:public Customer,public Room,public SQLMechanism
{
private:
    Customer costumer;
    Room room;
    SQLMechanism sqlMechanism;
    int reservationId;
public:
       /**
       *Default Constructors
       */
       reservation();
       roomReservation();
	   roomCancelation();
	   roomCheckout();


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
