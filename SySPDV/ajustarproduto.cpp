#include "ajustarproduto.h"
#include "ui_ajustarproduto.h"

AjustarProduto::AjustarProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjustarProduto)
{
    ui->setupUi(this);
}

AjustarProduto::~AjustarProduto()
{
    delete ui;
}

void AjustarProduto::on_Ajustar_clicked()
{
    QString Codigo= ui->CodLine->text();
    QString Preco= ui->PrecoLine->text();
}
