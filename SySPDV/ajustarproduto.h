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

private:
    Ui::AjustarProduto *ui;
};

#endif // AJUSTARPRODUTO_H
