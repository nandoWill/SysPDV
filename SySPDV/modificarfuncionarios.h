#ifndef MODIFICARFUNCIONARIOS_H
#define MODIFICARFUNCIONARIOS_H

#include <QDialog>

namespace Ui {
class ModificarFuncionarios;
}

class ModificarFuncionarios : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarFuncionarios(QWidget *parent = 0);
    ~ModificarFuncionarios();

private slots:
    void on_pushButtonCancelarModificar_clicked();

    void on_pushButtonOkModificar_clicked();

private:
    Ui::ModificarFuncionarios *ui;
};

#endif // MODIFICARFUNCIONARIOS_H
