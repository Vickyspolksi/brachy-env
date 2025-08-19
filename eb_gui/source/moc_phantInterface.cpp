/****************************************************************************
** Meta object code from reading C++ file 'phantInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "GUI/phantInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phantInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_phantInterface_t {
    QByteArrayData data[23];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_phantInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_phantInterface_t qt_meta_stringdata_phantInterface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "phantInterface"
QT_MOC_LITERAL(1, 15, 7), // "refresh"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "loadMARdefaults"
QT_MOC_LITERAL(4, 40, 13), // "fillMARvalues"
QT_MOC_LITERAL(5, 54, 10), // "loadStruct"
QT_MOC_LITERAL(6, 65, 10), // "loadHU2rho"
QT_MOC_LITERAL(7, 76, 11), // "loadCTFiles"
QT_MOC_LITERAL(8, 88, 9), // "loadCTDir"
QT_MOC_LITERAL(9, 98, 12), // "repopulateCT"
QT_MOC_LITERAL(10, 111, 8), // "deleteCT"
QT_MOC_LITERAL(11, 120, 11), // "deleteAllCT"
QT_MOC_LITERAL(12, 132, 9), // "mergeSort"
QT_MOC_LITERAL(13, 142, 16), // "QVector<DICOM*>&"
QT_MOC_LITERAL(14, 159, 4), // "data"
QT_MOC_LITERAL(15, 164, 1), // "n"
QT_MOC_LITERAL(16, 166, 8), // "submerge"
QT_MOC_LITERAL(17, 175, 1), // "i"
QT_MOC_LITERAL(18, 177, 1), // "c"
QT_MOC_LITERAL(19, 179, 1), // "f"
QT_MOC_LITERAL(20, 181, 10), // "parseError"
QT_MOC_LITERAL(21, 192, 3), // "err"
QT_MOC_LITERAL(22, 196, 14) // "createEGSphant"

    },
    "phantInterface\0refresh\0\0loadMARdefaults\0"
    "fillMARvalues\0loadStruct\0loadHU2rho\0"
    "loadCTFiles\0loadCTDir\0repopulateCT\0"
    "deleteCT\0deleteAllCT\0mergeSort\0"
    "QVector<DICOM*>&\0data\0n\0submerge\0i\0c\0"
    "f\0parseError\0err\0createEGSphant"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_phantInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    2,   94,    2, 0x0a /* Public */,
      16,    4,   99,    2, 0x0a /* Public */,
      20,    1,  108,    2, 0x0a /* Public */,
      22,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   17,   18,   19,
    QMetaType::Int, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void phantInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<phantInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->loadMARdefaults(); break;
        case 2: _t->fillMARvalues(); break;
        case 3: _t->loadStruct(); break;
        case 4: _t->loadHU2rho(); break;
        case 5: _t->loadCTFiles(); break;
        case 6: _t->loadCTDir(); break;
        case 7: _t->repopulateCT(); break;
        case 8: _t->deleteCT(); break;
        case 9: _t->deleteAllCT(); break;
        case 10: _t->mergeSort((*reinterpret_cast< QVector<DICOM*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->submerge((*reinterpret_cast< QVector<DICOM*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 12: { int _r = _t->parseError((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->createEGSphant(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject phantInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_phantInterface.data,
    qt_meta_data_phantInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *phantInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *phantInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_phantInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int phantInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
