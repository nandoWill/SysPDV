#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastrar.h"
#include "fornecedores.h"
#include "cadastrarcliente.h"
#include "cliente.h"
#include "adicionarfuncionario.h"
#include "funcionarios.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("root");
    db.setDatabaseName("syspdv");
    db.setUserName("usuario");
    db.setPassword("");
    bool ok = db.open();



    delete ui;
}

void MainWindow::on_actionAdicionar_Fornecedores_triggered()
{
    Cadastrar *cadastrarfornecedores = new Cadastrar(this);
    cadastrarfornecedores->setModal(true);
    cadastrarfornecedores->show();
    cadastrarfornecedores->exec();
}

void MainWindow::on_actionModificar_Fornecedores_triggered()
{
    Fornecedores *buscarfornecedores = new Fornecedores(this);
    buscarfornecedores->setModal(true);
    buscarfornecedores->show();
    buscarfornecedores->exec();
}

void MainWindow::on_actionAdicionar_Cliente_triggered()
{
    cadastrarCliente *cadastrarcliente = new cadastrarCliente(this);
    cadastrarcliente->setModal(true);
    cadastrarcliente->show();
    cadastrarcliente->exec();
}

void MainWindow::on_actionBuscar_Clientes_triggered()
{
    cliente *buscarCliente = new cliente(this);
    buscarCliente->setModal(true);
    buscarCliente->show();
    buscarCliente->exec();
}

void MainWindow::on_actionCadastrar_Funcionario_triggered()
{
    AdicionarFuncionario *cadastrarfuncionario = new AdicionarFuncionario(this);
    cadastrarfuncionario->setModal(true);
    cadastrarfuncionario->show();
    cadastrarfuncionario->exec();
}

void MainWindow::on_actionBuscar_Funcionario_triggered()
{
    funcionarios *buscarfuncionarios = new funcionarios(this);
    buscarfuncionarios->setModal(true);
    buscarfuncionarios->show();
    buscarfuncionarios->exec();
}
