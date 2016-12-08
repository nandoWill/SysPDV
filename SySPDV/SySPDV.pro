#-------------------------------------------------
#
# Project created by QtCreator 2016-12-02T10:49:08
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SySPDV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    realizarvenda.cpp \
    verificarvendas.cpp \
    adcproduto.cpp \
    receberlote.cpp \
    verificarlote.cpp \
    adicionarfuncionario.cpp \
    cadastrar.cpp \
    cadastrarcliente.cpp \
    cliente.cpp \
    fornecedores.cpp \
    funcionarios.cpp \
    modificarcliente.cpp \
    modificarfornecedor.cpp \
    modificarfuncionarios.cpp

HEADERS  += mainwindow.h \
    realizarvenda.h \
    verificarvendas.h \
    ../../../Documents/SysPDV-master/SySPDV/adcproduto.h \
    ../../../Documents/SysPDV-master/SySPDV/receberlote.h \
    ../../../Documents/SysPDV-master/SySPDV/verificarlote.h \
    adcproduto.h \
    receberlote.h \
    verificarlote.h \
    adicionarfuncionario.h \
    cadastrar.h \
    cadastrarcliente.h \
    cliente.h \
    fornecedores.h \
    funcionarios.h \
    modificarcliente.h \
    modificarfornecedor.h \
    modificarfuncionarios.h

FORMS    += mainwindow.ui \
    realizarvenda.ui \
    verificarvendas.ui \
    adcproduto.ui \
    receberlote.ui \
    verificarlote.ui \
    adicionarfuncionario.ui \
    cadastrar.ui \
    cadastrarcliente.ui \
    cliente.ui \
    fornecedores.ui \
    funcionarios.ui \
    modificarcliente.ui \
    modificarfornecedor.ui \
    modificarfuncionarios.ui
