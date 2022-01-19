#-------------------------------------------------
#
# Project created by QtCreator 2021-12-01T00:42:33
#
#-------------------------------------------------

QT       += network
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
TARGET = qtBank_project
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    pankkimenu.cpp \
    saldo.cpp \
    nosta_rahaa.cpp \
    talletus.cpp \
    tilintapahtumat.cpp \
    hae_lainaa.cpp \
    maksa_lasku.cpp \
    virheform.cpp

HEADERS += \
        mainwindow.h \
    pankkimenu.h \
    saldo.h \
    nosta_rahaa.h \
    talletus.h \
    tilintapahtumat.h \
    hae_lainaa.h \
    maksa_lasku.h \
    virheform.h

FORMS += \
        mainwindow.ui \
    pankkimenu.ui \
    saldo.ui \
    nosta_rahaa.ui \
    talletus.ui \
    tilintapahtumat.ui \
    hae_lainaa.ui \
    maksa_lasku.ui \
    virheform.ui
