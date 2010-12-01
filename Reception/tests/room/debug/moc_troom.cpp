/****************************************************************************
** Meta object code from reading C++ file 'troom.h'
**
** Created: Wed 1. Dec 02:45:08 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../troom.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'troom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TRoom[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      25,    6,    6,    6, 0x08,
      34,    6,    6,    6, 0x08,
      45,    6,    6,    6, 0x08,
      62,    6,    6,    6, 0x08,
      78,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TRoom[] = {
    "TRoom\0\0testConstructor()\0testId()\0"
    "testFree()\0testRoomNumber()\0testRoomFloor()\0"
    "testCapacity()\0"
};

const QMetaObject TRoom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TRoom,
      qt_meta_data_TRoom, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TRoom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TRoom))
        return static_cast<void*>(const_cast< TRoom*>(this));
    return QObject::qt_metacast(_clname);
}

int TRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: testConstructor(); break;
        case 1: testId(); break;
        case 2: testFree(); break;
        case 3: testRoomNumber(); break;
        case 4: testRoomFloor(); break;
        case 5: testCapacity(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
