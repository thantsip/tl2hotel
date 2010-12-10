#include "troomManagement.h"

void TRoomManagement::testFetchAllRooms () {
  Room room (false, 1, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  vector<Room> rooms = rm.fetchAllRooms ();
  QVERIFY (rooms.size () == 1);
}

void TRoomManagement::testFetchFreeRooms () {
  Room room (true, 2, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  vector<Room> rooms = rm.fetchFreeRooms ();
  QVERIFY (rooms.size () == 1);
}

void TRoomManagement::testSearchRoomByCapacity () {
  int capacity = 4;
  Room room (false, 3, 1, capacity);
  RoomManagement rm;
  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByCapacity (capacity);
  QVERIFY (rooms.size () == 1);
}

void TRoomManagement::testSearchRoomByFloor () {
  int roomFloor = 1;
  Room room (false, 4, roomFloor, 2);
  RoomManagement rm;
  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByFloor (roomFloor);
  QVERIFY (rooms.size () >= 1);
}

void TRoomManagement::testNewRoom () {
  int roomNumber = 5;
  Room temp, room (false, roomNumber, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);
  QVERIFY (room.getFree ()       == temp.getFree ()       &&
           room.getRoomNumber () == temp.getRoomNumber () &&
		   room.getRoomFloor ()  == temp.getRoomFloor ()  &&
		   room.getCapacity ()   == temp.getCapacity ());
}

void TRoomManagement::testEditRoom () {
  int roomNumber = 5;
  Room temp, room (true, roomNumber, 2, 4);
  RoomManagement rm;
  rm.editRoom (room);
  temp = rm.fetchRoom (roomNumber);
  QVERIFY (room.getFree ()       == temp.getFree ()       &&
           room.getRoomNumber () == temp.getRoomNumber () &&
		   room.getRoomFloor ()  == temp.getRoomFloor ()  &&
		   room.getCapacity ()   == temp.getCapacity ());
}

void TRoomManagement::testDeleteRoom () {
  int roomNumber = 5;
  Room room, temp;
  RoomManagement rm;
  room.setRoomNumber (roomNumber);
  rm.deleteRoom (room);
  temp = rm.fetchRoom (roomNumber);
  QVERIFY (room.getRoomNumber () != temp.getRoomNumber ());
}

void TRoomManagement::testFetchRoom () {
  int roomNumber = 6;
  Room temp, room (false, roomNumber, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);
  QVERIFY (room.getFree ()       == temp.getFree ()       &&
           room.getRoomNumber () == temp.getRoomNumber () &&
		   room.getRoomFloor ()  == temp.getRoomFloor ()  &&
		   room.getCapacity ()   == temp.getCapacity ());
}

void TRoomManagement::testSetStatus () {
  int roomNumber = 7;
  Room room (false, roomNumber, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  rm.setStatus (roomNumber, true);
  QVERIFY (rm.getStatus (roomNumber) == true);
}

void TRoomManagement::testGetStatus () {
  int roomNumber = 8;
  Room room (true, roomNumber, 1, 2);
  RoomManagement rm;
  rm.newRoom (room);
  QVERIFY (rm.getStatus (roomNumber) == true);
}

void TRoomManagement::testCheckInData () {
  int error = 0;
  Room room;
  RoomManagement rm;
  room.setRoomNumber (error);
  room.setRoomFloor (error);
  room.setCapacity (error);
  QVERIFY (rm.checkInData (room) == false);
}

QTEST_MAIN (TRoomManagement)