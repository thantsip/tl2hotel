#include <QtTest>

#include "customerManagement.h"

class TCustomerManagement : public QObject {
  Q_OBJECT

  private slots:
    void testNewCustomer ();
    void testDeleteCustomer ();
    void testEditCustomer ();
    void testCheckInData ();
};