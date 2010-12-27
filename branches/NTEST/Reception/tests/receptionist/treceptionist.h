#include <QtTest>

#include "receptionist.h"

class TReceptionist : public QObject {
  Q_OBJECT

  private slots:
    void testConstructor ();
    void testFund ();
};