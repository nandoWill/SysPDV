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

void Cadastrar::on_pushButtonOkCadastrar_clicked()
{
    QString nome= ui->lineEdit->text();
    QString telefone= ui->lineEdit_2>text();
    QString endereco= ui->lineEdit_3->text();

    query.prepare("INSERT INTO Fornecedor(nome_fornecedor, email_fornecedor, endereco_fornecedor)"
                  "VALUES(:nome, :telefone, :endereco)");
    query.bindvalue(":nome",nome);
    query.bindvalue(":telefone",telefone);
    query.bindvalue(":endereco",endereco);
}
