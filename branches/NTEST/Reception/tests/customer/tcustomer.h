/**
 * @file tcustomer.h
 * Write description of source file here for dOxygen.
 *
 * @brief Can use "brief" tag to explicitly generate comments for file documentation.
 */

#include <QtTest>

#include "customer.h"

/**
 * Customer Test Class. This is the Test Class for the Customer Class.
 */
class TCustomer : public QObject {
  Q_OBJECT

  private slots:
    void testConstructor ();
    void testId ();
    void testName ();
    void testSurname ();
    void testGroupId ();
};