#include "fornecedores.h"
#include "ui_fornecedores.h"
#include "cadastrar.h"
#include "modificarfornecedor.h"

Fornecedores::Fornecedores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fornecedores)
{
    ui->setupUi(this);
}

Fornecedores::~Fornecedores()
{
    delete ui;
}

void Fornecedores::on_pushButtonCadastrar_clicked()
{
    Cadastrar *cadastro = new Cadastrar(this);
    cadastro->setModal(true);
    cadastro->show();
    cadastro->exec();
}

void Fornecedores::on_pushButtonModificar_clicked()
{
    modificarFornecedor *modificar = new modificarFornecedor();
    modificar->setModal(true);
    modificar->show();
    modificar->exec();
}
