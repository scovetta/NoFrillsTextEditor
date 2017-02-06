#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T14:03:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NoFrillsTextEditor
TEMPLATE = app

SOURCES +=  src/main.cpp\
            src/mainwindow.cpp \
            src/customplaintextedit.cpp

HEADERS +=  include/mainwindow.h \
            include/customplaintextedit.h

FORMS   +=  ui/mainwindow.ui
