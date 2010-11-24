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
	char *dateFrom;
	char *dateTo;
public:
       /**
       *Default Constructors
       */
       reservation();
       roomReservation();
	   roomCancelation();
	   roomCheckout();


       /** Copy,set,get Constructors
       *
       * @param reservationId1 is a copy variable
	   * @param dateFrom1 is a copy variable
	   * @param dateTo1 is a copy variable
       */
       reservation(int reservationId1,char *dateFrom1,char *dateTo1);
	   
       int getReservationId(); 
       void setReservationId(int reservationId1);
	   
	   char * getDateFrom();   
       void setDateFrom(char *dateFrom1);
	   
	   char * getDateTo();
       void setDateTo(char *dateTo1);


     


};





#endif // RESERVATIONMANAGEMENT_H
