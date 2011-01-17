/** @file   treservationManagement.h
 *  @brief  reservationManagement Unit Test Header
 *  @author Georgomitros Konstantinos
 *
 *  This is the unit test for the "reservationManagement" class.
 */


#ifndef TRESERVATIONMANAGEMENT_H
#define TRESERVATIONMANAGEMENT_H


#include <QtTest>

#include "reservationManagement.h"
#include "roomManagement.h"
#include "customerManagement.h"


class TReservationManagement:public QObject
{
  Q_OBJECT


private slots:


       void testReservationManagementDefault();
       void testReservationManagement();
       void test_get_set_ReservationId();
       void test_set_get_DateFrom();
       void test_set_get_DateTo();
       void testroomReservation();
       void testcheckInData();
       void testroomCheckout();




};

#endif // TRESERVATIONMANAGEMENT_H
