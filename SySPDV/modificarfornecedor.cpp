#include "modificarfornecedor.h"
#include "ui_modificarfornecedor.h"

modificarFornecedor::modificarFornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificarFornecedor)
{
    ui->setupUi(this);
}

modificarFornecedor::~modificarFornecedor()
{
    delete ui;
}

void modificarFornecedor::on_pushButtonCancelarModificarDados_clicked()
{
    close();
}
