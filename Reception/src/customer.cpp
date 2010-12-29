#include <iostream>
#include "customer.h"
/*
 *Customer class
 *This class holds the customer's information
 */ 


/*
 *default constructors
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
 &@param i is a string copy variable
 &@param n is a string copy variable
 &@param sn is a string copy variable
 &@param ig is an integer copy variable
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
 *returns id of the customer
 *@param id is a string argument
 *@return the id result
 */
QString Customer::getId()
{
    return id;
}

/*
 *returns the name of the customer
 *@param name is a string argument
 *@return the name result
 */
QString Customer::getName()
{
    return name;
}

/*
 *return the surname of the customer
 *@param suname is a string argument
 *@return the surname result
 */
QString Customer::getSurname()
{
    return surname;
}

/*
 *returns the groupId of the customer
 *@param groupId is an integer argument
 *@return the groupId result
 */
int Customer::getGroupId()
{
    return groupId;
}


/*
 *sets the id of the customer
 &@param i is a string variable
 */
void Customer::setId(QString i)
{

    if (i!=NULL) //checks if the id is valid
        id = i;
    else
        cerr << "invalid customer id\nPlease try again . . .\n";
}

/*
 *sets the name of the customer
 &@param n is a string variable
 */
void Customer::setName(QString n)
{
    if (n!=NULL) //checks if the name is valid
        name = n;
    else
        cerr << "invalid customer name\nPlease try again . . .\n";
}

/*
 *sets the surname of the customer
 &@param sn is a string variable
 */
void Customer::setSurname(QString sn)
{
    if (sn!=NULL) //checks if the surname is valid
        surname = sn;
    else
        cerr << "invalid customer surname\nPlease try again . . .\n";
}

/*
 *sets the groupId of the customer
 &@param ig is an integer variable 
 */
void Customer::setGroupId(int ig){

    if (ig>=0)
        groupId = ig;
    else
        cerr << "invalid customer groupId\nPlease try again . . .\n";

}



