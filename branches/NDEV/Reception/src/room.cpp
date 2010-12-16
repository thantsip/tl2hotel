#include <iostream>
#include "room.h"


/*
  *default constructor
  */
Room::Room()
{
    roomNumber=0;
    roomFloor=0;
    Capacity=0;
}

/*
 *constructor with all class atributes
 */
Room::Room(int nm,int fl, int cap)
{
    roomNumber=nm;
    roomFloor=fl;
    Capacity=cap;
}

//-------------------- setter operations ----------------------//


//setFree->sets the status of the room.(free or not)

void Room::setRoomNumber(int nm)
{
  roomNumber = nm;
}

void Room::setRoomFloor(int fl)
{
  roomFloor = fl;
}

void Room::setCapacity(int cap)
{
    Capacity = cap;
}

//-------------- getter operations -----------------------//



int Room::getRoomNumber()
{
    return roomNumber;
}

int Room::getRoomFloor()
{
    return roomFloor;
}

int Room::getCapacity()
{
    return Capacity;
}
