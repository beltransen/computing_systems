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
    linekeyboard.cpp \
    input.cpp \
    output.cpp \
    printer.cpp \
    uppercase.cpp \
    reverse.cpp \
    inputfile.cpp \
    outputfile.cpp \
    inputfilebyline.cpp \
    inputfilebyword.cpp

HEADERS += \
    device.h \
    display.h \
    processor.h \
    keyboard.h \
    charkeyboard.h \
    linekeyboard.h \
    input.h \
    output.h \
    printer.h \
    uppercase.h \
    reverse.h \
    inputfile.h \
    outputfile.h \
    inputfilebyline.h \
    inputfilebyword.h

