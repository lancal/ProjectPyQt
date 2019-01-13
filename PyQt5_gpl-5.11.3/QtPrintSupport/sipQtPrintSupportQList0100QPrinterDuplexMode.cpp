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

#include "sipAPIQtPrintSupport.h"

#line 140 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
#include <qprinterinfo.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPrintSupport/sipQtPrintSupportQList0100QPrinterDuplexMode.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPrintSupport/qprinter.sip"
#include <qprinter.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPrintSupport/sipQtPrintSupportQList0100QPrinterDuplexMode.cpp"


extern "C" {static void assign_QList_0100QPrinter_DuplexMode(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QPrinter_DuplexMode(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QList< ::QPrinter::DuplexMode> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QList< ::QPrinter::DuplexMode> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QPrinter_DuplexMode(SIP_SSIZE_T);}
static void *array_QList_0100QPrinter_DuplexMode(SIP_SSIZE_T sipNrElem)
{
    return new  ::QList< ::QPrinter::DuplexMode>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QPrinter_DuplexMode(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QPrinter_DuplexMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QList< ::QPrinter::DuplexMode>(reinterpret_cast<const  ::QList< ::QPrinter::DuplexMode> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QPrinter_DuplexMode(void *, int);}
static void release_QList_0100QPrinter_DuplexMode(void *ptr, int)
{
    delete reinterpret_cast< ::QList< ::QPrinter::DuplexMode> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QPrinter_DuplexMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QPrinter_DuplexMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QList< ::QPrinter::DuplexMode> **sipCppPtr = reinterpret_cast< ::QList< ::QPrinter::DuplexMode> **>(sipCppPtrV);

#line 168 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
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

    QList<QPrinter::DuplexMode> *ql = new QList<QPrinter::DuplexMode>;

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

        int v = sipConvertToEnum(itm, sipType_QPrinter_DuplexMode);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QPrinter.DuplexMode' is expected",
                    i, sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        ql->append(static_cast<QPrinter::DuplexMode>(v));

        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 140 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPrintSupport/sipQtPrintSupportQList0100QPrinterDuplexMode.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QPrinter_DuplexMode(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QPrinter_DuplexMode(void *sipCppV, PyObject *)
{
    ::QList< ::QPrinter::DuplexMode> *sipCpp = reinterpret_cast< ::QList< ::QPrinter::DuplexMode> *>(sipCppV);

#line 144 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *eobj = sipConvertFromEnum(sipCpp->at(i),
                sipType_QPrinter_DuplexMode);

        if (!eobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, eobj);
    }

    return l;
#line 171 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPrintSupport/sipQtPrintSupportQList0100QPrinterDuplexMode.cpp"
}


sipMappedTypeDef sipTypeDef_QtPrintSupport_QList_0100QPrinter_DuplexMode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_276,     /* QList<QPrinter::DuplexMode> */
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
    assign_QList_0100QPrinter_DuplexMode,
    array_QList_0100QPrinter_DuplexMode,
    copy_QList_0100QPrinter_DuplexMode,
    release_QList_0100QPrinter_DuplexMode,
    convertTo_QList_0100QPrinter_DuplexMode,
    convertFrom_QList_0100QPrinter_DuplexMode
};
