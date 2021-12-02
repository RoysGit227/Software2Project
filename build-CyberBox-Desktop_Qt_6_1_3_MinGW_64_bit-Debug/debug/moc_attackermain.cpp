/****************************************************************************
** Meta object code from reading C++ file 'attackermain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CyberBox/attackermain.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attackermain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Attacker_t {
    const uint offsetsAndSize[30];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Attacker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Attacker_t qt_meta_stringdata_Attacker = {
    {
QT_MOC_LITERAL(0, 8), // "Attacker"
QT_MOC_LITERAL(9, 9), // "zombieAdd"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 6), // "device"
QT_MOC_LITERAL(27, 9), // "zombieRem"
QT_MOC_LITERAL(37, 1), // "i"
QT_MOC_LITERAL(39, 11), // "badSpo2Plot"
QT_MOC_LITERAL(51, 11), // "badSpo2Data"
QT_MOC_LITERAL(63, 8), // "filename"
QT_MOC_LITERAL(72, 12), // "badClearPlot"
QT_MOC_LITERAL(85, 23), // "on_addDevButton_clicked"
QT_MOC_LITERAL(109, 26), // "on_removeDevButton_clicked"
QT_MOC_LITERAL(136, 25), // "on_addDevButton_2_clicked"
QT_MOC_LITERAL(162, 25), // "on_addDevButton_3_clicked"
QT_MOC_LITERAL(188, 21) // "on_spO2Button_clicked"

    },
    "Attacker\0zombieAdd\0\0device\0zombieRem\0"
    "i\0badSpo2Plot\0badSpo2Data\0filename\0"
    "badClearPlot\0on_addDevButton_clicked\0"
    "on_removeDevButton_clicked\0"
    "on_addDevButton_2_clicked\0"
    "on_addDevButton_3_clicked\0"
    "on_spO2Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Attacker[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    0 /* Public */,
       4,    1,   77,    2, 0x06,    2 /* Public */,
       6,    1,   80,    2, 0x06,    4 /* Public */,
       7,    1,   83,    2, 0x06,    6 /* Public */,
       9,    0,   86,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   87,    2, 0x08,    9 /* Private */,
      11,    0,   88,    2, 0x08,   10 /* Private */,
      12,    0,   89,    2, 0x08,   11 /* Private */,
      13,    0,   90,    2, 0x08,   12 /* Private */,
      14,    0,   91,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Attacker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Attacker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zombieAdd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->zombieRem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->badSpo2Plot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->badSpo2Data((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->badClearPlot(); break;
        case 5: _t->on_addDevButton_clicked(); break;
        case 6: _t->on_removeDevButton_clicked(); break;
        case 7: _t->on_addDevButton_2_clicked(); break;
        case 8: _t->on_addDevButton_3_clicked(); break;
        case 9: _t->on_spO2Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Attacker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attacker::zombieAdd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Attacker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attacker::zombieRem)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Attacker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attacker::badSpo2Plot)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Attacker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attacker::badSpo2Data)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Attacker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attacker::badClearPlot)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Attacker::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Attacker.offsetsAndSize,
    qt_meta_data_Attacker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Attacker_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Attacker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attacker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Attacker.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Attacker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Attacker::zombieAdd(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Attacker::zombieRem(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Attacker::badSpo2Plot(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Attacker::badSpo2Data(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Attacker::badClearPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
