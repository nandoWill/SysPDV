#include "funcionarios.h"
#include "ui_funcionarios.h"
#include "modificarfuncionarios.h"

funcionarios::funcionarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::funcionarios)
{
    ui->setupUi(this);
}

funcionarios::~funcionarios()
{
    delete ui;
}



void funcionarios::on_pushButton_2_clicked()
{
    ModificarFuncionarios *modificarfuncionario = new ModificarFuncionarios(this);
    modificarfuncionario->setModal(true);
    modificarfuncionario->show();
    modificarfuncionario->exec();
}

void funcionarios::on_pushButton_clicked()
{
     QString CT= ui->lineEdit->text();
     QString Nome= ui->lineEdit_2->text();


}
