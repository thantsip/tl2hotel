#include "tcustomer.h"

QString tId ("AX1111");
QString tSurname ("Malkovich");
QString tName ("Peter");
int tGroup = 1;

void TCustomer::testConstructor () {
  Customer c (tId, tName, tSurname, tGroup);

  QVERIFY (c.getId ()      == tId      &&
           c.getName ()    == tName    &&
           c.getSurname () == tSurname &&
           c.getGroupId () == tGroup);
}

void TCustomer::testId () {
  Customer c;

  c.setId (tId);

  QVERIFY (c.getId () == tId);
}

void TCustomer::testName () {
  Customer c;

  c.setName (tName);

  QVERIFY (c.getName () == tName);
}

void TCustomer::testSurname () {
  Customer c;

  c.setSurname (tSurname);

  QVERIFY (c.getSurname () == tSurname);
}

void TCustomer::testGroupId () {
  Customer c;

  c.setGroupId (tGroup);

  QVERIFY (c.getGroupId () == tGroup);
}

QTEST_MAIN (TCustomer)