/****************************************************************************
** Meta object code from reading C++ file 'qquickscreen_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickscreen_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickscreen_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickScreenAttached_t {
    QByteArrayData data[25];
    char stringdata[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QQuickScreenAttached_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QQuickScreenAttached_t qt_meta_stringdata_QQuickScreenAttached = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 11),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 12),
QT_MOC_LITERAL(4, 47, 13),
QT_MOC_LITERAL(5, 61, 22),
QT_MOC_LITERAL(6, 84, 26),
QT_MOC_LITERAL(7, 111, 19),
QT_MOC_LITERAL(8, 131, 25),
QT_MOC_LITERAL(9, 157, 18),
QT_MOC_LITERAL(10, 176, 13),
QT_MOC_LITERAL(11, 190, 8),
QT_MOC_LITERAL(12, 199, 12),
QT_MOC_LITERAL(13, 212, 1),
QT_MOC_LITERAL(14, 214, 1),
QT_MOC_LITERAL(15, 216, 4),
QT_MOC_LITERAL(16, 221, 5),
QT_MOC_LITERAL(17, 227, 6),
QT_MOC_LITERAL(18, 234, 21),
QT_MOC_LITERAL(19, 256, 22),
QT_MOC_LITERAL(20, 279, 19),
QT_MOC_LITERAL(21, 299, 12),
QT_MOC_LITERAL(22, 312, 18),
QT_MOC_LITERAL(23, 331, 21),
QT_MOC_LITERAL(24, 353, 11)
    },
    "QQuickScreenAttached\0nameChanged\0\0"
    "widthChanged\0heightChanged\0"
    "desktopGeometryChanged\0"
    "logicalPixelDensityChanged\0"
    "pixelDensityChanged\0primaryOrientationChanged\0"
    "orientationChanged\0screenChanged\0"
    "QScreen*\0angleBetween\0a\0b\0name\0width\0"
    "height\0desktopAvailableWidth\0"
    "desktopAvailableHeight\0logicalPixelDensity\0"
    "pixelDensity\0primaryOrientation\0"
    "Qt::ScreenOrientation\0orientation\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScreenAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x86,
       3,    0,   75,    2, 0x06,
       4,    0,   76,    2, 0x06,
       5,    0,   77,    2, 0x86,
       6,    0,   78,    2, 0x86,
       7,    0,   79,    2, 0x86,
       8,    0,   80,    2, 0x06,
       9,    0,   81,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    1,   82,    2, 0x09,

 // methods: name, argc, parameters, tag, flags
      12,    2,   85,    2, 0x02,

 // signals: revision
       1,
       0,
       0,
       1,
       1,
       2,
       0,
       0,

 // slots: revision
       0,

 // methods: revision
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,

 // methods: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00c95001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00c95001,
      19, QMetaType::Int, 0x00c95001,
      20, QMetaType::QReal, 0x00c95001,
      21, QMetaType::QReal, 0x00c95001,
      22, 0x80000000 | 23, 0x00495009,
      24, 0x80000000 | 23, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,
       4,
       5,
       6,
       7,

 // properties: revision
       1,
       0,
       0,
       1,
       1,
       1,
       2,
       0,
       0,

       0        // eod
};

void QQuickScreenAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickScreenAttached *_t = static_cast<QQuickScreenAttached *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->widthChanged(); break;
        case 2: _t->heightChanged(); break;
        case 3: _t->desktopGeometryChanged(); break;
        case 4: _t->logicalPixelDensityChanged(); break;
        case 5: _t->pixelDensityChanged(); break;
        case 6: _t->primaryOrientationChanged(); break;
        case 7: _t->orientationChanged(); break;
        case 8: _t->screenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 9: { int _r = _t->angleBetween((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::widthChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::heightChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::desktopGeometryChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::logicalPixelDensityChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::pixelDensityChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::primaryOrientationChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QQuickScreenAttached::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickScreenAttached::orientationChanged)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject QQuickScreenAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickScreenAttached.data,
      qt_meta_data_QQuickScreenAttached,  qt_static_metacall, 0, 0}
};


const QMetaObject *QQuickScreenAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScreenAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScreenAttached.stringdata))
        return static_cast<void*>(const_cast< QQuickScreenAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickScreenAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< int*>(_v) = width(); break;
        case 2: *reinterpret_cast< int*>(_v) = height(); break;
        case 3: *reinterpret_cast< int*>(_v) = desktopAvailableWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = desktopAvailableHeight(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = logicalPixelDensity(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = pixelDensity(); break;
        case 7: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = primaryOrientation(); break;
        case 8: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = orientation(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickScreenAttached::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QQuickScreenAttached::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QQuickScreenAttached::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QQuickScreenAttached::desktopGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QQuickScreenAttached::logicalPixelDensityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QQuickScreenAttached::pixelDensityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QQuickScreenAttached::primaryOrientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QQuickScreenAttached::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
struct qt_meta_stringdata_QQuickScreen_t {
    QByteArrayData data[1];
    char stringdata[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QQuickScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QQuickScreen_t qt_meta_stringdata_QQuickScreen = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "QQuickScreen\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScreen[] = {

 // content:
       7,       // revision
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

void QQuickScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickScreen.data,
      qt_meta_data_QQuickScreen,  qt_static_metacall, 0, 0}
};


const QMetaObject *QQuickScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScreen.stringdata))
        return static_cast<void*>(const_cast< QQuickScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
