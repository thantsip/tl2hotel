#include "troom.h"

int tId = 1;
int tRoomNumber = 2;
int tRoomFloor = 3;
int tCapacity = 4;
bool tFree = true;

void TRoom::testConstructor () {
  Room r (tId, tFree, tRoomNumber, tRoomFloor, tCapacity);
  QVERIFY (r.getId()         == tId          &&
           r.getFree()       == tFree        &&
		   r.getRoomNumber() == tRoomNumber  &&
		   r.getRoomFloor()  == tRoomFloor   &&
		   r.getCapacity()   == tCapacity);
}

void TRoom::testId () {
  Room r;
  r.setId (tId);
  QVERIFY (r.getId() == tId);
}

void TRoom::testFree () {
  Room r;
  r.setFree (tFree);
  QVERIFY (r.getFree() == tFree);
}

void TRoom::testRoomNumber () {
  Room r;
  r.setRoomNumber (tRoomNumber);
  QVERIFY (r.getRoomNumber() == tRoomNumber);
}

void TRoom::testRoomFloor () {
  Room r;
  r.setRoomFloor (tRoomFloor);
  QVERIFY (r.getRoomFloor() == tRoomFloor);
}

void TRoom::testCapacity () {
  Room r;
  r.setCapacity (tCapacity);
  QVERIFY (r.getCapacity() == tCapacity);
}

QTEST_MAIN (TRoom)