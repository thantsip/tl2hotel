#include "sqlMechanism.h"

#include <QMessageBox>

SQLMechanism::SQLMechanism()
{
    SqlConnec = SqlConnection::getInstance();
}

SQLMechanism::~SQLMechanism()
{
}

QSqlQuery SQLMechanism::execQuery(QString sqlQuery)
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
                query.exec(sqlQuery);
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
                      query.exec(sqlQuery);
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
