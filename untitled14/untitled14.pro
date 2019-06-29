TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    frogstate.cpp \
    dfssolver.cpp \
    bfssolver.cpp \
    frogsolver.cpp \
    frog.cpp \
    frogleft.cpp \
    frogright.cpp \
    frognode.cpp

HEADERS += \
    frogstate.h \
    dfssolver.h \
    bfssolver.h \
    frogsolver.h \
    frog.h \
    frogleft.h \
    frogright.h \
    frognode.h
