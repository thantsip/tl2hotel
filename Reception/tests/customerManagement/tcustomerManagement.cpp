#include "tcustomerManagement.h"

QString id ("AX1323");
QString name ("Peter");
QString surname ("Malkovich");
int group = 1;

void TCustomerManagement::testNewCustomer () {
  Customer temp, cust (id, name, surname, group);
  CustomerManagement cm;
  cm.newCustomer (cust);
  temp = cm.fetchCustomer (id);
  QCOMPARE (temp, cust);
}

void TCustomerManagement::testEditCustomer () {
}

void TCustomerManagement::testDeleteCustomer () {
}

void TCustomerManagement::testCheckInData () {
}

QTEST_MAIN (TCustomerManagement)