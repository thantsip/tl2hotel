/** @file tfilehandler.h
 *  @brief FileHandler Unit Test Header
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "FileHandler" class.
 */

#if !defined (T_FILE_HANDLER_H)
#define T_FILE_HANDLER_H

#include <QtTest>
#include "filehandler.h"

/** @class TFileHandler
 *  @brief FileHandler Test Class
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the test class for the "FileHandler" class.
 */
class TFileHandler : public QObject
{
  Q_OBJECT

  private slots:

    /** File Create Method
     *  @brief This method tries to create a file for testing the "FileHandler" class.
     *  @author Efstathios Xatzikiriakidis
     */
    void createFile ();

    /** File Exists Test Method
     *  @brief This method tests if the "FileHandler" class can check that a file exists.
     *  @author Efstathios Xatzikiriakidis
     */
    void isFileExist ();

    /** Remove File Test Method
     *  @brief This method tests if the "FileHandler" class can remove a file.
     *  @author Efstathios Xatzikiriakidis
     */
    void removeFile ();
};

#endif // T_FILE_HANDLER_H