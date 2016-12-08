/********************************************************************************
** Form generated from reading UI file 'cadastrar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRAR_H
#define UI_CADASTRAR_H

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
            Cadastrar->setObjectName(QString::fromUtf8("Cadastrar"));
        Cadastrar->resize(386, 300);
        labelCadastrarFornecedores = new QLabel(Cadastrar);
        labelCadastrarFornecedores->setObjectName(QString::fromUtf8("labelCadastrarFornecedores"));
        labelCadastrarFornecedores->setGeometry(QRect(120, 20, 151, 16));
        pushButtonOkCadastrar = new QPushButton(Cadastrar);
        pushButtonOkCadastrar->setObjectName(QString::fromUtf8("pushButtonOkCadastrar"));
        pushButtonOkCadastrar->setGeometry(QRect(310, 260, 61, 22));
        pushButtonCancelarCadastro = new QPushButton(Cadastrar);
        pushButtonCancelarCadastro->setObjectName(QString::fromUtf8("pushButtonCancelarCadastro"));
        pushButtonCancelarCadastro->setGeometry(QRect(240, 260, 61, 22));
        layoutWidget = new QWidget(Cadastrar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 351, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Cadastrar);

        QMetaObject::connectSlotsByName(Cadastrar);
    } // setupUi

    void retranslateUi(QDialog *Cadastrar)
    {
        Cadastrar->setWindowTitle(QApplication::translate("Cadastrar", "Cadastrar Fornecedor", 0, QApplication::UnicodeUTF8));
        labelCadastrarFornecedores->setText(QApplication::translate("Cadastrar", "Cadastrar Fornecedores", 0, QApplication::UnicodeUTF8));
        pushButtonOkCadastrar->setText(QApplication::translate("Cadastrar", "Ok", 0, QApplication::UnicodeUTF8));
        pushButtonCancelarCadastro->setText(QApplication::translate("Cadastrar", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Cadastrar", "Nome:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Cadastrar", "Telefone:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Cadastrar", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Cadastrar: public Ui_Cadastrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRAR_H
