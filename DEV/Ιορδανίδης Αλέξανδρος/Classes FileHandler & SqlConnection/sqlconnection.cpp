#include "sqlconnection.h"

/*
 *connect to database
 */
bool SqlConnection::dbConnect()
{
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
       return false;
   }
   /*
    *connect to the database with the following driver.
    */
    db = QSqlDatabase::addDatabase(dbDriverStr);

   /*
    *set database name.
    */
   db.setDatabaseName(dbFileNameStr);

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

    query.exec("create table Groups (prIdGroup INT PRIMARY KEY , "
                                        "GroupName VARCHAR(25))");


    query.exec("create table Customers (prIdCustomer INT PRIMARY KEY , "
                                        "CustomerName VARCHAR(25) ,"
                                        "CustomerSurname VARCHAR(25) ,"
                                        "fkGroupId INT ,"
                                        "FOREIGN KEY (fkGroupId) REFERENCES Groups)");


    query.exec("create table Rooms (prIdRoom INT PRIMARY KEY , "
                                        "RoomNumber INT ,"
                                        "RoomFloor INT ,"
                                        "Capacity INT ,"
                                        "Extras TEXT )");

    query.exec("create table RoomsReservation (prIdReservation INT PRIMARY KEY , "
                                        "DateFrom TEXT ,"
                                        "DateTo TEXT ,"
                                        "fkCustomerId INT ,"
                                        "fkRoomId INT ,"
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
