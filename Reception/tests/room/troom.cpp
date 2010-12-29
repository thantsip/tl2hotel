#include "troom.h"

int gRoomNumber = 1;
int gRoomFloor = 1;
int gCapacity = 2;

void TRoom::testConstructor () {
  Room r (gRoomNumber, gRoomFloor, gCapacity);

  QVERIFY (r.getRoomNumber () == gRoomNumber  &&
           r.getRoomFloor ()  == gRoomFloor   &&
           r.getCapacity ()   == gCapacity);
}

void TRoom::testRoomNumber () {
  Room r;

  r.setRoomNumber (gRoomNumber);

  QVERIFY (r.getRoomNumber () == gRoomNumber);
}

void TRoom::testRoomFloor () {
  Room r;

  r.setRoomFloor (gRoomFloor);

  QVERIFY (r.getRoomFloor () == gRoomFloor);
}

void TRoom::testCapacity () {
  Room r;

  r.setCapacity (gCapacity);

  QVERIFY (r.getCapacity () == gCapacity);
}

QTEST_MAIN (TRoom)