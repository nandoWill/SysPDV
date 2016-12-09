/********************************************************************************
** Form generated from reading UI file 'receberlote.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEBERLOTE_H
#define UI_RECEBERLOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_receberlote
{
public:
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *receberlote)
    {
        if (receberlote->objectName().isEmpty())
            receberlote->setObjectName(QStringLiteral("receberlote"));
        receberlote->resize(656, 451);
        label_6 = new QLabel(receberlote);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 310, 181, 31));
        doubleSpinBox = new QDoubleSpinBox(receberlote);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(220, 210, 62, 22));
        label_3 = new QLabel(receberlote);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 241, 31));
        lineEdit = new QLineEdit(receberlote);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 120, 201, 20));
        label_2 = new QLabel(receberlote);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 191, 31));
        lineEdit_2 = new QLineEdit(receberlote);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 310, 201, 20));
        pushButton = new QPushButton(receberlote);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 360, 101, 41));
        dateEdit = new QDateEdit(receberlote);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(210, 260, 110, 22));
        label_4 = new QLabel(receberlote);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 260, 181, 31));
        label_5 = new QLabel(receberlote);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 191, 31));
        label = new QLabel(receberlote);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 0, 281, 101));
        spinBox = new QSpinBox(receberlote);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(270, 160, 42, 22));

        retranslateUi(receberlote);

        QMetaObject::connectSlotsByName(receberlote);
    } // setupUi

    void retranslateUi(QDialog *receberlote)
    {
        receberlote->setWindowTitle(QApplication::translate("receberlote", "Dialog", 0));
        label_6->setText(QApplication::translate("receberlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">ID do fornecedor : </span></p><p><br/></p></body></html>", 0));
        label_3->setText(QApplication::translate("receberlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Qtd. de produtos / lote : </span></p><p><br/></p></body></html>", 0));
        label_2->setText(QApplication::translate("receberlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">C\303\263digo do produto:</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("receberlote", "Criar lote", 0));
        label_4->setText(QApplication::translate("receberlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Validade do lote : </span></p><p><br/></p></body></html>", 0));
        label_5->setText(QApplication::translate("receberlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Pre\303\247o unit\303\241rio(R$): </span></p><p><br/></p></body></html>", 0));
        label->setText(QApplication::translate("receberlote", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">ADICIONAR LOTE</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class receberlote: public Ui_receberlote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEBERLOTE_H
