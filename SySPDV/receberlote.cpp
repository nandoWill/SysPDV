#include "receberlote.h"
#include "ui_receberlote.h"

receberlote::receberlote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receberlote)
{
    ui->setupUi(this);
}

receberlote::~receberlote()
{
    delete ui;
}
