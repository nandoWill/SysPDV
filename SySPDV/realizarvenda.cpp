#include "realizarvenda.h"
#include "ui_realizarvenda.h"

RealizarVenda::RealizarVenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RealizarVenda)
{
    ui->setupUi(this);
}

RealizarVenda::~RealizarVenda()
{
    delete ui;
}

void RealizarVenda::on_Inserir_clicked()
{
    QString Codproduto = ui->codigoline->text();
    QString qtd = ui->qtdline->text();
}
