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

#include "sipAPIQtGui.h"

#line 131 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
#include <qpair.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair22002200.cpp"



extern "C" {static void assign_QPair_2200_2200(void *, SIP_SSIZE_T, void *);}
static void assign_QPair_2200_2200(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPair<float,float> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPair<float,float> *>(sipSrc);
}


extern "C" {static void *array_QPair_2200_2200(SIP_SSIZE_T);}
static void *array_QPair_2200_2200(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPair<float,float>[sipNrElem];
}


extern "C" {static void *copy_QPair_2200_2200(const void *, SIP_SSIZE_T);}
static void *copy_QPair_2200_2200(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPair<float,float>(reinterpret_cast<const  ::QPair<float,float> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_2200_2200(void *, int);}
static void release_QPair_2200_2200(void *ptr, int)
{
    delete reinterpret_cast< ::QPair<float,float> *>(ptr);
}



extern "C" {static int convertTo_QPair_2200_2200(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_2200_2200(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QPair<float,float> **sipCppPtr = reinterpret_cast< ::QPair<float,float> **>(sipCppPtrV);

#line 139 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
    if (!sipIsErr)
        return (PySequence_Check(sipPy)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));

    Py_ssize_t len = PySequence_Size(sipPy);

    if (len != 2)
    {
        // A negative length should only be an internal error so let the
        // original exception stand.
        if (len >= 0)
            PyErr_Format(PyExc_TypeError,
                    "sequence has %zd elements but 2 elements are expected",
                    len);

        *sipIsErr = 1;

        return 0;
    }

    PyObject *firstobj = PySequence_GetItem(sipPy, 0);

    if (!firstobj)
    {
        *sipIsErr = 1;

        return 0;
    }

    PyErr_Clear();
    double first = PyFloat_AsDouble(firstobj);

    if (PyErr_Occurred())
    {
        PyErr_Format(PyExc_TypeError,
                "the first element has type '%s' but 'float' is expected",
                sipPyTypeName(Py_TYPE(firstobj)));

        *sipIsErr = 1;

        return 0;
    }

    PyObject *secondobj = PySequence_GetItem(sipPy, 1);

    if (!secondobj)
    {
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    PyErr_Clear();
    double second = PyFloat_AsDouble(secondobj);

    if (PyErr_Occurred())
    {
        PyErr_Format(PyExc_TypeError,
                "the second element has type '%s' but 'float' is expected",
                sipPyTypeName(Py_TYPE(secondobj)));

        Py_DECREF(secondobj);
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    *sipCppPtr = new QPair<float, float>(first, second);;

    Py_DECREF(secondobj);
    Py_DECREF(firstobj);
 
    return sipGetState(sipTransferObj);
#line 147 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair22002200.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_2200_2200(void *, PyObject *);}
static PyObject *convertFrom_QPair_2200_2200(void *sipCppV, PyObject *)
{
    ::QPair<float,float> *sipCpp = reinterpret_cast< ::QPair<float,float> *>(sipCppV);

#line 135 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
    return Py_BuildValue("(ff)", sipCpp->first, sipCpp->second);
#line 158 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair22002200.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QPair_2200_2200 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_14197,     /* QPair<float,float> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QPair_2200_2200,
    array_QPair_2200_2200,
    copy_QPair_2200_2200,
    release_QPair_2200_2200,
    convertTo_QPair_2200_2200,
    convertFrom_QPair_2200_2200
};
