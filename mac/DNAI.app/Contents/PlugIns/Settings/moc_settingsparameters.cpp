/****************************************************************************
** Meta object code from reading C++ file 'settingsparameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Gui/plugins/Settings/settingsparameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dnai__SettingsParameters_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dnai__SettingsParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dnai__SettingsParameters_t qt_meta_stringdata_dnai__SettingsParameters = {
    {
QT_MOC_LITERAL(0, 0, 24), // "dnai::SettingsParameters"
QT_MOC_LITERAL(1, 25, 20), // "settingFolderChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "value"
QT_MOC_LITERAL(4, 53, 13), // "prefixChanged"
QT_MOC_LITERAL(5, 67, 13), // "formatChanged"
QT_MOC_LITERAL(6, 81, 17), // "QSettings::Format"
QT_MOC_LITERAL(7, 99, 17), // "themePathsChanged"
QT_MOC_LITERAL(8, 117, 19), // "currentThemeChanged"
QT_MOC_LITERAL(9, 137, 13), // "settingFolder"
QT_MOC_LITERAL(10, 151, 6), // "prefix"
QT_MOC_LITERAL(11, 158, 6), // "format"
QT_MOC_LITERAL(12, 165, 10), // "themePaths"
QT_MOC_LITERAL(13, 176, 12) // "currentTheme"

    },
    "dnai::SettingsParameters\0settingFolderChanged\0"
    "\0value\0prefixChanged\0formatChanged\0"
    "QSettings::Format\0themePathsChanged\0"
    "currentThemeChanged\0settingFolder\0"
    "prefix\0format\0themePaths\0currentTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dnai__SettingsParameters[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       7,    1,   48,    2, 0x06 /* Public */,
       8,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, 0x80000000 | 6, 0x0049510b,
      12, QMetaType::QStringList, 0x00495103,
      13, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void dnai::SettingsParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsParameters *_t = static_cast<SettingsParameters *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->prefixChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->formatChanged((*reinterpret_cast< QSettings::Format(*)>(_a[1]))); break;
        case 3: _t->themePathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->currentThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsParameters::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsParameters::settingFolderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsParameters::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsParameters::prefixChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SettingsParameters::*_t)(QSettings::Format );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsParameters::formatChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SettingsParameters::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsParameters::themePathsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SettingsParameters::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsParameters::currentThemeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SettingsParameters *_t = static_cast<SettingsParameters *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->settingFolder(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 2: *reinterpret_cast< QSettings::Format*>(_v) = _t->format(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->themePaths(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentTheme(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SettingsParameters *_t = static_cast<SettingsParameters *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSettingFolder(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFormat(*reinterpret_cast< QSettings::Format*>(_v)); break;
        case 3: _t->setThemePaths(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setCurrentTheme(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_dnai__SettingsParameters[] = {
        &QSettings::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject dnai::SettingsParameters::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_dnai__SettingsParameters.data,
      qt_meta_data_dnai__SettingsParameters,  qt_static_metacall, qt_meta_extradata_dnai__SettingsParameters, nullptr}
};


const QMetaObject *dnai::SettingsParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dnai::SettingsParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dnai__SettingsParameters.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int dnai::SettingsParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void dnai::SettingsParameters::settingFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dnai::SettingsParameters::prefixChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dnai::SettingsParameters::formatChanged(QSettings::Format _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dnai::SettingsParameters::themePathsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dnai::SettingsParameters::currentThemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
