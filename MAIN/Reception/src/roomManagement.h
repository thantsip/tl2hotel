#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

#include <QMessageBox>
#include <QString>
#include <QChar>

#include "sqlMechanism.h"

#include "room.h"

/**
  *Creates new rooms in the databas or edits or deletes and  rooms in the database
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
       bool checkInData(Room room);


    /**
      *destructor
      */
       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
