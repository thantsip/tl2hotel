#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

#include <QMessageBox>
#include <QString>
#include <QChar>
#include <QSqlQuery>
#include <QVariant>
#include <QDate>
#include <vector>
#include <QSqlResult>
#include <QStringList>

#include "sqlMechanism.h"

#include "room.h"

using namespace std;

class RoomManagement
{
protected:
    Room room;
    SQLMechanism sqlMechanism;

public:

       RoomManagement();
       void newRoom(Room room);
       void deleteRoom(Room room);
       void editRoom(Room room);
       Room fetchRoom(int roomnumber);
       vector<Room> fetchAllRooms();
       vector<Room> fetchFreeRooms();
       vector<Room> fetchReservedRooms();
       vector<Room> searchRoomByCapacity(int capacity);
       vector<Room> searchRoomByFloor(int floor);
       vector<Room> searchByDate(QDate dateFrom, QDate dateTo);


       bool checkInData(Room room);
       bool getStatus(int roomNumber, QDate dateFrom, QDate dateTo);



       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
