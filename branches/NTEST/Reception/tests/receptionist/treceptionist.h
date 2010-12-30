/** @file treceptionist.h
 *  @brief Receptionist Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Receptionist" class.
 */

#if !defined (T_RECEPTIONIST_H)
#define T_RECEPTIONIST_H

#include <QtTest>
#include "receptionist.h"

/** @class TReceptionist
 *  @brief Receptionist Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "Receptionist" class.
 */
class TReceptionist : public QObject
{
  Q_OBJECT

  private slots:

    /** Receptionist Constructor Test Method
     *  @brief This method tests the constructor of the "Receptionist" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testConstructor ();

    /** Receptionist Fund Test Method
     *  @brief This method tests the Fund set/get methods of the "Receptionist" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testFund ();
};

#endif // T_RECEPTIONIST_H