#-------------------------------------------------
#
# Project created by QtCreator 2024-05-07T17:14:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Aimlab
TEMPLATE = app


SOURCES += main.cpp\
        start.cpp \
    level.cpp \
    body.cpp \
    exp.cpp

HEADERS  += start.h \
    level.h \
    body.h \
    exp.h

FORMS    += start.ui \
    level.ui \
    body.ui \
    over.ui \
    exp.ui

RESOURCES += \
    resource.qrc
