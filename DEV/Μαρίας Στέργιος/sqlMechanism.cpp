#include "sqlMechanism.h"

SQLMechanism::SQLMechanism()
{
}

/**
  * Taking one SQL Query, exec it and returning an bool value.
  * @param query an SQL Query.
  * @return True or False
  */
bool SQLMechanism::execQuery(QString sqlQuery)
{		
	/*
	 *declare a QSqlQuery object
	 */
	QSqlQuery query;
	/*
	 *check if is connected
	 */
	db = SqlConnec->isConnected();
	/*
	 *check if database is open
	 */
	if(db.isOpen())
	{
		query.exec(sqlQuery);
		return true;
	}
	else
	{
	   /*
		*connect to database
		*/
		SqlConnec->dbConnect();
		if(db.isOpen())
		{
				query.exec(sqlQuery);
				return true;
		}
		else
		{
			/*
			 *@return false if database is not open
			 */
			return false;
		}
	}
}
