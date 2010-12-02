#include "roomManagement.h"



/**
  *constructor
 */
RoomManagement::RoomManagement()
{

}

/**
  *destructor
  */
RoomManagement::~RoomManagement()
{
}

/**
  *Creates new entry in Room table
  */
void RoomManagement::newRoom(Room room)
{
    if(RoomManagement::checkInData(room))
        {
            sqlMechanism.execQuery("insert into Rooms values('"+QString("%1").arg(room.getRoomNumber())+"', '"+QString("%1").arg(room.getRoomFloor())+"','"+QString("%1").arg(room.getCapacity())+"','') ");
        }
}


/**
  *Deletes selected entry in Room table
  */
void RoomManagement::deleteRoom(Room room)
{

    sqlMechanism.execQuery("delete from Rooms where RoomNumber = '"+QString("%1").arg(room.getRoomNumber())+"' ");
}

/**
  *Updates an entry in Room table
  */
void RoomManagement::editRoom(Room room)
{
   sqlMechanism.execQuery("update Rooms SET RoomNumber='"+QString(room.getRoomNumber())+"', RoomFloor='"+QString(room.getRoomFloor())+"', Capacity='"+QString(room.getCapacity())+"' ) ");
}
/**
  *checks if data are correct
  */

bool RoomManagement::checkInData(Room room)
{

    int rNum=room.getRoomNumber();
    int rFloor=room.getRoomFloor();
    int cpct=room.getCapacity();
    bool ret=false;

    if(0==rNum)
            {
                QMessageBox::critical(0,"Input Data Error","Check the Room Number");
                ret = false;
            }
    else
    {
            ret = true;
    }

    if(0==rFloor)
    {

                   QMessageBox::critical(0,"Input Data Error","Check the Room Floor");
                    ret = false;

    }
    else {
        ret = true;
    }

    if(0== cpct)
        {
        QMessageBox::critical(0,"Input Data Error","Check the Capacity");
        ret = false;

        }
    else{
        ret= true;

    }
    return ret;
}


