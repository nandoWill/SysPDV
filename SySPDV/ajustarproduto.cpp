#include "ajustarproduto.h"
#include "ui_ajustarproduto.h"

AjustarProduto::AjustarProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjustarProduto)
{
    ui->setupUi(this);
}

AjustarProduto::~AjustarProduto()
{
    delete ui;
}
