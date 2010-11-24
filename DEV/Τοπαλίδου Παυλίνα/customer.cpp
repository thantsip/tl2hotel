#include "customer.h"
#include <QString>
#include <iostream>

using namespace std;

//default constructor
Customer::Customer()
{
    id = "";
    name = "";
    surname  = "";
}

//constructor with all class atributes
Customer::Customer(QString i,QString n,QString sn)
{
    id= i;
    name=n;
    surname=sn;
}

//------------ getter operations---------------------//
//getId->return id of the customer
QString Customer::getId()
{
    return id;
}

//getName-> return the name of the customer
QString Customer::getName()
{
    return name;
}

//getSurname -> return the surname of the customer
QString Customer::getSurname()
{
    return surname;
}

//-------------------setter operations-------------------//
//setId-> sets the id of the customer
void Customer::setId(QString i)
{

    if (i!=NULL) //checks if the id is valid
        id = i;
    else
        cerr << "invalid customer id\nPlease try again . . .\n";
}

//setName-> sets the name of the customer
void Customer::setName(QString n)
{
    if (n!=NULL) //checks if the name is valid
        name = n;
    else
        cerr << "invalid customer name\nPlease try again . . .\n";
}

//setSurname-> sets the surname of the customer
void Customer::setSurname(QString sn)
{
    if (sn!=NULL) //checks if the surname is valid
        surname = sn;
    else
        cerr << "invalid customer surname\nPlease try again . . .\n";
}



