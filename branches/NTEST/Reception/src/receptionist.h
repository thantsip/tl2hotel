#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include <QString>
#include <QSqlQuery>
#include <QChar>
#include <QVariant>

#include "user.h"

class Receptionist : public User
{
private:
    User user;
    SQLMechanism sqlMechanism;
    double dailyFund;
public:
    Receptionist();
    Receptionist(double dFund);

    void setFund(double dFund);
    double getFund();

    ~Receptionist();
};

#endif // RECEPTIONIST_H
