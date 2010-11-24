#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H
#include “Room.h”
#include “SQLMechanism.h”


/**
  *Creates new rooms in the databas or edits or deletes and  rooms in the database
  */

class RoomManagement:public Room,public SQLMechanism
{
private:
    Room room;
    SQLMechanism sqlMechanism;

public:

        RoomManagement();
       void newRoom(int id, int RoomNumber, int RoomFloor, int Capacity);
       void deleteRoom();
       void editRoom(int id, int RoomNumber, int RoomFloor, int Capacity);


    /**
      *destructor
      */
       ~RoomManagement();
};
#endif // ROOMMANAGEMENT_H
