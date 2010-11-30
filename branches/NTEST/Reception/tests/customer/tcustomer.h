#include <QtTest>

#include "customer.h"

class TCustomer : public QObject {
  Q_OBJECT

  private slots:
    void testConstructor ();
    void testId ();
    void testName ();
    void testSurname ();
    void testGroupId ();
};