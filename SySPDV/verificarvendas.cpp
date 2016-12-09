#include "verificarvendas.h"
#include "ui_verificarvendas.h"

VerificarVendas::VerificarVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerificarVendas)
{
    ui->setupUi(this);
}
VerificarVendas::~VerificarVendas()
{
    delete ui;
}

void VerificarVendas::on_Busca_clicked()
{
    QString Cliente= ui->ClietenLine->text();
    QString Data= ui-> DataLine ->text();
    QString Hora= ui->HoraLine->text();
    QString Produto= ui-> ProdutoLine ->text();

}

