#include "databasemanager.h"


/*connects to database or create a new one if there is no database*/
bool DatabaseManager::dbConnect()
{
    /* check the existence of the DB driver. */
   if (!QSqlDatabase::isDriverAvailable (dbDriverStr)) {
       QMessageBox::critical(0,dbConnectErrorStr,dbDriverNotExistStr);

       /* DB connection failed. */
       return false;
   }
   /* connect to the DB with the following driver. */
    db = QSqlDatabase::addDatabase(dbDriverStr);

   /* use the following database name. */
   db.setDatabaseName(dbFileNameStr);

   /* if the DB cannot open for any reason print a warning. */
    if (!db.open()) {
        QMessageBox::critical(0,dbConnectErrorStr,dbCannotOpenStr);

        /* DB connection failed. */
        return false;
    }

    /* DB connection successed. */
      return db.isOpen();

}
/* disconnects from a database*/
bool DatabaseManager::dbDisconnect()
{
    /* close database */
    db.close();

   return true;
}

/* in case of a new database, creates an new database instance*/
bool DatabaseManager::dbCreateInstance()
{
     /* declare a sql query object. */
    QSqlQuery query;
    bool ret = false;
          /* create DB table customers */
   ret = query.exec("create table customers (aem int primary key, "
                                     "name varchar(20), "
                                     "surname varchar(20))");
  if(!ret)
   {
      QMessageBox::critical(0,dbConnectErrorStr,dbCreationStr);

   }

     /* DB creation succeeded*/
     return ret;
}
bool DatabaseManager::insertCustomer( int aem,QString name, QString surname)
{
    bool ret = false;

    if(db.isOpen()){

      QMessageBox::critical(0,dbConnectErrorStr,dbCannotOpenStr);
      return false;
    }
    /* declare a sql query object. */
    QSqlQuery query;

    /*insert a new row to customers*/
    ret = query.exec(QString("insert into customers values(%1,'%2','%3')")
            .arg(aem).arg(name).arg(surname));

    /*insert completed*/
    return ret;

}

bool DatabaseManager::deleteCustomer(int aem)
{
    bool ret = false;
    if(db.isOpen()){

      QMessageBox::critical(0,dbConnectErrorStr,dbCannotOpenStr);

       return false;
    }

    /* declare a sql query object. */
    QSqlQuery query;

    /*delete a row from table customers*/
    ret = query.exec(QString("delete from customers where aem=%1").arg(aem));

return ret;

}
bool DatabaseManager::removeDB()
{
    /* close database */
    db.close();

   /*remove database file*/
   return QFile::remove(dbFileNameStr);
}

bool DatabaseManager::isDBExist()
{
    return QFile::exists(dbFileNameStr);
}
