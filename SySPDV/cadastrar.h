#ifndef CADASTRAR_H
#define CADASTRAR_H

#include <QDialog>

namespace Ui {
class Cadastrar;
}

class Cadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastrar(QWidget *parent = 0);
    ~Cadastrar();

private slots:
    void on_pushButtonCancelarCadastro_clicked();

private:
    Ui::Cadastrar *ui;
};

#endif // CADASTRAR_H
