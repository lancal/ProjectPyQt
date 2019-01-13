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

#line 47 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qsemaphore.sip"
#include <qsemaphore.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSemaphoreReleaser.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qsemaphore.sip"
#include <qsemaphore.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSemaphoreReleaser.cpp"


PyDoc_STRVAR(doc_QSemaphoreReleaser_swap, "swap(self, QSemaphoreReleaser)");

extern "C" {static PyObject *meth_QSemaphoreReleaser_swap(PyObject *, PyObject *);}
static PyObject *meth_QSemaphoreReleaser_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSemaphoreReleaser* a0;
         ::QSemaphoreReleaser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSemaphoreReleaser, &sipCpp, sipType_QSemaphoreReleaser, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphoreReleaser, sipName_swap, doc_QSemaphoreReleaser_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QSemaphoreReleaser_semaphore, "semaphore(self) -> QSemaphore");

extern "C" {static PyObject *meth_QSemaphoreReleaser_semaphore(PyObject *, PyObject *);}
static PyObject *meth_QSemaphoreReleaser_semaphore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSemaphoreReleaser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSemaphoreReleaser, &sipCpp))
        {
             ::QSemaphore*sipRes;

            sipRes = sipCpp->semaphore();

            return sipConvertFromType(sipRes,sipType_QSemaphore,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphoreReleaser, sipName_semaphore, doc_QSemaphoreReleaser_semaphore);

    return NULL;
}


PyDoc_STRVAR(doc_QSemaphoreReleaser_cancel, "cancel(self) -> QSemaphore");

extern "C" {static PyObject *meth_QSemaphoreReleaser_cancel(PyObject *, PyObject *);}
static PyObject *meth_QSemaphoreReleaser_cancel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSemaphoreReleaser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSemaphoreReleaser, &sipCpp))
        {
             ::QSemaphore*sipRes;

            sipRes = sipCpp->cancel();

            return sipConvertFromType(sipRes,sipType_QSemaphore,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphoreReleaser, sipName_cancel, doc_QSemaphoreReleaser_cancel);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSemaphoreReleaser(void *, int);}
static void release_QSemaphoreReleaser(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSemaphoreReleaser *>(sipCppV);
}


extern "C" {static void dealloc_QSemaphoreReleaser(sipSimpleWrapper *);}
static void dealloc_QSemaphoreReleaser(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSemaphoreReleaser(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSemaphoreReleaser(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSemaphoreReleaser(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSemaphoreReleaser *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSemaphoreReleaser();

            return sipCpp;
        }
    }

    {
         ::QSemaphore* a0;
        int a1 = 1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_n,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|i", sipType_QSemaphore, &a0, &a1))
        {
            sipCpp = new  ::QSemaphoreReleaser(a0,a1);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSemaphoreReleaser[] = {
    {SIP_MLNAME_CAST(sipName_cancel), meth_QSemaphoreReleaser_cancel, METH_VARARGS, SIP_MLDOC_CAST(doc_QSemaphoreReleaser_cancel)},
    {SIP_MLNAME_CAST(sipName_semaphore), meth_QSemaphoreReleaser_semaphore, METH_VARARGS, SIP_MLDOC_CAST(doc_QSemaphoreReleaser_semaphore)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QSemaphoreReleaser_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QSemaphoreReleaser_swap)}
};

PyDoc_STRVAR(doc_QSemaphoreReleaser, "\1QSemaphoreReleaser()\n"
"QSemaphoreReleaser(QSemaphore, n: int = 1)");


static pyqt5ClassPluginDef plugin_QSemaphoreReleaser = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSemaphoreReleaser = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSemaphoreReleaser,
        {0},
        &plugin_QSemaphoreReleaser
    },
    {
        sipNameNr_QSemaphoreReleaser,
        {0, 0, 1},
        3, methods_QSemaphoreReleaser,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSemaphoreReleaser,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSemaphoreReleaser,
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
    dealloc_QSemaphoreReleaser,
    0,
    0,
    0,
    release_QSemaphoreReleaser,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
