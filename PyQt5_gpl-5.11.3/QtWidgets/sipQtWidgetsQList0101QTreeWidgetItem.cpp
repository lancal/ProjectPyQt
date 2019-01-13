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

#include "sipAPIQtWidgets.h"

#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQList0101QTreeWidgetItem.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qtreewidget.sip"
#include <qtreewidget.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQList0101QTreeWidgetItem.cpp"


extern "C" {static void assign_QList_0101QTreeWidgetItem(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0101QTreeWidgetItem(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QTreeWidgetItem*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QTreeWidgetItem*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QTreeWidgetItem(SIP_SSIZE_T);}
static void *array_QList_0101QTreeWidgetItem(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QTreeWidgetItem*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QTreeWidgetItem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QTreeWidgetItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QTreeWidgetItem*>(reinterpret_cast<const QList< ::QTreeWidgetItem*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QTreeWidgetItem(void *, int);}
static void release_QList_0101QTreeWidgetItem(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QTreeWidgetItem*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QTreeWidgetItem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QTreeWidgetItem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QTreeWidgetItem*> **sipCppPtr = reinterpret_cast<QList< ::QTreeWidgetItem*> **>(sipCppPtrV);

#line 184 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QTreeWidgetItem *> *ql = new QList<QTreeWidgetItem *>;
 
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

        QTreeWidgetItem *t = reinterpret_cast<QTreeWidgetItem *>(
                sipForceConvertToType(itm, sipType_QTreeWidgetItem, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QTreeWidgetItem' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 141 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQList0101QTreeWidgetItem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QTreeWidgetItem(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QTreeWidgetItem(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QTreeWidgetItem*> *sipCpp = reinterpret_cast<QList< ::QTreeWidgetItem*> *>(sipCppV);

#line 153 "sip/QtCore/qpycore_qlist.sip"
    int gc_enabled = sipEnableGC(0);
    PyObject *l = PyList_New(sipCpp->size());

    if (l)
    {
        for (int i = 0; i < sipCpp->size(); ++i)
        {
            QTreeWidgetItem *t = sipCpp->at(i);

            // The explicit (void *) cast allows QTreeWidgetItem to be const.
            PyObject *tobj = sipConvertFromType((void *)t, sipType_QTreeWidgetItem,
                    sipTransferObj);

            if (!tobj)
            {
                Py_DECREF(l);
                l = 0;

                break;
            }

            PyList_SetItem(l, i, tobj);
        }
    }

    sipEnableGC(gc_enabled);

    return l;
#line 179 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQList0101QTreeWidgetItem.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QTreeWidgetItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_13925,     /* QList<QTreeWidgetItem*> */
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
    assign_QList_0101QTreeWidgetItem,
    array_QList_0101QTreeWidgetItem,
    copy_QList_0101QTreeWidgetItem,
    release_QList_0101QTreeWidgetItem,
    convertTo_QList_0101QTreeWidgetItem,
    convertFrom_QList_0101QTreeWidgetItem
};
