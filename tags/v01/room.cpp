#include <iostream>
#include "room.h"


//default constructor
Room::Room()
{
    id=0;
    free=true;
    roomNumber=0;
    roomFloor=0;
    Capacity=0;
}

//constructor with all class atributes
Room::Room(int i, bool fr,int nm,int fl, int cap)
{
    id=i;
    free=fr;
    roomNumber=nm;
    roomFloor=fl;
    Capacity=cap;
}

//-------------------- setter operations ----------------------//
//setId->sets the room id
void Room::setId(int i){
    if (i>=0) //checks if the room id is valid
        id = i;
    else
        cerr << "Invalid room id\nPlease try again. . .\n";
}


//setFree->sets the status of the room.(free or not)
void Room::setFree(bool fr){
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

//getId-> returns the room id
 int Room::getId(){
    return id;
}


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
