#include "troom.h"

int tRoomNumber = 1;
int tRoomFloor = 1;
int tCapacity = 2;
bool tFree = true;

void TRoom::testConstructor () {
  Room r (tFree, tRoomNumber, tRoomFloor, tCapacity);
  QVERIFY (r.getFree ()       == tFree        &&
           r.getRoomNumber () == tRoomNumber  &&
           r.getRoomFloor ()  == tRoomFloor   &&
           r.getCapacity ()   == tCapacity);
}

void TRoom::testFree () {
  Room r;
  r.setFree (tFree);
  QVERIFY (r.getFree () == tFree);
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