#include "cadastrar.h"
#include "ui_cadastrar.h"

Cadastrar::Cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastrar)
{
    ui->setupUi(this);
}

Cadastrar::~Cadastrar()
{
    delete ui;
}

void Cadastrar::on_pushButtonCancelarCadastro_clicked()
{
    close();
}
