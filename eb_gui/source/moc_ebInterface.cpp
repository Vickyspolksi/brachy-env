/****************************************************************************
** Meta object code from reading C++ file 'ebInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "GUI/ebInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ebInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ebInterface_t {
    QByteArrayData data[14];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ebInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ebInterface_t qt_meta_stringdata_ebInterface = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ebInterface"
QT_MOC_LITERAL(1, 12, 7), // "refresh"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "loadTransport"
QT_MOC_LITERAL(4, 35, 12), // "loadMaterial"
QT_MOC_LITERAL(5, 48, 8), // "loadMuen"
QT_MOC_LITERAL(6, 57, 6), // "saveEB"
QT_MOC_LITERAL(7, 64, 5), // "runEB"
QT_MOC_LITERAL(8, 70, 8), // "finishEB"
QT_MOC_LITERAL(9, 79, 4), // "code"
QT_MOC_LITERAL(10, 84, 6), // "killEB"
QT_MOC_LITERAL(11, 91, 20), // "writeOutputToConsole"
QT_MOC_LITERAL(12, 112, 5), // "runEV"
QT_MOC_LITERAL(13, 118, 9) // "saveLogEB"

    },
    "ebInterface\0refresh\0\0loadTransport\0"
    "loadMaterial\0loadMuen\0saveEB\0runEB\0"
    "finishEB\0code\0killEB\0writeOutputToConsole\0"
    "runEV\0saveLogEB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ebInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ebInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ebInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->loadTransport(); break;
        case 2: _t->loadMaterial(); break;
        case 3: _t->loadMuen(); break;
        case 4: _t->saveEB(); break;
        case 5: _t->runEB(); break;
        case 6: _t->finishEB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->killEB(); break;
        case 8: _t->writeOutputToConsole(); break;
        case 9: _t->runEV(); break;
        case 10: _t->saveLogEB(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ebInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ebInterface.data,
    qt_meta_data_ebInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ebInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ebInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ebInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ebInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_consoleWindow_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consoleWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consoleWindow_t qt_meta_stringdata_consoleWindow = {
    {
QT_MOC_LITERAL(0, 0, 13) // "consoleWindow"

    },
    "consoleWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consoleWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void consoleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject consoleWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_consoleWindow.data,
    qt_meta_data_consoleWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consoleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consoleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consoleWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int consoleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
