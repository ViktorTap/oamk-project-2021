/****************************************************************************
** Meta object code from reading C++ file 'hae_lainaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hae_lainaa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hae_lainaa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Hae_Lainaa_t {
    QByteArrayData data[5];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hae_Lainaa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hae_Lainaa_t qt_meta_stringdata_Hae_Lainaa = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Hae_Lainaa"
QT_MOC_LITERAL(1, 11, 24), // "on_pushButton_Ok_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 30), // "on_pushButton_Takaisin_clicked"
QT_MOC_LITERAL(4, 68, 35) // "on_pushButton_Kirjaudu_ulos_c..."

    },
    "Hae_Lainaa\0on_pushButton_Ok_clicked\0"
    "\0on_pushButton_Takaisin_clicked\0"
    "on_pushButton_Kirjaudu_ulos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hae_Lainaa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Hae_Lainaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hae_Lainaa *_t = static_cast<Hae_Lainaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Ok_clicked(); break;
        case 1: _t->on_pushButton_Takaisin_clicked(); break;
        case 2: _t->on_pushButton_Kirjaudu_ulos_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Hae_Lainaa::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Hae_Lainaa.data,
      qt_meta_data_Hae_Lainaa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Hae_Lainaa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hae_Lainaa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Hae_Lainaa.stringdata0))
        return static_cast<void*>(const_cast< Hae_Lainaa*>(this));
    return QWidget::qt_metacast(_clname);
}

int Hae_Lainaa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
