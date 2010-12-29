#include <QtTest>

#include "customerManagement.h"

class TCustomerManagement : public QObject {
  Q_OBJECT

  private slots:
    void testFetchAllCustomers ();
	void testSearchCustomerByValue ();
    void testNewCustomer ();
    void testEditCustomer ();
    void testDeleteCustomer ();
    void testFetchCustomer ();
    void testCheckInData ();
};