/********************************************************************************
** Form generated from reading UI file 'cadastrarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARCLIENTE_H
#define UI_CADASTRARCLIENTE_H

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
            cadastrarCliente->setObjectName(QStringLiteral("cadastrarCliente"));
        cadastrarCliente->resize(400, 300);
        labelCadastrarCliente = new QLabel(cadastrarCliente);
        labelCadastrarCliente->setObjectName(QStringLiteral("labelCadastrarCliente"));
        labelCadastrarCliente->setGeometry(QRect(150, 10, 111, 16));
        pushButtonOkCadastrar = new QPushButton(cadastrarCliente);
        pushButtonOkCadastrar->setObjectName(QStringLiteral("pushButtonOkCadastrar"));
        pushButtonOkCadastrar->setGeometry(QRect(339, 270, 51, 22));
        pushButtonCancelarCadastro = new QPushButton(cadastrarCliente);
        pushButtonCancelarCadastro->setObjectName(QStringLiteral("pushButtonCancelarCadastro"));
        pushButtonCancelarCadastro->setGeometry(QRect(270, 270, 61, 22));
        layoutWidget = new QWidget(cadastrarCliente);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 361, 146));
        verticalLayoutCadastrarCliente = new QVBoxLayout(layoutWidget);
        verticalLayoutCadastrarCliente->setObjectName(QStringLiteral("verticalLayoutCadastrarCliente"));
        verticalLayoutCadastrarCliente->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QStringLiteral("horizontalLayoutNome"));
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutNome);

        horizontalLayoutCPF = new QHBoxLayout();
        horizontalLayoutCPF->setObjectName(QStringLiteral("horizontalLayoutCPF"));
        labelCPF = new QLabel(layoutWidget);
        labelCPF->setObjectName(QStringLiteral("labelCPF"));

        horizontalLayoutCPF->addWidget(labelCPF);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName(QStringLiteral("lineEditCPF"));

        horizontalLayoutCPF->addWidget(lineEditCPF);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutCPF);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QStringLiteral("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QStringLiteral("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QStringLiteral("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutEndereco);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QStringLiteral("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutCadastrarCliente->addLayout(horizontalLayoutEmail);


        retranslateUi(cadastrarCliente);

        QMetaObject::connectSlotsByName(cadastrarCliente);
    } // setupUi

    void retranslateUi(QDialog *cadastrarCliente)
    {
        cadastrarCliente->setWindowTitle(QApplication::translate("cadastrarCliente", "Cadastrar Clientes", 0));
        labelCadastrarCliente->setText(QApplication::translate("cadastrarCliente", "Cadastrar Cliente", 0));
        pushButtonOkCadastrar->setText(QApplication::translate("cadastrarCliente", "Ok", 0));
        pushButtonCancelarCadastro->setText(QApplication::translate("cadastrarCliente", "Cancelar", 0));
        labelNome->setText(QApplication::translate("cadastrarCliente", "Nome:", 0));
        labelCPF->setText(QApplication::translate("cadastrarCliente", "CPF:", 0));
        labelTelefone->setText(QApplication::translate("cadastrarCliente", "Telefone:", 0));
        labelEndereco->setText(QApplication::translate("cadastrarCliente", "Endere\303\247o:", 0));
        labelEmail->setText(QApplication::translate("cadastrarCliente", "Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class cadastrarCliente: public Ui_cadastrarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARCLIENTE_H
