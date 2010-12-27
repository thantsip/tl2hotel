#include "troomManagement.h"

void TRoomManagement::testFetchAllRooms () {
  Room roomA (1, 1, 2);
  Room roomB (2, 1, 1);

  RoomManagement rm;

  rm.newRoom (roomA);
  rm.newRoom (roomB);

  vector<Room> rooms = rm.fetchAllRooms ();

  QVERIFY (rooms.size () == 2);
}

void TRoomManagement::testFetchFreeRooms () {
  RoomManagement rm;

  vector<Room> rooms = rm.fetchFreeRooms ();

  QVERIFY (rooms.size () == 2);
}

void TRoomManagement::testSearchRoomByCapacity () {
  int capacity = 4;

  Room room (3, 2, capacity);
  RoomManagement rm;

  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByCapacity (capacity);

  QVERIFY (rooms.size () == 1);
}

void TRoomManagement::testSearchRoomByFloor () {
  int roomFloor = 1;

  Room room (4, roomFloor, 2);
  RoomManagement rm;

  rm.newRoom (room);
  vector<Room> rooms = rm.searchRoomByFloor (roomFloor);

  QVERIFY (rooms.size () == 3);
}

void TRoomManagement::testNewRoom () {
  int roomNumber = 5;

  Room temp, room (roomNumber, 1, 2);
  RoomManagement rm;

  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
		   room.getRoomFloor ()  == temp.getRoomFloor ()  &&
		   room.getCapacity ()   == temp.getCapacity ());
}

void TRoomManagement::testEditRoom () {
  int roomNumber = 5;

  Room temp, room (roomNumber, 2, 4);
  RoomManagement rm;

  rm.editRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
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

  Room temp, room (roomNumber, 1, 2);
  RoomManagement rm;

  rm.newRoom (room);
  temp = rm.fetchRoom (roomNumber);

  QVERIFY (room.getRoomNumber () == temp.getRoomNumber () &&
		   room.getRoomFloor ()  == temp.getRoomFloor ()  &&
		   room.getCapacity ()   == temp.getCapacity ());
}

void TRoomManagement::testGetStatus () {
  int roomNumber = 7;

  Room room (roomNumber, 1, 2);
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