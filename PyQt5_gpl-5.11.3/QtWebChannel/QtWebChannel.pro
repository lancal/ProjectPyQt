TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += webchannel network
CONFIG += release
CONFIG -= android_install
TARGET = QtWebChannel

win32 {
    PY_MODULE = QtWebChannel.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtWebChannel.so

    macx {
        PY_MODULE_SRC = $(TARGET).plugin/Contents/MacOS/$(TARGET)

        QMAKE_LFLAGS += "-undefined dynamic_lookup"

        equals(QT_MINOR_VERSION, 5) {
            QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
        }
    } else {
        PY_MODULE_SRC = $(TARGET)
    }
}

QMAKE_POST_LINK = $(COPY_FILE) $$PY_MODULE_SRC $$PY_MODULE

target.CONFIG = no_check_exist
target.files = $$PY_MODULE

target.path = /Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages/PyQt5
INSTALLS += target
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /Users/alan/PycharmProjects/ProjectPyQt/include/python3.6m
INCLUDEPATH += /Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m
win32 {
    LIBS += -L/Library/Frameworks/Python.framework/Versions/3.6/lib
}
HEADERS = sipAPIQtWebChannel.h
SOURCES = sipQtWebChannelQHash0100QString0101QObject.cpp sipQtWebChannelQWebChannel.cpp sipQtWebChannelQWebChannelAbstractTransport.cpp sipQtWebChannelcmodule.cpp
