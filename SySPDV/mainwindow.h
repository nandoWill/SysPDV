#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
<<<<<<< HEAD
    void on_actionCadastrarProduto_triggered();

    void on_actionReceber_Lote_triggered();

    void on_actionVerificar_Estoque_triggered();
=======
    void on_actionAdicionar_Fornecedores_triggered();

    void on_actionModificar_Fornecedores_triggered();

    void on_actionAdicionar_Cliente_triggered();

    void on_actionBuscar_Clientes_triggered();

    void on_actionCadastrar_Funcionario_triggered();

    void on_actionBuscar_Funcionarios_triggered();

    void on_actionBuscar_Funcion_rio_triggered();

    void on_actionProcurar_Funcion_rio_triggered();

    void on_actionBuscar_Funcionario_triggered();
>>>>>>> origin/master

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
