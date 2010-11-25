#include "CustomerManagement.h"

/**
  *constructor
 */
CustomerManagement::CustomerManagement()
{
}

/**
  *Creates new entry in Customer table
  */
void CustomerManagement::newCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname)
{
  sqlMechanism.exec("insert into Customers values('"+costumer.getId()+"','"+costumer.getName()+"', '"+costumer.getSurname()+"') ");
}

/**
  *Edits the fields from selected Customer in Customer table
  */
void CustomerManagement::editCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname)
{
 sqlMechanism.exec("update Customers SET prIdCustomer='"+costumer.getId()+"', CustomerName='"+costumer.getName()+"', CustomerSurname='"+costumer.getSurname()+"' ");
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(QString prIdCustomer)
{
  sqlMechanism.exec("delete prIdCustomer from Customers where prIdCustomer='"+costumer.getId()+"'");
}
