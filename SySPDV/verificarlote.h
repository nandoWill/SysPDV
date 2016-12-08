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

private:
    Ui::verificarlote *ui;
};

#endif // VERIFICARLOTE_H
