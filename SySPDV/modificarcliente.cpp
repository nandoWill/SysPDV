#include "modificarcliente.h"
#include "ui_modificarcliente.h"

modificarCliente::modificarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificarCliente)
{
    ui->setupUi(this);
}

modificarCliente::~modificarCliente()
{
    delete ui;
}

void modificarCliente::on_pushButtonCancelarModificar_clicked()
{
    close();
}

void modificarCliente::on_pushButtonOkModificar_clicked()
{
     QString Nome= ui->lineEditNome->text();
     QString CPF= ui->lineEditCPF->text();
     QString Telefone= ui->lineEditTelefone->text();
     QString Email= ui->lineEditEmail->text();
     QString Endereco= ui->lineEditEndereco->text();
}
