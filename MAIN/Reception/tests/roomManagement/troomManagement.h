/** @file troomManagement.h
 *  @brief RoomManagement Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "RoomManagement" class.
 */

#if !defined (T_ROOM_MANAGEMENT_H)
#define T_ROOM_MANAGEMENT_H

#include <QtTest>
#include "roomManagement.h"

/** @class TRoomManagement
 *  @brief RoomManagement Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "RoomManagement" class.
 */
class TRoomManagement : public QObject
{
  Q_OBJECT

  private slots:

    /** Fetch All Rooms Test Method
     *  @brief This method tries to test the "fetchAllRooms" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFetchAllRooms ();

    /** Fetch Free Rooms Test Method
     *  @brief This method tries to test the "fetchFreeRooms" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFetchFreeRooms ();

    /** Search Room By Capacity Test Method
     *  @brief This method tries to test the "searchRoomByCapacity" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testSearchRoomByCapacity ();

    /** Search Room By Floor Test Method
     *  @brief This method tries to test the "searchRoomByFloor" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testSearchRoomByFloor ();

    /** New Room Test Method
     *  @brief This method tries to test the "newRoom" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testNewRoom ();

    /** Edit Room Test Method
     *  @brief This method tries to test the "editRoom" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testEditRoom ();

    /** Delete Room Test Method
     *  @brief This method tries to test the "deleteRoom" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testDeleteRoom ();

    /** Fetch Room Test Method
     *  @brief This method tries to test the "fetchRoom" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFetchRoom ();

    /** Get Room Status Test Method
     *  @brief This method tries to test the "getStatus" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testGetStatus ();

    /** Room Check In Data Test Method
     *  @brief This method tries to test the "checkInData" method of "RoomManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testCheckInData ();
};

#endif // T_ROOM_MANAGEMENT_H