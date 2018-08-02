/****************************************************************************
** Meta object code from reading C++ file 'qrcodedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/qrcodedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrcodedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRCodeDialog_t {
    QByteArrayData data[9];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRCodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRCodeDialog_t qt_meta_stringdata_QRCodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QRCodeDialog"
QT_MOC_LITERAL(1, 13, 26), // "on_lnReqAmount_textChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 22), // "on_lnLabel_textChanged"
QT_MOC_LITERAL(4, 64, 24), // "on_lnMessage_textChanged"
QT_MOC_LITERAL(5, 89, 20), // "on_btnSaveAs_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_chkReqPayment_toggled"
QT_MOC_LITERAL(7, 135, 8), // "fChecked"
QT_MOC_LITERAL(8, 144, 17) // "updateDisplayUnit"

    },
    "QRCodeDialog\0on_lnReqAmount_textChanged\0"
    "\0on_lnLabel_textChanged\0"
    "on_lnMessage_textChanged\0on_btnSaveAs_clicked\0"
    "on_chkReqPayment_toggled\0fChecked\0"
    "updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRCodeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void QRCodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRCodeDialog *_t = static_cast<QRCodeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lnReqAmount_textChanged(); break;
        case 1: _t->on_lnLabel_textChanged(); break;
        case 2: _t->on_lnMessage_textChanged(); break;
        case 3: _t->on_btnSaveAs_clicked(); break;
        case 4: _t->on_chkReqPayment_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateDisplayUnit(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QRCodeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QRCodeDialog.data,
      qt_meta_data_QRCodeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRCodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRCodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRCodeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QRCodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
