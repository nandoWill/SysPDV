#ifndef RECEBERLOTE_H
#define RECEBERLOTE_H

#include <QDialog>

namespace Ui {
class receberlote;
}

class receberlote : public QDialog
{
    Q_OBJECT

public:
    explicit receberlote(QWidget *parent = 0);
    ~receberlote();

private slots:
    void on_pushButton_clicked();

private:
    Ui::receberlote *ui;
};

#endif // RECEBERLOTE_H
