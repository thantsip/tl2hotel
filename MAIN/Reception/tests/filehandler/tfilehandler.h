#include <QtTest>

#include "filehandler.h"

class TFileHandler : public QObject {
  Q_OBJECT

  private slots:
    void createFile ();
    void isFileExist ();
    void removeFile ();
};