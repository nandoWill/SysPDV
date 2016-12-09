/********************************************************************************
** Form generated from reading UI file 'ajustarproduto.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUSTARPRODUTO_H
#define UI_AJUSTARPRODUTO_H

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

class Ui_AjustarProduto
{
public:
    QPushButton *Ajustar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *CodLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PrecoLine;

    void setupUi(QDialog *AjustarProduto)
    {
        if (AjustarProduto->objectName().isEmpty())
            AjustarProduto->setObjectName(QString::fromUtf8("AjustarProduto"));
        AjustarProduto->resize(640, 480);
        Ajustar = new QPushButton(AjustarProduto);
        Ajustar->setObjectName(QString::fromUtf8("Ajustar"));
        Ajustar->setGeometry(QRect(280, 250, 95, 31));
        widget = new QWidget(AjustarProduto);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 541, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        CodLine = new QLineEdit(widget);
        CodLine->setObjectName(QString::fromUtf8("CodLine"));

        horizontalLayout->addWidget(CodLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        PrecoLine = new QLineEdit(widget);
        PrecoLine->setObjectName(QString::fromUtf8("PrecoLine"));

        horizontalLayout_2->addWidget(PrecoLine);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AjustarProduto);

        QMetaObject::connectSlotsByName(AjustarProduto);
    } // setupUi

    void retranslateUi(QDialog *AjustarProduto)
    {
        AjustarProduto->setWindowTitle(QApplication::translate("AjustarProduto", "Dialog", 0, QApplication::UnicodeUTF8));
        Ajustar->setText(QApplication::translate("AjustarProduto", "Ajustar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AjustarProduto", "Codigo", 0, QApplication::UnicodeUTF8));
        CodLine->setText(QString());
        label_2->setText(QApplication::translate("AjustarProduto", "Novo Pre\303\247o", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjustarProduto: public Ui_AjustarProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUSTARPRODUTO_H
