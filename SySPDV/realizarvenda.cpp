#include "realizarvenda.h"
#include "ui_realizarvenda.h"

RealizarVenda::RealizarVenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RealizarVenda)
{
    ui->setupUi(this);
}

RealizarVenda::~RealizarVenda()
{
    delete ui;
}
