#include "tcustomerManagement.h"

void TCustomerManagement::testFetchAllCustomers () {
  QString id ("AX1111");
  QString surname ("Joanna");
  QString name ("Johanson");
  int group = 1;

  Customer cust (id, name, surname, group);
  CustomerManagement cm;
  cm.newCustomer (cust);
  vector<Customer> custs = cm.fetchAllCustomers ();
  QVERIFY (custs.size () == 1);
}

void TCustomerManagement::testSearchCustomerByValue () {
  QString id ("AX2222");
  QString surname ("Michael");
  QString name ("Rubinson");
  QString key ("inso");
  int group = 1;

  Customer cust (id, name, surname, group);
  CustomerManagement cm;
  cm.newCustomer (cust);
  vector<Customer> custs = cm.searchCustomerByValue (key);
  QVERIFY (custs.size () == 1);
}

void TCustomerManagement::testNewCustomer () {
  QString id ("AX3333");
  QString surname ("Malkovich");
  QString name ("Peter");
  int group = 1;

  Customer temp, cust (id, name, surname, group);
  CustomerManagement cm;
  cm.newCustomer (cust);
  temp = cm.fetchCustomer (id);
  QVERIFY (cust.getId ()      == temp.getId ()      &&
           cust.getName ()    == temp.getName ()    &&
		   cust.getSurname () == temp.getSurname () &&
		   cust.getGroupId () == temp.getGroupId ());
}

void TCustomerManagement::testEditCustomer () {
  QString id ("AX3333");
  QString surname ("Gates");
  QString name ("John");
  int group = 2;

  Customer temp, cust (id, name, surname, group);
  CustomerManagement cm;
  cm.editCustomer (cust);
  temp = cm.fetchCustomer (id);
  QVERIFY (cust.getId ()      == temp.getId ()      &&
           cust.getName ()    == temp.getName ()    &&
		   cust.getSurname () == temp.getSurname () &&
		   cust.getGroupId () == temp.getGroupId ());
}

void TCustomerManagement::testDeleteCustomer () {
  QString id ("AX3333");
  Customer cust, temp;
  CustomerManagement cm;

  cust.setId (id);
  cm.deleteCustomer (cust);
  temp = cm.fetchCustomer (id);
  QVERIFY (cust.getId () != temp.getId ());
}

void TCustomerManagement::testFetchCustomer () {
  QString id ("AX4444");
  QString surname ("Brand");
  QString name ("Alex");
  int group = 1;

  Customer temp, cust (id, name, surname, group);
  CustomerManagement cm;
  cm.newCustomer (cust);
  temp = cm.fetchCustomer (id);
  QVERIFY (cust.getId ()      == temp.getId ()      &&
           cust.getName ()    == temp.getName ()    &&
		   cust.getSurname () == temp.getSurname () &&
		   cust.getGroupId () == temp.getGroupId ());
}

void TCustomerManagement::testCheckInData () {
  QString empty ("");
  Customer cust;
  CustomerManagement cm;
  cust.setId (empty);
  cust.setName (empty);
  cust.setSurname (empty);
  QVERIFY (cm.checkInData (cust) == false);
}

QTEST_MAIN (TCustomerManagement)