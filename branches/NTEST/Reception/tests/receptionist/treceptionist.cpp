#include "treceptionist.h"

double gFund = 12.21;

void TReceptionist::testConstructor () {
  Receptionist r (gFund);

  QVERIFY (r.getFund () == gFund);
}

void TReceptionist::testFund () {
  Receptionist r;

  r.setFund (gFund);

  QVERIFY (r.getFund () == gFund);
}

QTEST_MAIN (TReceptionist)