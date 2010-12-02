#include "tcustomer.h"

QString id ("AX1323");
QString name ("Peter");
QString surname ("Malkovich");
int group = 1;

void TCustomer::testConstructor () {
  Customer c (id, name, surname, group);
  QVERIFY (c.getId()      == id      &&
           c.getName()    == name    &&
           c.getSurname() == surname &&
           c.getGroupId() == group);
}

void TCustomer::testId () {
  Customer c;
  c.setId (id);
  QVERIFY (c.getId() == id);
}

void TCustomer::testName () {
  Customer c;
  c.setName (name);
  QVERIFY (c.getName() == name);
}

void TCustomer::testSurname () {
  Customer c;
  c.setSurname (surname);
  QVERIFY (c.getSurname() == surname);
}

void TCustomer::testGroupId () {
  Customer c;
  c.setGroupId (group);
  QVERIFY (c.getGroupId() == group);
}

QTEST_MAIN (TCustomer)