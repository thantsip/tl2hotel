/**
 *Contains Class CustomerManagement
 */

#ifndef CUSTOMERMANAGEMENT_H
#define CUSTOMERMANAGEMENT_H

#include <QString>

#include "sqlMechanism.h"
#include "customer.h"

/**
  *Creates new customers in the database or edits/deletes and already existing customer in the database
  */

class CustomerManagement
{

private:
     Customer customer;
     SQLMechanism sqlMechanism;

public:
    CustomerManagement();
    void newCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname);
    void deleteCustomer(QString prIdCustomer);
    void editCustomer(QString prIdCustomer,QString CustomerName,QString CustomerSurname);


/**
  *destructor
  */
   ~CustomerManagement();
};

#endif // CUSTOMERMANAGEMENT_H
