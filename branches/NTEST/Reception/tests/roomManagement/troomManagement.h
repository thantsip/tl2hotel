#include <QtTest>

#include "roomManagement.h"

class TRoomManagement : public QObject {
  Q_OBJECT

  private slots:
    void testNewRoom ();
    void testDeleteRoom ();
    void testEditRoom ();
    void testCheckInData ();
};