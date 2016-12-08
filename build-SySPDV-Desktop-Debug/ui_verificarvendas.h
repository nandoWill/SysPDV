/********************************************************************************
** Form generated from reading UI file 'verificarvendas.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICARVENDAS_H
#define UI_VERIFICARVENDAS_H

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

class Ui_VerificarVendas
{
public:
    QPushButton *Busca;
    QPushButton *Selecionar;
    QPushButton *MenuPrincipal;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Cliente;
    QLineEdit *ClietenLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Data;
    QLineEdit *DataLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Hora;
    QLineEdit *HoraLine;
    QHBoxLayout *horizontalLayout;
    QLabel *Produto;
    QLineEdit *lineProduto;
    QTableView *tableView;

    void setupUi(QDialog *VerificarVendas)
    {
        if (VerificarVendas->objectName().isEmpty())
            VerificarVendas->setObjectName(QString::fromUtf8("VerificarVendas"));
        VerificarVendas->resize(721, 381);
        Busca = new QPushButton(VerificarVendas);
        Busca->setObjectName(QString::fromUtf8("Busca"));
        Busca->setGeometry(QRect(600, 140, 101, 31));
        Selecionar = new QPushButton(VerificarVendas);
        Selecionar->setObjectName(QString::fromUtf8("Selecionar"));
        Selecionar->setGeometry(QRect(600, 340, 95, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Selecionar->sizePolicy().hasHeightForWidth());
        Selecionar->setSizePolicy(sizePolicy);
        Selecionar->setAutoRepeat(false);
        Selecionar->setAutoExclusive(false);
        MenuPrincipal = new QPushButton(VerificarVendas);
        MenuPrincipal->setObjectName(QString::fromUtf8("MenuPrincipal"));
        MenuPrincipal->setGeometry(QRect(50, 340, 131, 31));
        widget = new QWidget(VerificarVendas);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 10, 541, 321));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Cliente = new QLabel(widget);
        Cliente->setObjectName(QString::fromUtf8("Cliente"));

        horizontalLayout_2->addWidget(Cliente);

        ClietenLine = new QLineEdit(widget);
        ClietenLine->setObjectName(QString::fromUtf8("ClietenLine"));

        horizontalLayout_2->addWidget(ClietenLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Data = new QLabel(widget);
        Data->setObjectName(QString::fromUtf8("Data"));

        horizontalLayout_3->addWidget(Data);

        DataLine = new QLineEdit(widget);
        DataLine->setObjectName(QString::fromUtf8("DataLine"));

        horizontalLayout_3->addWidget(DataLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Hora = new QLabel(widget);
        Hora->setObjectName(QString::fromUtf8("Hora"));

        horizontalLayout_4->addWidget(Hora);

        HoraLine = new QLineEdit(widget);
        HoraLine->setObjectName(QString::fromUtf8("HoraLine"));

        horizontalLayout_4->addWidget(HoraLine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Produto = new QLabel(widget);
        Produto->setObjectName(QString::fromUtf8("Produto"));

        horizontalLayout->addWidget(Produto);

        lineProduto = new QLineEdit(widget);
        lineProduto->setObjectName(QString::fromUtf8("lineProduto"));

        horizontalLayout->addWidget(lineProduto);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(VerificarVendas);

        QMetaObject::connectSlotsByName(VerificarVendas);
    } // setupUi

    void retranslateUi(QDialog *VerificarVendas)
    {
        VerificarVendas->setWindowTitle(QApplication::translate("VerificarVendas", "Dialog", 0, QApplication::UnicodeUTF8));
        Busca->setText(QApplication::translate("VerificarVendas", "Realizar Busca", 0, QApplication::UnicodeUTF8));
        Selecionar->setText(QApplication::translate("VerificarVendas", "Selecionar", 0, QApplication::UnicodeUTF8));
        MenuPrincipal->setText(QApplication::translate("VerificarVendas", "Menu Principal", 0, QApplication::UnicodeUTF8));
        Cliente->setText(QApplication::translate("VerificarVendas", "Nome do Cliente", 0, QApplication::UnicodeUTF8));
        Data->setText(QApplication::translate("VerificarVendas", "Data", 0, QApplication::UnicodeUTF8));
        Hora->setText(QApplication::translate("VerificarVendas", "Hora", 0, QApplication::UnicodeUTF8));
        Produto->setText(QApplication::translate("VerificarVendas", "Produto", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VerificarVendas: public Ui_VerificarVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICARVENDAS_H
