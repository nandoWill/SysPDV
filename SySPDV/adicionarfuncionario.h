#ifndef ADICIONARFUNCIONARIO_H
#define ADICIONARFUNCIONARIO_H

#include <QDialog>

namespace Ui {
class AdicionarFuncionario;
}

class AdicionarFuncionario : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionarFuncionario(QWidget *parent = 0);
    ~AdicionarFuncionario();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AdicionarFuncionario *ui;
};

#endif // ADICIONARFUNCIONARIO_H
