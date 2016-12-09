#ifndef ADCPRODUTO_H
#define ADCPRODUTO_H

#include <QDialog>

namespace Ui {
class adcProduto;
}

class adcProduto : public QDialog
{
    Q_OBJECT

public:
    explicit adcProduto(QWidget *parent = 0);
    ~adcProduto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adcProduto *ui;
};

#endif // ADCPRODUTO_H
