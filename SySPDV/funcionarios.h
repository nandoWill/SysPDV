#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include <QDialog>

namespace Ui {
class funcionarios;
}

class funcionarios : public QDialog
{
    Q_OBJECT

public:
    explicit funcionarios(QWidget *parent = 0);
    ~funcionarios();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::funcionarios *ui;
};

#endif // FUNCIONARIOS_H
