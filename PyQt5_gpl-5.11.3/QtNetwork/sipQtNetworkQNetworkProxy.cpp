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

#include "sipAPIQtNetwork.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkProxy.cpp"


PyDoc_STRVAR(doc_QNetworkProxy_setType, "setType(self, QNetworkProxy.ProxyType)");

extern "C" {static PyObject *meth_QNetworkProxy_setType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkProxy::ProxyType a0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkProxy_ProxyType, &a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setType, doc_QNetworkProxy_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_type, "type(self) -> QNetworkProxy.ProxyType");

extern "C" {static PyObject *meth_QNetworkProxy_type(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::QNetworkProxy::ProxyType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkProxy_ProxyType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_type, doc_QNetworkProxy_type);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setUser, "setUser(self, str)");

extern "C" {static PyObject *meth_QNetworkProxy_setUser(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setUser(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setUser, doc_QNetworkProxy_setUser);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_user, "user(self) -> str");

extern "C" {static PyObject *meth_QNetworkProxy_user(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->user());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_user, doc_QNetworkProxy_user);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setPassword, "setPassword(self, str)");

extern "C" {static PyObject *meth_QNetworkProxy_setPassword(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPassword(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setPassword, doc_QNetworkProxy_setPassword);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_password, "password(self) -> str");

extern "C" {static PyObject *meth_QNetworkProxy_password(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->password());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_password, doc_QNetworkProxy_password);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setHostName, "setHostName(self, str)");

extern "C" {static PyObject *meth_QNetworkProxy_setHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setHostName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setHostName, doc_QNetworkProxy_setHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_hostName, "hostName(self) -> str");

extern "C" {static PyObject *meth_QNetworkProxy_hostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_hostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->hostName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_hostName, doc_QNetworkProxy_hostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setPort, "setPort(self, int)");

extern "C" {static PyObject *meth_QNetworkProxy_setPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QNetworkProxy, &sipCpp, &a0))
        {
            sipCpp->setPort(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setPort, doc_QNetworkProxy_setPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_port, "port(self) -> int");

extern "C" {static PyObject *meth_QNetworkProxy_port(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->port();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_port, doc_QNetworkProxy_port);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setApplicationProxy, "setApplicationProxy(QNetworkProxy)");

extern "C" {static PyObject *meth_QNetworkProxy_setApplicationProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setApplicationProxy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QNetworkProxy, &a0))
        {
             ::QNetworkProxy::setApplicationProxy(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setApplicationProxy, doc_QNetworkProxy_setApplicationProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_applicationProxy, "applicationProxy() -> QNetworkProxy");

extern "C" {static PyObject *meth_QNetworkProxy_applicationProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_applicationProxy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QNetworkProxy*sipRes;

            sipRes = new  ::QNetworkProxy( ::QNetworkProxy::applicationProxy());

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_applicationProxy, doc_QNetworkProxy_applicationProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_isCachingProxy, "isCachingProxy(self) -> bool");

extern "C" {static PyObject *meth_QNetworkProxy_isCachingProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_isCachingProxy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCachingProxy();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_isCachingProxy, doc_QNetworkProxy_isCachingProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_isTransparentProxy, "isTransparentProxy(self) -> bool");

extern "C" {static PyObject *meth_QNetworkProxy_isTransparentProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_isTransparentProxy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isTransparentProxy();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_isTransparentProxy, doc_QNetworkProxy_isTransparentProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setCapabilities, "setCapabilities(self, Union[QNetworkProxy.Capabilities, QNetworkProxy.Capability])");

extern "C" {static PyObject *meth_QNetworkProxy_setCapabilities(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setCapabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkProxy::Capabilities* a0;
        int a0State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            sipCpp->setCapabilities(*a0);
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setCapabilities, doc_QNetworkProxy_setCapabilities);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_capabilities, "capabilities(self) -> QNetworkProxy.Capabilities");

extern "C" {static PyObject *meth_QNetworkProxy_capabilities(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_capabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
             ::QNetworkProxy::Capabilities*sipRes;

            sipRes = new  ::QNetworkProxy::Capabilities(sipCpp->capabilities());

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_capabilities, doc_QNetworkProxy_capabilities);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_swap, "swap(self, QNetworkProxy)");

extern "C" {static PyObject *meth_QNetworkProxy_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkProxy* a0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkProxy, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_swap, doc_QNetworkProxy_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_header, "header(self, QNetworkRequest.KnownHeaders) -> Any");

extern "C" {static PyObject *meth_QNetworkProxy_header(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_header(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkRequest::KnownHeaders a0;
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->header(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_header, doc_QNetworkProxy_header);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setHeader, "setHeader(self, QNetworkRequest.KnownHeaders, Any)");

extern "C" {static PyObject *meth_QNetworkProxy_setHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkRequest::KnownHeaders a0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setHeader(a0,*a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setHeader, doc_QNetworkProxy_setHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_hasRawHeader, "hasRawHeader(self, Union[QByteArray, bytes, bytearray]) -> bool");

extern "C" {static PyObject *meth_QNetworkProxy_hasRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_hasRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasRawHeader(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_hasRawHeader, doc_QNetworkProxy_hasRawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_rawHeaderList, "rawHeaderList(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QNetworkProxy_rawHeaderList(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_rawHeaderList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>(sipCpp->rawHeaderList());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_rawHeaderList, doc_QNetworkProxy_rawHeaderList);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_rawHeader, "rawHeader(self, Union[QByteArray, bytes, bytearray]) -> QByteArray");

extern "C" {static PyObject *meth_QNetworkProxy_rawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_rawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->rawHeader(*a0));
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_rawHeader, doc_QNetworkProxy_rawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setRawHeader, "setRawHeader(self, Union[QByteArray, bytes, bytearray], Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNetworkProxy_setRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QByteArray* a1;
        int a1State = 0;
         ::QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            sipCpp->setRawHeader(*a0,*a1);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setRawHeader, doc_QNetworkProxy_setRawHeader);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkProxy___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkProxy *sipCpp = reinterpret_cast< ::QNetworkProxy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxy, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkProxy::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QNetworkProxy, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkProxy *sipCpp = reinterpret_cast< ::QNetworkProxy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxy, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkProxy::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QNetworkProxy, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxy(void *, int);}
static void release_QNetworkProxy(void *sipCppV, int)
{
    delete reinterpret_cast< ::QNetworkProxy *>(sipCppV);
}


extern "C" {static void assign_QNetworkProxy(void *, SIP_SSIZE_T, void *);}
static void assign_QNetworkProxy(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QNetworkProxy *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QNetworkProxy *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxy(SIP_SSIZE_T);}
static void *array_QNetworkProxy(SIP_SSIZE_T sipNrElem)
{
    return new  ::QNetworkProxy[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxy(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxy(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QNetworkProxy(reinterpret_cast<const  ::QNetworkProxy *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxy(sipSimpleWrapper *);}
static void dealloc_QNetworkProxy(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkProxy(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QNetworkProxy(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkProxy(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QNetworkProxy *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QNetworkProxy();

            return sipCpp;
        }
    }

    {
         ::QNetworkProxy::ProxyType a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
         ::quint16 a2 = 0;
        const  ::QString& a3def = QString();
        const  ::QString* a3 = &a3def;
        int a3State = 0;
        const  ::QString& a4def = QString();
        const  ::QString* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_hostName,
            sipName_port,
            sipName_user,
            sipName_password,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|J1tJ1J1", sipType_QNetworkProxy_ProxyType, &a0, sipType_QString,&a1, &a1State, &a2, sipType_QString,&a3, &a3State, sipType_QString,&a4, &a4State))
        {
            sipCpp = new  ::QNetworkProxy(a0,*a1,a2,*a3,*a4);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast< ::QString *>(a4),sipType_QString,a4State);

            return sipCpp;
        }
    }

    {
        const  ::QNetworkProxy* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxy, &a0))
        {
            sipCpp = new  ::QNetworkProxy(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxy[] = {
    {(void *)slot_QNetworkProxy___ne__, ne_slot},
    {(void *)slot_QNetworkProxy___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkProxy[] = {
    {SIP_MLNAME_CAST(sipName_applicationProxy), meth_QNetworkProxy_applicationProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_applicationProxy)},
    {SIP_MLNAME_CAST(sipName_capabilities), meth_QNetworkProxy_capabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_capabilities)},
    {SIP_MLNAME_CAST(sipName_hasRawHeader), meth_QNetworkProxy_hasRawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_hasRawHeader)},
    {SIP_MLNAME_CAST(sipName_header), meth_QNetworkProxy_header, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_header)},
    {SIP_MLNAME_CAST(sipName_hostName), meth_QNetworkProxy_hostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_hostName)},
    {SIP_MLNAME_CAST(sipName_isCachingProxy), meth_QNetworkProxy_isCachingProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_isCachingProxy)},
    {SIP_MLNAME_CAST(sipName_isTransparentProxy), meth_QNetworkProxy_isTransparentProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_isTransparentProxy)},
    {SIP_MLNAME_CAST(sipName_password), meth_QNetworkProxy_password, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_password)},
    {SIP_MLNAME_CAST(sipName_port), meth_QNetworkProxy_port, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_port)},
    {SIP_MLNAME_CAST(sipName_rawHeader), meth_QNetworkProxy_rawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_rawHeader)},
    {SIP_MLNAME_CAST(sipName_rawHeaderList), meth_QNetworkProxy_rawHeaderList, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_rawHeaderList)},
    {SIP_MLNAME_CAST(sipName_setApplicationProxy), meth_QNetworkProxy_setApplicationProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setApplicationProxy)},
    {SIP_MLNAME_CAST(sipName_setCapabilities), meth_QNetworkProxy_setCapabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setCapabilities)},
    {SIP_MLNAME_CAST(sipName_setHeader), meth_QNetworkProxy_setHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setHeader)},
    {SIP_MLNAME_CAST(sipName_setHostName), meth_QNetworkProxy_setHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setHostName)},
    {SIP_MLNAME_CAST(sipName_setPassword), meth_QNetworkProxy_setPassword, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setPassword)},
    {SIP_MLNAME_CAST(sipName_setPort), meth_QNetworkProxy_setPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setPort)},
    {SIP_MLNAME_CAST(sipName_setRawHeader), meth_QNetworkProxy_setRawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setRawHeader)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QNetworkProxy_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setType)},
    {SIP_MLNAME_CAST(sipName_setUser), meth_QNetworkProxy_setUser, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setUser)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QNetworkProxy_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QNetworkProxy_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_type)},
    {SIP_MLNAME_CAST(sipName_user), meth_QNetworkProxy_user, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_user)}
};

static sipEnumMemberDef enummembers_QNetworkProxy[] = {
    {sipName_CachingCapability, static_cast<int>( ::QNetworkProxy::CachingCapability), 83},
    {sipName_DefaultProxy, static_cast<int>( ::QNetworkProxy::DefaultProxy), 84},
    {sipName_FtpCachingProxy, static_cast<int>( ::QNetworkProxy::FtpCachingProxy), 84},
    {sipName_HostNameLookupCapability, static_cast<int>( ::QNetworkProxy::HostNameLookupCapability), 83},
    {sipName_HttpCachingProxy, static_cast<int>( ::QNetworkProxy::HttpCachingProxy), 84},
    {sipName_HttpProxy, static_cast<int>( ::QNetworkProxy::HttpProxy), 84},
    {sipName_ListeningCapability, static_cast<int>( ::QNetworkProxy::ListeningCapability), 83},
    {sipName_NoProxy, static_cast<int>( ::QNetworkProxy::NoProxy), 84},
    {sipName_SctpListeningCapability, static_cast<int>( ::QNetworkProxy::SctpListeningCapability), 83},
    {sipName_SctpTunnelingCapability, static_cast<int>( ::QNetworkProxy::SctpTunnelingCapability), 83},
    {sipName_Socks5Proxy, static_cast<int>( ::QNetworkProxy::Socks5Proxy), 84},
    {sipName_TunnelingCapability, static_cast<int>( ::QNetworkProxy::TunnelingCapability), 83},
    {sipName_UdpTunnelingCapability, static_cast<int>( ::QNetworkProxy::UdpTunnelingCapability), 83},
};

PyDoc_STRVAR(doc_QNetworkProxy, "\1QNetworkProxy()\n"
"QNetworkProxy(QNetworkProxy.ProxyType, hostName: str = '', port: int = 0, user: str = '', password: str = '')\n"
"QNetworkProxy(QNetworkProxy)");


static pyqt5ClassPluginDef plugin_QNetworkProxy = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkProxy = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxy,
        {0},
        &plugin_QNetworkProxy
    },
    {
        sipNameNr_QNetworkProxy,
        {0, 0, 1},
        23, methods_QNetworkProxy,
        13, enummembers_QNetworkProxy,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxy,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxy,
    init_type_QNetworkProxy,
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
    dealloc_QNetworkProxy,
    assign_QNetworkProxy,
    array_QNetworkProxy,
    copy_QNetworkProxy,
    release_QNetworkProxy,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
