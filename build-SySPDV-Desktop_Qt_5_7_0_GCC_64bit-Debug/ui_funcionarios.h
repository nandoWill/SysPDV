/********************************************************************************
** Form generated from reading UI file 'funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIOS_H
#define UI_FUNCIONARIOS_H

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

class Ui_funcionarios
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *funcionarios)
    {
        if (funcionarios->objectName().isEmpty())
            funcionarios->setObjectName(QStringLiteral("funcionarios"));
        funcionarios->resize(512, 308);
        label = new QLabel(funcionarios);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 121, 16));
        pushButton = new QPushButton(funcionarios);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 60, 51, 31));
        tableView = new QTableView(funcionarios);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(100, 110, 341, 192));
        widget = new QWidget(funcionarios);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 411, 76));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(funcionarios);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 150, 82, 52));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        retranslateUi(funcionarios);

        QMetaObject::connectSlotsByName(funcionarios);
    } // setupUi

    void retranslateUi(QDialog *funcionarios)
    {
        funcionarios->setWindowTitle(QApplication::translate("funcionarios", "Dialog", 0));
        label->setText(QApplication::translate("funcionarios", "Buscar Funcion\303\241rio", 0));
        pushButton->setText(QApplication::translate("funcionarios", "Ok", 0));
        label_2->setText(QApplication::translate("funcionarios", "Buscar Por:", 0));
        label_3->setText(QApplication::translate("funcionarios", "TextLabel", 0));
        label_4->setText(QApplication::translate("funcionarios", "TextLabel", 0));
        pushButton_2->setText(QApplication::translate("funcionarios", "Modificar", 0));
        pushButton_3->setText(QApplication::translate("funcionarios", "Deletar", 0));
    } // retranslateUi

};

namespace Ui {
    class funcionarios: public Ui_funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIOS_H
