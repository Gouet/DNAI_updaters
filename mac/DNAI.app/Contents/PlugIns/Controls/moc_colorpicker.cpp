/****************************************************************************
** Meta object code from reading C++ file 'colorpicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Gui/plugins/Controls/colorpicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorpicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dnai__controls__ColorPicker_t {
    QByteArrayData data[20];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dnai__controls__ColorPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dnai__controls__ColorPicker_t qt_meta_stringdata_dnai__controls__ColorPicker = {
    {
QT_MOC_LITERAL(0, 0, 27), // "dnai::controls::ColorPicker"
QT_MOC_LITERAL(1, 28, 12), // "colorChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "color"
QT_MOC_LITERAL(4, 48, 18), // "rotateFocusChanged"
QT_MOC_LITERAL(5, 67, 11), // "rotateFocus"
QT_MOC_LITERAL(6, 79, 13), // "radiusChanged"
QT_MOC_LITERAL(7, 93, 6), // "radius"
QT_MOC_LITERAL(8, 100, 19), // "innerPercentChanged"
QT_MOC_LITERAL(9, 120, 12), // "innerPercent"
QT_MOC_LITERAL(10, 133, 20), // "pointingColorChanged"
QT_MOC_LITERAL(11, 154, 13), // "pointingColor"
QT_MOC_LITERAL(12, 168, 9), // "setRadius"
QT_MOC_LITERAL(13, 178, 15), // "setInnerPercent"
QT_MOC_LITERAL(14, 194, 8), // "setColor"
QT_MOC_LITERAL(15, 203, 8), // "getColor"
QT_MOC_LITERAL(16, 212, 8), // "QWindow*"
QT_MOC_LITERAL(17, 221, 1), // "w"
QT_MOC_LITERAL(18, 223, 1), // "x"
QT_MOC_LITERAL(19, 225, 1) // "y"

    },
    "dnai::controls::ColorPicker\0colorChanged\0"
    "\0color\0rotateFocusChanged\0rotateFocus\0"
    "radiusChanged\0radius\0innerPercentChanged\0"
    "innerPercent\0pointingColorChanged\0"
    "pointingColor\0setRadius\0setInnerPercent\0"
    "setColor\0getColor\0QWindow*\0w\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dnai__controls__ColorPicker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    3,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::QColor,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::QColor,    3,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int, QMetaType::Int,   17,   18,   19,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::Float, 0x00495001,
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      11, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void dnai::controls::ColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorPicker *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->rotateFocusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->radiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->innerPercentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->pointingColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setInnerPercent((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->getColor((*reinterpret_cast< QWindow*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ColorPicker::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ColorPicker::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::rotateFocusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ColorPicker::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::radiusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ColorPicker::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::innerPercentChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ColorPicker::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::pointingColorChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ColorPicker *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->rotateFocus(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->innerPercent(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->pointingColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ColorPicker *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setInnerPercent(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject dnai::controls::ColorPicker::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_dnai__controls__ColorPicker.data,
      qt_meta_data_dnai__controls__ColorPicker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dnai::controls::ColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dnai::controls::ColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dnai__controls__ColorPicker.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int dnai::controls::ColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void dnai::controls::ColorPicker::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dnai::controls::ColorPicker::rotateFocusChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dnai::controls::ColorPicker::radiusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dnai::controls::ColorPicker::innerPercentChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dnai::controls::ColorPicker::pointingColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
