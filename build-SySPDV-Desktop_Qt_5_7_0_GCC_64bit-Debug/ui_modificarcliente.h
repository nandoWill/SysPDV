/********************************************************************************
** Form generated from reading UI file 'modificarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARCLIENTE_H
#define UI_MODIFICARCLIENTE_H

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

class Ui_modificarCliente
{
public:
    QLabel *labelModificarDados;
    QPushButton *pushButtonOkModificar;
    QPushButton *pushButtonCancelarModificar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutModificarCliente;
    QHBoxLayout *horizontalLayoutNome;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayoutCPF;
    QLabel *labelCPF;
    QLineEdit *lineEditCPF;
    QHBoxLayout *horizontalLayoutEndereco;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;
    QHBoxLayout *horizontalLayoutTelefone;
    QLabel *labelTelefone;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayoutEmail;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;

    void setupUi(QDialog *modificarCliente)
    {
        if (modificarCliente->objectName().isEmpty())
            modificarCliente->setObjectName(QStringLiteral("modificarCliente"));
        modificarCliente->resize(400, 300);
        labelModificarDados = new QLabel(modificarCliente);
        labelModificarDados->setObjectName(QStringLiteral("labelModificarDados"));
        labelModificarDados->setGeometry(QRect(120, 20, 171, 16));
        pushButtonOkModificar = new QPushButton(modificarCliente);
        pushButtonOkModificar->setObjectName(QStringLiteral("pushButtonOkModificar"));
        pushButtonOkModificar->setGeometry(QRect(339, 260, 51, 22));
        pushButtonCancelarModificar = new QPushButton(modificarCliente);
        pushButtonCancelarModificar->setObjectName(QStringLiteral("pushButtonCancelarModificar"));
        pushButtonCancelarModificar->setGeometry(QRect(270, 260, 61, 22));
        layoutWidget = new QWidget(modificarCliente);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 361, 146));
        verticalLayoutModificarCliente = new QVBoxLayout(layoutWidget);
        verticalLayoutModificarCliente->setObjectName(QStringLiteral("verticalLayoutModificarCliente"));
        verticalLayoutModificarCliente->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QStringLiteral("horizontalLayoutNome"));
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutNome);

        horizontalLayoutCPF = new QHBoxLayout();
        horizontalLayoutCPF->setObjectName(QStringLiteral("horizontalLayoutCPF"));
        labelCPF = new QLabel(layoutWidget);
        labelCPF->setObjectName(QStringLiteral("labelCPF"));

        horizontalLayoutCPF->addWidget(labelCPF);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName(QStringLiteral("lineEditCPF"));

        horizontalLayoutCPF->addWidget(lineEditCPF);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutCPF);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QStringLiteral("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutEndereco);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QStringLiteral("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QStringLiteral("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QStringLiteral("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutEmail);


        retranslateUi(modificarCliente);

        QMetaObject::connectSlotsByName(modificarCliente);
    } // setupUi

    void retranslateUi(QDialog *modificarCliente)
    {
        modificarCliente->setWindowTitle(QApplication::translate("modificarCliente", "Modificar Dados do Cliente", 0));
        labelModificarDados->setText(QApplication::translate("modificarCliente", "Modificar Dados do Cliente:", 0));
        pushButtonOkModificar->setText(QApplication::translate("modificarCliente", "Ok", 0));
        pushButtonCancelarModificar->setText(QApplication::translate("modificarCliente", "Cancelar", 0));
        labelNome->setText(QApplication::translate("modificarCliente", "Nome:", 0));
        labelCPF->setText(QApplication::translate("modificarCliente", "CPF:", 0));
        labelEndereco->setText(QApplication::translate("modificarCliente", "Endere\303\247o:", 0));
        labelTelefone->setText(QApplication::translate("modificarCliente", "Telefone:", 0));
        labelEmail->setText(QApplication::translate("modificarCliente", "Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class modificarCliente: public Ui_modificarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARCLIENTE_H
