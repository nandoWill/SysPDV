/********************************************************************************
** Form generated from reading UI file 'cadastrarcliente.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARCLIENTE_H
#define UI_CADASTRARCLIENTE_H

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

class Ui_cadastrarCliente
{
public:
    QLabel *labelCadastrarCliente;
    QPushButton *pushButtonOkCadastrar;
    QPushButton *pushButtonCancelarCadastro;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutCadastrarCliente;
    QHBoxLayout *horizontalLayoutNome;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayoutCPF;
    QLabel *labelCPF;
    QLineEdit *lineEditCPF;
    QHBoxLayout *horizontalLayoutTelefone;
    QLabel *labelTelefone;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayoutEndereco;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;
    QHBoxLayout *horizontalLayoutEmail;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;

    void setupUi(QDialog *cadastrarCliente)
    {
        if (cadastrarCliente->objectName().isEmpty())
            cadastrarCliente->setObjectName(QString::fromUtf8("cadastrarCliente"));
        cadastrarCliente->resize(400, 300);
        labelCadastrarCliente = new QLabel(cadastrarCliente);
        labelCadastrarCliente->setObjectName(QString::fromUtf8("labelCadastrarCliente"));
        labelCadastrarCliente->setGeometry(QRect(150, 10, 111, 16));
        pushButtonOkCadastrar = new QPushButton(cadastrarCliente);
        pushButtonOkCadastrar->setObjectName(QString::fromUtf8("pushButtonOkCadastrar"));
        pushButtonOkCadastrar->setGeometry(QRect(339, 270, 51, 22));
        pushButtonCancelarCadastro = new QPushButton(cadastrarCliente);
        pushButtonCancelarCadastro->setObjectName(QString::fromUtf8("pushButtonCancelarCadastro"));
        pushButtonCancelarCadastro->setGeometry(QRect(270, 270, 61, 22));
        layoutWidget = new QWidget(cadastrarCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 361, 146));
        verticalLayoutCadastrarCliente = new QVBoxLayout(layoutWidget);
        verticalLayoutCadastrarCliente->setObjectName(QString::fromUtf8("verticalLayoutCadastrarCliente"));
        verticalLayoutCadastrarCliente->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QString::fromUtf8("horizontalLayoutNome"));
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutNome);

        horizontalLayoutCPF = new QHBoxLayout();
        horizontalLayoutCPF->setObjectName(QString::fromUtf8("horizontalLayoutCPF"));
        labelCPF = new QLabel(layoutWidget);
        labelCPF->setObjectName(QString::fromUtf8("labelCPF"));

        horizontalLayoutCPF->addWidget(labelCPF);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName(QString::fromUtf8("lineEditCPF"));

        horizontalLayoutCPF->addWidget(lineEditCPF);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutCPF);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QString::fromUtf8("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QString::fromUtf8("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QString::fromUtf8("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutEndereco);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QString::fromUtf8("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutEmail);


        retranslateUi(cadastrarCliente);

        QMetaObject::connectSlotsByName(cadastrarCliente);
    } // setupUi

    void retranslateUi(QDialog *cadastrarCliente)
    {
        cadastrarCliente->setWindowTitle(QApplication::translate("cadastrarCliente", "Cadastrar Clientes", 0, QApplication::UnicodeUTF8));
        labelCadastrarCliente->setText(QApplication::translate("cadastrarCliente", "Cadastrar Cliente", 0, QApplication::UnicodeUTF8));
        pushButtonOkCadastrar->setText(QApplication::translate("cadastrarCliente", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancelarCadastro->setText(QApplication::translate("cadastrarCliente", "Cancelar", 0, QApplication::UnicodeUTF8));
        labelNome->setText(QApplication::translate("cadastrarCliente", "Nome:", 0, QApplication::UnicodeUTF8));
        labelCPF->setText(QApplication::translate("cadastrarCliente", "CPF:", 0, QApplication::UnicodeUTF8));
        labelTelefone->setText(QApplication::translate("cadastrarCliente", "Telefone:", 0, QApplication::UnicodeUTF8));
        labelEndereco->setText(QApplication::translate("cadastrarCliente", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
        labelEmail->setText(QApplication::translate("cadastrarCliente", "Email:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cadastrarCliente: public Ui_cadastrarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARCLIENTE_H
