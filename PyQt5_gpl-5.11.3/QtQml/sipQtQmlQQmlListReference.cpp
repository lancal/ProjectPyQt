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

#include "sipAPIQtQml.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qqmllist.sip"
#include <qqmllist.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListReference.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListReference.cpp"
#line 59 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListReference.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListReference.cpp"


PyDoc_STRVAR(doc_QQmlListReference_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_isValid(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_isValid, doc_QQmlListReference_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_object, "object(self) -> QObject");

extern "C" {static PyObject *meth_QQmlListReference_object(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
             ::QObject*sipRes;

            sipRes = sipCpp->object();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_object, doc_QQmlListReference_object);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_listElementType, "listElementType(self) -> QMetaObject");

extern "C" {static PyObject *meth_QQmlListReference_listElementType(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_listElementType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            const  ::QMetaObject*sipRes;

            sipRes = sipCpp->listElementType();

            return sipConvertFromType(const_cast< ::QMetaObject *>(sipRes),sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_listElementType, doc_QQmlListReference_listElementType);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_canAppend, "canAppend(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_canAppend(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_canAppend(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canAppend();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_canAppend, doc_QQmlListReference_canAppend);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_canAt, "canAt(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_canAt(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_canAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canAt();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_canAt, doc_QQmlListReference_canAt);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_canClear, "canClear(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_canClear(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_canClear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canClear();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_canClear, doc_QQmlListReference_canClear);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_canCount, "canCount(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_canCount(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_canCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canCount();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_canCount, doc_QQmlListReference_canCount);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_isManipulable, "isManipulable(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_isManipulable(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_isManipulable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isManipulable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_isManipulable, doc_QQmlListReference_isManipulable);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_isReadable, "isReadable(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_isReadable(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_isReadable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isReadable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_isReadable, doc_QQmlListReference_isReadable);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_append, "append(self, QObject) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_append(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QObject* a0;
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlListReference, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->append(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_append, doc_QQmlListReference_append);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_at, "at(self, int) -> QObject");

extern "C" {static PyObject *meth_QQmlListReference_at(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QQmlListReference, &sipCpp, &a0))
        {
             ::QObject*sipRes;

            sipRes = sipCpp->at(a0);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_at, doc_QQmlListReference_at);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_clear, "clear(self) -> bool");

extern "C" {static PyObject *meth_QQmlListReference_clear(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->clear();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_clear, doc_QQmlListReference_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlListReference_count, "count(self) -> int");

extern "C" {static PyObject *meth_QQmlListReference_count(PyObject *, PyObject *);}
static PyObject *meth_QQmlListReference_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QQmlListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlListReference, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlListReference, sipName_count, doc_QQmlListReference_count);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlListReference(void *, int);}
static void release_QQmlListReference(void *sipCppV, int)
{
    delete reinterpret_cast< ::QQmlListReference *>(sipCppV);
}


extern "C" {static void assign_QQmlListReference(void *, SIP_SSIZE_T, void *);}
static void assign_QQmlListReference(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QQmlListReference *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QQmlListReference *>(sipSrc);
}


extern "C" {static void *array_QQmlListReference(SIP_SSIZE_T);}
static void *array_QQmlListReference(SIP_SSIZE_T sipNrElem)
{
    return new  ::QQmlListReference[sipNrElem];
}


extern "C" {static void *copy_QQmlListReference(const void *, SIP_SSIZE_T);}
static void *copy_QQmlListReference(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QQmlListReference(reinterpret_cast<const  ::QQmlListReference *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQmlListReference(sipSimpleWrapper *);}
static void dealloc_QQmlListReference(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QQmlListReference(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QQmlListReference(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlListReference(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QQmlListReference *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QQmlListReference();

            return sipCpp;
        }
    }

    {
         ::QObject* a0;
        const char* a1;
        PyObject *a1Keep;
         ::QQmlEngine* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_engine,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8AA|J8", sipType_QObject, &a0, &a1Keep, &a1, sipType_QQmlEngine, &a2))
        {
            sipCpp = new  ::QQmlListReference(a0,a1,a2);
            Py_DECREF(a1Keep);

            return sipCpp;
        }
    }

    {
        const  ::QQmlListReference* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlListReference, &a0))
        {
            sipCpp = new  ::QQmlListReference(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlListReference[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QQmlListReference_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_append)},
    {SIP_MLNAME_CAST(sipName_at), meth_QQmlListReference_at, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_at)},
    {SIP_MLNAME_CAST(sipName_canAppend), meth_QQmlListReference_canAppend, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_canAppend)},
    {SIP_MLNAME_CAST(sipName_canAt), meth_QQmlListReference_canAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_canAt)},
    {SIP_MLNAME_CAST(sipName_canClear), meth_QQmlListReference_canClear, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_canClear)},
    {SIP_MLNAME_CAST(sipName_canCount), meth_QQmlListReference_canCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_canCount)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QQmlListReference_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QQmlListReference_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_count)},
    {SIP_MLNAME_CAST(sipName_isManipulable), meth_QQmlListReference_isManipulable, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_isManipulable)},
    {SIP_MLNAME_CAST(sipName_isReadable), meth_QQmlListReference_isReadable, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_isReadable)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QQmlListReference_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_isValid)},
    {SIP_MLNAME_CAST(sipName_listElementType), meth_QQmlListReference_listElementType, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_listElementType)},
    {SIP_MLNAME_CAST(sipName_object), meth_QQmlListReference_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlListReference_object)}
};

PyDoc_STRVAR(doc_QQmlListReference, "\1QQmlListReference()\n"
"QQmlListReference(QObject, str, engine: QQmlEngine = None)\n"
"QQmlListReference(QQmlListReference)");


static pyqt5ClassPluginDef plugin_QQmlListReference = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQml_QQmlListReference = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QQmlListReference,
        {0},
        &plugin_QQmlListReference
    },
    {
        sipNameNr_QQmlListReference,
        {0, 0, 1},
        13, methods_QQmlListReference,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlListReference,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlListReference,
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
    dealloc_QQmlListReference,
    assign_QQmlListReference,
    array_QQmlListReference,
    copy_QQmlListReference,
    release_QQmlListReference,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};