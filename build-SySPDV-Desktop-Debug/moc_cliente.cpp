/****************************************************************************
** Meta object code from reading C++ file 'cliente.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SySPDV/cliente.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cliente[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      49,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cliente[] = {
    "cliente\0\0on_pushButtonCadastrarCliente_clicked()\0"
    "on_pushButtonModificarCliente_clicked()\0"
};

void cliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        cliente *_t = static_cast<cliente *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonCadastrarCliente_clicked(); break;
        case 1: _t->on_pushButtonModificarCliente_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cliente::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cliente::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cliente,
      qt_meta_data_cliente, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cliente::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cliente::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cliente))
        return static_cast<void*>(const_cast< cliente*>(this));
    return QDialog::qt_metacast(_clname);
}

int cliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
