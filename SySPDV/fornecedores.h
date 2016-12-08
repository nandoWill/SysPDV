#ifndef FORNECEDORES_H
#define FORNECEDORES_H

#include <QDialog>

namespace Ui {
class Fornecedores;
}

class Fornecedores : public QDialog
{
    Q_OBJECT

public:
    explicit Fornecedores(QWidget *parent = 0);
    ~Fornecedores();

private slots:
    void on_pushButtonCadastrar_clicked();

    void on_pushButtonModificar_clicked();

private:
    Ui::Fornecedores *ui;
};

#endif // FORNECEDORES_H
