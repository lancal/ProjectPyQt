QT -= gui
CONFIG += release
TARGET = cfgtest_QtCore
INCLUDEPATH += /Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m
INCLUDEPATH += /Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m
win32 {
    LIBS += -L/Library/Frameworks/Python.framework/Versions/3.6/lib
}
SOURCES = /Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/config-tests/cfgtest_QtCore.cpp