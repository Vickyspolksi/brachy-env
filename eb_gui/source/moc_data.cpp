/****************************************************************************
** Meta object code from reading C++ file 'data.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Data_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Data_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Data_t qt_meta_stringdata_Data = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Data"
QT_MOC_LITERAL(1, 5, 11), // "newProgress"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "title"
QT_MOC_LITERAL(4, 24, 12), // "madeProgress"
QT_MOC_LITERAL(5, 37, 7), // "percent"
QT_MOC_LITERAL(6, 45, 17), // "completedProgress"
QT_MOC_LITERAL(7, 63, 15), // "newProgressName"
QT_MOC_LITERAL(8, 79, 4) // "text"

    },
    "Data\0newProgress\0\0title\0madeProgress\0"
    "percent\0completedProgress\0newProgressName\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Data[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void Data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Data *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newProgress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->madeProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->completedProgress(); break;
        case 3: _t->newProgressName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Data::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Data::newProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Data::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Data::madeProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Data::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Data::completedProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Data::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Data::newProgressName)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Data::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Data.data,
    qt_meta_data_Data,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Data.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Data::newProgress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Data::madeProgress(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Data::completedProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Data::newProgressName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
