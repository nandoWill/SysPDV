#ifndef CADASTRARCLIENTE_H
#define CADASTRARCLIENTE_H

#include <QDialog>

namespace Ui {
class cadastrarCliente;
}

class cadastrarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit cadastrarCliente(QWidget *parent = 0);
    ~cadastrarCliente();

private slots:
    void on_pushButtonCancelarCadastro_clicked();

    void on_pushButtonOkCadastrar_clicked();

private:
    Ui::cadastrarCliente *ui;
};

#endif // CADASTRARCLIENTE_H
