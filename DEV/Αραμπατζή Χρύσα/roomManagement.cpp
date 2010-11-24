#include <roomManagement.h>

/**
  *constructor
 */
RoomManagement::RoomManagement()
{

}


/**
  *Creates new entry in Room table
  */
void RoomManagement::newRoom(int id, int RoomNumber, int RoomFloor, int Capacity)
{
    sqlMechanism.exec("insert into Rooms values('"+room.getId()+"','"+room.getRoomNumber()+"', '"+room.getFloor()+"','"+room.getCapacity()+"') ");
}


/**
  *Deletes selected entry in Room table
  */
void RoomManagement::deleteRoom(int id)
{
  sqlMechanism.exec("delete from Rooms where prIdRoom='"+room.getId()+"'");
}

/**
  *Updates an entry in Room table
  */
void RoomManagement::editRoom(int id, int RoomNumber, int RoomFloor, int Capacity)
{
   sqlMechanism.exec("UPDATE Rooms SET prIdRoom='"+room.getId()+"', RoomNumber='"+room.getRoomNumber()+"', RoomFloor='"+room.getFloor+"', Capacity='"room.getCapacity()"' ) ");
}
