/** @file troomManagement.cpp
 *  @brief RoomManagement Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "RoomManagement" class.
 */

#include "troomManagement.h"

/** Fetch All Rooms Test Method
 *  @brief This method tries to test the "fetchAllRooms" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testFetchAllRooms ()
{
  Room roomA (1, 1, 2);
  Room roomB (2, 1, 1);
  RoomManagement rm;

  rm.newRoom (roomA);
  rm.newRoom (roomB);
  vector<Room> rooms = rm.fetchAllRooms ();

  QVERIFY (rooms.size () == 2);
}

/** Fetch Free Rooms Test Method
 *  @brief This method tries to test the "fetchFreeRooms" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testFetchFreeRooms ()
{
  RoomManagement rm;
  vector<Room> rooms = rm.fetchFreeRooms ();

  QVERIFY (rooms.size () == 2);
}

/** Search Room By Capacity Test Method
 *  @brief This method tries to test the "searchRoomByCapacity" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testSearchRoomByCapacity ()
{
  int capacity = 4;
  Room room (3, 2, capacity);
  RoomManagement rm;

  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByCapacity (capacity);

  QVERIFY (rooms.size () == 1);
}

/** Search Room By Floor Test Method
 *  @brief This method tries to test the "searchRoomByFloor" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testSearchRoomByFloor ()
{
  int roomFloor = 1;
  Room room (4, roomFloor, 2);
  RoomManagement rm;

  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByFloor (roomFloor);

  QVERIFY (rooms.size () == 3);
}

/** New Room Test Method
 *  @brief This method tries to test the "newRoom" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testNewRoom ()
{
  int roomNumber = 5;
  Room temp, room (roomNumber, 1, 2);
  RoomManagement rm;

  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
           room.getRoomFloor ()  == temp.getRoomFloor ()  &&
           room.getCapacity ()   == temp.getCapacity ());
}

/** Edit Room Test Method
 *  @brief This method tries to test the "editRoom" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testEditRoom ()
{
  int roomNumber = 5;
  Room temp, room (roomNumber, 2, 4);
  RoomManagement rm;

  rm.editRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
           room.getRoomFloor ()  == temp.getRoomFloor ()  &&
           room.getCapacity ()   == temp.getCapacity ());
}

/** Delete Room Test Method
 *  @brief This method tries to test the "deleteRoom" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testDeleteRoom ()
{
  int roomNumber = 5;
  Room room, temp;
  RoomManagement rm;

  room.setRoomNumber (roomNumber);
  rm.deleteRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () != temp.getRoomNumber ());
}

/** Fetch Room Test Method
 *  @brief This method tries to test the "fetchRoom" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testFetchRoom ()
{
  int roomNumber = 6;
  Room temp, room (roomNumber, 1, 2);
  RoomManagement rm;

  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
           room.getRoomFloor ()  == temp.getRoomFloor ()  &&
           room.getCapacity ()   == temp.getCapacity ());
}

/** Get Room Status Test Method
 *  @brief This method tries to test the "getStatus" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testGetStatus ()
{
  int roomNumber = 7;
  Room room (roomNumber, 1, 2);
  RoomManagement rm;

  rm.newRoom (room);

  QVERIFY (rm.getStatus (roomNumber) == true);
}

/** Room Check In Data Test Method
 *  @brief This method tries to test the "checkInData" method of "RoomManagement" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoomManagement::testCheckInData ()
{
  int error = 0;
  Room room;
  RoomManagement rm;

  room.setRoomNumber (error);
  room.setRoomFloor (error);
  room.setCapacity (error);

  QVERIFY (rm.checkInData (room) == false);
}

QTEST_MAIN (TRoomManagement)