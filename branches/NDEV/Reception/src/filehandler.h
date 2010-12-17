#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QMessageBox>
#include <QString>
#include <QFile>


static const QString fileHandlerstr     = QObject::tr("File Handler");
static const QString fileNotExistStr    = QObject::tr("File does not Exist. \nCreate new Database Instance.");
static const QString fileRemovedStr     = QObject::tr("File was removed.");
static const QString fileNotRemovedStr  = QObject::tr("File wasn't removed.");

class FileHandler
{
public:


    bool isFileExist(QString fileName);

    bool removeFile(QString fileName);
};

#endif // FILEHANDLER_H
