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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qsemaphore.sip"
#include <qsemaphore.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSemaphore.cpp"



PyDoc_STRVAR(doc_QSemaphore_acquire, "acquire(self, n: int = 1)");

extern "C" {static PyObject *meth_QSemaphore_acquire(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSemaphore_acquire(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 1;
         ::QSemaphore *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QSemaphore, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->acquire(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphore, sipName_acquire, doc_QSemaphore_acquire);

    return NULL;
}


PyDoc_STRVAR(doc_QSemaphore_tryAcquire, "tryAcquire(self, n: int = 1) -> bool\n"
"tryAcquire(self, int, int) -> bool");

extern "C" {static PyObject *meth_QSemaphore_tryAcquire(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSemaphore_tryAcquire(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 1;
         ::QSemaphore *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QSemaphore, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tryAcquire(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
         ::QSemaphore *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bii", &sipSelf, sipType_QSemaphore, &sipCpp, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryAcquire(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphore, sipName_tryAcquire, doc_QSemaphore_tryAcquire);

    return NULL;
}


PyDoc_STRVAR(doc_QSemaphore_release, "release(self, n: int = 1)");

extern "C" {static PyObject *meth_QSemaphore_release(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSemaphore_release(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 1;
         ::QSemaphore *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QSemaphore, &sipCpp, &a0))
        {
            sipCpp->release(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphore, sipName_release, doc_QSemaphore_release);

    return NULL;
}


PyDoc_STRVAR(doc_QSemaphore_available, "available(self) -> int");

extern "C" {static PyObject *meth_QSemaphore_available(PyObject *, PyObject *);}
static PyObject *meth_QSemaphore_available(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSemaphore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSemaphore, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->available();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSemaphore, sipName_available, doc_QSemaphore_available);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSemaphore(void *, int);}
static void release_QSemaphore(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSemaphore *>(sipCppV);
}


extern "C" {static void dealloc_QSemaphore(sipSimpleWrapper *);}
static void dealloc_QSemaphore(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSemaphore(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSemaphore(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSemaphore(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSemaphore *sipCpp = 0;

    {
        int a0 = 0;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &a0))
        {
            sipCpp = new  ::QSemaphore(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSemaphore[] = {
    {SIP_MLNAME_CAST(sipName_acquire), (PyCFunction)meth_QSemaphore_acquire, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSemaphore_acquire)},
    {SIP_MLNAME_CAST(sipName_available), meth_QSemaphore_available, METH_VARARGS, SIP_MLDOC_CAST(doc_QSemaphore_available)},
    {SIP_MLNAME_CAST(sipName_release), (PyCFunction)meth_QSemaphore_release, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSemaphore_release)},
    {SIP_MLNAME_CAST(sipName_tryAcquire), (PyCFunction)meth_QSemaphore_tryAcquire, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSemaphore_tryAcquire)}
};

PyDoc_STRVAR(doc_QSemaphore, "\1QSemaphore(n: int = 0)");


static pyqt5ClassPluginDef plugin_QSemaphore = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSemaphore = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSemaphore,
        {0},
        &plugin_QSemaphore
    },
    {
        sipNameNr_QSemaphore,
        {0, 0, 1},
        4, methods_QSemaphore,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSemaphore,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSemaphore,
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
    dealloc_QSemaphore,
    0,
    0,
    0,
    release_QSemaphore,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
