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

#include "sipAPIQtDBus.h"

#line 24 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qpydbuspendingreply.sip"
#include <qpydbuspendingreply.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQPyDBusPendingReply.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qdbuspendingcall.sip"
#include <qdbuspendingcall.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQPyDBusPendingReply.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQPyDBusPendingReply.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQPyDBusPendingReply.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQPyDBusPendingReply.cpp"


PyDoc_STRVAR(doc_QPyDBusPendingReply_argumentAt, "argumentAt(self, int) -> Any");

extern "C" {static PyObject *meth_QPyDBusPendingReply_argumentAt(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_argumentAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp, &a0))
        {
             ::QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVariant(sipCpp->argumentAt(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_argumentAt, doc_QPyDBusPendingReply_argumentAt);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_error, "error(self) -> QDBusError");

extern "C" {static PyObject *meth_QPyDBusPendingReply_error(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
             ::QDBusError*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDBusError(sipCpp->error());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDBusError,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_error, doc_QPyDBusPendingReply_error);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_isError, "isError(self) -> bool");

extern "C" {static PyObject *meth_QPyDBusPendingReply_isError(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_isError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isError();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_isError, doc_QPyDBusPendingReply_isError);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_isFinished, "isFinished(self) -> bool");

extern "C" {static PyObject *meth_QPyDBusPendingReply_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFinished();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_isFinished, doc_QPyDBusPendingReply_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QPyDBusPendingReply_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_isValid, doc_QPyDBusPendingReply_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_reply, "reply(self) -> QDBusMessage");

extern "C" {static PyObject *meth_QPyDBusPendingReply_reply(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_reply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
             ::QDBusMessage*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDBusMessage(sipCpp->reply());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_reply, doc_QPyDBusPendingReply_reply);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_waitForFinished, "waitForFinished(self)");

extern "C" {static PyObject *meth_QPyDBusPendingReply_waitForFinished(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_waitForFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPyDBusPendingReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->waitForFinished();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_waitForFinished, doc_QPyDBusPendingReply_waitForFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusPendingReply_value, "value(self, type: object = None) -> object");

extern "C" {static PyObject *meth_QPyDBusPendingReply_value(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPyDBusPendingReply_value(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0 = 0;
        const  ::QPyDBusPendingReply *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|P0", &sipSelf, sipType_QPyDBusPendingReply, &sipCpp, &a0))
        {
            PyObject * sipRes;

            sipRes = sipCpp->value(a0);

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusPendingReply, sipName_value, doc_QPyDBusPendingReply_value);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPyDBusPendingReply(void *, const sipTypeDef *);}
static void *cast_QPyDBusPendingReply(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPyDBusPendingReply *sipCpp = reinterpret_cast< ::QPyDBusPendingReply *>(sipCppV);

    if (targetType == sipType_QDBusPendingCall)
        return static_cast< ::QDBusPendingCall *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDBusPendingReply(void *, int);}
static void release_QPyDBusPendingReply(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPyDBusPendingReply *>(sipCppV);
}


extern "C" {static void assign_QPyDBusPendingReply(void *, SIP_SSIZE_T, void *);}
static void assign_QPyDBusPendingReply(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPyDBusPendingReply *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPyDBusPendingReply *>(sipSrc);
}


extern "C" {static void *array_QPyDBusPendingReply(SIP_SSIZE_T);}
static void *array_QPyDBusPendingReply(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPyDBusPendingReply[sipNrElem];
}


extern "C" {static void *copy_QPyDBusPendingReply(const void *, SIP_SSIZE_T);}
static void *copy_QPyDBusPendingReply(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPyDBusPendingReply(reinterpret_cast<const  ::QPyDBusPendingReply *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPyDBusPendingReply(sipSimpleWrapper *);}
static void dealloc_QPyDBusPendingReply(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDBusPendingReply(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPyDBusPendingReply(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDBusPendingReply(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPyDBusPendingReply *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QPyDBusPendingReply();

            return sipCpp;
        }
    }

    {
        const  ::QPyDBusPendingReply* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPyDBusPendingReply, &a0))
        {
            sipCpp = new  ::QPyDBusPendingReply(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QDBusPendingCall* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusPendingCall, &a0))
        {
            sipCpp = new  ::QPyDBusPendingReply(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QDBusMessage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusMessage, &a0))
        {
            sipCpp = new  ::QPyDBusPendingReply(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDBusPendingReply[] = {{22, 255, 1}};


static PyMethodDef methods_QPyDBusPendingReply[] = {
    {SIP_MLNAME_CAST(sipName_argumentAt), meth_QPyDBusPendingReply_argumentAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_argumentAt)},
    {SIP_MLNAME_CAST(sipName_error), meth_QPyDBusPendingReply_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_error)},
    {SIP_MLNAME_CAST(sipName_isError), meth_QPyDBusPendingReply_isError, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_isError)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QPyDBusPendingReply_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_isFinished)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPyDBusPendingReply_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_isValid)},
    {SIP_MLNAME_CAST(sipName_reply), meth_QPyDBusPendingReply_reply, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_reply)},
    {SIP_MLNAME_CAST(sipName_value), (PyCFunction)meth_QPyDBusPendingReply_value, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_value)},
    {SIP_MLNAME_CAST(sipName_waitForFinished), meth_QPyDBusPendingReply_waitForFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusPendingReply_waitForFinished)}
};

PyDoc_STRVAR(doc_QPyDBusPendingReply, "\1QDBusPendingReply()\n"
"QDBusPendingReply(QDBusPendingReply)\n"
"QDBusPendingReply(QDBusPendingCall)\n"
"QDBusPendingReply(QDBusMessage)");


static pyqt5ClassPluginDef plugin_QPyDBusPendingReply = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QPyDBusPendingReply = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPyDBusPendingReply,
        {0},
        &plugin_QPyDBusPendingReply
    },
    {
        sipNameNr_QDBusPendingReply,
        {0, 0, 1},
        8, methods_QPyDBusPendingReply,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDBusPendingReply,
    -1,
    -1,
    supers_QPyDBusPendingReply,
    0,
    init_type_QPyDBusPendingReply,
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
    dealloc_QPyDBusPendingReply,
    assign_QPyDBusPendingReply,
    array_QPyDBusPendingReply,
    copy_QPyDBusPendingReply,
    release_QPyDBusPendingReply,
    cast_QPyDBusPendingReply,
    0,
    0,
    0,
    0,
    0,
    0
};
