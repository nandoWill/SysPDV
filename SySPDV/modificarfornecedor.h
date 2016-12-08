#ifndef MODIFICARFORNECEDOR_H
#define MODIFICARFORNECEDOR_H

#include <QDialog>

namespace Ui {
class modificarFornecedor;
}

class modificarFornecedor : public QDialog
{
    Q_OBJECT

public:
    explicit modificarFornecedor(QWidget *parent = 0);
    ~modificarFornecedor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButtonCancelarModificarDados_clicked();

private:
    Ui::modificarFornecedor *ui;
};

#endif // MODIFICARFORNECEDOR_H
