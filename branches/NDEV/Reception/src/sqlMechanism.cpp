#include "sqlMechanism.h"

/**Sql Mechanism class
 *This class is connected to the database and manages/executes the queries
 */
#include <QMessageBox>

/**
 *constructor
 */
SQLMechanism::SQLMechanism()
{
    SqlConnec = SqlConnection::getInstance();
}

/**
 *destructor
 */
SQLMechanism::~SQLMechanism()
{
}


QSqlQuery SQLMechanism::myQuery()
{
        /*
         *declare a QSqlQuery object
         */
        QSqlQuery query;


        /*
         *check if database is open
         */
        if(SqlConnec->isConnected())
        {
             //   query.prepare(sqlQuery);
                return query;
        }
        else
        {
                /*
                *connect to database
                */
                SqlConnec->dbConnect();
                if(SqlConnec->isConnected())
                {
                     // query.prepare(sqlQuery);
                      return query;
                }
                else
                {
                        /*
                         *@return false if database is not open
                         */
                        return NULL;
                }
        }
}
