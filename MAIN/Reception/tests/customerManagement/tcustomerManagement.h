/** @file tcustomerManagement.h
 *  @brief CustomerManagement Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "CustomerManagement" class.
 */

#if !defined (T_CUSTOMER_MANAGEMENT_H)
#define T_CUSTOMER_MANAGEMENT_H

#include <QtTest>
#include "customerManagement.h"

/** @class TCustomerManagement
 *  @brief CustomerManagement Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "CustomerManagement" class.
 */
class TCustomerManagement : public QObject
{
  Q_OBJECT

  private slots:

    /** Fetch All Customers Test Method
     *  @brief This method tries to test the "fetchAllCustomers" method of "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFetchAllCustomers ();

    /** Search Customer By Value Test Method
     *  @brief This method tries to test the "searchCustomerByValue" method of "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testSearchCustomerByValue ();

    /** New Customer Test Method
     *  @brief This method tests the "newCustomer" method of the "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testNewCustomer ();

    /** Edit Customer Test Method
     *  @brief This method tests the "editCustomer" method of the "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testEditCustomer ();

    /** Delete Customer Test Method
     *  @brief This method tests the "deleteCustomer" method of the "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testDeleteCustomer ();

    /** Fetch Customer Test Method
     *  @brief This method tests the "fetchCustomer" method of the "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFetchCustomer ();

    /** Customer Check In Data Test Method
     *  @brief This method tests the "checkInData" method of the "CustomerManagement" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testCheckInData ();
};

#endif // T_CUSTOMER_MANAGEMENT_H