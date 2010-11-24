#ifndef SQLMECHANISM_H
#define SQLMECHANISM_H
#include "SqlConnection.h"

class SQLMechanism
{
    protected:
    /*
     *declare a QSqlDatabase object
     */
    QSqlDatabase db;

    private:
		SqlConnection SqlConnec;
    public:
        SQLMechanism();
        bool execQuery(QString sqlQuery);
};

#endif // SQLMECHANISM_H
