/****************************************************************************
** Meta object code from reading C++ file 'calibrate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HelmholtzGUI/calibrate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Calibrate_t {
    QByteArrayData data[14];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calibrate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calibrate_t qt_meta_stringdata_Calibrate = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Calibrate"
QT_MOC_LITERAL(1, 10, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "findRow"
QT_MOC_LITERAL(4, 37, 7), // "address"
QT_MOC_LITERAL(5, 45, 3), // "bus"
QT_MOC_LITERAL(6, 49, 11), // "setCellText"
QT_MOC_LITERAL(7, 61, 3), // "row"
QT_MOC_LITERAL(8, 65, 3), // "col"
QT_MOC_LITERAL(9, 69, 4), // "text"
QT_MOC_LITERAL(10, 74, 10), // "closeEvent"
QT_MOC_LITERAL(11, 85, 12), // "QCloseEvent*"
QT_MOC_LITERAL(12, 98, 5), // "event"
QT_MOC_LITERAL(13, 104, 15) // "on_save_clicked"

    },
    "Calibrate\0on_cancel_clicked\0\0findRow\0"
    "address\0bus\0setCellText\0row\0col\0text\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calibrate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       6,    3,   45,    2, 0x08 /* Private */,
      10,    1,   52,    2, 0x08 /* Private */,
      13,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void Calibrate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calibrate *_t = static_cast<Calibrate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancel_clicked(); break;
        case 1: { int _r = _t->findRow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->setCellText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->on_save_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Calibrate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Calibrate.data,
      qt_meta_data_Calibrate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Calibrate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calibrate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Calibrate.stringdata0))
        return static_cast<void*>(const_cast< Calibrate*>(this));
    return QDialog::qt_metacast(_clname);
}

int Calibrate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
