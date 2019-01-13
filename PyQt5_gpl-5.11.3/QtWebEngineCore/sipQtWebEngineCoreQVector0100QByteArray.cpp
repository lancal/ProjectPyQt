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

#include "sipAPIQtWebEngineCore.h"

#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQVector0100QByteArray.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQVector0100QByteArray.cpp"


extern "C" {static void assign_QVector_0100QByteArray(void *, SIP_SSIZE_T, void *);}
static void assign_QVector_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QVector< ::QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QVector< ::QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QByteArray(SIP_SSIZE_T);}
static void *array_QVector_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QByteArray>(reinterpret_cast<const QVector< ::QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QByteArray(void *, int);}
static void release_QVector_0100QByteArray(void *ptr, int)
{
    delete reinterpret_cast<QVector< ::QByteArray> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QByteArray> **sipCppPtr = reinterpret_cast<QVector< ::QByteArray> **>(sipCppPtrV);

#line 58 "sip/QtCore/qpycore_qvector.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QVector<QByteArray> *qv = new QVector<QByteArray>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QByteArray *t = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(itm, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QByteArray' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QByteArray, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 143 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQVector0100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QByteArray(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QByteArray> *sipCpp = reinterpret_cast<QVector< ::QByteArray> *>(sipCppV);

#line 32 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QByteArray *t = new QByteArray(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QByteArray,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
#line 176 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQVector0100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtWebEngineCore_QVector_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_770,     /* QVector<QByteArray> */
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
    assign_QVector_0100QByteArray,
    array_QVector_0100QByteArray,
    copy_QVector_0100QByteArray,
    release_QVector_0100QByteArray,
    convertTo_QVector_0100QByteArray,
    convertFrom_QVector_0100QByteArray
};
