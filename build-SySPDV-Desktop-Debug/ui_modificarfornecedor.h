/********************************************************************************
** Form generated from reading UI file 'modificarfornecedor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARFORNECEDOR_H
#define UI_MODIFICARFORNECEDOR_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modificarFornecedor
{
public:
    QLabel *labelModificarDados;
    QPushButton *pushButtonOkModificarDado;
    QPushButton *pushButtonCancelarModificarDados;
    QWidget *widget;
    QVBoxLayout *verticalLayoutModificarDadosFornecedores;
    QHBoxLayout *horizontalLayoutNome;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayoutTelefone;
    QLabel *labelTelefone;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayoutEndereco;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;

    void setupUi(QDialog *modificarFornecedor)
    {
        if (modificarFornecedor->objectName().isEmpty())
            modificarFornecedor->setObjectName(QString::fromUtf8("modificarFornecedor"));
        modificarFornecedor->resize(400, 300);
        labelModificarDados = new QLabel(modificarFornecedor);
        labelModificarDados->setObjectName(QString::fromUtf8("labelModificarDados"));
        labelModificarDados->setGeometry(QRect(100, 10, 201, 16));
        pushButtonOkModificarDado = new QPushButton(modificarFornecedor);
        pushButtonOkModificarDado->setObjectName(QString::fromUtf8("pushButtonOkModificarDado"));
        pushButtonOkModificarDado->setGeometry(QRect(329, 270, 61, 22));
        pushButtonCancelarModificarDados = new QPushButton(modificarFornecedor);
        pushButtonCancelarModificarDados->setObjectName(QString::fromUtf8("pushButtonCancelarModificarDados"));
        pushButtonCancelarModificarDados->setGeometry(QRect(259, 270, 61, 22));
        widget = new QWidget(modificarFornecedor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 381, 86));
        verticalLayoutModificarDadosFornecedores = new QVBoxLayout(widget);
        verticalLayoutModificarDadosFornecedores->setObjectName(QString::fromUtf8("verticalLayoutModificarDadosFornecedores"));
        verticalLayoutModificarDadosFornecedores->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QString::fromUtf8("horizontalLayoutNome"));
        labelNome = new QLabel(widget);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(widget);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutNome);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QString::fromUtf8("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(widget);
        labelTelefone->setObjectName(QString::fromUtf8("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(widget);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QString::fromUtf8("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(widget);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(widget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutEndereco);


        retranslateUi(modificarFornecedor);

        QMetaObject::connectSlotsByName(modificarFornecedor);
    } // setupUi

    void retranslateUi(QDialog *modificarFornecedor)
    {
        modificarFornecedor->setWindowTitle(QApplication::translate("modificarFornecedor", "Modificar Dados do Fornecedor", 0, QApplication::UnicodeUTF8));
        labelModificarDados->setText(QApplication::translate("modificarFornecedor", "Modificar Dados do Fornecedor:", 0, QApplication::UnicodeUTF8));
        pushButtonOkModificarDado->setText(QApplication::translate("modificarFornecedor", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancelarModificarDados->setText(QApplication::translate("modificarFornecedor", "Cancelar", 0, QApplication::UnicodeUTF8));
        labelNome->setText(QApplication::translate("modificarFornecedor", "Nome:", 0, QApplication::UnicodeUTF8));
        labelTelefone->setText(QApplication::translate("modificarFornecedor", "Telefone:", 0, QApplication::UnicodeUTF8));
        labelEndereco->setText(QApplication::translate("modificarFornecedor", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class modificarFornecedor: public Ui_modificarFornecedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARFORNECEDOR_H
