TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += macextras
CONFIG += release
CONFIG -= android_install
TARGET = QtMacExtras

win32 {
    PY_MODULE = QtMacExtras.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtMacExtras.so

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
HEADERS = sipAPIQtMacExtras.h
SOURCES = sipQtMacExtrasNSToolbar.cpp sipQtMacExtrasNSToolbarItem.cpp sipQtMacExtrasQList0101QMacToolBarItem.cpp sipQtMacExtrasQMacPasteboardMime.cpp sipQtMacExtrasQMacToolBar.cpp sipQtMacExtrasQMacToolBarItem.cpp sipQtMacExtrasQtMac.cpp sipQtMacExtrascmodule.cpp
