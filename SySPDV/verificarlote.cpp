#include "verificarlote.h"
#include "ui_verificarlote.h"

verificarlote::verificarlote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verificarlote)
{
    ui->setupUi(this);
}

verificarlote::~verificarlote()
{
    delete ui;
}

void verificarlote::on_pushButton_clicked()
{
   QString Codproduto = ui->lineEdit_2->text();
}

void verificarlote::on_pushButton_2_clicked()
{
    QString Codlote = ui->lineEdit_3->text();
}
