/********************************************************************************
** Form generated from reading UI file 'verificarlote.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICARLOTE_H
#define UI_VERIFICARLOTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_verificarlote
{
public:
    QTableView *tableView;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *verificarlote)
    {
        if (verificarlote->objectName().isEmpty())
            verificarlote->setObjectName(QString::fromUtf8("verificarlote"));
        verificarlote->resize(673, 435);
        tableView = new QTableView(verificarlote);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 130, 611, 241));
        lineEdit_3 = new QLineEdit(verificarlote);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 80, 201, 20));
        pushButton_3 = new QPushButton(verificarlote);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 390, 75, 23));
        label_7 = new QLabel(verificarlote);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 80, 151, 31));
        pushButton_2 = new QPushButton(verificarlote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 70, 111, 31));
        lineEdit_2 = new QLineEdit(verificarlote);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 40, 201, 20));
        label_6 = new QLabel(verificarlote);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 40, 191, 31));
        pushButton = new QPushButton(verificarlote);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 30, 111, 31));

        retranslateUi(verificarlote);

        QMetaObject::connectSlotsByName(verificarlote);
    } // setupUi

    void retranslateUi(QDialog *verificarlote)
    {
        verificarlote->setWindowTitle(QApplication::translate("verificarlote", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("verificarlote", "OK", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("verificarlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">C\303\263digo do lote: </span></p><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("verificarlote", "Buscar por lote", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("verificarlote", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">C\303\263digo do produto: </span></p><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("verificarlote", "Buscar por produto", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class verificarlote: public Ui_verificarlote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICARLOTE_H
