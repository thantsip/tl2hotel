#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>

using namespace std;

class Customer
{
    QString id;
    QString name;
    QString surname;

public:
    //constructors
    Customer();
    Customer(QString i,QString n,QString sn);

    //setters
    void setId(QString i);
    void setName(QString n);
    void setSurname(QString sn);

    //getters
    QString getId();
    QString getName();
    QString getSurname();


};

#endif // CUSTOMER_H
