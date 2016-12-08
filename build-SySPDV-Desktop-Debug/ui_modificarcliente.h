/********************************************************************************
** Form generated from reading UI file 'modificarcliente.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARCLIENTE_H
#define UI_MODIFICARCLIENTE_H

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
            modificarCliente->setObjectName(QString::fromUtf8("modificarCliente"));
        modificarCliente->resize(400, 300);
        labelModificarDados = new QLabel(modificarCliente);
        labelModificarDados->setObjectName(QString::fromUtf8("labelModificarDados"));
        labelModificarDados->setGeometry(QRect(120, 20, 171, 16));
        pushButtonOkModificar = new QPushButton(modificarCliente);
        pushButtonOkModificar->setObjectName(QString::fromUtf8("pushButtonOkModificar"));
        pushButtonOkModificar->setGeometry(QRect(339, 260, 51, 22));
        pushButtonCancelarModificar = new QPushButton(modificarCliente);
        pushButtonCancelarModificar->setObjectName(QString::fromUtf8("pushButtonCancelarModificar"));
        pushButtonCancelarModificar->setGeometry(QRect(270, 260, 61, 22));
        layoutWidget = new QWidget(modificarCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 361, 146));
        verticalLayoutModificarCliente = new QVBoxLayout(layoutWidget);
        verticalLayoutModificarCliente->setObjectName(QString::fromUtf8("verticalLayoutModificarCliente"));
        verticalLayoutModificarCliente->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNome = new QHBoxLayout();
        horizontalLayoutNome->setObjectName(QString::fromUtf8("horizontalLayoutNome"));
        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        horizontalLayoutNome->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayoutNome->addWidget(lineEditNome);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutNome);

        horizontalLayoutCPF = new QHBoxLayout();
        horizontalLayoutCPF->setObjectName(QString::fromUtf8("horizontalLayoutCPF"));
        labelCPF = new QLabel(layoutWidget);
        labelCPF->setObjectName(QString::fromUtf8("labelCPF"));

        horizontalLayoutCPF->addWidget(labelCPF);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName(QString::fromUtf8("lineEditCPF"));

        horizontalLayoutCPF->addWidget(lineEditCPF);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutCPF);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QString::fromUtf8("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutEndereco);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QString::fromUtf8("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QString::fromUtf8("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QString::fromUtf8("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutModificarCliente->addLayout(horizontalLayoutEmail);


        retranslateUi(modificarCliente);

        QMetaObject::connectSlotsByName(modificarCliente);
    } // setupUi

    void retranslateUi(QDialog *modificarCliente)
    {
        modificarCliente->setWindowTitle(QApplication::translate("modificarCliente", "Modificar Dados do Cliente", 0, QApplication::UnicodeUTF8));
        labelModificarDados->setText(QApplication::translate("modificarCliente", "Modificar Dados do Cliente:", 0, QApplication::UnicodeUTF8));
        pushButtonOkModificar->setText(QApplication::translate("modificarCliente", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancelarModificar->setText(QApplication::translate("modificarCliente", "Cancelar", 0, QApplication::UnicodeUTF8));
        labelNome->setText(QApplication::translate("modificarCliente", "Nome:", 0, QApplication::UnicodeUTF8));
        labelCPF->setText(QApplication::translate("modificarCliente", "CPF:", 0, QApplication::UnicodeUTF8));
        labelEndereco->setText(QApplication::translate("modificarCliente", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
        labelTelefone->setText(QApplication::translate("modificarCliente", "Telefone:", 0, QApplication::UnicodeUTF8));
        labelEmail->setText(QApplication::translate("modificarCliente", "Email:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class modificarCliente: public Ui_modificarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARCLIENTE_H
