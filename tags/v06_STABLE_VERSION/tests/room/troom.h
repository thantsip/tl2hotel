/** @file troom.h
 *  @brief Room Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Room" class.
 */

#if !defined (T_ROOM_H)
#define T_ROOM_H

#include <QtTest>
#include "room.h"

/** @class TRoom
 *  @brief Room Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "Room" class.
 */
class TRoom : public QObject
{
  Q_OBJECT

  private slots:

    /** Room Constructor Test Method
     *  @brief This method tests the constructor of the "Room" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testConstructor ();

    /** Room Number Test Method
     *  @brief This method tests the Number set/get methods of the "Room" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testRoomNumber ();

    /** Room Floor Test Method
     *  @brief This method tests the Floor set/get methods of the "Room" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testRoomFloor ();

    /** Room Capacity Test Method
     *  @brief This method tests the Capacity set/get methods of the "Room" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testCapacity ();
};

#endif // T_ROOM_H