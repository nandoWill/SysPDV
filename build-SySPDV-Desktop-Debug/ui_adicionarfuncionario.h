/********************************************************************************
** Form generated from reading UI file 'adicionarfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARFUNCIONARIO_H
#define UI_ADICIONARFUNCIONARIO_H

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

class Ui_AdicionarFuncionario
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutCadastrarFuncionario;
    QHBoxLayout *horizontalLayoutNumCarteira;
    QLabel *labelNumCarteira;
    QLineEdit *lineEditNumCarteira;
    QHBoxLayout *horizontalLayoutTelefone;
    QLabel *labelTelefone;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayoutEmail;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayoutEndereco;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;

    void setupUi(QDialog *AdicionarFuncionario)
    {
        if (AdicionarFuncionario->objectName().isEmpty())
            AdicionarFuncionario->setObjectName(QString::fromUtf8("AdicionarFuncionario"));
        AdicionarFuncionario->resize(400, 300);
        label = new QLabel(AdicionarFuncionario);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 141, 16));
        pushButton = new QPushButton(AdicionarFuncionario);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(319, 270, 61, 22));
        pushButton_2 = new QPushButton(AdicionarFuncionario);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(249, 270, 61, 22));
        layoutWidget = new QWidget(AdicionarFuncionario);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 371, 146));
        verticalLayoutCadastrarFuncionario = new QVBoxLayout(layoutWidget);
        verticalLayoutCadastrarFuncionario->setObjectName(QString::fromUtf8("verticalLayoutCadastrarFuncionario"));
        verticalLayoutCadastrarFuncionario->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNumCarteira = new QHBoxLayout();
        horizontalLayoutNumCarteira->setObjectName(QString::fromUtf8("horizontalLayoutNumCarteira"));
        labelNumCarteira = new QLabel(layoutWidget);
        labelNumCarteira->setObjectName(QString::fromUtf8("labelNumCarteira"));

        horizontalLayoutNumCarteira->addWidget(labelNumCarteira);

        lineEditNumCarteira = new QLineEdit(layoutWidget);
        lineEditNumCarteira->setObjectName(QString::fromUtf8("lineEditNumCarteira"));

        horizontalLayoutNumCarteira->addWidget(lineEditNumCarteira);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutNumCarteira);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QString::fromUtf8("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QString::fromUtf8("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QString::fromUtf8("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutEmail);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QString::fromUtf8("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutEndereco);


        retranslateUi(AdicionarFuncionario);

        QMetaObject::connectSlotsByName(AdicionarFuncionario);
    } // setupUi

    void retranslateUi(QDialog *AdicionarFuncionario)
    {
        AdicionarFuncionario->setWindowTitle(QApplication::translate("AdicionarFuncionario", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdicionarFuncionario", "Cadastrar Funcion\303\241rio", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AdicionarFuncionario", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AdicionarFuncionario", "Cancelar", 0, QApplication::UnicodeUTF8));
        labelNumCarteira->setText(QApplication::translate("AdicionarFuncionario", "N\303\272mero da Carteira de Trabalho:", 0, QApplication::UnicodeUTF8));
        labelTelefone->setText(QApplication::translate("AdicionarFuncionario", "Telefone:", 0, QApplication::UnicodeUTF8));
        labelEmail->setText(QApplication::translate("AdicionarFuncionario", "Email:", 0, QApplication::UnicodeUTF8));
        labelEndereco->setText(QApplication::translate("AdicionarFuncionario", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdicionarFuncionario: public Ui_AdicionarFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARFUNCIONARIO_H
