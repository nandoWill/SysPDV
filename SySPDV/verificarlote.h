#ifndef VERIFICARLOTE_H
#define VERIFICARLOTE_H

#include <QDialog>

namespace Ui {
class verificarlote;
}

class verificarlote : public QDialog
{
    Q_OBJECT

public:
    explicit verificarlote(QWidget *parent = 0);
    ~verificarlote();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::verificarlote *ui;
};

#endif // VERIFICARLOTE_H
