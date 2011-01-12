#ifndef PRICEMANAGEMENT_H
#define PRICEMANAGEMENT_H

#include <QString>
#include <QVariant>
#include <QMap>

#include "sqlMechanism.h"

class PriceManagement
{
private:
     SQLMechanism sqlMechanism;

public:
    PriceManagement();
    ~PriceManagement();

    void newCharge(QString capacity, QString price);
    void deleteCharge(QString capacity);
    void editCharge(QString capacity, QString price);
    QMap<int, double> fetchAllCharges();
};

#endif // PRICEMANAGEMENT_H
