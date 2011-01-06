#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include <QMessageBox>

#include "user.h"

class Receptionist : public User
{
private:
    double dailyFund;
    User user;
public:
    Receptionist();
    Receptionist(double dFund);

    void setFund(double dFund);
    double getFund();

    bool CheckInData(User user);

    ~Receptionist();
};

#endif // RECEPTIONIST_H
