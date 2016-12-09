/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SySPDV/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 35), // "on_actionCadastrarProduto_tri..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 31), // "on_actionReceber_Lote_triggered"
QT_MOC_LITERAL(4, 80, 36), // "on_actionVerificar_Estoque_tr..."
QT_MOC_LITERAL(5, 117, 39), // "on_actionAdicionar_Fornecedor..."
QT_MOC_LITERAL(6, 157, 41), // "on_actionPesquisar_Fornecedor..."
QT_MOC_LITERAL(7, 199, 40), // "on_actionCadastrar_Funcionari..."
QT_MOC_LITERAL(8, 240, 40), // "on_actionPesquisar_Funcionari..."
QT_MOC_LITERAL(9, 281, 36), // "on_actionAdicionar_Cliente_tr..."
QT_MOC_LITERAL(10, 318, 34), // "on_actionBuscar_Clientes_trig..."
QT_MOC_LITERAL(11, 353, 37), // "on_actionPesquisar_Clientes_t..."
QT_MOC_LITERAL(12, 391, 36) // "on_actionPesquisar_Cliente_tr..."

    },
    "MainWindow\0on_actionCadastrarProduto_triggered\0"
    "\0on_actionReceber_Lote_triggered\0"
    "on_actionVerificar_Estoque_triggered\0"
    "on_actionAdicionar_Fornecedor_triggered\0"
    "on_actionPesquisar_Fornecedores_triggered\0"
    "on_actionCadastrar_Funcionario_triggered\0"
    "on_actionPesquisar_Funcionario_triggered\0"
    "on_actionAdicionar_Cliente_triggered\0"
    "on_actionBuscar_Clientes_triggered\0"
    "on_actionPesquisar_Clientes_triggered\0"
    "on_actionPesquisar_Cliente_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionCadastrarProduto_triggered(); break;
        case 1: _t->on_actionReceber_Lote_triggered(); break;
        case 2: _t->on_actionVerificar_Estoque_triggered(); break;
        case 3: _t->on_actionAdicionar_Fornecedor_triggered(); break;
        case 4: _t->on_actionPesquisar_Fornecedores_triggered(); break;
        case 5: _t->on_actionCadastrar_Funcionario_triggered(); break;
        case 6: _t->on_actionPesquisar_Funcionario_triggered(); break;
        case 7: _t->on_actionAdicionar_Cliente_triggered(); break;
        case 8: _t->on_actionPesquisar_Cliente_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
