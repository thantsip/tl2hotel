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

/**
  *Creates new rooms in the database, edits/ deletes room
  */

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



       bool checkInData(Room room);


    /**
      *destructor
      */
       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
