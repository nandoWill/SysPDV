#ifndef VERIFICARVENDAS_H
#define VERIFICARVENDAS_H

#include <QDialog>

namespace Ui {
class VerificarVendas;
}

class VerificarVendas : public QDialog
{
    Q_OBJECT

public:
    explicit VerificarVendas(QWidget *parent = 0);
    ~VerificarVendas();

private:
    Ui::VerificarVendas *ui;
};

#endif // VERIFICARVENDAS_H
