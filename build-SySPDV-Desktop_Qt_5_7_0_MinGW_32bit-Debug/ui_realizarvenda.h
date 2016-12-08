/********************************************************************************
** Form generated from reading UI file 'realizarvenda.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALIZARVENDA_H
#define UI_REALIZARVENDA_H

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

class Ui_RealizarVenda
{
public:
    QPushButton *Inserir;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *codigo;
    QLineEdit *codigoline;
    QHBoxLayout *horizontalLayout_2;
    QLabel *quantidade;
    QLineEdit *qtdline;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Remover;
    QPushButton *Concluir;
    QPushButton *MenuPrincipal;

    void setupUi(QDialog *RealizarVenda)
    {
        if (RealizarVenda->objectName().isEmpty())
            RealizarVenda->setObjectName(QStringLiteral("RealizarVenda"));
        RealizarVenda->resize(672, 355);
        Inserir = new QPushButton(RealizarVenda);
        Inserir->setObjectName(QStringLiteral("Inserir"));
        Inserir->setGeometry(QRect(570, 90, 81, 31));
        layoutWidget = new QWidget(RealizarVenda);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 27, 531, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        codigo = new QLabel(layoutWidget);
        codigo->setObjectName(QStringLiteral("codigo"));

        horizontalLayout->addWidget(codigo);

        codigoline = new QLineEdit(layoutWidget);
        codigoline->setObjectName(QStringLiteral("codigoline"));
        codigoline->setMaxLength(13);

        horizontalLayout->addWidget(codigoline);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        quantidade = new QLabel(layoutWidget);
        quantidade->setObjectName(QStringLiteral("quantidade"));

        horizontalLayout_2->addWidget(quantidade);

        qtdline = new QLineEdit(layoutWidget);
        qtdline->setObjectName(QStringLiteral("qtdline"));

        horizontalLayout_2->addWidget(qtdline);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        layoutWidget1 = new QWidget(RealizarVenda);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(460, 320, 198, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Remover = new QPushButton(layoutWidget1);
        Remover->setObjectName(QStringLiteral("Remover"));

        horizontalLayout_3->addWidget(Remover);

        Concluir = new QPushButton(layoutWidget1);
        Concluir->setObjectName(QStringLiteral("Concluir"));

        horizontalLayout_3->addWidget(Concluir);

        MenuPrincipal = new QPushButton(RealizarVenda);
        MenuPrincipal->setObjectName(QStringLiteral("MenuPrincipal"));
        MenuPrincipal->setGeometry(QRect(30, 320, 95, 31));

        retranslateUi(RealizarVenda);

        QMetaObject::connectSlotsByName(RealizarVenda);
    } // setupUi

    void retranslateUi(QDialog *RealizarVenda)
    {
        RealizarVenda->setWindowTitle(QApplication::translate("RealizarVenda", "Dialog", 0));
        Inserir->setText(QApplication::translate("RealizarVenda", "Inserir", 0));
        codigo->setText(QApplication::translate("RealizarVenda", "Codigo", 0));
        codigoline->setText(QString());
        quantidade->setText(QApplication::translate("RealizarVenda", "Quantidade", 0));
        Remover->setText(QApplication::translate("RealizarVenda", "Remover", 0));
        Concluir->setText(QApplication::translate("RealizarVenda", "Concluir", 0));
        MenuPrincipal->setText(QApplication::translate("RealizarVenda", "Menu Principal", 0));
    } // retranslateUi

};

namespace Ui {
    class RealizarVenda: public Ui_RealizarVenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALIZARVENDA_H
