/****************************************************************************
** Meta object code from reading C++ file 'triangle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Gui/plugins/Controls/triangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'triangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dnai__controls__Triangle_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dnai__controls__Triangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dnai__controls__Triangle_t qt_meta_stringdata_dnai__controls__Triangle = {
    {
QT_MOC_LITERAL(0, 0, 24), // "dnai::controls::Triangle"
QT_MOC_LITERAL(1, 25, 16), // "fillColorChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "fillColor"
QT_MOC_LITERAL(4, 53, 18), // "borderWidthChanged"
QT_MOC_LITERAL(5, 72, 11), // "borderWidth"
QT_MOC_LITERAL(6, 84, 13), // "radiusChanged"
QT_MOC_LITERAL(7, 98, 6), // "radius"
QT_MOC_LITERAL(8, 105, 18), // "borderColorChanged"
QT_MOC_LITERAL(9, 124, 11), // "borderColor"
QT_MOC_LITERAL(10, 136, 17), // "nbSegmentsChanged"
QT_MOC_LITERAL(11, 154, 10), // "nbSegments"
QT_MOC_LITERAL(12, 165, 12), // "setFillColor"
QT_MOC_LITERAL(13, 178, 14), // "setBorderWidth"
QT_MOC_LITERAL(14, 193, 9), // "setRadius"
QT_MOC_LITERAL(15, 203, 14), // "setBorderColor"
QT_MOC_LITERAL(16, 218, 13) // "setNbSegments"

    },
    "dnai::controls::Triangle\0fillColorChanged\0"
    "\0fillColor\0borderWidthChanged\0borderWidth\0"
    "radiusChanged\0radius\0borderColorChanged\0"
    "borderColor\0nbSegmentsChanged\0nbSegments\0"
    "setFillColor\0setBorderWidth\0setRadius\0"
    "setBorderColor\0setNbSegments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dnai__controls__Triangle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
      11, QMetaType::Int, 0x00495103,
       9, QMetaType::QColor, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       4,
       3,
       2,
       1,

       0        // eod
};

void dnai::controls::Triangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Triangle *_t = static_cast<Triangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fillColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->borderWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->radiusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->borderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->nbSegmentsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFillColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->setBorderWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setBorderColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->setNbSegments((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Triangle::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Triangle::fillColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Triangle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Triangle::borderWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Triangle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Triangle::radiusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Triangle::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Triangle::borderColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Triangle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Triangle::nbSegmentsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Triangle *_t = static_cast<Triangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->nbSegments(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->radius(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->borderWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Triangle *_t = static_cast<Triangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setNbSegments(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject dnai::controls::Triangle::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_dnai__controls__Triangle.data,
      qt_meta_data_dnai__controls__Triangle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dnai::controls::Triangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dnai::controls::Triangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dnai__controls__Triangle.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int dnai::controls::Triangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void dnai::controls::Triangle::fillColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dnai::controls::Triangle::borderWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dnai::controls::Triangle::radiusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dnai::controls::Triangle::borderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dnai::controls::Triangle::nbSegmentsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
