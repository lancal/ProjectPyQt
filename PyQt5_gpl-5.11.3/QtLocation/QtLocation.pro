TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += location
CONFIG += release
CONFIG -= android_install
TARGET = QtLocation

win32 {
    PY_MODULE = QtLocation.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtLocation.so

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
HEADERS = sipAPIQtLocation.h
SOURCES = sipQtLocationQGeoCodeReply.cpp sipQtLocationQGeoCodingManager.cpp sipQtLocationQGeoCodingManagerEngine.cpp sipQtLocationQGeoManeuver.cpp sipQtLocationQGeoRoute.cpp sipQtLocationQGeoRouteReply.cpp sipQtLocationQGeoRouteRequest.cpp sipQtLocationQGeoRouteRequestFeatureTypes.cpp sipQtLocationQGeoRouteRequestFeatureWeights.cpp sipQtLocationQGeoRouteRequestManeuverDetails.cpp sipQtLocationQGeoRouteRequestRouteOptimizations.cpp sipQtLocationQGeoRouteRequestSegmentDetails.cpp sipQtLocationQGeoRouteRequestTravelModes.cpp sipQtLocationQGeoRouteSegment.cpp sipQtLocationQGeoRoutingManager.cpp sipQtLocationQGeoRoutingManagerEngine.cpp sipQtLocationQGeoServiceProvider.cpp sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp sipQtLocationQGeoServiceProviderMappingFeatures.cpp sipQtLocationQGeoServiceProviderNavigationFeatures.cpp sipQtLocationQGeoServiceProviderPlacesFeatures.cpp sipQtLocationQGeoServiceProviderRoutingFeatures.cpp sipQtLocationQList0100QGeoLocation.cpp sipQtLocationQList0100QGeoRectangle.cpp sipQtLocationQList0100QGeoRoute.cpp sipQtLocationQList0100QGeoRouteRequestFeatureType.cpp sipQtLocationQList0100QPlace.cpp sipQtLocationQList0100QPlaceCategory.cpp sipQtLocationQList0100QPlaceContactDetail.cpp sipQtLocationQList0100QPlaceSearchResult.cpp sipQtLocationQList0100QVariantMap.cpp sipQtLocationQLocation.cpp sipQtLocationQLocationVisibilityScope.cpp sipQtLocationQMap18000100QPlaceContent.cpp sipQtLocationQNavigationManager.cpp sipQtLocationQPlace.cpp sipQtLocationQPlaceAttribute.cpp sipQtLocationQPlaceCategory.cpp sipQtLocationQPlaceContactDetail.cpp sipQtLocationQPlaceContent.cpp sipQtLocationQPlaceContentReply.cpp sipQtLocationQPlaceContentRequest.cpp sipQtLocationQPlaceDetailsReply.cpp sipQtLocationQPlaceEditorial.cpp sipQtLocationQPlaceIcon.cpp sipQtLocationQPlaceIdReply.cpp sipQtLocationQPlaceImage.cpp sipQtLocationQPlaceManager.cpp sipQtLocationQPlaceManagerEngine.cpp sipQtLocationQPlaceMatchReply.cpp sipQtLocationQPlaceMatchRequest.cpp sipQtLocationQPlaceProposedSearchResult.cpp sipQtLocationQPlaceRatings.cpp sipQtLocationQPlaceReply.cpp sipQtLocationQPlaceResult.cpp sipQtLocationQPlaceReview.cpp sipQtLocationQPlaceSearchReply.cpp sipQtLocationQPlaceSearchRequest.cpp sipQtLocationQPlaceSearchResult.cpp sipQtLocationQPlaceSearchSuggestionReply.cpp sipQtLocationQPlaceSupplier.cpp sipQtLocationQPlaceUser.cpp sipQtLocationcmodule.cpp
