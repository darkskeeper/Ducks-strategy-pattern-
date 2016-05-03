QT += core
QT -= gui

CONFIG += c++11

TARGET = FirstPattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    duck.cpp \
    flybehavior.cpp \
    quackbehavior.cpp \
    flywithwings.cpp \
    flynoway.cpp \
    quack.cpp \
    squeak.cpp \
    mutequack.cpp \
    mallardduck.cpp \
    modelduck.cpp \
    flyrocketpowered.cpp

HEADERS += \
    duck.h \
    flybehavior.h \
    quackbehavior.h \
    flywithwings.h \
    flynoway.h \
    quack.h \
    squeak.h \
    mutequack.h \
    mallardduck.h \
    modelduck.h \
    flyrocketpowered.h
