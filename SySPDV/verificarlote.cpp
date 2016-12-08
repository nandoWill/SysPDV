#include "verificarlote.h"
#include "ui_verificarlote.h"

verificarlote::verificarlote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verificarlote)
{
    ui->setupUi(this);
}

verificarlote::~verificarlote()
{
    delete ui;
}
