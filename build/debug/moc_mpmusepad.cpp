/****************************************************************************
** Meta object code from reading C++ file 'mpmusepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusePad/mscore/mpmusepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpmusepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MusePad_t {
    QByteArrayData data[16];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MusePad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MusePad_t qt_meta_stringdata_MusePad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MusePad"
QT_MOC_LITERAL(1, 8, 8), // "mpAction"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "QAction*"
QT_MOC_LITERAL(4, 27, 12), // "mpSetPalette"
QT_MOC_LITERAL(5, 40, 5), // "mpCmd"
QT_MOC_LITERAL(6, 46, 11), // "const char*"
QT_MOC_LITERAL(7, 58, 13), // "mpShowPalette"
QT_MOC_LITERAL(8, 72, 3), // "cmd"
QT_MOC_LITERAL(9, 76, 14), // "mpSetVoiceIcon"
QT_MOC_LITERAL(10, 91, 12), // "helpBrowser1"
QT_MOC_LITERAL(11, 104, 5), // "about"
QT_MOC_LITERAL(12, 110, 7), // "aboutQt"
QT_MOC_LITERAL(13, 118, 13), // "aboutMusicXML"
QT_MOC_LITERAL(14, 132, 9), // "reportBug"
QT_MOC_LITERAL(15, 142, 16) // "switchLayoutMode"

    },
    "MusePad\0mpAction\0\0QAction*\0mpSetPalette\0"
    "mpCmd\0const char*\0mpShowPalette\0cmd\0"
    "mpSetVoiceIcon\0helpBrowser1\0about\0"
    "aboutQt\0aboutMusicXML\0reportBug\0"
    "switchLayoutMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusePad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   90,    2, 0x08 /* Private */,
       5,    2,   93,    2, 0x08 /* Private */,
       5,    1,   98,    2, 0x08 /* Private */,
       7,    1,  101,    2, 0x08 /* Private */,
       8,    1,  104,    2, 0x08 /* Private */,
       9,    1,  107,    2, 0x08 /* Private */,
      10,    0,  110,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    0,  114,    2, 0x08 /* Private */,
      15,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, 0x80000000 | 3,    2,
    QMetaType::Int, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MusePad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MusePad *_t = static_cast<MusePad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->mpAction((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->mpSetPalette((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->mpCmd((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->mpCmd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->mpCmd((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->mpShowPalette((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->cmd((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->mpSetVoiceIcon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->helpBrowser1(); break;
        case 9: _t->about(); break;
        case 10: _t->aboutQt(); break;
        case 11: _t->aboutMusicXML(); break;
        case 12: _t->reportBug(); break;
        case 13: _t->switchLayoutMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef int (MusePad::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusePad::mpAction)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (MusePad::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusePad::mpSetPalette)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MusePad::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MusePad.data,
      qt_meta_data_MusePad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MusePad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusePad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusePad.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MuseScoreCore"))
        return static_cast< MuseScoreCore*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MusePad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
int MusePad::mpAction(QAction * _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int MusePad::mpSetPalette(QAction * _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
