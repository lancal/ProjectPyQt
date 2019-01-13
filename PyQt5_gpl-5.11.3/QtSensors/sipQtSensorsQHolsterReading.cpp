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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qholstersensor.sip"
#include <qholstersensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQHolsterReading.cpp"


PyDoc_STRVAR(doc_QHolsterReading_holstered, "holstered(self) -> bool");

extern "C" {static PyObject *meth_QHolsterReading_holstered(PyObject *, PyObject *);}
static PyObject *meth_QHolsterReading_holstered(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHolsterReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHolsterReading, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->holstered();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHolsterReading, sipName_holstered, doc_QHolsterReading_holstered);

    return NULL;
}


PyDoc_STRVAR(doc_QHolsterReading_setHolstered, "setHolstered(self, bool)");

extern "C" {static PyObject *meth_QHolsterReading_setHolstered(PyObject *, PyObject *);}
static PyObject *meth_QHolsterReading_setHolstered(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QHolsterReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QHolsterReading, &sipCpp, &a0))
        {
            sipCpp->setHolstered(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHolsterReading, sipName_setHolstered, doc_QHolsterReading_setHolstered);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QHolsterReading(void *, const sipTypeDef *);}
static void *cast_QHolsterReading(void *sipCppV, const sipTypeDef *targetType)
{
     ::QHolsterReading *sipCpp = reinterpret_cast< ::QHolsterReading *>(sipCppV);

    if (targetType == sipType_QSensorReading)
        return static_cast< ::QSensorReading *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHolsterReading(void *, int);}
static void release_QHolsterReading(void *sipCppV, int)
{
     ::QHolsterReading *sipCpp = reinterpret_cast< ::QHolsterReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QHolsterReading(sipSimpleWrapper *);}
static void dealloc_QHolsterReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHolsterReading(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHolsterReading[] = {{60, 255, 1}};


static PyMethodDef methods_QHolsterReading[] = {
    {SIP_MLNAME_CAST(sipName_holstered), meth_QHolsterReading_holstered, METH_VARARGS, SIP_MLDOC_CAST(doc_QHolsterReading_holstered)},
    {SIP_MLNAME_CAST(sipName_setHolstered), meth_QHolsterReading_setHolstered, METH_VARARGS, SIP_MLDOC_CAST(doc_QHolsterReading_setHolstered)}
};


static pyqt5ClassPluginDef plugin_QHolsterReading = {
    & ::QHolsterReading::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QHolsterReading = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHolsterReading,
        {0},
        &plugin_QHolsterReading
    },
    {
        sipNameNr_QHolsterReading,
        {0, 0, 1},
        2, methods_QHolsterReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QHolsterReading,
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
    dealloc_QHolsterReading,
    0,
    0,
    0,
    release_QHolsterReading,
    cast_QHolsterReading,
    0,
    0,
    0,
    0,
    0,
    0
};
