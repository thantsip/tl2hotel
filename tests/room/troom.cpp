#include "troom.h"

int tRoomNumber = 1;
int tRoomFloor = 1;
int tCapacity = 2;

void TRoom::testConstructor () {
  Room r (tRoomNumber, tRoomFloor, tCapacity);

  QVERIFY (r.getRoomNumber () == tRoomNumber  &&
           r.getRoomFloor ()  == tRoomFloor   &&
           r.getCapacity ()   == tCapacity);
}

void TRoom::testRoomNumber () {
  Room r;

  r.setRoomNumber (tRoomNumber);

  QVERIFY (r.getRoomNumber () == tRoomNumber);
}

void TRoom::testRoomFloor () {
  Room r;

  r.setRoomFloor (tRoomFloor);

  QVERIFY (r.getRoomFloor () == tRoomFloor);
}

void TRoom::testCapacity () {
  Room r;

  r.setCapacity (tCapacity);

  QVERIFY (r.getCapacity () == tCapacity);
}

QTEST_MAIN (TRoom)