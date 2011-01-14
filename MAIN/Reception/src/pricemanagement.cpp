#include "pricemanagement.h"

PriceManagement::PriceManagement() {}

PriceManagement::~PriceManagement() {}

void PriceManagement::newCharge(QString capacity, QString price)
{
    QSqlQuery fetchquery;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Prices WHERE RoomCapacity = :capId");
    fetchquery.bindValue(":capId", capacity.toInt());
    fetchquery.exec();

    while(fetchquery.next())
    {
        QMessageBox::information(0,"Input Data Error", "This room capacity exists");
    }

    QSqlQuery query;
    query = sqlMechanism.myQuery();

    query.prepare("INSERT INTO Prices (RoomCapacity, Price) VALUES (:capId, :price)");

    query.bindValue(":capId", capacity.toInt());
    query.bindValue(":price", price.toDouble());
    query.exec();
}

void PriceManagement::deleteCharge(QString capacity)
{
    QSqlQuery query;
    query = sqlMechanism.myQuery();
    query.prepare("delete from Prices where RoomCapacity = :capId");
    query.bindValue(":capId", capacity.toInt());
    query.exec();
}

void PriceManagement::editCharge(QString capacity, QString price)
{
    QSqlQuery query;
    query = sqlMechanism.myQuery();
    query.prepare("UPDATE Prices SET Price = :price WHERE RoomCapacity = :capId");
    query.bindValue(":price", price.toDouble());
    query.bindValue(":capId", capacity.toInt());
    query.exec();
}

QMap<int, double> PriceManagement::fetchAllCharges()
{
    QMap<int, double> charges;
    QSqlQuery fetchquery;

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Prices");
    fetchquery.exec();

    /**
      *while there is a available row set the data into a customer object
      *and then push it on a vector
      */
    while(fetchquery.next())
    {
        charges.insert (fetchquery.value(0).toInt(), fetchquery.value(1).toDouble());
    }

    return charges;
}
