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

void cadastrarCliente::on_pushButtonOkCadastrar_clicked()
{
    QString nome= ui->lineEditNome->text();
    QString CPF= ui->lineEditCPF->text();
    QString Email= ui->lineEditEmail->text();
    QString Telefone= ui->lineEditTelefone->text();
    QString Endereco= ui->lineEditEndereco->text();


    query.prepare("INSERT INTO Fidelidade(nome_cliente, CPF, email_cliente, telefone_cliente, endereco_cliente)"
                  "VALUES(:nome, :CPF, :Email, :Telefone, :Endereco)");
    query.bindvalue(":nome",nome);
    query.bindvalue(":CPF",CPF);
    query.bindvalue(":Email",Email);
    query.bindvalue(":Telefone",Telefone);
    query.bindvalue(":Endereco",Endereco);
}
