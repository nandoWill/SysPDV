#include "adicionarfuncionario.h"
#include "ui_adicionarfuncionario.h"

AdicionarFuncionario::AdicionarFuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionarFuncionario)
{
    ui->setupUi(this);
}

AdicionarFuncionario::~AdicionarFuncionario()
{
    delete ui;
}

void AdicionarFuncionario::on_pushButton_2_clicked()
{
    close();
}
