TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    classes/z.cpp \
    utils/fractal.cpp \
    testing/testing.cpp \
    testing/uni.cpp

HEADERS += \
    classes/z.h \
    utils/fractal.h \
    testing/testing.h \
    utils/fractal.h \
    stdafx.h

