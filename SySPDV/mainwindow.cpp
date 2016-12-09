#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adcproduto.h"
#include "receberlote.h"
#include "verificarlote.h"
#include "cadastrar.h"
#include "fornecedores.h"
#include "adicionarfuncionario.h"
#include "funcionarios.h"
#include "cadastrarcliente.h"
#include "cliente.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

       delete ui;
}

void MainWindow::on_actionCadastrarProduto_triggered()
{
    adcProduto adcProd;
    adcProd.setModal(true);
    adcProd.exec();
}


void MainWindow::on_actionReceber_Lote_triggered()
{
    receberlote recebLote;
    recebLote.setModal(true);
    recebLote.exec();
}



void MainWindow::on_actionVerificar_Estoque_triggered()
{
    verificarlote verLote;
    verLote.setModal(true);
    verLote.exec();
}

void MainWindow::on_actionAdicionar_Fornecedor_triggered()
{
    Cadastrar *adicionarFornecedor = new Cadastrar(this);
    adicionarFornecedor->setModal(true);
    adicionarFornecedor->show();
    adicionarFornecedor->exec();
}

void MainWindow::on_actionPesquisar_Fornecedores_triggered()
{
    Fornecedores *pesquisarFuncionario = new Fornecedores(this);
    pesquisarFuncionario->setModal(true);
    pesquisarFuncionario->show();
    pesquisarFuncionario->exec();
}

void MainWindow::on_actionCadastrar_Funcionario_triggered()
{
    AdicionarFuncionario *adcfuncionarios = new AdicionarFuncionario(this);
    adcfuncionarios->setModal(true);
    adcfuncionarios->show();
    adcfuncionarios->exec();
}

void MainWindow::on_actionPesquisar_Funcionario_triggered()
{
    funcionarios *pesquisarFuncionario = new funcionarios(this);
    pesquisarFuncionario->setModal(true);
    pesquisarFuncionario->show();
    pesquisarFuncionario->exec();
}

void MainWindow::on_actionAdicionar_Cliente_triggered()
{
    cadastrarCliente *cdtCliente = new cadastrarCliente(this);
    cdtCliente->setModal(true);
    cdtCliente->show();
    cdtCliente->exec();
}


void MainWindow::on_actionPesquisar_Cliente_triggered()
{
    cliente *psqCliente = new cliente();
    psqCliente->setModal(true);
    psqCliente->show();
    psqCliente->exec();
}
