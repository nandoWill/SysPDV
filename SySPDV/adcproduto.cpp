#include "adcproduto.h"
#include "ui_adcproduto.h"
#include "qsqldatabase.h"

adcProduto::adcProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adcProduto)
{
    ui->setupUi(this);
}

adcProduto::~adcProduto()
{
    delete ui;
}

void adcProduto::on_pushButton_clicked()
{
     QString codigo= ui->lineEdit->text();
     QString nome= ui->lineEdit_3->text();
     QString marca= ui->lineEdit_4->text();
     QString preco= ui->doubleSpinBox->text();

     QSqlQuery query;

     query.prepare("INSERT INTO Produto(cod_produto, nome, marca, Preco_produto)"
                   "VALUES(:codigo, :nome, :marca, :preco)");
     query.bindvalue(":codigo",codigo);
     query.bindvalue(":nome",nome);
     query.bindvalue(":marca",marca);
     query.bindvalue(":preco",preco);
}
