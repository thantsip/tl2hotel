/****************************************************************************
** Meta object code from reading C++ file 'tfilehandler.h'
**
** Created: Fri 26. Nov 00:44:31 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tfilehandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tfilehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TFileHandler[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      27,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TFileHandler[] = {
    "TFileHandler\0\0createFile()\0isFileExist()\0"
    "removeFile()\0"
};

const QMetaObject TFileHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TFileHandler,
      qt_meta_data_TFileHandler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TFileHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TFileHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TFileHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TFileHandler))
        return static_cast<void*>(const_cast< TFileHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int TFileHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createFile(); break;
        case 1: isFileExist(); break;
        case 2: removeFile(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
