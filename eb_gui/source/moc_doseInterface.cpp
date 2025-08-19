/****************************************************************************
** Meta object code from reading C++ file 'doseInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "GUI/doseInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doseInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_doseInterface_t {
    QByteArrayData data[51];
    char stringdata0[743];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_doseInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_doseInterface_t qt_meta_stringdata_doseInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "doseInterface"
QT_MOC_LITERAL(1, 14, 6), // "render"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "saveImage"
QT_MOC_LITERAL(4, 32, 8), // "saveData"
QT_MOC_LITERAL(5, 41, 13), // "previewRender"
QT_MOC_LITERAL(6, 55, 17), // "previewRenderLive"
QT_MOC_LITERAL(7, 73, 19), // "previewCanvasRender"
QT_MOC_LITERAL(8, 93, 23), // "previewCanvasRenderLive"
QT_MOC_LITERAL(9, 117, 18), // "previewPhantRender"
QT_MOC_LITERAL(10, 136, 22), // "previewPhantRenderLive"
QT_MOC_LITERAL(11, 159, 16), // "previewMapRender"
QT_MOC_LITERAL(12, 176, 20), // "previewMapRenderLive"
QT_MOC_LITERAL(13, 197, 16), // "previewIsoRender"
QT_MOC_LITERAL(14, 214, 20), // "previewIsoRenderLive"
QT_MOC_LITERAL(15, 235, 17), // "previewChangeAxis"
QT_MOC_LITERAL(16, 253, 18), // "previewChangeColor"
QT_MOC_LITERAL(17, 272, 1), // "i"
QT_MOC_LITERAL(18, 274, 18), // "previewResetBounds"
QT_MOC_LITERAL(19, 293, 14), // "previewSliceUp"
QT_MOC_LITERAL(20, 308, 16), // "previewSliceDown"
QT_MOC_LITERAL(21, 325, 12), // "loadEgsphant"
QT_MOC_LITERAL(22, 338, 11), // "loadMapDose"
QT_MOC_LITERAL(23, 350, 11), // "loadIsoDose"
QT_MOC_LITERAL(24, 362, 17), // "writePreviewLabel"
QT_MOC_LITERAL(25, 380, 1), // "j"
QT_MOC_LITERAL(26, 382, 12), // "createLegend"
QT_MOC_LITERAL(27, 395, 15), // "histoRenderLive"
QT_MOC_LITERAL(28, 411, 11), // "histoRender"
QT_MOC_LITERAL(29, 423, 18), // "loadFilterEgsphant"
QT_MOC_LITERAL(30, 442, 16), // "loadMaskEgsphant"
QT_MOC_LITERAL(31, 459, 13), // "loadHistoDose"
QT_MOC_LITERAL(32, 473, 15), // "deleteHistoDose"
QT_MOC_LITERAL(33, 489, 11), // "loadMetrics"
QT_MOC_LITERAL(34, 501, 11), // "calcMetrics"
QT_MOC_LITERAL(35, 513, 13), // "outputMetrics"
QT_MOC_LITERAL(36, 527, 13), // "outputRawData"
QT_MOC_LITERAL(37, 541, 17), // "profileRenderLive"
QT_MOC_LITERAL(38, 559, 13), // "profileRender"
QT_MOC_LITERAL(39, 573, 19), // "loadPreviewEgsphant"
QT_MOC_LITERAL(40, 593, 19), // "showPreviewEgsphant"
QT_MOC_LITERAL(41, 613, 19), // "savePreviewEgsphant"
QT_MOC_LITERAL(42, 633, 12), // "loadProfDose"
QT_MOC_LITERAL(43, 646, 14), // "deleteProfDose"
QT_MOC_LITERAL(44, 661, 11), // "resetLayout"
QT_MOC_LITERAL(45, 673, 10), // "resetDoses"
QT_MOC_LITERAL(46, 684, 7), // "refresh"
QT_MOC_LITERAL(47, 692, 7), // "tabSwap"
QT_MOC_LITERAL(48, 700, 14), // "previewRefresh"
QT_MOC_LITERAL(49, 715, 12), // "histoRefresh"
QT_MOC_LITERAL(50, 728, 14) // "profileRefresh"

    },
    "doseInterface\0render\0\0saveImage\0"
    "saveData\0previewRender\0previewRenderLive\0"
    "previewCanvasRender\0previewCanvasRenderLive\0"
    "previewPhantRender\0previewPhantRenderLive\0"
    "previewMapRender\0previewMapRenderLive\0"
    "previewIsoRender\0previewIsoRenderLive\0"
    "previewChangeAxis\0previewChangeColor\0"
    "i\0previewResetBounds\0previewSliceUp\0"
    "previewSliceDown\0loadEgsphant\0loadMapDose\0"
    "loadIsoDose\0writePreviewLabel\0j\0"
    "createLegend\0histoRenderLive\0histoRender\0"
    "loadFilterEgsphant\0loadMaskEgsphant\0"
    "loadHistoDose\0deleteHistoDose\0loadMetrics\0"
    "calcMetrics\0outputMetrics\0outputRawData\0"
    "profileRenderLive\0profileRender\0"
    "loadPreviewEgsphant\0showPreviewEgsphant\0"
    "savePreviewEgsphant\0loadProfDose\0"
    "deleteProfDose\0resetLayout\0resetDoses\0"
    "refresh\0tabSwap\0previewRefresh\0"
    "histoRefresh\0profileRefresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_doseInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x0a /* Public */,
       3,    0,  250,    2, 0x0a /* Public */,
       4,    0,  251,    2, 0x0a /* Public */,
       5,    0,  252,    2, 0x0a /* Public */,
       6,    0,  253,    2, 0x0a /* Public */,
       7,    0,  254,    2, 0x0a /* Public */,
       8,    0,  255,    2, 0x0a /* Public */,
       9,    0,  256,    2, 0x0a /* Public */,
      10,    0,  257,    2, 0x0a /* Public */,
      11,    0,  258,    2, 0x0a /* Public */,
      12,    0,  259,    2, 0x0a /* Public */,
      13,    0,  260,    2, 0x0a /* Public */,
      14,    0,  261,    2, 0x0a /* Public */,
      15,    0,  262,    2, 0x0a /* Public */,
      16,    1,  263,    2, 0x0a /* Public */,
      18,    0,  266,    2, 0x0a /* Public */,
      19,    0,  267,    2, 0x0a /* Public */,
      20,    0,  268,    2, 0x0a /* Public */,
      21,    0,  269,    2, 0x0a /* Public */,
      22,    0,  270,    2, 0x0a /* Public */,
      23,    1,  271,    2, 0x0a /* Public */,
      24,    2,  274,    2, 0x0a /* Public */,
      26,    0,  279,    2, 0x0a /* Public */,
      27,    0,  280,    2, 0x0a /* Public */,
      28,    0,  281,    2, 0x0a /* Public */,
      29,    0,  282,    2, 0x0a /* Public */,
      30,    0,  283,    2, 0x0a /* Public */,
      31,    0,  284,    2, 0x0a /* Public */,
      32,    0,  285,    2, 0x0a /* Public */,
      33,    0,  286,    2, 0x0a /* Public */,
      34,    0,  287,    2, 0x0a /* Public */,
      35,    0,  288,    2, 0x0a /* Public */,
      36,    0,  289,    2, 0x0a /* Public */,
      37,    0,  290,    2, 0x0a /* Public */,
      38,    0,  291,    2, 0x0a /* Public */,
      39,    0,  292,    2, 0x0a /* Public */,
      40,    0,  293,    2, 0x0a /* Public */,
      41,    0,  294,    2, 0x0a /* Public */,
      42,    0,  295,    2, 0x0a /* Public */,
      43,    0,  296,    2, 0x0a /* Public */,
      44,    0,  297,    2, 0x0a /* Public */,
      45,    0,  298,    2, 0x0a /* Public */,
      46,    0,  299,    2, 0x0a /* Public */,
      47,    0,  300,    2, 0x0a /* Public */,
      48,    0,  301,    2, 0x0a /* Public */,
      49,    0,  302,    2, 0x0a /* Public */,
      50,    0,  303,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   25,
    QMetaType::QImage,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void doseInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<doseInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->render(); break;
        case 1: _t->saveImage(); break;
        case 2: _t->saveData(); break;
        case 3: _t->previewRender(); break;
        case 4: _t->previewRenderLive(); break;
        case 5: _t->previewCanvasRender(); break;
        case 6: _t->previewCanvasRenderLive(); break;
        case 7: _t->previewPhantRender(); break;
        case 8: _t->previewPhantRenderLive(); break;
        case 9: _t->previewMapRender(); break;
        case 10: _t->previewMapRenderLive(); break;
        case 11: _t->previewIsoRender(); break;
        case 12: _t->previewIsoRenderLive(); break;
        case 13: _t->previewChangeAxis(); break;
        case 14: _t->previewChangeColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->previewResetBounds(); break;
        case 16: _t->previewSliceUp(); break;
        case 17: _t->previewSliceDown(); break;
        case 18: _t->loadEgsphant(); break;
        case 19: _t->loadMapDose(); break;
        case 20: _t->loadIsoDose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->writePreviewLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: { QImage _r = _t->createLegend();
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->histoRenderLive(); break;
        case 24: _t->histoRender(); break;
        case 25: _t->loadFilterEgsphant(); break;
        case 26: _t->loadMaskEgsphant(); break;
        case 27: _t->loadHistoDose(); break;
        case 28: _t->deleteHistoDose(); break;
        case 29: _t->loadMetrics(); break;
        case 30: _t->calcMetrics(); break;
        case 31: _t->outputMetrics(); break;
        case 32: _t->outputRawData(); break;
        case 33: _t->profileRenderLive(); break;
        case 34: _t->profileRender(); break;
        case 35: _t->loadPreviewEgsphant(); break;
        case 36: _t->showPreviewEgsphant(); break;
        case 37: _t->savePreviewEgsphant(); break;
        case 38: _t->loadProfDose(); break;
        case 39: _t->deleteProfDose(); break;
        case 40: _t->resetLayout(); break;
        case 41: _t->resetDoses(); break;
        case 42: _t->refresh(); break;
        case 43: _t->tabSwap(); break;
        case 44: _t->previewRefresh(); break;
        case 45: _t->histoRefresh(); break;
        case 46: _t->profileRefresh(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject doseInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_doseInterface.data,
    qt_meta_data_doseInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *doseInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *doseInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_doseInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int doseInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}
struct qt_meta_stringdata_HoverLabel_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoverLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoverLabel_t qt_meta_stringdata_HoverLabel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HoverLabel"
QT_MOC_LITERAL(1, 11, 12), // "mouseClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "width"
QT_MOC_LITERAL(4, 31, 6), // "height"
QT_MOC_LITERAL(5, 38, 12), // "mouseWheelUp"
QT_MOC_LITERAL(6, 51, 14) // "mouseWheelDown"

    },
    "HoverLabel\0mouseClicked\0\0width\0height\0"
    "mouseWheelUp\0mouseWheelDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoverLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HoverLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HoverLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->mouseWheelUp(); break;
        case 2: _t->mouseWheelDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HoverLabel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoverLabel::mouseClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HoverLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoverLabel::mouseWheelUp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HoverLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HoverLabel::mouseWheelDown)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HoverLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_HoverLabel.data,
    qt_meta_data_HoverLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoverLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoverLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoverLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int HoverLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HoverLabel::mouseClicked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HoverLabel::mouseWheelUp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HoverLabel::mouseWheelDown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
