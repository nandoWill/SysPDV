#ifndef AJUSTARPRODUTO_H
#define AJUSTARPRODUTO_H

#include <QDialog>

namespace Ui {
class AjustarProduto;
}

class AjustarProduto : public QDialog
{
    Q_OBJECT

public:
    explicit AjustarProduto(QWidget *parent = 0);
    ~AjustarProduto();

private slots:
    void on_Ajustar_clicked();

private:
    Ui::AjustarProduto *ui;
};

#endif // AJUSTARPRODUTO_H
