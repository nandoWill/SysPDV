#ifndef REALIZARVENDA_H
#define REALIZARVENDA_H

#include <QDialog>

namespace Ui {
class RealizarVenda;
}

class RealizarVenda : public QDialog
{
    Q_OBJECT

public:
    explicit RealizarVenda(QWidget *parent = 0);
    ~RealizarVenda();

private:
    Ui::RealizarVenda *ui;
};

#endif // REALIZARVENDA_H
