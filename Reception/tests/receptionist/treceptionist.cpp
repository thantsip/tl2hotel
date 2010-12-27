#include "treceptionist.h"

double tFund = 12.21;

void TReceptionist::testConstructor () {
  Receptionist r (tFund);

  QVERIFY (r.getFund () == tFund);
}

void TReceptionist::testRoomNumber () {
  Receptionist r;

  r.setFund (tFund);

  QVERIFY (r.getFund () == tFund);
}

QTEST_MAIN (TReceptionist)