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
  sqlMechanism.exec("insert into Customers values('"+costumer.getprIdCustomer()+"','"+costumer.getCustomerName()+"', '"+costumer.getCustomerSurname()+"') ");
}

/**
  *Edits the fields from selected Customer in Customer table
  */
CustomerManagement::editCustomer()
{
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(QString prIdCustomer)
{
  sqlMechanism.exec("delete prIdCustomer from Customers where prIdCustomer='"+costumer.getId()+"'");
}
