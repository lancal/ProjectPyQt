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

#include "sipAPIQtCore.h"

#line 146 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMap18000100QVariant.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMap18000100QVariant.cpp"


extern "C" {static void assign_QMap_1800_0100QVariant(void *, SIP_SSIZE_T, void *);}
static void assign_QMap_1800_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QMap<int, ::QVariant> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QMap<int, ::QVariant> *>(sipSrc);
}


extern "C" {static void *array_QMap_1800_0100QVariant(SIP_SSIZE_T);}
static void *array_QMap_1800_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new QMap<int, ::QVariant>[sipNrElem];
}


extern "C" {static void *copy_QMap_1800_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QMap_1800_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMap<int, ::QVariant>(reinterpret_cast<const QMap<int, ::QVariant> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMap_1800_0100QVariant(void *, int);}
static void release_QMap_1800_0100QVariant(void *ptr, int)
{
    delete reinterpret_cast<QMap<int, ::QVariant> *>(ptr);
}



extern "C" {static int convertTo_QMap_1800_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMap_1800_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMap<int, ::QVariant> **sipCppPtr = reinterpret_cast<QMap<int, ::QVariant> **>(sipCppPtrV);

#line 201 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qpycore_qmap.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QMap<int, QVariant> *qm = new QMap<int, QVariant>;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int k = sipLong_AsInt(kobj);

        if (PyErr_Occurred())
        {
            if (PyErr_ExceptionMatches(PyExc_TypeError))
                PyErr_Format(PyExc_TypeError,
                        "a dict key has type '%s' but 'int' is expected",
                        sipPyTypeName(Py_TYPE(kobj)));

            delete qm;
            *sipIsErr = 1;

            return 0;
        }

        int vstate;
        QVariant *v = reinterpret_cast<QVariant *>(
                sipForceConvertToType(vobj, sipType_QVariant, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict value has type '%s' but 'QVariant' is expected",
                    sipPyTypeName(Py_TYPE(vobj)));

            delete qm;

            return 0;
        }

        qm->insert(k, *v);

        sipReleaseType(v, sipType_QVariant, vstate);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMap18000100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QMap_1800_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QMap_1800_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
   QMap<int, ::QVariant> *sipCpp = reinterpret_cast<QMap<int, ::QVariant> *>(sipCppV);

#line 150 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qpycore_qmap.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QMap<int, QVariant>::const_iterator it = sipCpp->constBegin();
    QMap<int, QVariant>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *kobj = SIPLong_FromLong(it.key());

        if (!kobj)
        {
            Py_DECREF(d);

            return 0;
        }

        QVariant *v = new QVariant(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QVariant,
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
#line 179 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMap18000100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QMap_1800_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_17080,     /* QMap<int,QVariant> */
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
    assign_QMap_1800_0100QVariant,
    array_QMap_1800_0100QVariant,
    copy_QMap_1800_0100QVariant,
    release_QMap_1800_0100QVariant,
    convertTo_QMap_1800_0100QVariant,
    convertFrom_QMap_1800_0100QVariant
};
