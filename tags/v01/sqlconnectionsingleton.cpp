#include "sqlconnectionsingleton.h"

SqlConnection * SqlConnection::_instance = 0;

SqlConnection* SqlConnection::getInstance() {
    if (_instance == 0) {
        _instance = new SqlConnection;
    }
    return _instance;
}

SqlConnection::~SqlConnection()
{
    dbDisconnect();
}

SqlConnection::SqlConnection() {
    /*
     *check the existence of the database driver.
     */
   if (!QSqlDatabase::isDriverAvailable (dbDriverStr))
    {
       /*
        *Gui message that informs that the driver does not exist
        */
       QMessageBox::critical(0,dbConnectErrorStr,dbDriverNotExistStr);

       /*
        *@return false if database connection failed.
        */
       //return false;
       exit(1);
   }
  /*
   *connect to the database with the following driver.
   */
   db = QSqlDatabase::addDatabase(dbDriverStr);

   bool flag = isDbExist ();

   db.setDatabaseName(dbFileNameStr);

   dbConnect();

   if (!flag)
       dbCreateInstance();
}

/*
 *connect to database
 */
bool SqlConnection::dbConnect()
{
   /*
    *Open database, if the database cannot open for any reason print a warning.
    */
    if (!db.open())
   {
        /*
         *Gui message that informs that the database cannot open
         */
        QMessageBox::critical(0,dbConnectErrorStr,dbCannotOpenStr);

        /*
         *@return false if database connection failed.
         */
        return false;
    }

    /*
     *@return true if database connection successed
     */
      return db.isOpen();

}
/*
 *disconnects from a database
 */
bool SqlConnection::dbDisconnect()
{
    /*
     *close database
     */
    db.close();
    if(!db.isOpen())
    {
        /*
         *@return true if database closed
        */
        return true;
    }
    else
        /*
         *@return false if not closed
         */
        return false;
}

/*
 *check if database file exist
 */
bool SqlConnection::isDbExist()
{
    /*
     *@return true if file exist
     */
    return dbFile.isFileExist(dbFileNameStr);
}

/*
 *remove database file
 */
bool SqlConnection::dbRemove()
{
    /*
     *@return true if file removed
     */
    return dbFile.removeFile(dbFileNameStr);
}

/*
 *create a database instance
 */
bool SqlConnection::dbCreateInstance()
{
    /*
     *declare a QSqlQuery object
     */
    QSqlQuery query;
    /*
     *check if database is open
     */
    if(db.isOpen())
    {
/*
    query.exec("create table Groups (prIdGroup INTEGER PRIMARY KEY , "
                                        "GroupName VARCHAR(25))");
*/

    query.exec("create table Customers (prIdCustomer VARCHAR(25) PRIMARY KEY , "
                                        "CustomerName VARCHAR(25) ,"
                                        "CustomerSurname VARCHAR(25))");

    query.exec("create table Rooms (prIdRoom INTEGER PRIMARY KEY AUTOINCREMENT , "
                                        "RoomNumber INTEGER ,"
                                        "RoomFloor INTEGER ,"
                                        "Capacity INTEGER ,"
                                        "Extras TEXT )");

    query.exec("create table RoomsReservation (prIdReservation INTEGER PRIMARY KEY AUTOINCREMENT , "
                                        "DateFrom TEXT ,"
                                        "DateTo TEXT ,"
                                        "fkCustomerId VARCHAR(25) ,"
                                        "fkRoomId INTEGER ,"
                                        "FOREIGN KEY (fkCustomerId) REFERENCES Customers,"
                                        "FOREIGN KEY (fkRoomId) REFERENCES Rooms)");
        return true;
    }
    else
        /*
         *@return false if database is not open
         */
        return false;
}

bool SqlConnection::isConnected()
{
   return db.isOpen();
}
