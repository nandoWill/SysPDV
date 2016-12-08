/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCadastrarProduto;
    QAction *actionAjustar_Produto;
    QAction *actionReceber_Lote;
    QAction *actionVerificar_Estoque;
    QAction *actionAdicionar_Fornecedor;
    QAction *actionAtualizar_Dados_de_Fornecedor;
    QAction *actionRealizar_Vvendas;
    QAction *actionRealizar_Vendas;
    QAction *actionVerificar_Vendas;
    QAction *actionCadastrar_Funcionario;
    QAction *actionVerificar_Historico;
    QAction *actionAdicionar_Cliente;
    QAction *actionAtualizar_dados;
    QAction *actionBuscar_Clientes;
    QAction *actionBuscar_Funcionarios;
    QAction *actionLicen_a_de_uso;
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuProdutos;
    QMenu *menuFornecedores;
    QMenu *menuVendas;
    QMenu *menuFuncionarios;
    QMenu *menuFidelidade;
    QMenu *menuAjuda;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 350);
        actionCadastrarProduto = new QAction(MainWindow);
        actionCadastrarProduto->setObjectName(QStringLiteral("actionCadastrarProduto"));
        actionAjustar_Produto = new QAction(MainWindow);
        actionAjustar_Produto->setObjectName(QStringLiteral("actionAjustar_Produto"));
        actionReceber_Lote = new QAction(MainWindow);
        actionReceber_Lote->setObjectName(QStringLiteral("actionReceber_Lote"));
        actionVerificar_Estoque = new QAction(MainWindow);
        actionVerificar_Estoque->setObjectName(QStringLiteral("actionVerificar_Estoque"));
        actionAdicionar_Fornecedor = new QAction(MainWindow);
        actionAdicionar_Fornecedor->setObjectName(QStringLiteral("actionAdicionar_Fornecedor"));
        actionAtualizar_Dados_de_Fornecedor = new QAction(MainWindow);
        actionAtualizar_Dados_de_Fornecedor->setObjectName(QStringLiteral("actionAtualizar_Dados_de_Fornecedor"));
        actionRealizar_Vvendas = new QAction(MainWindow);
        actionRealizar_Vvendas->setObjectName(QStringLiteral("actionRealizar_Vvendas"));
        actionRealizar_Vendas = new QAction(MainWindow);
        actionRealizar_Vendas->setObjectName(QStringLiteral("actionRealizar_Vendas"));
        actionVerificar_Vendas = new QAction(MainWindow);
        actionVerificar_Vendas->setObjectName(QStringLiteral("actionVerificar_Vendas"));
        actionCadastrar_Funcionario = new QAction(MainWindow);
        actionCadastrar_Funcionario->setObjectName(QStringLiteral("actionCadastrar_Funcionario"));
        actionVerificar_Historico = new QAction(MainWindow);
        actionVerificar_Historico->setObjectName(QStringLiteral("actionVerificar_Historico"));
        actionAdicionar_Cliente = new QAction(MainWindow);
        actionAdicionar_Cliente->setObjectName(QStringLiteral("actionAdicionar_Cliente"));
        actionAtualizar_dados = new QAction(MainWindow);
        actionAtualizar_dados->setObjectName(QStringLiteral("actionAtualizar_dados"));
        actionBuscar_Clientes = new QAction(MainWindow);
        actionBuscar_Clientes->setObjectName(QStringLiteral("actionBuscar_Clientes"));
        actionBuscar_Funcionarios = new QAction(MainWindow);
        actionBuscar_Funcionarios->setObjectName(QStringLiteral("actionBuscar_Funcionarios"));
        actionLicen_a_de_uso = new QAction(MainWindow);
        actionLicen_a_de_uso->setObjectName(QStringLiteral("actionLicen_a_de_uso"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 27));
        menuProdutos = new QMenu(menuBar);
        menuProdutos->setObjectName(QStringLiteral("menuProdutos"));
        menuFornecedores = new QMenu(menuBar);
        menuFornecedores->setObjectName(QStringLiteral("menuFornecedores"));
        menuVendas = new QMenu(menuBar);
        menuVendas->setObjectName(QStringLiteral("menuVendas"));
        menuFuncionarios = new QMenu(menuBar);
        menuFuncionarios->setObjectName(QStringLiteral("menuFuncionarios"));
        menuFidelidade = new QMenu(menuBar);
        menuFidelidade->setObjectName(QStringLiteral("menuFidelidade"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuProdutos->menuAction());
        menuBar->addAction(menuFornecedores->menuAction());
        menuBar->addAction(menuVendas->menuAction());
        menuBar->addAction(menuFuncionarios->menuAction());
        menuBar->addAction(menuFidelidade->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuProdutos->addAction(actionCadastrarProduto);
        menuProdutos->addAction(actionAjustar_Produto);
        menuProdutos->addSeparator();
        menuProdutos->addAction(actionReceber_Lote);
        menuProdutos->addAction(actionVerificar_Estoque);
        menuFornecedores->addAction(actionAdicionar_Fornecedor);
        menuFornecedores->addAction(actionAtualizar_Dados_de_Fornecedor);
        menuVendas->addAction(actionRealizar_Vendas);
        menuVendas->addAction(actionVerificar_Vendas);
        menuFuncionarios->addAction(actionCadastrar_Funcionario);
        menuFuncionarios->addAction(actionVerificar_Historico);
        menuFuncionarios->addAction(actionBuscar_Funcionarios);
        menuFidelidade->addAction(actionAdicionar_Cliente);
        menuFidelidade->addAction(actionAtualizar_dados);
        menuFidelidade->addAction(actionBuscar_Clientes);
        menuAjuda->addAction(actionLicen_a_de_uso);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCadastrarProduto->setText(QApplication::translate("MainWindow", "CadastrarProduto", 0));
        actionAjustar_Produto->setText(QApplication::translate("MainWindow", "Ajustar Produto", 0));
        actionReceber_Lote->setText(QApplication::translate("MainWindow", "Receber Lote", 0));
        actionVerificar_Estoque->setText(QApplication::translate("MainWindow", "Verificar Estoque", 0));
#ifndef QT_NO_TOOLTIP
        actionVerificar_Estoque->setToolTip(QApplication::translate("MainWindow", "Verificar Estoque", 0));
#endif // QT_NO_TOOLTIP
        actionAdicionar_Fornecedor->setText(QApplication::translate("MainWindow", "Adicionar Fornecedor", 0));
        actionAtualizar_Dados_de_Fornecedor->setText(QApplication::translate("MainWindow", "Atualizar Dados de Fornecedor", 0));
        actionRealizar_Vvendas->setText(QApplication::translate("MainWindow", "Realizar Vvendas", 0));
        actionRealizar_Vendas->setText(QApplication::translate("MainWindow", "Realizar Vendas", 0));
        actionVerificar_Vendas->setText(QApplication::translate("MainWindow", "Verificar Vendas", 0));
        actionCadastrar_Funcionario->setText(QApplication::translate("MainWindow", "Cadastrar Funcionario", 0));
        actionVerificar_Historico->setText(QApplication::translate("MainWindow", "Verificar Historico", 0));
        actionAdicionar_Cliente->setText(QApplication::translate("MainWindow", "Adicionar Cliente", 0));
        actionAtualizar_dados->setText(QApplication::translate("MainWindow", "Atualizar dados", 0));
        actionBuscar_Clientes->setText(QApplication::translate("MainWindow", "Buscar Clientes", 0));
        actionBuscar_Funcionarios->setText(QApplication::translate("MainWindow", "Buscar Funcionarios", 0));
        actionLicen_a_de_uso->setText(QApplication::translate("MainWindow", "Licen\303\247a de uso", 0));
        menuProdutos->setTitle(QApplication::translate("MainWindow", "Produtos", 0));
        menuFornecedores->setTitle(QApplication::translate("MainWindow", "Fornecedores", 0));
        menuVendas->setTitle(QApplication::translate("MainWindow", "Vendas", 0));
        menuFuncionarios->setTitle(QApplication::translate("MainWindow", "Funcionarios", 0));
        menuFidelidade->setTitle(QApplication::translate("MainWindow", "Fidelidade", 0));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
