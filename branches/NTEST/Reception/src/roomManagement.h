#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

#include <QMessageBox>
#include <QString>
#include <QChar>
#include <QSqlQuery>
#include <QVariant>
#include <vector>
#include <QSqlResult>

#include "sqlMechanism.h"

#include "room.h"



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
	   vector<Room> searchRoomByCapacity(int capacity);
	   vector<Room> searchRoomByFloor(int floor);

       bool checkInData(Room room);
       bool getStatus(int roomNumber);



       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
