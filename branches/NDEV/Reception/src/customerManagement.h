

#ifndef CUSTOMERMANAGEMENT_H
#define CUSTOMERMANAGEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include <vector>
#include <QMessageBox>
#include <QChar>
#include "sqlMechanism.h"
#include "customer.h"


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
    vector<Customer> fetchAllCustomers();
    vector<Customer> searchCustomerByValue(QString value);

    bool checkInData(Customer customer);



   ~CustomerManagement();
};

#endif // CUSTOMERMANAGEMENT_H
