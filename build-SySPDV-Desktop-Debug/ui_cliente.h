/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cliente
{
public:
    QLabel *labelClientes;
    QLabel *labelProcurarPorCliente;
    QPushButton *pushButtonOkCliente;
    QTableView *tableViewTabelaCliente;
    QPushButton *pushButtonModificarCliente;
    QPushButton *pushButtonDeletarCliente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutProcurarPor;
    QHBoxLayout *horizontalLayoutProcurarPor;
    QLabel *labelCodigo;
    QLineEdit *lineEditProcurarPorCodigo;
    QHBoxLayout *horizontalLayoutProcurarPor_2;
    QLabel *labelNome;
    QLineEdit *lineEditProcurarPorNome;

    void setupUi(QDialog *cliente)
    {
        if (cliente->objectName().isEmpty())
            cliente->setObjectName(QString::fromUtf8("cliente"));
        cliente->resize(534, 300);
        labelClientes = new QLabel(cliente);
        labelClientes->setObjectName(QString::fromUtf8("labelClientes"));
        labelClientes->setGeometry(QRect(250, 0, 59, 14));
        labelProcurarPorCliente = new QLabel(cliente);
        labelProcurarPorCliente->setObjectName(QString::fromUtf8("labelProcurarPorCliente"));
        labelProcurarPorCliente->setGeometry(QRect(40, 10, 81, 16));
        pushButtonOkCliente = new QPushButton(cliente);
        pushButtonOkCliente->setObjectName(QString::fromUtf8("pushButtonOkCliente"));
        pushButtonOkCliente->setGeometry(QRect(470, 40, 51, 31));
        tableViewTabelaCliente = new QTableView(cliente);
        tableViewTabelaCliente->setObjectName(QString::fromUtf8("tableViewTabelaCliente"));
        tableViewTabelaCliente->setGeometry(QRect(110, 90, 351, 192));
        pushButtonModificarCliente = new QPushButton(cliente);
        pushButtonModificarCliente->setObjectName(QString::fromUtf8("pushButtonModificarCliente"));
        pushButtonModificarCliente->setEnabled(false);
        pushButtonModificarCliente->setGeometry(QRect(10, 160, 80, 22));
        pushButtonDeletarCliente = new QPushButton(cliente);
        pushButtonDeletarCliente->setObjectName(QString::fromUtf8("pushButtonDeletarCliente"));
        pushButtonDeletarCliente->setEnabled(false);
        pushButtonDeletarCliente->setGeometry(QRect(10, 190, 80, 22));
        layoutWidget = new QWidget(cliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 411, 56));
        verticalLayoutProcurarPor = new QVBoxLayout(layoutWidget);
        verticalLayoutProcurarPor->setSpacing(6);
        verticalLayoutProcurarPor->setContentsMargins(11, 11, 11, 11);
        verticalLayoutProcurarPor->setObjectName(QString::fromUtf8("verticalLayoutProcurarPor"));
        verticalLayoutProcurarPor->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutProcurarPor = new QHBoxLayout();
        horizontalLayoutProcurarPor->setSpacing(6);
        horizontalLayoutProcurarPor->setObjectName(QString::fromUtf8("horizontalLayoutProcurarPor"));
        labelCodigo = new QLabel(layoutWidget);
        labelCodigo->setObjectName(QString::fromUtf8("labelCodigo"));

        horizontalLayoutProcurarPor->addWidget(labelCodigo);

        lineEditProcurarPorCodigo = new QLineEdit(layoutWidget);
        lineEditProcurarPorCodigo->setObjectName(QString::fromUtf8("lineEditProcurarPorCodigo"));

        horizontalLayoutProcurarPor->addWidget(lineEditProcurarPorCodigo);


        verticalLayoutProcurarPor->addLayout(horizontalLayoutProcurarPor);

        horizontalLayoutProcurarPor_2 = new QHBoxLayout();
        horizontalLayoutProcurarPor_2->setSpacing(6);
        horizontalLayoutProcurarPor_2->setObjectName(QString::fromUtf8("horizontalLayoutProcurarPor_2"));
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        horizontalLayoutProcurarPor_2->addWidget(labelNome);

        lineEditProcurarPorNome = new QLineEdit(layoutWidget);
        lineEditProcurarPorNome->setObjectName(QString::fromUtf8("lineEditProcurarPorNome"));

        horizontalLayoutProcurarPor_2->addWidget(lineEditProcurarPorNome);


        verticalLayoutProcurarPor->addLayout(horizontalLayoutProcurarPor_2);


        retranslateUi(cliente);

        QMetaObject::connectSlotsByName(cliente);
    } // setupUi

    void retranslateUi(QDialog *cliente)
    {
        cliente->setWindowTitle(QApplication::translate("cliente", "Cliente", 0, QApplication::UnicodeUTF8));
        labelClientes->setText(QApplication::translate("cliente", "Clientes:", 0, QApplication::UnicodeUTF8));
        labelProcurarPorCliente->setText(QApplication::translate("cliente", "Procurar Por:", 0, QApplication::UnicodeUTF8));
        pushButtonOkCliente->setText(QApplication::translate("cliente", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonModificarCliente->setText(QApplication::translate("cliente", "Modificar", 0, QApplication::UnicodeUTF8));
        pushButtonDeletarCliente->setText(QApplication::translate("cliente", "Deletar", 0, QApplication::UnicodeUTF8));
        labelCodigo->setText(QApplication::translate("cliente", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        labelNome->setText(QApplication::translate("cliente", "Nome:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cliente: public Ui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
