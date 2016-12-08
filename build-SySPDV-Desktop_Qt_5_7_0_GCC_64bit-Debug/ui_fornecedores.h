/********************************************************************************
** Form generated from reading UI file 'fornecedores.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORNECEDORES_H
#define UI_FORNECEDORES_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fornecedores
{
public:
    QLabel *labelProcurarPor;
    QPushButton *pushButtonOkProcurarPor;
    QLabel *label_2;
    QTableView *tableViewTabelaDoBanco;
    QPushButton *pushButtonModificar;
    QPushButton *pushButtonDeletar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditProcurarPor;

    void setupUi(QDialog *Fornecedores)
    {
        if (Fornecedores->objectName().isEmpty())
            Fornecedores->setObjectName(QStringLiteral("Fornecedores"));
        Fornecedores->resize(541, 300);
        labelProcurarPor = new QLabel(Fornecedores);
        labelProcurarPor->setObjectName(QStringLiteral("labelProcurarPor"));
        labelProcurarPor->setGeometry(QRect(40, 10, 91, 16));
        pushButtonOkProcurarPor = new QPushButton(Fornecedores);
        pushButtonOkProcurarPor->setObjectName(QStringLiteral("pushButtonOkProcurarPor"));
        pushButtonOkProcurarPor->setGeometry(QRect(470, 40, 61, 31));
        label_2 = new QLabel(Fornecedores);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 0, 101, 16));
        tableViewTabelaDoBanco = new QTableView(Fornecedores);
        tableViewTabelaDoBanco->setObjectName(QStringLiteral("tableViewTabelaDoBanco"));
        tableViewTabelaDoBanco->setGeometry(QRect(100, 90, 361, 192));
        pushButtonModificar = new QPushButton(Fornecedores);
        pushButtonModificar->setObjectName(QStringLiteral("pushButtonModificar"));
        pushButtonModificar->setEnabled(false);
        pushButtonModificar->setGeometry(QRect(10, 130, 80, 22));
        pushButtonDeletar = new QPushButton(Fornecedores);
        pushButtonDeletar->setObjectName(QStringLiteral("pushButtonDeletar"));
        pushButtonDeletar->setEnabled(false);
        pushButtonDeletar->setGeometry(QRect(10, 160, 80, 22));
        layoutWidget = new QWidget(Fornecedores);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 411, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditProcurarPor = new QLineEdit(layoutWidget);
        lineEditProcurarPor->setObjectName(QStringLiteral("lineEditProcurarPor"));

        horizontalLayout_2->addWidget(lineEditProcurarPor);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Fornecedores);

        QMetaObject::connectSlotsByName(Fornecedores);
    } // setupUi

    void retranslateUi(QDialog *Fornecedores)
    {
        Fornecedores->setWindowTitle(QApplication::translate("Fornecedores", "Fornecedores", 0));
        labelProcurarPor->setText(QApplication::translate("Fornecedores", "Procurar Por:", 0));
        pushButtonOkProcurarPor->setText(QApplication::translate("Fornecedores", "Ok", 0));
        label_2->setText(QApplication::translate("Fornecedores", "Fornecedores:", 0));
        pushButtonModificar->setText(QApplication::translate("Fornecedores", "Modificar", 0));
        pushButtonDeletar->setText(QApplication::translate("Fornecedores", "Deletar", 0));
        label->setText(QApplication::translate("Fornecedores", "Nome:", 0));
        label_3->setText(QApplication::translate("Fornecedores", "C\303\263digo:", 0));
    } // retranslateUi

};

namespace Ui {
    class Fornecedores: public Ui_Fornecedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORNECEDORES_H
