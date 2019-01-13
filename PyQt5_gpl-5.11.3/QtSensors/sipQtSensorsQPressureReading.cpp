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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qpressuresensor.sip"
#include <qpressuresensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQPressureReading.cpp"


PyDoc_STRVAR(doc_QPressureReading_pressure, "pressure(self) -> float");

extern "C" {static PyObject *meth_QPressureReading_pressure(PyObject *, PyObject *);}
static PyObject *meth_QPressureReading_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPressureReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPressureReading, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->pressure();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPressureReading, sipName_pressure, doc_QPressureReading_pressure);

    return NULL;
}


PyDoc_STRVAR(doc_QPressureReading_setPressure, "setPressure(self, float)");

extern "C" {static PyObject *meth_QPressureReading_setPressure(PyObject *, PyObject *);}
static PyObject *meth_QPressureReading_setPressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QPressureReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPressureReading, &sipCpp, &a0))
        {
            sipCpp->setPressure(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPressureReading, sipName_setPressure, doc_QPressureReading_setPressure);

    return NULL;
}


PyDoc_STRVAR(doc_QPressureReading_temperature, "temperature(self) -> float");

extern "C" {static PyObject *meth_QPressureReading_temperature(PyObject *, PyObject *);}
static PyObject *meth_QPressureReading_temperature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPressureReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPressureReading, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->temperature();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPressureReading, sipName_temperature, doc_QPressureReading_temperature);

    return NULL;
}


PyDoc_STRVAR(doc_QPressureReading_setTemperature, "setTemperature(self, float)");

extern "C" {static PyObject *meth_QPressureReading_setTemperature(PyObject *, PyObject *);}
static PyObject *meth_QPressureReading_setTemperature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QPressureReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPressureReading, &sipCpp, &a0))
        {
            sipCpp->setTemperature(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPressureReading, sipName_setTemperature, doc_QPressureReading_setTemperature);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPressureReading(void *, const sipTypeDef *);}
static void *cast_QPressureReading(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPressureReading *sipCpp = reinterpret_cast< ::QPressureReading *>(sipCppV);

    if (targetType == sipType_QSensorReading)
        return static_cast< ::QSensorReading *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPressureReading(void *, int);}
static void release_QPressureReading(void *sipCppV, int)
{
     ::QPressureReading *sipCpp = reinterpret_cast< ::QPressureReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPressureReading(sipSimpleWrapper *);}
static void dealloc_QPressureReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPressureReading(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPressureReading[] = {{60, 255, 1}};


static PyMethodDef methods_QPressureReading[] = {
    {SIP_MLNAME_CAST(sipName_pressure), meth_QPressureReading_pressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QPressureReading_pressure)},
    {SIP_MLNAME_CAST(sipName_setPressure), meth_QPressureReading_setPressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QPressureReading_setPressure)},
    {SIP_MLNAME_CAST(sipName_setTemperature), meth_QPressureReading_setTemperature, METH_VARARGS, SIP_MLDOC_CAST(doc_QPressureReading_setTemperature)},
    {SIP_MLNAME_CAST(sipName_temperature), meth_QPressureReading_temperature, METH_VARARGS, SIP_MLDOC_CAST(doc_QPressureReading_temperature)}
};


static pyqt5ClassPluginDef plugin_QPressureReading = {
    & ::QPressureReading::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QPressureReading = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPressureReading,
        {0},
        &plugin_QPressureReading
    },
    {
        sipNameNr_QPressureReading,
        {0, 0, 1},
        4, methods_QPressureReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QPressureReading,
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
    dealloc_QPressureReading,
    0,
    0,
    0,
    release_QPressureReading,
    cast_QPressureReading,
    0,
    0,
    0,
    0,
    0,
    0
};
