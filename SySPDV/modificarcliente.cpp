#include "modificarcliente.h"
#include "ui_modificarcliente.h"

modificarCliente::modificarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificarCliente)
{
    ui->setupUi(this);
}

modificarCliente::~modificarCliente()
{
    delete ui;
}

void modificarCliente::on_pushButtonCancelarModificar_clicked()
{
    close();
}
