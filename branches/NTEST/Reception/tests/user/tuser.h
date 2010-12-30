/** @file tuser.h
 *  @brief User Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "User" class.
 */

#if !defined (T_USER_H)
#define T_USER_H

#include <QtTest>
#include "user.h"

/** @class TUser
 *  @brief User Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "User" class.
 */
class TUser : public QObject
{
  Q_OBJECT

  private slots:

    /** User Constructor Test Method
     *  @brief This method tests the constructor of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testConstructor ();

    /** User Name Test Method
     *  @brief This method tests the Name set/get methods of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testName ();

    /** User Surname Test Method
     *  @brief This method tests the Surname set/get methods of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testSurname ();

    /** User Username Test Method
     *  @brief This method tests the Username set/get methods of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testUsername ();

    /** User Password Test Method
     *  @brief This method tests the Password set/get methods of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testPassword ();

    /** User Role Test Method
     *  @brief This method tests the Role set/get methods of the "User" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void testRole ();
};

#endif // T_USER_H