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

#include "sipAPIQtWebEngineCore.h"

#line 38 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineCore/qwebenginequotarequest.sip"
#include <qwebenginequotarequest.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQWebEngineQuotaRequest.cpp"

#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQWebEngineQuotaRequest.cpp"


PyDoc_STRVAR(doc_QWebEngineQuotaRequest_accept, "accept(self)");

extern "C" {static PyObject *meth_QWebEngineQuotaRequest_accept(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineQuotaRequest_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineQuotaRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineQuotaRequest, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineQuotaRequest, sipName_accept, doc_QWebEngineQuotaRequest_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineQuotaRequest_reject, "reject(self)");

extern "C" {static PyObject *meth_QWebEngineQuotaRequest_reject(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineQuotaRequest_reject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineQuotaRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineQuotaRequest, &sipCpp))
        {
            sipCpp->reject();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineQuotaRequest, sipName_reject, doc_QWebEngineQuotaRequest_reject);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineQuotaRequest_origin, "origin(self) -> QUrl");

extern "C" {static PyObject *meth_QWebEngineQuotaRequest_origin(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineQuotaRequest_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineQuotaRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineQuotaRequest, &sipCpp))
        {
             ::QUrl*sipRes;

            sipRes = new  ::QUrl(sipCpp->origin());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineQuotaRequest, sipName_origin, doc_QWebEngineQuotaRequest_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineQuotaRequest_requestedSize, "requestedSize(self) -> int");

extern "C" {static PyObject *meth_QWebEngineQuotaRequest_requestedSize(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineQuotaRequest_requestedSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineQuotaRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineQuotaRequest, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->requestedSize();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineQuotaRequest, sipName_requestedSize, doc_QWebEngineQuotaRequest_requestedSize);

    return NULL;
}


extern "C" {static PyObject *slot_QWebEngineQuotaRequest___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineQuotaRequest___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineQuotaRequest *sipCpp = reinterpret_cast< ::QWebEngineQuotaRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineQuotaRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineQuotaRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebEngineQuotaRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QWebEngineQuotaRequest::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineCore, ne_slot, sipType_QWebEngineQuotaRequest, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebEngineQuotaRequest___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineQuotaRequest___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineQuotaRequest *sipCpp = reinterpret_cast< ::QWebEngineQuotaRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineQuotaRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineQuotaRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebEngineQuotaRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QWebEngineQuotaRequest::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineCore, eq_slot, sipType_QWebEngineQuotaRequest, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineQuotaRequest(void *, int);}
static void release_QWebEngineQuotaRequest(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWebEngineQuotaRequest *>(sipCppV);
}


extern "C" {static void assign_QWebEngineQuotaRequest(void *, SIP_SSIZE_T, void *);}
static void assign_QWebEngineQuotaRequest(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebEngineQuotaRequest *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebEngineQuotaRequest *>(sipSrc);
}


extern "C" {static void *array_QWebEngineQuotaRequest(SIP_SSIZE_T);}
static void *array_QWebEngineQuotaRequest(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebEngineQuotaRequest[sipNrElem];
}


extern "C" {static void *copy_QWebEngineQuotaRequest(const void *, SIP_SSIZE_T);}
static void *copy_QWebEngineQuotaRequest(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebEngineQuotaRequest(reinterpret_cast<const  ::QWebEngineQuotaRequest *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebEngineQuotaRequest(sipSimpleWrapper *);}
static void dealloc_QWebEngineQuotaRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebEngineQuotaRequest(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebEngineQuotaRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEngineQuotaRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebEngineQuotaRequest *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QWebEngineQuotaRequest();

            return sipCpp;
        }
    }

    {
        const  ::QWebEngineQuotaRequest* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebEngineQuotaRequest, &a0))
        {
            sipCpp = new  ::QWebEngineQuotaRequest(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEngineQuotaRequest[] = {
    {(void *)slot_QWebEngineQuotaRequest___ne__, ne_slot},
    {(void *)slot_QWebEngineQuotaRequest___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QWebEngineQuotaRequest[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QWebEngineQuotaRequest_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineQuotaRequest_accept)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QWebEngineQuotaRequest_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineQuotaRequest_origin)},
    {SIP_MLNAME_CAST(sipName_reject), meth_QWebEngineQuotaRequest_reject, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineQuotaRequest_reject)},
    {SIP_MLNAME_CAST(sipName_requestedSize), meth_QWebEngineQuotaRequest_requestedSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineQuotaRequest_requestedSize)}
};

PyDoc_STRVAR(doc_QWebEngineQuotaRequest, "\1QWebEngineQuotaRequest()\n"
"QWebEngineQuotaRequest(QWebEngineQuotaRequest)");


static pyqt5ClassPluginDef plugin_QWebEngineQuotaRequest = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngineCore_QWebEngineQuotaRequest = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineQuotaRequest,
        {0},
        &plugin_QWebEngineQuotaRequest
    },
    {
        sipNameNr_QWebEngineQuotaRequest,
        {0, 0, 1},
        4, methods_QWebEngineQuotaRequest,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEngineQuotaRequest,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEngineQuotaRequest,
    init_type_QWebEngineQuotaRequest,
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
    dealloc_QWebEngineQuotaRequest,
    assign_QWebEngineQuotaRequest,
    array_QWebEngineQuotaRequest,
    copy_QWebEngineQuotaRequest,
    release_QWebEngineQuotaRequest,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
