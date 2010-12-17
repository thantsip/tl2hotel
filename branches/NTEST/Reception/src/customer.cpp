#include <iostream>
#include "customer.h"

/*
 *default constructor
 */
Customer::Customer()
{
    id = "";
    name = "";
    surname  = "";
    groupId=0;
}

/*
 *constructor with all class atributes
 */
Customer::Customer(QString i,QString n,QString sn,int ig)
{
    id= i;
    name=n;
    surname=sn;
    groupId=ig;
}

/*
 *destructor
 */
Customer::~Customer(){}

/*
 *------------ getter operations---------------------//
 */
/*
 *getId->return id of the customer
 */
QString Customer::getId()
{
    return id;
}

/*
 *getName-> return the name of the customer
 */
QString Customer::getName()
{
    return name;
}

/*
 *getSurname -> return the surname of the customer
 */
QString Customer::getSurname()
{
    return surname;
}

/*
 *getGroupId -> returns the groupId of the customer
 */
int Customer::getGroupId()
{
    return groupId;
}

//-------------------setter operations-------------------//

/*
 *setId-> sets the id of the customer
 */
void Customer::setId(QString i)
{

    if (i!=NULL) //checks if the id is valid
        id = i;
    else
        cerr << "invalid customer id\nPlease try again . . .\n";
}

/*
 *setName-> sets the name of the customer
 */
void Customer::setName(QString n)
{
    if (n!=NULL) //checks if the name is valid
        name = n;
    else
        cerr << "invalid customer name\nPlease try again . . .\n";
}

/*
 *setSurname-> sets the surname of the customer
 */
void Customer::setSurname(QString sn)
{
    if (sn!=NULL) //checks if the surname is valid
        surname = sn;
    else
        cerr << "invalid customer surname\nPlease try again . . .\n";
}

/*
 *setSurname-> sets the groupId of the customer
 */
void Customer::setGroupId(int ig){

    if (ig>=0)
        groupId = ig;
    else
        cerr << "invalid customer groupId\nPlease try again . . .\n";

}



