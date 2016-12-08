/********************************************************************************
** Form generated from reading UI file 'cadastrar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRAR_H
#define UI_CADASTRAR_H

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

class Ui_Cadastrar
{
public:
    QLabel *labelCadastrarFornecedores;
    QPushButton *pushButtonOkCadastrar;
    QPushButton *pushButtonCancelarCadastro;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *Cadastrar)
    {
        if (Cadastrar->objectName().isEmpty())
            Cadastrar->setObjectName(QStringLiteral("Cadastrar"));
        Cadastrar->resize(386, 300);
        labelCadastrarFornecedores = new QLabel(Cadastrar);
        labelCadastrarFornecedores->setObjectName(QStringLiteral("labelCadastrarFornecedores"));
        labelCadastrarFornecedores->setGeometry(QRect(120, 20, 151, 16));
        pushButtonOkCadastrar = new QPushButton(Cadastrar);
        pushButtonOkCadastrar->setObjectName(QStringLiteral("pushButtonOkCadastrar"));
        pushButtonOkCadastrar->setGeometry(QRect(310, 260, 61, 22));
        pushButtonCancelarCadastro = new QPushButton(Cadastrar);
        pushButtonCancelarCadastro->setObjectName(QStringLiteral("pushButtonCancelarCadastro"));
        pushButtonCancelarCadastro->setGeometry(QRect(240, 260, 61, 22));
        layoutWidget = new QWidget(Cadastrar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 351, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Cadastrar);

        QMetaObject::connectSlotsByName(Cadastrar);
    } // setupUi

    void retranslateUi(QDialog *Cadastrar)
    {
        Cadastrar->setWindowTitle(QApplication::translate("Cadastrar", "Cadastrar Fornecedor", 0));
        labelCadastrarFornecedores->setText(QApplication::translate("Cadastrar", "Cadastrar Fornecedores", 0));
        pushButtonOkCadastrar->setText(QApplication::translate("Cadastrar", "Ok", 0));
        pushButtonCancelarCadastro->setText(QApplication::translate("Cadastrar", "Cancelar", 0));
        label->setText(QApplication::translate("Cadastrar", "Nome:", 0));
        label_2->setText(QApplication::translate("Cadastrar", "Telefone:", 0));
        label_3->setText(QApplication::translate("Cadastrar", "Endere\303\247o:", 0));
    } // retranslateUi

};

namespace Ui {
    class Cadastrar: public Ui_Cadastrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRAR_H
