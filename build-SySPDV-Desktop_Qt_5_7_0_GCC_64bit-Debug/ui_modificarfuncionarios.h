/********************************************************************************
** Form generated from reading UI file 'modificarfuncionarios.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARFUNCIONARIOS_H
#define UI_MODIFICARFUNCIONARIOS_H

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

class Ui_ModificarFuncionarios
{
public:
    QLabel *labelModificarDadosdoFuncionario;
    QPushButton *pushButtonOkModificar;
    QPushButton *pushButtonCancelarModificar;
    QWidget *widget;
    QVBoxLayout *verticalLayoutDadosFuncionario;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumCarteiraTrabalho;
    QLineEdit *lineEditNumCarteiraTrabalho;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTelefone;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;

    void setupUi(QDialog *ModificarFuncionarios)
    {
        if (ModificarFuncionarios->objectName().isEmpty())
            ModificarFuncionarios->setObjectName(QStringLiteral("ModificarFuncionarios"));
        ModificarFuncionarios->resize(400, 300);
        labelModificarDadosdoFuncionario = new QLabel(ModificarFuncionarios);
        labelModificarDadosdoFuncionario->setObjectName(QStringLiteral("labelModificarDadosdoFuncionario"));
        labelModificarDadosdoFuncionario->setGeometry(QRect(100, 10, 201, 16));
        pushButtonOkModificar = new QPushButton(ModificarFuncionarios);
        pushButtonOkModificar->setObjectName(QStringLiteral("pushButtonOkModificar"));
        pushButtonOkModificar->setGeometry(QRect(339, 270, 51, 22));
        pushButtonCancelarModificar = new QPushButton(ModificarFuncionarios);
        pushButtonCancelarModificar->setObjectName(QStringLiteral("pushButtonCancelarModificar"));
        pushButtonCancelarModificar->setGeometry(QRect(270, 270, 61, 22));
        widget = new QWidget(ModificarFuncionarios);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 50, 371, 116));
        verticalLayoutDadosFuncionario = new QVBoxLayout(widget);
        verticalLayoutDadosFuncionario->setObjectName(QStringLiteral("verticalLayoutDadosFuncionario"));
        verticalLayoutDadosFuncionario->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumCarteiraTrabalho = new QLabel(widget);
        labelNumCarteiraTrabalho->setObjectName(QStringLiteral("labelNumCarteiraTrabalho"));

        horizontalLayout->addWidget(labelNumCarteiraTrabalho);

        lineEditNumCarteiraTrabalho = new QLineEdit(widget);
        lineEditNumCarteiraTrabalho->setObjectName(QStringLiteral("lineEditNumCarteiraTrabalho"));

        horizontalLayout->addWidget(lineEditNumCarteiraTrabalho);


        verticalLayoutDadosFuncionario->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTelefone = new QLabel(widget);
        labelTelefone->setObjectName(QStringLiteral("labelTelefone"));

        horizontalLayout_2->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(widget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));

        horizontalLayout_2->addWidget(lineEditTelefone);


        verticalLayoutDadosFuncionario->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelEmail = new QLabel(widget);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        horizontalLayout_3->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(widget);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        horizontalLayout_3->addWidget(lineEditEmail);


        verticalLayoutDadosFuncionario->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelEndereco = new QLabel(widget);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        horizontalLayout_4->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(widget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        horizontalLayout_4->addWidget(lineEditEndereco);


        verticalLayoutDadosFuncionario->addLayout(horizontalLayout_4);


        retranslateUi(ModificarFuncionarios);

        QMetaObject::connectSlotsByName(ModificarFuncionarios);
    } // setupUi

    void retranslateUi(QDialog *ModificarFuncionarios)
    {
        ModificarFuncionarios->setWindowTitle(QApplication::translate("ModificarFuncionarios", "Dialog", 0));
        labelModificarDadosdoFuncionario->setText(QApplication::translate("ModificarFuncionarios", "Modificar Dados do Funcion\303\241rio", 0));
        pushButtonOkModificar->setText(QApplication::translate("ModificarFuncionarios", "Ok", 0));
        pushButtonCancelarModificar->setText(QApplication::translate("ModificarFuncionarios", "Cancelar", 0));
        labelNumCarteiraTrabalho->setText(QApplication::translate("ModificarFuncionarios", "N\303\272mero da Carteira de Trabalho:", 0));
        labelTelefone->setText(QApplication::translate("ModificarFuncionarios", "Telefone:", 0));
        labelEmail->setText(QApplication::translate("ModificarFuncionarios", "Email:", 0));
        labelEndereco->setText(QApplication::translate("ModificarFuncionarios", "Endere\303\247o:", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificarFuncionarios: public Ui_ModificarFuncionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARFUNCIONARIOS_H
