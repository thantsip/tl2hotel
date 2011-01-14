/** @file tcustomer.h
 *  @brief Customer Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Customer" class.
 */

#if !defined (T_CUSTOMER_H)
#define T_CUSTOMER_H

#include <QtTest>
#include "customer.h"

/** @class TCustomer
 *  @brief Customer Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "Customer" class.
 */
class TCustomer : public QObject
{
  Q_OBJECT

  private slots:

    /** Customer Constructor Test Method
     *  @brief This method tests the constructor of the "Customer" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testConstructor ();

    /** Customer ID Test Method
     *  @brief This method tests the ID set/get methods of the "Customer" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testId ();

    /** Customer Name Test Method
     *  @brief This method tests the Name set/get methods of the "Customer" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testName ();

    /** Customer Surname Test Method
     *  @brief This method tests the Surname set/get methods of the "Customer" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testSurname ();

    /** Customer Group Id Test Method
     *  @brief This method tests the Group ID set/get methods of the "Customer" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testGroupId ();
};

#endif // T_CUSTOMER_H