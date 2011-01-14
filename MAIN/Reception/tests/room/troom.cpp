/** @file troom.cpp
 *  @brief Room Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Room" class.
 */

#include "troom.h"

int gRoomNumber = 1; /**< Room number value (test data). */
int gRoomFloor  = 1; /**< Room floor value (test data). */
int gCapacity   = 2; /**< Room capacity value (test data). */

/** Room Constructor Test Method
 *  @brief This method tests the constructor of the "Room" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoom::testConstructor ()
{
  Room r (gRoomNumber, gRoomFloor, gCapacity);

  QVERIFY (r.getRoomNumber () == gRoomNumber  &&
           r.getRoomFloor ()  == gRoomFloor   &&
           r.getCapacity ()   == gCapacity);
}

/** Room Number Test Method
 *  @brief This method tests the Number set/get methods of the "Room" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoom::testRoomNumber ()
{
  Room r;
  r.setRoomNumber (gRoomNumber);

  QVERIFY (r.getRoomNumber () == gRoomNumber);
}

/** Room Floor Test Method
 *  @brief This method tests the Floor set/get methods of the "Room" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoom::testRoomFloor ()
{
  Room r;
  r.setRoomFloor (gRoomFloor);

  QVERIFY (r.getRoomFloor () == gRoomFloor);
}

/** Room Capacity Test Method
 *  @brief This method tests the Capacity set/get methods of the "Room" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TRoom::testCapacity ()
{
  Room r;
  r.setCapacity (gCapacity);

  QVERIFY (r.getCapacity () == gCapacity);
}

QTEST_MAIN (TRoom)