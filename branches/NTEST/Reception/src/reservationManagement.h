#ifndef RESERVATIONMANAGEMENT_H
#define RESERVATIONMANAGEMENT_H
#include "sqlMechanism.h"
#include "customer.h"
#include "room.h"
#include "roomManagement.h"
#include <QMessageBox>
#include <QString>
#include <QChar>
#include <QDate>
#include <QStringList>
#include <QSqlQuery>
#include <QVariant>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <vector>



class ReservationManagement
{
private:
    Customer customer;
    Room room;
    SQLMechanism sqlMechanism;
    int reservationId;
    QString dateFrom;
    QString dateTo;
    vector<double> checkOutSum;
public:

       ReservationManagement();

       ReservationManagement(int reservationId1,QString dateFrom1,QString dateTo1);
	   
       int getReservationId(); 
       void setReservationId(int reservationId1);
	   
       QString getDateFrom();
       void setDateFrom(QString dateFrom1);
	   
       QString getDateTo();
       void setDateTo(QString dateTo1);


       void roomReservation(QString DateFrom,QString DateTo,Room room,Customer customer);

       bool checkInData(Room room,Customer customer);
       double roomCheckout(int RoomNumber);

};





#endif // RESERVATIONMANAGEMENT_H
