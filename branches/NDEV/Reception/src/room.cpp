#include <iostream>
#include "room.h"


//default constructor
Room::Room()
{
    free=true;
    roomNumber=0;
    roomFloor=0;
    Capacity=0;
}

//constructor with all class atributes
Room::Room(bool fr,int nm,int fl, int cap)
{
    free=fr;
    roomNumber=nm;
    roomFloor=fl;
    Capacity=cap;
}

//-------------------- setter operations ----------------------//


//setFree->sets the status of the room.(free or not)
void Room::setFree(bool fr)
{
        free = fr;
}

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


//getFree-> returns the status of the room (free or not)[true/false]
bool Room::getFree(){
    return free;
}

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
