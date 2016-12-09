/********************************************************************************
** Form generated from reading UI file 'adcproduto.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCPRODUTO_H
#define UI_ADCPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adcProduto
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *adcProduto)
    {
        if (adcProduto->objectName().isEmpty())
            adcProduto->setObjectName(QStringLiteral("adcProduto"));
        adcProduto->resize(496, 355);
        label_2 = new QLabel(adcProduto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 40, 170, 23));
        lineEdit = new QLineEdit(adcProduto);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(256, 41, 133, 20));
        pushButton = new QPushButton(adcProduto);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 290, 101, 41));
        lineEdit_4 = new QLineEdit(adcProduto);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 160, 133, 20));
        label_8 = new QLabel(adcProduto);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(72, 156, 182, 29));
        lineEdit_3 = new QLineEdit(adcProduto);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 100, 133, 20));
        label_7 = new QLabel(adcProduto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(73, 96, 181, 29));
        label_9 = new QLabel(adcProduto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 230, 71, 29));
        doubleSpinBox = new QDoubleSpinBox(adcProduto);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(140, 230, 62, 22));
        label_2->raise();
        lineEdit->raise();
        pushButton->raise();
        lineEdit_3->raise();
        label_7->raise();
        lineEdit_4->raise();
        label_8->raise();
        label_7->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_8->raise();
        lineEdit_3->raise();
        label_7->raise();
        label_2->raise();
        lineEdit->raise();
        label_9->raise();
        doubleSpinBox->raise();

        retranslateUi(adcProduto);

        QMetaObject::connectSlotsByName(adcProduto);
    } // setupUi

    void retranslateUi(QDialog *adcProduto)
    {
        adcProduto->setWindowTitle(QApplication::translate("adcProduto", "Dialog", 0));
        label_2->setText(QApplication::translate("adcProduto", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">C\303\263digo de Barras:</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("adcProduto", "Adicionar produto", 0));
        label_8->setText(QApplication::translate("adcProduto", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Marca do produto: </span></p><p><br/></p></body></html>", 0));
        label_7->setText(QApplication::translate("adcProduto", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Nome do produto: </span></p><p><br/></p></body></html>", 0));
        label_9->setText(QApplication::translate("adcProduto", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Pre\303\247o: </span></p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class adcProduto: public Ui_adcProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCPRODUTO_H
