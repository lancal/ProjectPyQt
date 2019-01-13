CONFIG      += plugin release warn_on
QT          += qml

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5qmlplugin
TEMPLATE    = lib

INCLUDEPATH += /Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m /Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m
LIBS        += -L/Library/Frameworks/Python.framework/Versions/3.6/lib -lpython3.6m
DEFINES     += PYTHON_LIB=\\\"Python.framework/Versions/3.6/Python\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /usr/local/Cellar/qt/5.12.0/plugins/PyQt5

python.path = /usr/local/Cellar/qt/5.12.0/plugins/PyQt5
python.files = python

INSTALLS    += target python

INCLUDEPATH += /Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/qmlscene
VPATH = /Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/qmlscene

