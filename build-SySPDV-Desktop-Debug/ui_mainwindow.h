/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(725, 350);
        actionCadastrarProduto = new QAction(MainWindow);
        actionCadastrarProduto->setObjectName(QString::fromUtf8("actionCadastrarProduto"));
        actionAjustar_Produto = new QAction(MainWindow);
        actionAjustar_Produto->setObjectName(QString::fromUtf8("actionAjustar_Produto"));
        actionReceber_Lote = new QAction(MainWindow);
        actionReceber_Lote->setObjectName(QString::fromUtf8("actionReceber_Lote"));
        actionVerificar_Estoque = new QAction(MainWindow);
        actionVerificar_Estoque->setObjectName(QString::fromUtf8("actionVerificar_Estoque"));
        actionAdicionar_Fornecedor = new QAction(MainWindow);
        actionAdicionar_Fornecedor->setObjectName(QString::fromUtf8("actionAdicionar_Fornecedor"));
        actionAtualizar_Dados_de_Fornecedor = new QAction(MainWindow);
        actionAtualizar_Dados_de_Fornecedor->setObjectName(QString::fromUtf8("actionAtualizar_Dados_de_Fornecedor"));
        actionRealizar_Vvendas = new QAction(MainWindow);
        actionRealizar_Vvendas->setObjectName(QString::fromUtf8("actionRealizar_Vvendas"));
        actionRealizar_Vendas = new QAction(MainWindow);
        actionRealizar_Vendas->setObjectName(QString::fromUtf8("actionRealizar_Vendas"));
        actionVerificar_Vendas = new QAction(MainWindow);
        actionVerificar_Vendas->setObjectName(QString::fromUtf8("actionVerificar_Vendas"));
        actionCadastrar_Funcionario = new QAction(MainWindow);
        actionCadastrar_Funcionario->setObjectName(QString::fromUtf8("actionCadastrar_Funcionario"));
        actionVerificar_Historico = new QAction(MainWindow);
        actionVerificar_Historico->setObjectName(QString::fromUtf8("actionVerificar_Historico"));
        actionAdicionar_Cliente = new QAction(MainWindow);
        actionAdicionar_Cliente->setObjectName(QString::fromUtf8("actionAdicionar_Cliente"));
        actionAtualizar_dados = new QAction(MainWindow);
        actionAtualizar_dados->setObjectName(QString::fromUtf8("actionAtualizar_dados"));
        actionBuscar_Clientes = new QAction(MainWindow);
        actionBuscar_Clientes->setObjectName(QString::fromUtf8("actionBuscar_Clientes"));
        actionBuscar_Funcionarios = new QAction(MainWindow);
        actionBuscar_Funcionarios->setObjectName(QString::fromUtf8("actionBuscar_Funcionarios"));
        actionLicen_a_de_uso = new QAction(MainWindow);
        actionLicen_a_de_uso->setObjectName(QString::fromUtf8("actionLicen_a_de_uso"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 21));
        menuProdutos = new QMenu(menuBar);
        menuProdutos->setObjectName(QString::fromUtf8("menuProdutos"));
        menuFornecedores = new QMenu(menuBar);
        menuFornecedores->setObjectName(QString::fromUtf8("menuFornecedores"));
        menuVendas = new QMenu(menuBar);
        menuVendas->setObjectName(QString::fromUtf8("menuVendas"));
        menuFuncionarios = new QMenu(menuBar);
        menuFuncionarios->setObjectName(QString::fromUtf8("menuFuncionarios"));
        menuFidelidade = new QMenu(menuBar);
        menuFidelidade->setObjectName(QString::fromUtf8("menuFidelidade"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCadastrarProduto->setText(QApplication::translate("MainWindow", "CadastrarProduto", 0, QApplication::UnicodeUTF8));
        actionAjustar_Produto->setText(QApplication::translate("MainWindow", "Ajustar Produto", 0, QApplication::UnicodeUTF8));
        actionReceber_Lote->setText(QApplication::translate("MainWindow", "Receber Lote", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReceber_Lote->setToolTip(QApplication::translate("MainWindow", "Receber Lote", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionVerificar_Estoque->setText(QApplication::translate("MainWindow", "Verificar Estoque", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionVerificar_Estoque->setToolTip(QApplication::translate("MainWindow", "Verificar Estoque", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdicionar_Fornecedor->setText(QApplication::translate("MainWindow", "Adicionar Fornecedor", 0, QApplication::UnicodeUTF8));
        actionAtualizar_Dados_de_Fornecedor->setText(QApplication::translate("MainWindow", "Atualizar Dados de Fornecedor", 0, QApplication::UnicodeUTF8));
        actionRealizar_Vvendas->setText(QApplication::translate("MainWindow", "Realizar Vvendas", 0, QApplication::UnicodeUTF8));
        actionRealizar_Vendas->setText(QApplication::translate("MainWindow", "Realizar Vendas", 0, QApplication::UnicodeUTF8));
        actionVerificar_Vendas->setText(QApplication::translate("MainWindow", "Verificar Vendas", 0, QApplication::UnicodeUTF8));
        actionCadastrar_Funcionario->setText(QApplication::translate("MainWindow", "Cadastrar Funcionario", 0, QApplication::UnicodeUTF8));
        actionVerificar_Historico->setText(QApplication::translate("MainWindow", "Verificar Historico", 0, QApplication::UnicodeUTF8));
        actionAdicionar_Cliente->setText(QApplication::translate("MainWindow", "Adicionar Cliente", 0, QApplication::UnicodeUTF8));
        actionAtualizar_dados->setText(QApplication::translate("MainWindow", "Atualizar dados", 0, QApplication::UnicodeUTF8));
        actionBuscar_Clientes->setText(QApplication::translate("MainWindow", "Buscar Clientes", 0, QApplication::UnicodeUTF8));
        actionBuscar_Funcionarios->setText(QApplication::translate("MainWindow", "Buscar Funcionarios", 0, QApplication::UnicodeUTF8));
        actionLicen_a_de_uso->setText(QApplication::translate("MainWindow", "Licen\303\247a de uso", 0, QApplication::UnicodeUTF8));
        menuProdutos->setTitle(QApplication::translate("MainWindow", "Produtos", 0, QApplication::UnicodeUTF8));
        menuFornecedores->setTitle(QApplication::translate("MainWindow", "Fornecedores", 0, QApplication::UnicodeUTF8));
        menuVendas->setTitle(QApplication::translate("MainWindow", "Vendas", 0, QApplication::UnicodeUTF8));
        menuFuncionarios->setTitle(QApplication::translate("MainWindow", "Funcionarios", 0, QApplication::UnicodeUTF8));
        menuFidelidade->setTitle(QApplication::translate("MainWindow", "Fidelidade", 0, QApplication::UnicodeUTF8));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
