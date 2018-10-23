TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    device.cpp \
    display.cpp \
    processor.cpp \
    keyboard.cpp \
    charkeyboard.cpp \
    linekeyboard.cpp

HEADERS += \
    device.h \
    display.h \
    processor.h \
    keyboard.h \
    charkeyboard.h \
    linekeyboard.h
