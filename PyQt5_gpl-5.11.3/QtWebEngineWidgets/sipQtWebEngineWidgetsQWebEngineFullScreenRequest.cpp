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

#include "sipAPIQtWebEngineWidgets.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineWidgets/qwebenginefullscreenrequest.sip"
#include <qwebenginefullscreenrequest.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineFullScreenRequest.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineWidgets/qwebenginepage.sip"
#include <qwebenginepage.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineFullScreenRequest.cpp"
#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineFullScreenRequest.cpp"


PyDoc_STRVAR(doc_QWebEngineFullScreenRequest_reject, "reject(self)");

extern "C" {static PyObject *meth_QWebEngineFullScreenRequest_reject(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineFullScreenRequest_reject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineFullScreenRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineFullScreenRequest, &sipCpp))
        {
            sipCpp->reject();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineFullScreenRequest, sipName_reject, doc_QWebEngineFullScreenRequest_reject);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineFullScreenRequest_accept, "accept(self)");

extern "C" {static PyObject *meth_QWebEngineFullScreenRequest_accept(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineFullScreenRequest_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineFullScreenRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineFullScreenRequest, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineFullScreenRequest, sipName_accept, doc_QWebEngineFullScreenRequest_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineFullScreenRequest_toggleOn, "toggleOn(self) -> bool");

extern "C" {static PyObject *meth_QWebEngineFullScreenRequest_toggleOn(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineFullScreenRequest_toggleOn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineFullScreenRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineFullScreenRequest, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->toggleOn();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineFullScreenRequest, sipName_toggleOn, doc_QWebEngineFullScreenRequest_toggleOn);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineFullScreenRequest_origin, "origin(self) -> QUrl");

extern "C" {static PyObject *meth_QWebEngineFullScreenRequest_origin(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineFullScreenRequest_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineFullScreenRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineFullScreenRequest, &sipCpp))
        {
             ::QUrl*sipRes;

            sipRes = new  ::QUrl(sipCpp->origin());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineFullScreenRequest, sipName_origin, doc_QWebEngineFullScreenRequest_origin);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineFullScreenRequest(void *, int);}
static void release_QWebEngineFullScreenRequest(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWebEngineFullScreenRequest *>(sipCppV);
}


extern "C" {static void dealloc_QWebEngineFullScreenRequest(sipSimpleWrapper *);}
static void dealloc_QWebEngineFullScreenRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebEngineFullScreenRequest(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebEngineFullScreenRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEngineFullScreenRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebEngineFullScreenRequest *sipCpp = 0;

    {
        const  ::QWebEngineFullScreenRequest* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebEngineFullScreenRequest, &a0))
        {
            sipCpp = new  ::QWebEngineFullScreenRequest(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebEngineFullScreenRequest[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QWebEngineFullScreenRequest_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineFullScreenRequest_accept)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QWebEngineFullScreenRequest_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineFullScreenRequest_origin)},
    {SIP_MLNAME_CAST(sipName_reject), meth_QWebEngineFullScreenRequest_reject, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineFullScreenRequest_reject)},
    {SIP_MLNAME_CAST(sipName_toggleOn), meth_QWebEngineFullScreenRequest_toggleOn, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineFullScreenRequest_toggleOn)}
};

PyDoc_STRVAR(doc_QWebEngineFullScreenRequest, "\1QWebEngineFullScreenRequest(QWebEngineFullScreenRequest)");


static pyqt5ClassPluginDef plugin_QWebEngineFullScreenRequest = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineFullScreenRequest = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineFullScreenRequest,
        {0},
        &plugin_QWebEngineFullScreenRequest
    },
    {
        sipNameNr_QWebEngineFullScreenRequest,
        {0, 0, 1},
        4, methods_QWebEngineFullScreenRequest,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEngineFullScreenRequest,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebEngineFullScreenRequest,
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
    dealloc_QWebEngineFullScreenRequest,
    0,
    0,
    0,
    release_QWebEngineFullScreenRequest,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};