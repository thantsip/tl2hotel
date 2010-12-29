#include "troom.h"

int gRoomNumber = 1;
int gRoomFloor = 1;
int gCapacity = 2;

void TRoom::testConstructor () {
  Room r (gRoomNumber, gRoomFloor, gCapacity);

  QVERIFY (r.gegRoomNumber () == gRoomNumber  &&
           r.gegRoomFloor ()  == gRoomFloor   &&
           r.gegCapacity ()   == gCapacity);
}

void TRoom::testRoomNumber () {
  Room r;

  r.setRoomNumber (gRoomNumber);

  QVERIFY (r.gegRoomNumber () == gRoomNumber);
}

void TRoom::testRoomFloor () {
  Room r;

  r.setRoomFloor (gRoomFloor);

  QVERIFY (r.gegRoomFloor () == gRoomFloor);
}

void TRoom::testCapacity () {
  Room r;

  r.setCapacity (gCapacity);

  QVERIFY (r.gegCapacity () == gCapacity);
}

QTEST_MAIN (TRoom)