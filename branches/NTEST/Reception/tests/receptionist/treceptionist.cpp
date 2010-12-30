/** @file treceptionist.cpp
 *  @brief Receptionist Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Receptionist" class.
 */

#include "treceptionist.h"

/**
 * Receptionist fund value (test data).
 */
double gFund = 12.21;

/** Receptionist Constructor Test Method
 *  @brief This method tests the constructor of the "Receptionist" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TReceptionist::testConstructor ()
{
  Receptionist r (gFund);

  QVERIFY (r.getFund () == gFund);
}

/** Receptionist Fund Test Method
 *  @brief This method tests the Fund set/get methods of the "Receptionist" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TReceptionist::testFund ()
{
  Receptionist r;
  r.setFund (gFund);

  QVERIFY (r.getFund () == gFund);
}

QTEST_MAIN (TReceptionist)