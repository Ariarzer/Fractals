TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    utils/fractal.cpp \
    testing/testing.cpp \
    testing/uni.cpp \
    classes/ComplexNumber.cpp

HEADERS += \
    utils/fractal.h \
    testing/testing.h \
    utils/fractal.h \
    stdafx.h \
    classes/ComplexNumber.h

DISTFILES += \
    plot.py

