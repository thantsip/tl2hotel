/**
 *Contains Class CustomerManagement
 */

#ifndef CUSTOMERMANAGEMENT_H
#define CUSTOMERMANAGEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include "sqlMechanism.h"
#include "customer.h"

#include <QMessageBox>
#include <QChar>
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
    void newCustomer(Customer customer);
    void deleteCustomer(Customer customer);
    void editCustomer(Customer customer);

    Customer fetchCustomer(QString id);

   bool checkInData(Customer customer);


/**
  *destructor
  */
   ~CustomerManagement();
};

#endif // CUSTOMERMANAGEMENT_H
