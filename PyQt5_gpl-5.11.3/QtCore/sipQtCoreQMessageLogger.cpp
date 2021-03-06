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

#line 55 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
#include <qlogging.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"



PyDoc_STRVAR(doc_QMessageLogger_debug, "debug(self, str)");

extern "C" {static PyObject *meth_QMessageLogger_debug(PyObject *, PyObject *);}
static PyObject *meth_QMessageLogger_debug(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QMessageLogger *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMessageLogger, &sipCpp, &a0Keep, &a0))
        {
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->debug("%s", a0);
        Py_END_ALLOW_THREADS
#line 52 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMessageLogger, sipName_debug, doc_QMessageLogger_debug);

    return NULL;
}


PyDoc_STRVAR(doc_QMessageLogger_warning, "warning(self, str)");

extern "C" {static PyObject *meth_QMessageLogger_warning(PyObject *, PyObject *);}
static PyObject *meth_QMessageLogger_warning(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QMessageLogger *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMessageLogger, &sipCpp, &a0Keep, &a0))
        {
#line 73 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->warning("%s", a0);
        Py_END_ALLOW_THREADS
#line 86 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMessageLogger, sipName_warning, doc_QMessageLogger_warning);

    return NULL;
}


PyDoc_STRVAR(doc_QMessageLogger_critical, "critical(self, str)");

extern "C" {static PyObject *meth_QMessageLogger_critical(PyObject *, PyObject *);}
static PyObject *meth_QMessageLogger_critical(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QMessageLogger *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMessageLogger, &sipCpp, &a0Keep, &a0))
        {
#line 80 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->critical("%s", a0);
        Py_END_ALLOW_THREADS
#line 120 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMessageLogger, sipName_critical, doc_QMessageLogger_critical);

    return NULL;
}


PyDoc_STRVAR(doc_QMessageLogger_fatal, "fatal(self, str)");

extern "C" {static PyObject *meth_QMessageLogger_fatal(PyObject *, PyObject *);}
static PyObject *meth_QMessageLogger_fatal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QMessageLogger *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMessageLogger, &sipCpp, &a0Keep, &a0))
        {
#line 87 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->fatal("%s", a0);
        Py_END_ALLOW_THREADS
#line 154 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMessageLogger, sipName_fatal, doc_QMessageLogger_fatal);

    return NULL;
}


PyDoc_STRVAR(doc_QMessageLogger_info, "info(self, str)");

extern "C" {static PyObject *meth_QMessageLogger_info(PyObject *, PyObject *);}
static PyObject *meth_QMessageLogger_info(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QMessageLogger *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QMessageLogger, &sipCpp, &a0Keep, &a0))
        {
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qlogging.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->info("%s", a0);
        Py_END_ALLOW_THREADS
#line 188 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQMessageLogger.cpp"
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMessageLogger, sipName_info, doc_QMessageLogger_info);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMessageLogger(void *, int);}
static void release_QMessageLogger(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMessageLogger *>(sipCppV);
}


extern "C" {static void dealloc_QMessageLogger(sipSimpleWrapper *);}
static void dealloc_QMessageLogger(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMessageLogger(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMessageLogger(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMessageLogger(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMessageLogger *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QMessageLogger();

            return sipCpp;
        }
    }

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        const char* a2;
        PyObject *a2Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "AAiAA", &a0Keep, &a0, &a1, &a2Keep, &a2))
        {
            sipCpp = new  ::QMessageLogger(a0,a1,a2);
            Py_DECREF(a0Keep);
            Py_DECREF(a2Keep);

            return sipCpp;
        }
    }

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        const char* a2;
        PyObject *a2Keep;
        const char* a3;
        PyObject *a3Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "AAiAAAA", &a0Keep, &a0, &a1, &a2Keep, &a2, &a3Keep, &a3))
        {
            sipCpp = new  ::QMessageLogger(a0,a1,a2,a3);
            Py_DECREF(a0Keep);
            Py_DECREF(a2Keep);
            Py_DECREF(a3Keep);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMessageLogger[] = {
    {SIP_MLNAME_CAST(sipName_critical), meth_QMessageLogger_critical, METH_VARARGS, SIP_MLDOC_CAST(doc_QMessageLogger_critical)},
    {SIP_MLNAME_CAST(sipName_debug), meth_QMessageLogger_debug, METH_VARARGS, SIP_MLDOC_CAST(doc_QMessageLogger_debug)},
    {SIP_MLNAME_CAST(sipName_fatal), meth_QMessageLogger_fatal, METH_VARARGS, SIP_MLDOC_CAST(doc_QMessageLogger_fatal)},
    {SIP_MLNAME_CAST(sipName_info), meth_QMessageLogger_info, METH_VARARGS, SIP_MLDOC_CAST(doc_QMessageLogger_info)},
    {SIP_MLNAME_CAST(sipName_warning), meth_QMessageLogger_warning, METH_VARARGS, SIP_MLDOC_CAST(doc_QMessageLogger_warning)}
};

PyDoc_STRVAR(doc_QMessageLogger, "\1QMessageLogger()\n"
"QMessageLogger(str, int, str)\n"
"QMessageLogger(str, int, str, str)");


static pyqt5ClassPluginDef plugin_QMessageLogger = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QMessageLogger = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMessageLogger,
        {0},
        &plugin_QMessageLogger
    },
    {
        sipNameNr_QMessageLogger,
        {0, 0, 1},
        5, methods_QMessageLogger,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMessageLogger,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMessageLogger,
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
    dealloc_QMessageLogger,
    0,
    0,
    0,
    release_QMessageLogger,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
