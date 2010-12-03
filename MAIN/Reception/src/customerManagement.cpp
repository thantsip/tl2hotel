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
void CustomerManagement::newCustomer(Customer customer)
{
    if(CustomerManagement::checkInData(customer))
       {
        sqlMechanism.execQuery("insert into Customers values('"+customer.getId()+"','"+customer.getName()+"', '"+customer.getSurname()+"') ");
       }
}

/**
  *Edits the fields from selected Customer in Customer table
  */
void CustomerManagement::editCustomer(Customer customer)
{
 sqlMechanism.execQuery("update Customers SET prIdCustomer='"+customer.getId()+"', CustomerName='"+customer.getName()+"', CustomerSurname='"+customer.getSurname()+"' ");
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(Customer customer)
{
  sqlMechanism.execQuery("delete from Customers where prIdCustomer='"+customer.getId()+"'");
}

/*
*Fetch the customer with the id
*/
Customer CustomerManagement::fetchCustomer(QString id)
{
    QSqlQuery fetchquery;
    QString customername,customersurname;
    int groupid;
    Customer customer;

    fetchquery = sqlMechanism.execQuery("SELECT * FROM Customers WHERE prIdCustomer='"+id+"'");
    while (fetchquery.next())
    {
    customername = fetchquery.value(1).toString();
    customersurname = fetchquery.value(2).toString();
    groupid = fetchquery.value(2).toInt();
    }
    customer.setId(id);
    customer.setName(customername);
    customer.setSurname(customersurname);
    customer.setGroupId(groupid);

    return customer;
}

/**
  *checks if data are correct
  */
bool CustomerManagement::checkInData(Customer customer)
{

    QString cId=customer.getId();
    QString cName=customer.getName();
     QString cSurname=customer.getSurname();


    bool ret=false;

    /**
          *check that the customerId has no spaces
          */

    if(!cId.isEmpty())
                {
                    ret = true;
                }
        else
        {
           QMessageBox::warning(0,"Input Data Error","Check the Customer Id");
                    ret = false;     
        }

        if(!cName.isEmpty())
        {

             ret=true;          

        }
        else {
             QMessageBox::warning(0,"Input Data Error","Check the Customer Name");
                        ret = false;
        }

        if(!cSurname.isEmpty())
            {
                 ret=true;
            }
        else{
             QMessageBox::warning(0,"Input Data Error","Check the Customer Surname");
            ret = false;


        }
        return ret;
    }


