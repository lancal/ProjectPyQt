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

#line 704 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSignalBlocker.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSignalBlocker.cpp"


PyDoc_STRVAR(doc_QSignalBlocker_reblock, "reblock(self)");

extern "C" {static PyObject *meth_QSignalBlocker_reblock(PyObject *, PyObject *);}
static PyObject *meth_QSignalBlocker_reblock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSignalBlocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSignalBlocker, &sipCpp))
        {
            sipCpp->reblock();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalBlocker, sipName_reblock, doc_QSignalBlocker_reblock);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalBlocker_unblock, "unblock(self)");

extern "C" {static PyObject *meth_QSignalBlocker_unblock(PyObject *, PyObject *);}
static PyObject *meth_QSignalBlocker_unblock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSignalBlocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSignalBlocker, &sipCpp))
        {
            sipCpp->unblock();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalBlocker, sipName_unblock, doc_QSignalBlocker_unblock);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalBlocker___enter__, "__enter__(self) -> object");

extern "C" {static PyObject *meth_QSignalBlocker___enter__(PyObject *, PyObject *);}
static PyObject *meth_QSignalBlocker___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSignalBlocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSignalBlocker, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 714 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobject.sip"
        // Just return a reference to self.
        sipRes = sipSelf;
        Py_INCREF(sipRes);
#line 109 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSignalBlocker.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalBlocker, sipName___enter__, doc_QSignalBlocker___enter__);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalBlocker___exit__, "__exit__(self, object, object, object)");

extern "C" {static PyObject *meth_QSignalBlocker___exit__(PyObject *, PyObject *);}
static PyObject *meth_QSignalBlocker___exit__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
         ::QSignalBlocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0P0P0", &sipSelf, sipType_QSignalBlocker, &sipCpp, &a0, &a1, &a2))
        {
#line 721 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobject.sip"
        sipCpp->unblock();
#line 140 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQSignalBlocker.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalBlocker, sipName___exit__, doc_QSignalBlocker___exit__);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSignalBlocker(void *, int);}
static void release_QSignalBlocker(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSignalBlocker *>(sipCppV);
}


extern "C" {static void dealloc_QSignalBlocker(sipSimpleWrapper *);}
static void dealloc_QSignalBlocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSignalBlocker(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSignalBlocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSignalBlocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSignalBlocker *sipCpp = 0;

    {
         ::QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QObject, &a0))
        {
            sipCpp = new  ::QSignalBlocker(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSignalBlocker[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QSignalBlocker___enter__, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalBlocker___enter__)},
    {SIP_MLNAME_CAST(sipName___exit__), meth_QSignalBlocker___exit__, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalBlocker___exit__)},
    {SIP_MLNAME_CAST(sipName_reblock), meth_QSignalBlocker_reblock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalBlocker_reblock)},
    {SIP_MLNAME_CAST(sipName_unblock), meth_QSignalBlocker_unblock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalBlocker_unblock)}
};

PyDoc_STRVAR(doc_QSignalBlocker, "\1QSignalBlocker(QObject)");


static pyqt5ClassPluginDef plugin_QSignalBlocker = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSignalBlocker = {
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSignalBlocker,
        {0},
        &plugin_QSignalBlocker
    },
    {
        sipNameNr_QSignalBlocker,
        {0, 0, 1},
        4, methods_QSignalBlocker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSignalBlocker,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSignalBlocker,
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
    dealloc_QSignalBlocker,
    0,
    0,
    0,
    release_QSignalBlocker,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
