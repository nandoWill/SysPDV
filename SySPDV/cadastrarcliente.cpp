#include "cadastrarcliente.h"
#include "ui_cadastrarcliente.h"

cadastrarCliente::cadastrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrarCliente)
{
    ui->setupUi(this);
}

cadastrarCliente::~cadastrarCliente()
{
    delete ui;
}

void cadastrarCliente::on_pushButtonCancelarCadastro_clicked()
{
    close();
}
