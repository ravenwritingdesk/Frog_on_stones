TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    stone.cpp \
    stonenode.cpp \
    solver.cpp \
    dfssolver.cpp \
    bfssolver.cpp

HEADERS += \
    stone.h \
    stonenode.h \
    solver.h \
    dfssolver.h \
    bfssolver.h
