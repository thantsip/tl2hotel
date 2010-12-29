#include <QtTest>

#include "roomManagement.h"

using namespace std;

class TRoomManagement : public QObject {
  Q_OBJECT

  private slots:
    void testFetchAllRooms ();
    void testFetchFreeRooms ();
    void testSearchRoomByCapacity ();
    void testSearchRoomByFloor ();
    void testNewRoom ();
    void testEditRoom ();
    void testDeleteRoom ();
    void testFetchRoom ();
    void testGetStatus ();
    void testCheckInData ();
};