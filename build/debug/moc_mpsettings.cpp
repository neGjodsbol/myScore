/****************************************************************************
** Meta object code from reading C++ file 'mpsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MusePad/mscore/mpsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MpSettings_t {
    QByteArrayData data[15];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpSettings_t qt_meta_stringdata_MpSettings = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MpSettings"
QT_MOC_LITERAL(1, 11, 11), // "mpGuiAction"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "mpAction"
QT_MOC_LITERAL(4, 33, 11), // "const char*"
QT_MOC_LITERAL(5, 45, 12), // "mpLayoutMode"
QT_MOC_LITERAL(6, 58, 23), // "on_cPitchButton_clicked"
QT_MOC_LITERAL(7, 82, 29), // "on_scrollTypeButton_activated"
QT_MOC_LITERAL(8, 112, 5), // "index"
QT_MOC_LITERAL(9, 118, 28), // "on_instrumentsButton_clicked"
QT_MOC_LITERAL(10, 147, 26), // "on_scoreInfoButton_clicked"
QT_MOC_LITERAL(11, 174, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(12, 196, 27), // "on_singleNoteButton_clicked"
QT_MOC_LITERAL(13, 224, 24), // "on_rePitchButton_clicked"
QT_MOC_LITERAL(14, 249, 24) // "on_reRythmButton_clicked"

    },
    "MpSettings\0mpGuiAction\0\0mpAction\0"
    "const char*\0mpLayoutMode\0"
    "on_cPitchButton_clicked\0"
    "on_scrollTypeButton_activated\0index\0"
    "on_instrumentsButton_clicked\0"
    "on_scoreInfoButton_clicked\0"
    "on_helpButton_clicked\0on_singleNoteButton_clicked\0"
    "on_rePitchButton_clicked\0"
    "on_reRythmButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       3,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   80,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Int, 0x80000000 | 4,    2,
    QMetaType::Int, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MpSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpSettings *_t = static_cast<MpSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->mpGuiAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->mpAction((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->mpLayoutMode((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_cPitchButton_clicked(); break;
        case 4: _t->on_scrollTypeButton_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_instrumentsButton_clicked(); break;
        case 6: _t->on_scoreInfoButton_clicked(); break;
        case 7: _t->on_helpButton_clicked(); break;
        case 8: _t->on_singleNoteButton_clicked(); break;
        case 9: _t->on_rePitchButton_clicked(); break;
        case 10: _t->on_reRythmButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef int (MpSettings::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpSettings::mpGuiAction)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (MpSettings::*_t)(const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpSettings::mpAction)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (MpSettings::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MpSettings::mpLayoutMode)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MpSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MpSettings.data,
      qt_meta_data_MpSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MpSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MpSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MpSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
int MpSettings::mpGuiAction(QString _t1, QString _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int MpSettings::mpAction(const char * _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int MpSettings::mpLayoutMode(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
