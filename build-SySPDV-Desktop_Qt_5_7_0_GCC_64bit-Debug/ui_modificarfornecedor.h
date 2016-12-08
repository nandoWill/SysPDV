/********************************************************************************
** Form generated from reading UI file 'modificarfornecedor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARFORNECEDOR_H
#define UI_MODIFICARFORNECEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
            modificarFornecedor->setObjectName(QStringLiteral("modificarFornecedor"));
        modificarFornecedor->resize(400, 300);
        labelModificarDados = new QLabel(modificarFornecedor);
        labelModificarDados->setObjectName(QStringLiteral("labelModificarDados"));
        labelModificarDados->setGeometry(QRect(100, 10, 201, 16));
        pushButtonOkModificarDado = new QPushButton(modificarFornecedor);
        pushButtonOkModificarDado->setObjectName(QStringLiteral("pushButtonOkModificarDado"));
        pushButtonOkModificarDado->setGeometry(QRect(329, 270, 61, 22));
        pushButtonCancelarModificarDados = new QPushButton(modificarFornecedor);
        pushButtonCancelarModificarDados->setObjectName(QStringLiteral("pushButtonCancelarModificarDados"));
        pushButtonCancelarModificarDados->setGeometry(QRect(259, 270, 61, 22));
        widget = new QWidget(modificarFornecedor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 381, 86));
        verticalLayoutModificarDadosFornecedores = new QVBoxLayout(widget);
        verticalLayoutModificarDadosFornecedores->setObjectName(QStringLiteral("verticalLayoutModificarDadosFornecedores"));
        verticalLayoutModificarDadosFornecedores->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QStringLiteral("horizontalLayoutNome"));
        labelNome = new QLabel(widget);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(widget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutNome);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QStringLiteral("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(widget);
        labelTelefone->setObjectName(QStringLiteral("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(widget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QStringLiteral("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(widget);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(widget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutModificarDadosFornecedores->addLayout(horizontalLayoutEndereco);


        retranslateUi(modificarFornecedor);

        QMetaObject::connectSlotsByName(modificarFornecedor);
    } // setupUi

    void retranslateUi(QDialog *modificarFornecedor)
    {
        modificarFornecedor->setWindowTitle(QApplication::translate("modificarFornecedor", "Modificar Dados do Fornecedor", 0));
        labelModificarDados->setText(QApplication::translate("modificarFornecedor", "Modificar Dados do Fornecedor:", 0));
        pushButtonOkModificarDado->setText(QApplication::translate("modificarFornecedor", "Ok", 0));
        pushButtonCancelarModificarDados->setText(QApplication::translate("modificarFornecedor", "Cancelar", 0));
        labelNome->setText(QApplication::translate("modificarFornecedor", "Nome:", 0));
        labelTelefone->setText(QApplication::translate("modificarFornecedor", "Telefone:", 0));
        labelEndereco->setText(QApplication::translate("modificarFornecedor", "Endere\303\247o:", 0));
    } // retranslateUi

};

namespace Ui {
    class modificarFornecedor: public Ui_modificarFornecedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARFORNECEDOR_H
