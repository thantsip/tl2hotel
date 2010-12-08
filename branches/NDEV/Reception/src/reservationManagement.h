#ifndef RESERVATIONMANAGEMENT_H
#define RESERVATIONMANAGEMENT_H
#include "sqlMechanism.h"
#include "customer.h"
#include "room.h"
#include <QMessageBox>
#include <QString>
#include <QChar>
#include <QSqlQuery>
#include <QVariant>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include <QtSql>

#define roomcharge 55.5

/**
 *Reservation Management Class
 *Checks if selected room is free and adds reservation to the database,or cancels existing reservation or makes checkout of reservation
 *@param reservationId is an integer identifier number
 *@see roomReservation()
 *@makes the reservation of the selected room
 */
class ReservationManagement
{
private:
    Customer customer;
    Room room;
    SQLMechanism sqlMechanism;
    int reservationId;
    QString dateFrom;
    QString dateTo;
public:
       /**
        *Default Constructors
        */
       ReservationManagement();

       /** Copy,set,get Constructors
        *
        *@param reservationId1 is a copy variable
        *@param dateFrom1 is a copy variable
        *@param dateTo1 is a copy variable
        */
       ReservationManagement(int reservationId1,QString dateFrom1,QString dateTo1);
	   
       int getReservationId(); 
       void setReservationId(int reservationId1);
	   
       QString getDateFrom();
       void setDateFrom(QString dateFrom1);
	   
       QString getDateTo();
       void setDateTo(QString dateTo1);

       /**
         *function that adds a new reservation to RoomsReservation table
         */
       void roomReservation(QString DateFrom,QString DateTo,Room room,Customer customer);
       /**
         *function that checks the data given by the user
         */
       bool checkInData(Room room,Customer customer);
       //roomCancelation();
       double roomCheckout(int reservationId);

};





#endif // RESERVATIONMANAGEMENT_H
