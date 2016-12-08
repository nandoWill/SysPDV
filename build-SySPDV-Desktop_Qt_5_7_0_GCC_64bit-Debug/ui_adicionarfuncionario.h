/********************************************************************************
** Form generated from reading UI file 'adicionarfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONARFUNCIONARIO_H
#define UI_ADICIONARFUNCIONARIO_H

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
            AdicionarFuncionario->setObjectName(QStringLiteral("AdicionarFuncionario"));
        AdicionarFuncionario->resize(400, 300);
        label = new QLabel(AdicionarFuncionario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 141, 16));
        pushButton = new QPushButton(AdicionarFuncionario);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(319, 270, 61, 22));
        pushButton_2 = new QPushButton(AdicionarFuncionario);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(249, 270, 61, 22));
        layoutWidget = new QWidget(AdicionarFuncionario);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 371, 146));
        verticalLayoutCadastrarFuncionario = new QVBoxLayout(layoutWidget);
        verticalLayoutCadastrarFuncionario->setObjectName(QStringLiteral("verticalLayoutCadastrarFuncionario"));
        verticalLayoutCadastrarFuncionario->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutNumCarteira = new QHBoxLayout();
        horizontalLayoutNumCarteira->setObjectName(QStringLiteral("horizontalLayoutNumCarteira"));
        labelNumCarteira = new QLabel(layoutWidget);
        labelNumCarteira->setObjectName(QStringLiteral("labelNumCarteira"));

        horizontalLayoutNumCarteira->addWidget(labelNumCarteira);

        lineEditNumCarteira = new QLineEdit(layoutWidget);
        lineEditNumCarteira->setObjectName(QStringLiteral("lineEditNumCarteira"));

        horizontalLayoutNumCarteira->addWidget(lineEditNumCarteira);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutNumCarteira);

        horizontalLayoutTelefone = new QHBoxLayout();
        horizontalLayoutTelefone->setObjectName(QStringLiteral("horizontalLayoutTelefone"));
        labelTelefone = new QLabel(layoutWidget);
        labelTelefone->setObjectName(QStringLiteral("labelTelefone"));

        horizontalLayoutTelefone->addWidget(labelTelefone);

        lineEditTelefone = new QLineEdit(layoutWidget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));

        horizontalLayoutTelefone->addWidget(lineEditTelefone);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutTelefone);

        horizontalLayoutEmail = new QHBoxLayout();
        horizontalLayoutEmail->setObjectName(QStringLiteral("horizontalLayoutEmail"));
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        horizontalLayoutEmail->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        horizontalLayoutEmail->addWidget(lineEditEmail);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutEmail);

        horizontalLayoutEndereco = new QHBoxLayout();
        horizontalLayoutEndereco->setObjectName(QStringLiteral("horizontalLayoutEndereco"));
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        horizontalLayoutEndereco->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        horizontalLayoutEndereco->addWidget(lineEditEndereco);


        verticalLayoutCadastrarFuncionario->addLayout(horizontalLayoutEndereco);


        retranslateUi(AdicionarFuncionario);

        QMetaObject::connectSlotsByName(AdicionarFuncionario);
    } // setupUi

    void retranslateUi(QDialog *AdicionarFuncionario)
    {
        AdicionarFuncionario->setWindowTitle(QApplication::translate("AdicionarFuncionario", "Dialog", 0));
        label->setText(QApplication::translate("AdicionarFuncionario", "Cadastrar Funcion\303\241rio", 0));
        pushButton->setText(QApplication::translate("AdicionarFuncionario", "Ok", 0));
        pushButton_2->setText(QApplication::translate("AdicionarFuncionario", "Cancelar", 0));
        labelNumCarteira->setText(QApplication::translate("AdicionarFuncionario", "N\303\272mero da Carteira de Trabalho:", 0));
        labelTelefone->setText(QApplication::translate("AdicionarFuncionario", "Telefone:", 0));
        labelEmail->setText(QApplication::translate("AdicionarFuncionario", "Email:", 0));
        labelEndereco->setText(QApplication::translate("AdicionarFuncionario", "Endere\303\247o:", 0));
    } // retranslateUi

};

namespace Ui {
    class AdicionarFuncionario: public Ui_AdicionarFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONARFUNCIONARIO_H
