#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include "user.h"

class Receptionist : public User
{
private:
    double dailyFund;
public:
    Receptionist();
    Receptionist(double dFund);

    void setFund(double dFund);
    double getFund();

    ~Receptionist();
};

#endif // RECEPTIONIST_H