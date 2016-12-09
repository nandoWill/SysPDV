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
    void on_actionCadastrarProduto_triggered();

    void on_actionReceber_Lote_triggered();

    void on_actionVerificar_Estoque_triggered();

    void on_actionAdicionar_Fornecedor_triggered();

    void on_actionPesquisar_Fornecedores_triggered();

    void on_actionCadastrar_Funcionario_triggered();

    void on_actionPesquisar_Funcionario_triggered();

    void on_actionAdicionar_Cliente_triggered();

    void on_actionBuscar_Clientes_triggered();

    void on_actionPesquisar_Clientes_triggered();

    void on_actionPesquisar_Cliente_triggered();

    void on_actionRealizar_Vendas_triggered();

    void on_actionVerificar_Vendas_triggered();

    void on_actionAjustar_Produto_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
