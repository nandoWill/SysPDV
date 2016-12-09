#include "cliente.h"
#include "ui_cliente.h"
#include "cadastrarcliente.h"
#include "modificarcliente.h"

cliente::cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cliente)
{
    ui->setupUi(this);
}

cliente::~cliente()
{
    delete ui;
}

void cliente::on_pushButtonCadastrarCliente_clicked()
{
    cadastrarCliente *cadastrar = new cadastrarCliente(this);
    cadastrar->setModal(true);
    cadastrar->show();
    cadastrar->exec();
}

void cliente::on_pushButtonModificarCliente_clicked()
{
    modificarCliente *modificar = new modificarCliente(this);
    modificar->setModal(true);
    modificar->show();
    modificar->exec();
}

void cliente::on_pushButtonOkCliente_clicked()
{
    QString Codigo= ui->lineEditProcurarPorCodigo->text();
    QString nome= ui->lineEditProcurarPorNome->text();
}
