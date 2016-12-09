#include "adicionarfuncionario.h"
#include "ui_adicionarfuncionario.h"

AdicionarFuncionario::AdicionarFuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarFuncionario)
{
    ui->setupUi(this);
}

AdicionarFuncionario::~AdicionarFuncionario()
{
    delete ui;
}

void AdicionarFuncionario::on_pushButton_2_clicked()
{
    close();
}

void AdicionarFuncionario::on_pushButton_clicked()
{
    QString CT= ui->lineEditNumCarteira->text();
    QString telefone= ui->lineEditTelefone->text();
    QString email= ui->lineEditEmail->text();
    QString endereco= ui->lineEditEndereco->text();
    QString nome= ui->lineEditNome->text();

    query.prepare("INSERT INTO Funcionario(nome_funcionario, CPF, email_funcionario, telefone_funcionario, endereco_funcionario)"
                  "VALUES(:nome, :CT, :email, :telefone, :endereco)");
    query.bindvalue(":nome",nome);
    query.bindvalue(":CT",CT);
    query.bindvalue(":Email",Email);
    query.bindvalue(":Telefone",Telefone);
    query.bindvalue(":Endereco",Endereco);

}
