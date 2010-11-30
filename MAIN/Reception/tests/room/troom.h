#include <QtTest>

#include "room.h"

class TRoom : public QObject {
  Q_OBJECT

  private slots:
    void testConstructor ();
    void testId ();
    void testFree ();
    void testRoomNumber ();
    void testRoomFloor ();
	void testCapacity ();
};