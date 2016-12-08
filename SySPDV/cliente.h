#ifndef CLIENTE_H
#define CLIENTE_H

#include <QDialog>

namespace Ui {
class cliente;
}

class cliente : public QDialog
{
    Q_OBJECT

public:
    explicit cliente(QWidget *parent = 0);
    ~cliente();

private slots:
    void on_pushButtonCadastrarCliente_clicked();

    void on_pushButtonModificarCliente_clicked();

private:
    Ui::cliente *ui;
};

#endif // CLIENTE_H
