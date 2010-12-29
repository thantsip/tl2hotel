#include "tcustomer.h"

QString gId ("AX1111");
QString gSurname ("Malkovich");
QString gName ("Peter");
int gGroup = 1;

void TCustomer::testConstructor () {
  Customer c (gId, gName, gSurname, gGroup);

  QVERIFY (c.getId ()      == gId      &&
           c.getName ()    == gName    &&
           c.getSurname () == gSurname &&
           c.getGroupId () == gGroup);
}

void TCustomer::testId () {
  Customer c;

  c.setId (gId);

  QVERIFY (c.getId () == gId);
}

void TCustomer::testName () {
  Customer c;

  c.setName (gName);

  QVERIFY (c.getName () == gName);
}

void TCustomer::testSurname () {
  Customer c;

  c.setSurname (gSurname);

  QVERIFY (c.getSurname () == gSurname);
}

void TCustomer::testGroupId () {
  Customer c;

  c.setGroupId (gGroup);

  QVERIFY (c.getGroupId () == gGroup);
}

QTEST_MAIN (TCustomer)