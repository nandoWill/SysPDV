#include "modificarfuncionarios.h"
#include "ui_modificarfuncionarios.h"

ModificarFuncionarios::ModificarFuncionarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificarFuncionarios)
{
    ui->setupUi(this);
}

ModificarFuncionarios::~ModificarFuncionarios()
{
    delete ui;
}

void ModificarFuncionarios::on_pushButtonCancelarModificar_clicked()
{
    close();
}
