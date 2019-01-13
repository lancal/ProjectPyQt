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

#include "sipAPIQtNetwork.h"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQList0100QSslError.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qsslerror.sip"
#include <qsslerror.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQList0100QSslError.cpp"


extern "C" {static void assign_QList_0100QSslError(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QSslError(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QSslError> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QSslError> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QSslError(SIP_SSIZE_T);}
static void *array_QList_0100QSslError(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QSslError>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QSslError(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QSslError(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QSslError>(reinterpret_cast<const QList< ::QSslError> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QSslError(void *, int);}
static void release_QList_0100QSslError(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QSslError> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QSslError(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QSslError(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QSslError> **sipCppPtr = reinterpret_cast<QList< ::QSslError> **>(sipCppPtrV);

#line 68 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QSslError> *ql = new QList<QSslError>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QSslError *t = reinterpret_cast<QSslError *>(
                sipForceConvertToType(itm, sipType_QSslError, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QSslError' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QSslError, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 143 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQList0100QSslError.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QSslError(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QSslError(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QSslError> *sipCpp = reinterpret_cast<QList< ::QSslError> *>(sipCppV);

#line 42 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QSslError *t = new QSslError(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QSslError,
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
#line 176 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQList0100QSslError.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QSslError = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_9664,     /* QList<QSslError> */
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
    assign_QList_0100QSslError,
    array_QList_0100QSslError,
    copy_QList_0100QSslError,
    release_QList_0100QSslError,
    convertTo_QList_0100QSslError,
    convertFrom_QList_0100QSslError
};
