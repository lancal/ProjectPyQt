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

#line 27 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQMap0100QString0100QString.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQMap0100QString0100QString.cpp"


extern "C" {static void assign_QMap_0100QString_0100QString(void *, SIP_SSIZE_T, void *);}
static void assign_QMap_0100QString_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QMap< ::QString, ::QString> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QMap< ::QString, ::QString> *>(sipSrc);
}


extern "C" {static void *array_QMap_0100QString_0100QString(SIP_SSIZE_T);}
static void *array_QMap_0100QString_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new QMap< ::QString, ::QString>[sipNrElem];
}


extern "C" {static void *copy_QMap_0100QString_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QMap_0100QString_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMap< ::QString, ::QString>(reinterpret_cast<const QMap< ::QString, ::QString> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMap_0100QString_0100QString(void *, int);}
static void release_QMap_0100QString_0100QString(void *ptr, int)
{
    delete reinterpret_cast<QMap< ::QString, ::QString> *>(ptr);
}



extern "C" {static int convertTo_QMap_0100QString_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMap_0100QString_0100QString(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMap< ::QString, ::QString> **sipCppPtr = reinterpret_cast<QMap< ::QString, ::QString> **>(sipCppPtrV);

#line 85 "sip/QtCore/qpycore_qmap.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QMap<QString, QString> *qm = new QMap<QString, QString>;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int kstate;
        QString *k = reinterpret_cast<QString *>(
                sipForceConvertToType(kobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &kstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict key has type '%s' but 'QString' is expected",
                    sipPyTypeName(Py_TYPE(kobj)));

            delete qm;

            return 0;
        }

        int vstate;
        QString *v = reinterpret_cast<QString *>(
                sipForceConvertToType(vobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict value has type '%s' but 'QString' is expected",
                    sipPyTypeName(Py_TYPE(vobj)));

            sipReleaseType(k, sipType_QString, kstate);
            delete qm;

            return 0;
        }

        qm->insert(*k, *v);

        sipReleaseType(v, sipType_QString, vstate);
        sipReleaseType(k, sipType_QString, kstate);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 124 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQMap0100QString0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QMap_0100QString_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QMap_0100QString_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
   QMap< ::QString, ::QString> *sipCpp = reinterpret_cast<QMap< ::QString, ::QString> *>(sipCppV);

#line 31 "sip/QtCore/qpycore_qmap.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QMap<QString, QString>::const_iterator it = sipCpp->constBegin();
    QMap<QString, QString>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QString *k = new QString(it.key());
        PyObject *kobj = sipConvertFromNewType(k, sipType_QString,
                sipTransferObj);

        if (!kobj)
        {
            delete k;
            Py_DECREF(d);

            return 0;
        }

        QString *v = new QString(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QString,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 185 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQMap0100QString0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_QtWebEngineCore_QMap_0100QString_0100QString = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_554,     /* QMap<QString,QString> */
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
    assign_QMap_0100QString_0100QString,
    array_QMap_0100QString_0100QString,
    copy_QMap_0100QString_0100QString,
    release_QMap_0100QString_0100QString,
    convertTo_QMap_0100QString_0100QString,
    convertFrom_QMap_0100QString_0100QString
};
