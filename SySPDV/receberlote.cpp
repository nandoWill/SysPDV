#include "receberlote.h"
#include "ui_receberlote.h"

receberlote::receberlote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receberlote)
{
    ui->setupUi(this);
}

receberlote::~receberlote()
{
    delete ui;
}

void receberlote::on_pushButton_clicked()
{
    QString Codproduto = ui->lineEdit->text();
    QString IDF = ui->lineEdit_2->text();
    QString Quantidade = ui->spinBox ->text();
    QString Preco = ui->doubleSpinBox->text();
    QString Validade = ui->dateEdit->text();

    query.prepare("INSERT INTO Lote(cod_produto, Preco_compra, validade, idFornecedor, Quantidade)"
                  "VALUES(:Codproduto, :Preco, :Validade, :IDF, :Quantidade)");
    query.bindvalue(":Codproduto",Codproduto);
    query.bindvalue(":Preco",Preco);
    query.bindvalue(":Validade",Validade);
    query.bindvalue(":IDF",IDF);
    query.bindvalue(":Quantidade",Quantidade);
}
