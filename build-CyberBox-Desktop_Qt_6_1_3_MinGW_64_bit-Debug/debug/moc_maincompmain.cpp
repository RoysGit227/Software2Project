/****************************************************************************
** Meta object code from reading C++ file 'maincompmain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CyberBox/maincompmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincompmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainCompMain_t {
    const uint offsetsAndSize[24];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainCompMain_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainCompMain_t qt_meta_stringdata_MainCompMain = {
    {
QT_MOC_LITERAL(0, 12), // "MainCompMain"
QT_MOC_LITERAL(13, 31), // "on_EncryptionPushButton_clicked"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 31), // "on_DecryptionPushButton_clicked"
QT_MOC_LITERAL(78, 18), // "on_Reset_triggered"
QT_MOC_LITERAL(97, 27), // "on_ClearPlainText_triggered"
QT_MOC_LITERAL(125, 30), // "on_CleaEncryptedText_triggered"
QT_MOC_LITERAL(156, 17), // "on_Exit_triggered"
QT_MOC_LITERAL(174, 27), // "on_actionAbout_Qt_triggered"
QT_MOC_LITERAL(202, 34), // "on_TypeComboBox_currentTextCh..."
QT_MOC_LITERAL(237, 4), // "arg1"
QT_MOC_LITERAL(242, 21) // "on_pushButton_clicked"

    },
    "MainCompMain\0on_EncryptionPushButton_clicked\0"
    "\0on_DecryptionPushButton_clicked\0"
    "on_Reset_triggered\0on_ClearPlainText_triggered\0"
    "on_CleaEncryptedText_triggered\0"
    "on_Exit_triggered\0on_actionAbout_Qt_triggered\0"
    "on_TypeComboBox_currentTextChanged\0"
    "arg1\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainCompMain[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    0 /* Private */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    0,   70,    2, 0x08,    2 /* Private */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    1,   75,    2, 0x08,    7 /* Private */,
      11,    0,   78,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void MainCompMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainCompMain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_EncryptionPushButton_clicked(); break;
        case 1: _t->on_DecryptionPushButton_clicked(); break;
        case 2: _t->on_Reset_triggered(); break;
        case 3: _t->on_ClearPlainText_triggered(); break;
        case 4: _t->on_CleaEncryptedText_triggered(); break;
        case 5: _t->on_Exit_triggered(); break;
        case 6: _t->on_actionAbout_Qt_triggered(); break;
        case 7: _t->on_TypeComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainCompMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainCompMain.offsetsAndSize,
    qt_meta_data_MainCompMain,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainCompMain_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainCompMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainCompMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainCompMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainCompMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
