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

#include "sipAPIQtBluetooth.h"

#line 138 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qpybluetooth_qlist.sip"
#include <qbluetoothserviceinfo.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothServiceInfoSequence.cpp"



extern "C" {static void assign_QBluetoothServiceInfo_Sequence(void *, SIP_SSIZE_T, void *);}
static void assign_QBluetoothServiceInfo_Sequence(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QBluetoothServiceInfo::Sequence *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QBluetoothServiceInfo::Sequence *>(sipSrc);
}


extern "C" {static void *array_QBluetoothServiceInfo_Sequence(SIP_SSIZE_T);}
static void *array_QBluetoothServiceInfo_Sequence(SIP_SSIZE_T sipNrElem)
{
    return new  ::QBluetoothServiceInfo::Sequence[sipNrElem];
}


extern "C" {static void *copy_QBluetoothServiceInfo_Sequence(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothServiceInfo_Sequence(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QBluetoothServiceInfo::Sequence(reinterpret_cast<const  ::QBluetoothServiceInfo::Sequence *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QBluetoothServiceInfo_Sequence(void *, int);}
static void release_QBluetoothServiceInfo_Sequence(void *ptr, int)
{
    delete reinterpret_cast< ::QBluetoothServiceInfo::Sequence *>(ptr);
}



extern "C" {static int convertTo_QBluetoothServiceInfo_Sequence(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBluetoothServiceInfo_Sequence(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QBluetoothServiceInfo::Sequence **sipCppPtr = reinterpret_cast< ::QBluetoothServiceInfo::Sequence **>(sipCppPtrV);

#line 168 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qpybluetooth_qlist.sip"
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

    QBluetoothServiceInfo::Sequence *ql = new QBluetoothServiceInfo::Sequence;

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
        QVariant *t = reinterpret_cast<QVariant *>(
                sipForceConvertToType(itm, sipType_QVariant, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but '_TYPE_' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QVariant, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 140 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothServiceInfoSequence.cpp"
}


extern "C" {static PyObject *convertFrom_QBluetoothServiceInfo_Sequence(void *, PyObject *);}
static PyObject *convertFrom_QBluetoothServiceInfo_Sequence(void *sipCppV, PyObject *sipTransferObj)
{
    ::QBluetoothServiceInfo::Sequence *sipCpp = reinterpret_cast< ::QBluetoothServiceInfo::Sequence *>(sipCppV);

#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qpybluetooth_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QVariant *t = new QVariant(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QVariant,
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
#line 173 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothServiceInfoSequence.cpp"
}


sipMappedTypeDef sipTypeDef_QtBluetooth_QBluetoothServiceInfo_Sequence = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QBluetoothServiceInfo__Sequence,     /* QBluetoothServiceInfo::Sequence */
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
    assign_QBluetoothServiceInfo_Sequence,
    array_QBluetoothServiceInfo_Sequence,
    copy_QBluetoothServiceInfo_Sequence,
    release_QBluetoothServiceInfo_Sequence,
    convertTo_QBluetoothServiceInfo_Sequence,
    convertFrom_QBluetoothServiceInfo_Sequence
};
