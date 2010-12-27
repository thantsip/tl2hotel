#include <QtTest>

#include "user.h"

class TUser : public QObject {
  Q_OBJECT

  private slots:
    void testConstructor ();
    void testName ();
    void testSurname ();
    void testUsername ();
    void testPassword ();
    void testRole ();
};