#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T20:27:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NeauralNetwork
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++11

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    baseneuron.cpp \
    Neurons/neuronadd.cpp

HEADERS += \
    mainwindow.h \
    baseneuron.h \
    Neurons/neuronadd.h
 
FORMS += \
    mainwindow.ui
