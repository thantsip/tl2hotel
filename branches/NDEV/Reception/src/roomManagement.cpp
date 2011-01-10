
#include "roomManagement.h"
/**
  *Room Management class
  *Creates new rooms in the database, edits/ deletes room
  */


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
  *@param room is a room class item
  *@param fetchquery is an sql query
  *@param query is an sql query
  */
void RoomManagement::newRoom(Room room)
{
    QSqlQuery fetchquery;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Rooms WHERE RoomNumber= :rNum");
    fetchquery.bindValue(":rNum",room.getRoomNumber());
    fetchquery.exec();

    while(fetchquery.next())
    {
        QMessageBox::information(0,"Input Data Error","This Number exists");
        return;
    }

    if(RoomManagement::checkInData(room))
        {
        QSqlQuery query;
        query = sqlMechanism.myQuery();
        query.prepare("insert into Rooms (RoomNumber,RoomFloor,Capacity,Extras)"
                                       "values(:rNum, :rFloor, :capacity, :extras)");
       query.bindValue(":rNum",room.getRoomNumber());
       query.bindValue(":rFloor",room.getRoomFloor());
       query.bindValue(":capacity",room.getCapacity());
       query.bindValue(":extras","");
       query.exec();
        }
}


/**
  *Deletes selected entry in Room table
  *@param room is a room class item
  *@param fetchquery is an sql query
  *@param query is an sql query
  */
void RoomManagement::deleteRoom(Room room)
{
        QSqlQuery fetchquery;
        QSqlQuery query;

        fetchquery = sqlMechanism.myQuery();
        fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkRoomId= :rNum");
        fetchquery.bindValue(":rNum",room.getRoomNumber());
        fetchquery.exec();

        fetchquery.next();
        if(fetchquery.isValid())
        {
           QMessageBox::information(0,"Input Data Error","This room can't be Deleted.Reservation in progress");
        }
    else
        {
            query = sqlMechanism.myQuery();
            query.prepare("delete from Rooms where RoomNumber = :rNum");
            query.bindValue(":rNum",room.getRoomNumber());
            query.exec();
        }

}

/**
  *Edits the fields from selected room in Room table
  *@param room is a room class item
  *@param fetchquery is an sql query
  *@param query is an sql query
  */
void RoomManagement::editRoom(Room room)
{
         QSqlQuery query;
         QSqlQuery fetchquery;

         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkRoomId= :rNum");
         fetchquery.bindValue(":rNum",room.getRoomNumber());
         fetchquery.exec();

         fetchquery.next();
         if(fetchquery.isValid())
             {
                   QMessageBox::information(0,"Input Data Error","This room can't be edited.Reservation in progress");
             }
         else
             {
                    query = sqlMechanism.myQuery();
                    query.prepare("update Rooms SET RoomFloor= :rFloor, Capacity= :capacity WHERE RoomNumber=:rNum");
                    query.bindValue(":rNum",room.getRoomNumber());
                    query.bindValue(":rFloor",room.getRoomFloor());
                    query.bindValue(":capacity",room.getCapacity());
                    query.exec();
             }
 }


/**
  *returns the features of the selected room
  *@param room is a room class item
  *@param fetchquery is an sql query
  *@param roomfloor is an integer variable
  *@param roomcapacity is an integer variable
  *@param roomextras is a string variable
  *@return the selected room information
  */
Room RoomManagement::fetchRoom(int roomnumber)
{
   QSqlQuery fetchquery;
   int roomfloor,roomcapacity, rn = 0;
   QString roomextras;
   Room room;
   fetchquery = sqlMechanism.myQuery();
   fetchquery.prepare("SELECT * FROM Rooms WHERE RoomNumber= :rNum");
   fetchquery.bindValue(":rNum",roomnumber);
   fetchquery.exec();

    while (fetchquery.next())
    {
	rn = fetchquery.value(0).toInt();
    roomfloor = fetchquery.value(1).toInt();
    roomcapacity = fetchquery.value(2).toInt();
    roomextras = fetchquery.value(4).toString();
    }
    room.setRoomNumber(rn);
    room.setRoomFloor(roomfloor);
    room.setCapacity(roomcapacity);


    return room;
}


/**
  **fetches all rooms and returns them into a vector
  *@param fetchquery is an sql query
  *@param room is a room class item
  *@param roomVector is a vector containing all rooms
  *@return the vector result
  */

  vector<Room> RoomManagement::fetchAllRooms()
  {
    QSqlQuery fetchquery;
    Room room;
    vector<Room> roomVector;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare(" SELECT * FROM Rooms ");
    fetchquery.exec();

    while(fetchquery.next())
    {
         room.setRoomNumber(fetchquery.value(0).toInt());
         room.setRoomFloor( fetchquery.value(1).toInt());
         room.setCapacity(fetchquery.value(2).toInt());

         roomVector.push_back(room);

    }

    return roomVector;

  }



  /**
    *fetches all free rooms and returns them into a vector
	*@param fetchquery is an sql query
	*@param room is a room class item
	*@param froomVector is a vector containing free all rooms
	*@return the vector result
    */
  vector<Room> RoomManagement::fetchFreeRooms()
  {
      Room room;

      vector<Room> froomVector;

     QSqlQuery fetchquery;

     //!To erotima de doulevei sosta!
     fetchquery = sqlMechanism.myQuery();
     fetchquery.exec("SELECT * FROM Rooms WHERE RoomNumber NOT IN (SELECT DISTINCT fkRoomId FROM RoomsReservation);");

     while(fetchquery.next())
     {
          room.setRoomNumber(fetchquery.value(1).toInt());
          room.setRoomFloor(fetchquery.value(2).toInt());
          room.setCapacity(fetchquery.value(3).toInt());

          froomVector.push_back( room );
     }

     return froomVector;

 }

     /**
       *searches Room by Capacity
	   *@param fetchquery is an sql query
	   *@param room is a room class item
	   *@param roomVector is a vector containing all rooms
	   *@return the vector result
       */
    vector<Room> RoomManagement::searchRoomByCapacity(int capacity)
     {
         QSqlQuery fetchquery;

         Room room;

         vector<Room> roomVector;
         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM Rooms WHERE Capacity= :capacity");
         fetchquery.bindValue(":capacity",capacity);
         fetchquery.exec();

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(0).toInt());
               room.setRoomFloor( fetchquery.value(1).toInt());
               room.setCapacity(fetchquery.value(2).toInt());
               roomVector.push_back( room );

          }

          return roomVector;
       }



     /**
       *searches the room by floor
	   *@param fetchquery is an sql query
	   *@param room is a room class item
	   *@param froomVector is a vector containing free all rooms
	   *@return the vector result
       */
 vector<Room> RoomManagement::searchRoomByFloor(int floor)
     {
         QSqlQuery fetchquery;
         Room room;
         vector<Room> froomVector;
         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM Rooms WHERE RoomFloor= :rFloor");
         fetchquery.bindValue(":rFloor",floor);
         fetchquery.exec();

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(0).toInt());
               room.setRoomFloor( fetchquery.value(1).toInt());
               room.setCapacity(fetchquery.value(2).toInt());

               froomVector.push_back( room );

          }

          return froomVector;

       }

/**
  *checks if room data is correct
  *@param rNum is and integer variable
  *@param rFloor is and integer variable
  *@param cpct is and integer variable
  *@param ret is a boolean
  *@return the statement whether the data is correct or not
  */

bool RoomManagement::checkInData(Room room)
{

    int rNum=room.getRoomNumber();
    int rFloor=room.getRoomFloor();
    int cpct=room.getCapacity();
    bool ret=false;

    if(0==rNum)
            {
                QMessageBox::warning(0,"Input Data Error","Check the Room Number");
                ret = false;
            }
    else
    {
            ret = true;
    }

    if(0==rFloor)
    {

                   QMessageBox::warning(0,"Input Data Error","Check the Room Floor");
                    ret = false;

    }
    else {
        ret = true;
    }

    if(0 == cpct)
        {
        QMessageBox::warning(0,"Input Data Error","Check the Capacity");
        ret = false;

        }
    else{
        ret= true;

    }
    return ret;
}



/**
  *returns whether the room is free or not
  *@param freeQuery is an sql query
  */
bool RoomManagement::getStatus(int roomNumber)
{
   QSqlQuery freeQuery;
   freeQuery.exec("SELECT * FROM RoomsReservation WHERE fkRoomId='"+QString("%1").arg(roomNumber)+"'");
   while(freeQuery.next())
    {
       if(freeQuery.isActive())
        {
            return false;
        }
        else
        {
            return true;
        }

    }
  return true;
}
