#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

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
       void newRoom(int id, int RoomNumber, int RoomFloor, int Capacity,QString extras);
       void deleteRoom(int id);
       void editRoom(int id, int RoomNumber, int RoomFloor, int Capacity,QString extras);


    /**
      *destructor
      */
       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
