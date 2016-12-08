/********************************************************************************
** Form generated from reading UI file 'fornecedores.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORNECEDORES_H
#define UI_FORNECEDORES_H

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
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            Fornecedores->setObjectName(QString::fromUtf8("Fornecedores"));
        Fornecedores->resize(541, 300);
        labelProcurarPor = new QLabel(Fornecedores);
        labelProcurarPor->setObjectName(QString::fromUtf8("labelProcurarPor"));
        labelProcurarPor->setGeometry(QRect(40, 10, 91, 16));
        pushButtonOkProcurarPor = new QPushButton(Fornecedores);
        pushButtonOkProcurarPor->setObjectName(QString::fromUtf8("pushButtonOkProcurarPor"));
        pushButtonOkProcurarPor->setGeometry(QRect(470, 40, 61, 31));
        label_2 = new QLabel(Fornecedores);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 0, 101, 16));
        tableViewTabelaDoBanco = new QTableView(Fornecedores);
        tableViewTabelaDoBanco->setObjectName(QString::fromUtf8("tableViewTabelaDoBanco"));
        tableViewTabelaDoBanco->setGeometry(QRect(100, 90, 361, 192));
        pushButtonModificar = new QPushButton(Fornecedores);
        pushButtonModificar->setObjectName(QString::fromUtf8("pushButtonModificar"));
        pushButtonModificar->setEnabled(false);
        pushButtonModificar->setGeometry(QRect(10, 130, 80, 22));
        pushButtonDeletar = new QPushButton(Fornecedores);
        pushButtonDeletar->setObjectName(QString::fromUtf8("pushButtonDeletar"));
        pushButtonDeletar->setEnabled(false);
        pushButtonDeletar->setGeometry(QRect(10, 160, 80, 22));
        layoutWidget = new QWidget(Fornecedores);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 411, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditProcurarPor = new QLineEdit(layoutWidget);
        lineEditProcurarPor->setObjectName(QString::fromUtf8("lineEditProcurarPor"));

        horizontalLayout_2->addWidget(lineEditProcurarPor);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Fornecedores);

        QMetaObject::connectSlotsByName(Fornecedores);
    } // setupUi

    void retranslateUi(QDialog *Fornecedores)
    {
        Fornecedores->setWindowTitle(QApplication::translate("Fornecedores", "Fornecedores", 0, QApplication::UnicodeUTF8));
        labelProcurarPor->setText(QApplication::translate("Fornecedores", "Procurar Por:", 0, QApplication::UnicodeUTF8));
        pushButtonOkProcurarPor->setText(QApplication::translate("Fornecedores", "Ok", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Fornecedores", "Fornecedores:", 0, QApplication::UnicodeUTF8));
        pushButtonModificar->setText(QApplication::translate("Fornecedores", "Modificar", 0, QApplication::UnicodeUTF8));
        pushButtonDeletar->setText(QApplication::translate("Fornecedores", "Deletar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Fornecedores", "Nome:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Fornecedores", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Fornecedores: public Ui_Fornecedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORNECEDORES_H
