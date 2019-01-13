/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.13
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtSensors.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qtapsensor.sip"
#include <qtapsensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapReading.cpp"


PyDoc_STRVAR(doc_QTapReading_tapDirection, "tapDirection(self) -> QTapReading.TapDirection");

extern "C" {static PyObject *meth_QTapReading_tapDirection(PyObject *, PyObject *);}
static PyObject *meth_QTapReading_tapDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTapReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTapReading, &sipCpp))
        {
             ::QTapReading::TapDirection sipRes;

            sipRes = sipCpp->tapDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QTapReading_TapDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapReading, sipName_tapDirection, doc_QTapReading_tapDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTapReading_setTapDirection, "setTapDirection(self, QTapReading.TapDirection)");

extern "C" {static PyObject *meth_QTapReading_setTapDirection(PyObject *, PyObject *);}
static PyObject *meth_QTapReading_setTapDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTapReading::TapDirection a0;
         ::QTapReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTapReading, &sipCpp, sipType_QTapReading_TapDirection, &a0))
        {
            sipCpp->setTapDirection(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapReading, sipName_setTapDirection, doc_QTapReading_setTapDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTapReading_isDoubleTap, "isDoubleTap(self) -> bool");

extern "C" {static PyObject *meth_QTapReading_isDoubleTap(PyObject *, PyObject *);}
static PyObject *meth_QTapReading_isDoubleTap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTapReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTapReading, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDoubleTap();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapReading, sipName_isDoubleTap, doc_QTapReading_isDoubleTap);

    return NULL;
}


PyDoc_STRVAR(doc_QTapReading_setDoubleTap, "setDoubleTap(self, bool)");

extern "C" {static PyObject *meth_QTapReading_setDoubleTap(PyObject *, PyObject *);}
static PyObject *meth_QTapReading_setDoubleTap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QTapReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTapReading, &sipCpp, &a0))
        {
            sipCpp->setDoubleTap(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapReading, sipName_setDoubleTap, doc_QTapReading_setDoubleTap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTapReading(void *, const sipTypeDef *);}
static void *cast_QTapReading(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTapReading *sipCpp = reinterpret_cast< ::QTapReading *>(sipCppV);

    if (targetType == sipType_QSensorReading)
        return static_cast< ::QSensorReading *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTapReading(void *, int);}
static void release_QTapReading(void *sipCppV, int)
{
     ::QTapReading *sipCpp = reinterpret_cast< ::QTapReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QTapReading(sipSimpleWrapper *);}
static void dealloc_QTapReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTapReading(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTapReading[] = {{60, 255, 1}};


static PyMethodDef methods_QTapReading[] = {
    {SIP_MLNAME_CAST(sipName_isDoubleTap), meth_QTapReading_isDoubleTap, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapReading_isDoubleTap)},
    {SIP_MLNAME_CAST(sipName_setDoubleTap), meth_QTapReading_setDoubleTap, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapReading_setDoubleTap)},
    {SIP_MLNAME_CAST(sipName_setTapDirection), meth_QTapReading_setTapDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapReading_setTapDirection)},
    {SIP_MLNAME_CAST(sipName_tapDirection), meth_QTapReading_tapDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapReading_tapDirection)}
};

static sipEnumMemberDef enummembers_QTapReading[] = {
    {sipName_Undefined, static_cast<int>( ::QTapReading::Undefined), 63},
    {sipName_X, static_cast<int>( ::QTapReading::X), 63},
    {sipName_X_Both, static_cast<int>( ::QTapReading::X_Both), 63},
    {sipName_X_Neg, static_cast<int>( ::QTapReading::X_Neg), 63},
    {sipName_X_Pos, static_cast<int>( ::QTapReading::X_Pos), 63},
    {sipName_Y, static_cast<int>( ::QTapReading::Y), 63},
    {sipName_Y_Both, static_cast<int>( ::QTapReading::Y_Both), 63},
    {sipName_Y_Neg, static_cast<int>( ::QTapReading::Y_Neg), 63},
    {sipName_Y_Pos, static_cast<int>( ::QTapReading::Y_Pos), 63},
    {sipName_Z, static_cast<int>( ::QTapReading::Z), 63},
    {sipName_Z_Both, static_cast<int>( ::QTapReading::Z_Both), 63},
    {sipName_Z_Neg, static_cast<int>( ::QTapReading::Z_Neg), 63},
    {sipName_Z_Pos, static_cast<int>( ::QTapReading::Z_Pos), 63},
};


static pyqt5ClassPluginDef plugin_QTapReading = {
    & ::QTapReading::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QTapReading = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTapReading,
        {0},
        &plugin_QTapReading
    },
    {
        sipNameNr_QTapReading,
        {0, 0, 1},
        4, methods_QTapReading,
        13, enummembers_QTapReading,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTapReading,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTapReading,
    0,
    0,
    0,
    release_QTapReading,
    cast_QTapReading,
    0,
    0,
    0,
    0,
    0,
    0
};
