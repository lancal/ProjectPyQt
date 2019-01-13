TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += sensors
CONFIG += release
CONFIG -= android_install
TARGET = QtSensors

win32 {
    PY_MODULE = QtSensors.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtSensors.so

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
HEADERS = sipAPIQtSensors.h
SOURCES = sipQtSensorsQAccelerometer.cpp sipQtSensorsQAccelerometerFilter.cpp sipQtSensorsQAccelerometerReading.cpp sipQtSensorsQAltimeter.cpp sipQtSensorsQAltimeterFilter.cpp sipQtSensorsQAltimeterReading.cpp sipQtSensorsQAmbientLightFilter.cpp sipQtSensorsQAmbientLightReading.cpp sipQtSensorsQAmbientLightSensor.cpp sipQtSensorsQAmbientTemperatureFilter.cpp sipQtSensorsQAmbientTemperatureReading.cpp sipQtSensorsQAmbientTemperatureSensor.cpp sipQtSensorsQCompass.cpp sipQtSensorsQCompassFilter.cpp sipQtSensorsQCompassReading.cpp sipQtSensorsQDistanceFilter.cpp sipQtSensorsQDistanceReading.cpp sipQtSensorsQDistanceSensor.cpp sipQtSensorsQGyroscope.cpp sipQtSensorsQGyroscopeFilter.cpp sipQtSensorsQGyroscopeReading.cpp sipQtSensorsQHolsterFilter.cpp sipQtSensorsQHolsterReading.cpp sipQtSensorsQHolsterSensor.cpp sipQtSensorsQHumidityFilter.cpp sipQtSensorsQHumidityReading.cpp sipQtSensorsQHumiditySensor.cpp sipQtSensorsQIRProximityFilter.cpp sipQtSensorsQIRProximityReading.cpp sipQtSensorsQIRProximitySensor.cpp sipQtSensorsQLidFilter.cpp sipQtSensorsQLidReading.cpp sipQtSensorsQLidSensor.cpp sipQtSensorsQLightFilter.cpp sipQtSensorsQLightReading.cpp sipQtSensorsQLightSensor.cpp sipQtSensorsQList0100qoutputrange.cpp sipQtSensorsQList0101QSensorFilter.cpp sipQtSensorsQMagnetometer.cpp sipQtSensorsQMagnetometerFilter.cpp sipQtSensorsQMagnetometerReading.cpp sipQtSensorsQOrientationFilter.cpp sipQtSensorsQOrientationReading.cpp sipQtSensorsQOrientationSensor.cpp sipQtSensorsQPressureFilter.cpp sipQtSensorsQPressureReading.cpp sipQtSensorsQPressureSensor.cpp sipQtSensorsQProximityFilter.cpp sipQtSensorsQProximityReading.cpp sipQtSensorsQProximitySensor.cpp sipQtSensorsQRotationFilter.cpp sipQtSensorsQRotationReading.cpp sipQtSensorsQRotationSensor.cpp sipQtSensorsQSensor.cpp sipQtSensorsQSensorFilter.cpp sipQtSensorsQSensorReading.cpp sipQtSensorsQTapFilter.cpp sipQtSensorsQTapReading.cpp sipQtSensorsQTapSensor.cpp sipQtSensorsQTiltFilter.cpp sipQtSensorsQTiltReading.cpp sipQtSensorsQTiltSensor.cpp sipQtSensorscmodule.cpp sipQtSensorsqoutputrange.cpp
