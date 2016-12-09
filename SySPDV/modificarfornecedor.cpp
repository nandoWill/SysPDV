#include "modificarfornecedor.h"
#include "ui_modificarfornecedor.h"

modificarFornecedor::modificarFornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificarFornecedor)
{
    ui->setupUi(this);
}

modificarFornecedor::~modificarFornecedor()
{
    delete ui;
}

void modificarFornecedor::on_pushButtonCancelarModificarDados_clicked()
{
    close();
}

void modificarFornecedor::on_pushButtonOkModificarDado_clicked()
{
    QString Nome = ui->lineEditNome ->text();
    QString Telefone = ui->lineEditTelefone->text();
    QString Endereco = ui->lineEditEndereco->text();
}
