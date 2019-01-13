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

#include "sipAPIQtLocation.h"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQList0100QGeoRoute.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtLocation/qgeoroute.sip"
#include <qgeoroute.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQList0100QGeoRoute.cpp"


extern "C" {static void assign_QList_0100QGeoRoute(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QGeoRoute(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QGeoRoute> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QGeoRoute> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QGeoRoute(SIP_SSIZE_T);}
static void *array_QList_0100QGeoRoute(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QGeoRoute>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QGeoRoute(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QGeoRoute(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QGeoRoute>(reinterpret_cast<const QList< ::QGeoRoute> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QGeoRoute(void *, int);}
static void release_QList_0100QGeoRoute(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QGeoRoute> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QGeoRoute(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QGeoRoute(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QGeoRoute> **sipCppPtr = reinterpret_cast<QList< ::QGeoRoute> **>(sipCppPtrV);

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

    QList<QGeoRoute> *ql = new QList<QGeoRoute>;
 
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
        QGeoRoute *t = reinterpret_cast<QGeoRoute *>(
                sipForceConvertToType(itm, sipType_QGeoRoute, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QGeoRoute' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QGeoRoute, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 143 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQList0100QGeoRoute.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QGeoRoute(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QGeoRoute(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QGeoRoute> *sipCpp = reinterpret_cast<QList< ::QGeoRoute> *>(sipCppV);

#line 42 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGeoRoute *t = new QGeoRoute(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QGeoRoute,
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
#line 176 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQList0100QGeoRoute.cpp"
}


sipMappedTypeDef sipTypeDef_QtLocation_QList_0100QGeoRoute = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4199,     /* QList<QGeoRoute> */
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
    assign_QList_0100QGeoRoute,
    array_QList_0100QGeoRoute,
    copy_QList_0100QGeoRoute,
    release_QList_0100QGeoRoute,
    convertTo_QList_0100QGeoRoute,
    convertFrom_QList_0100QGeoRoute
};
