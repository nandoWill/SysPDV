#include "adcproduto.h"
#include "ui_adcproduto.h"

adcProduto::adcProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adcProduto)
{
    ui->setupUi(this);
}

adcProduto::~adcProduto()
{
    delete ui;
}
