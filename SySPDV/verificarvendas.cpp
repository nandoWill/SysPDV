#include "verificarvendas.h"
#include "ui_verificarvendas.h"

VerificarVendas::VerificarVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerificarVendas)
{
    ui->setupUi(this);
}

VerificarVendas::~VerificarVendas()
{
    delete ui;
}
