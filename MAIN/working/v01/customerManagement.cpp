#include "customerManagement.h"

/**
  *constructor
 */
CustomerManagement::CustomerManagement()
{
}

CustomerManagement::~CustomerManagement() {
}

/**
  *Creates new entry in Customer table
  */
void CustomerManagement::newCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname)
{
  sqlMechanism.execQuery("insert into Customers values('"+prIdCustomer+"','"+CustomerName+"', '"+CustomerSurname+"') ");
}

/**
  *Edits the fields from selected Customer in Customer table
  */
void CustomerManagement::editCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname)
{
 sqlMechanism.execQuery("update Customers SET prIdCustomer='"+prIdCustomer+"', CustomerName='"+CustomerName+"', CustomerSurname='"+CustomerSurname+"' ");
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(QString prIdCustomer)
{
  sqlMechanism.execQuery("delete prIdCustomer from Customers where prIdCustomer='"+prIdCustomer+"'");
}
