#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adcproduto.h"
#include "receberlote.h"
#include "verificarlote.h"

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
