/****************************************************************************
** Meta object code from reading C++ file 'personwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../personwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSpersonwindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSpersonwindowENDCLASS = QtMocHelpers::stringData(
    "personwindow",
    "on_check",
    "",
    "x",
    "addEvent",
    "handleSelected",
    "handleGoing",
    "handleUpdate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSpersonwindowENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[9];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSpersonwindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSpersonwindowENDCLASS_t qt_meta_stringdata_CLASSpersonwindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "personwindow"
        QT_MOC_LITERAL(13, 8),  // "on_check"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 1),  // "x"
        QT_MOC_LITERAL(25, 8),  // "addEvent"
        QT_MOC_LITERAL(34, 14),  // "handleSelected"
        QT_MOC_LITERAL(49, 11),  // "handleGoing"
        QT_MOC_LITERAL(61, 12)   // "handleUpdate"
    },
    "personwindow",
    "on_check",
    "",
    "x",
    "addEvent",
    "handleSelected",
    "handleGoing",
    "handleUpdate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSpersonwindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    0,   47,    2, 0x0a,    3 /* Public */,
       5,    0,   48,    2, 0x0a,    4 /* Public */,
       6,    0,   49,    2, 0x0a,    5 /* Public */,
       7,    0,   50,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject personwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSpersonwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSpersonwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSpersonwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<personwindow, std::true_type>,
        // method 'on_check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleGoing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void personwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_check((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->addEvent(); break;
        case 2: _t->handleSelected(); break;
        case 3: _t->handleGoing(); break;
        case 4: _t->handleUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject *personwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSpersonwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(this);
    return QWidget::qt_metacast(_clname);
}

int personwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
