#include <iostream>
#include "room.h"
/**
 *Room class
 *This class holds the room's information
 */ 

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
 *@param nm is an integer copy variable
 *@param fl is an integer copy variable
 *@param cap is an integer copy variable
 */
Room::Room(int nm,int fl, int cap)
{
    roomNumber=nm;
    roomFloor=fl;
    Capacity=cap;
}

/**sets the number of the room
 *@param nm is an integer variable
 */
void Room::setRoomNumber(int nm)
{
  roomNumber = nm;
}

/**sets the floor of the room
 *@param fl is an integer variable
 */
void Room::setRoomFloor(int fl)
{
  roomFloor = fl;
}

/**sets the capacity of the room
 *@cap is an integer variable
 */
void Room::setCapacity(int cap)
{
    Capacity = cap;
}



/**returns the number of the room
 *@param roomNumber is an integer argument
 *@return the room number result
 */
int Room::getRoomNumber()
{
    return roomNumber;
}

/**returns the floor of the room
 *@param roomFloor is an integer argument
 *@return the room floor result
 */
int Room::getRoomFloor()
{
    return roomFloor;
}

/**returns the capacity of the room
 *@param Capacity is an integer argument
 *@return the capacity result
 */
int Room::getCapacity()
{
    return Capacity;
}
