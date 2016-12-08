#ifndef MODIFICARCLIENTE_H
#define MODIFICARCLIENTE_H

#include <QDialog>

namespace Ui {
class modificarCliente;
}

class modificarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit modificarCliente(QWidget *parent = 0);
    ~modificarCliente();

private slots:
    void on_pushButtonCancelarModificar_clicked();

private:
    Ui::modificarCliente *ui;
};

#endif // MODIFICARCLIENTE_H
