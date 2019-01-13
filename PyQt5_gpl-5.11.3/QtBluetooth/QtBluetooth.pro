TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += bluetooth
CONFIG += release
CONFIG -= android_install
TARGET = QtBluetooth

win32 {
    PY_MODULE = QtBluetooth.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtBluetooth.so

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
HEADERS = sipAPIQtBluetooth.h
SOURCES = sipQtBluetoothQBluetooth.cpp sipQtBluetoothQBluetoothAddress.cpp sipQtBluetoothQBluetoothAttAccessConstraints.cpp sipQtBluetoothQBluetoothDeviceDiscoveryAgent.cpp sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp sipQtBluetoothQBluetoothDeviceInfo.cpp sipQtBluetoothQBluetoothDeviceInfoCoreConfigurations.cpp sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp sipQtBluetoothQBluetoothHostInfo.cpp sipQtBluetoothQBluetoothLocalDevice.cpp sipQtBluetoothQBluetoothSecurityFlags.cpp sipQtBluetoothQBluetoothServer.cpp sipQtBluetoothQBluetoothServiceDiscoveryAgent.cpp sipQtBluetoothQBluetoothServiceInfo.cpp sipQtBluetoothQBluetoothServiceInfoSequence.cpp sipQtBluetoothQBluetoothSocket.cpp sipQtBluetoothQBluetoothTransferManager.cpp sipQtBluetoothQBluetoothTransferReply.cpp sipQtBluetoothQBluetoothTransferRequest.cpp sipQtBluetoothQBluetoothUuid.cpp sipQtBluetoothQList0100QBluetoothAddress.cpp sipQtBluetoothQList0100QBluetoothDeviceInfo.cpp sipQtBluetoothQList0100QBluetoothHostInfo.cpp sipQtBluetoothQList0100QBluetoothServiceInfo.cpp sipQtBluetoothQList0100QBluetoothUuid.cpp sipQtBluetoothQList0100QLowEnergyAdvertisingParametersAddressInfo.cpp sipQtBluetoothQList0100QLowEnergyCharacteristic.cpp sipQtBluetoothQList0100QLowEnergyCharacteristicData.cpp sipQtBluetoothQList0100QLowEnergyDescriptor.cpp sipQtBluetoothQList0100QLowEnergyDescriptorData.cpp sipQtBluetoothQList0101QLowEnergyService.cpp sipQtBluetoothQList1600.cpp sipQtBluetoothQLowEnergyAdvertisingData.cpp sipQtBluetoothQLowEnergyAdvertisingParameters.cpp sipQtBluetoothQLowEnergyAdvertisingParametersAddressInfo.cpp sipQtBluetoothQLowEnergyCharacteristic.cpp sipQtBluetoothQLowEnergyCharacteristicData.cpp sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp sipQtBluetoothQLowEnergyConnectionParameters.cpp sipQtBluetoothQLowEnergyController.cpp sipQtBluetoothQLowEnergyDescriptor.cpp sipQtBluetoothQLowEnergyDescriptorData.cpp sipQtBluetoothQLowEnergyService.cpp sipQtBluetoothQLowEnergyServiceData.cpp sipQtBluetoothQLowEnergyServiceServiceTypes.cpp sipQtBluetoothcmodule.cpp sipQtBluetoothquint128.cpp
