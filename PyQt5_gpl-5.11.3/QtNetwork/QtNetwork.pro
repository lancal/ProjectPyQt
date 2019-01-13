TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install
TARGET = QtNetwork

win32 {
    PY_MODULE = QtNetwork.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtNetwork.so

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
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQHostAddressConversionMode.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQHstsPolicy.cpp sipQtNetworkQHstsPolicyPolicyFlags.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQMap0100QByteArray0100QVariant.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQNetworkDatagram.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQSsl.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQSslDiffieHellmanParameters.cpp sipQtNetworkQSslEllipticCurve.cpp sipQtNetworkQSslError.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQSslPreSharedKeyAuthenticator.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQVector0100QHstsPolicy.cpp sipQtNetworkQVector0100QSslEllipticCurve.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkcmodule.cpp
