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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusMessage.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusMessage.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusMessage.cpp"


PyDoc_STRVAR(doc_QDBusMessage_createSignal, "createSignal(str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createSignal(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createSignal(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createSignal(*a0,*a1,*a2));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createSignal, doc_QDBusMessage_createSignal);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_createMethodCall, "createMethodCall(str, str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createMethodCall(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createMethodCall(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createMethodCall(*a0,*a1,*a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createMethodCall, doc_QDBusMessage_createMethodCall);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_createError, "createError(str, str) -> QDBusMessage\n"
"createError(QDBusError) -> QDBusMessage\n"
"createError(QDBusError.ErrorType, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createError(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createError(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    {
        const  ::QDBusError* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QDBusError, &a0))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    {
         ::QDBusError::ErrorType a0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "EJ1", sipType_QDBusError_ErrorType, &a0, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createError(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createError, doc_QDBusMessage_createError);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_createReply, "createReply(self, arguments: Iterable[Any] = []) -> QDBusMessage\n"
"createReply(self, Any) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createReply(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createReply(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QList< ::QVariant>& a0def = QList<QVariant>();
        const QList< ::QVariant>* a0 = &a0def;
        int a0State = 0;
        const  ::QDBusMessage *sipCpp;

        static const char *sipKwdList[] = {
            sipName_arguments,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QList_0100QVariant,&a0, &a0State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createReply(*a0));
            sipReleaseType(const_cast<QList< ::QVariant> *>(a0),sipType_QList_0100QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    {
        const  ::QVariant* a0;
        int a0State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QVariant, &a0, &a0State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createReply(*a0));
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createReply, doc_QDBusMessage_createReply);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_createErrorReply, "createErrorReply(self, str, str) -> QDBusMessage\n"
"createErrorReply(self, QDBusError) -> QDBusMessage\n"
"createErrorReply(self, QDBusError.ErrorType, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createErrorReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createErrorReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    {
        const  ::QDBusError* a0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusError, &a0))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    {
         ::QDBusError::ErrorType a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusError_ErrorType, &a0, sipType_QString,&a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage(sipCpp->createErrorReply(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createErrorReply, doc_QDBusMessage_createErrorReply);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_service, "service(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_service(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_service(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->service());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_service, doc_QDBusMessage_service);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_path, "path(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_path(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->path());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_path, doc_QDBusMessage_path);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_interface, "interface(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_interface(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_interface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->interface());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_interface, doc_QDBusMessage_interface);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_member, "member(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_member(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_member(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->member());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_member, doc_QDBusMessage_member);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_errorName, "errorName(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_errorName(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_errorName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_errorName, doc_QDBusMessage_errorName);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_errorMessage, "errorMessage(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_errorMessage(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_errorMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorMessage());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_errorMessage, doc_QDBusMessage_errorMessage);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_type, "type(self) -> QDBusMessage.MessageType");

extern "C" {static PyObject *meth_QDBusMessage_type(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QDBusMessage::MessageType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDBusMessage_MessageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_type, doc_QDBusMessage_type);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_signature, "signature(self) -> str");

extern "C" {static PyObject *meth_QDBusMessage_signature(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->signature());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_signature, doc_QDBusMessage_signature);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_isReplyRequired, "isReplyRequired(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_isReplyRequired(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_isReplyRequired(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isReplyRequired();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_isReplyRequired, doc_QDBusMessage_isReplyRequired);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_setDelayedReply, "setDelayedReply(self, bool)");

extern "C" {static PyObject *meth_QDBusMessage_setDelayedReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setDelayedReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QDBusMessage, &sipCpp, &a0))
        {
            sipCpp->setDelayedReply(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setDelayedReply, doc_QDBusMessage_setDelayedReply);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_isDelayedReply, "isDelayedReply(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_isDelayedReply(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_isDelayedReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDelayedReply();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_isDelayedReply, doc_QDBusMessage_isDelayedReply);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_setAutoStartService, "setAutoStartService(self, bool)");

extern "C" {static PyObject *meth_QDBusMessage_setAutoStartService(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setAutoStartService(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QDBusMessage, &sipCpp, &a0))
        {
            sipCpp->setAutoStartService(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setAutoStartService, doc_QDBusMessage_setAutoStartService);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_autoStartService, "autoStartService(self) -> bool");

extern "C" {static PyObject *meth_QDBusMessage_autoStartService(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_autoStartService(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoStartService();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_autoStartService, doc_QDBusMessage_autoStartService);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_setArguments, "setArguments(self, Iterable[Any])");

extern "C" {static PyObject *meth_QDBusMessage_setArguments(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_setArguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList< ::QVariant>* a0;
        int a0State = 0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QList_0100QVariant,&a0, &a0State))
        {
            sipCpp->setArguments(*a0);
            sipReleaseType(const_cast<QList< ::QVariant> *>(a0),sipType_QList_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_setArguments, doc_QDBusMessage_setArguments);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_arguments, "arguments(self) -> List[Any]");

extern "C" {static PyObject *meth_QDBusMessage_arguments(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusMessage, &sipCpp))
        {
            QList< ::QVariant>*sipRes;

            sipRes = new QList< ::QVariant>(sipCpp->arguments());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_arguments, doc_QDBusMessage_arguments);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_swap, "swap(self, QDBusMessage)");

extern "C" {static PyObject *meth_QDBusMessage_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusMessage* a0;
         ::QDBusMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusMessage, &sipCpp, sipType_QDBusMessage, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_swap, doc_QDBusMessage_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusMessage_createTargetedSignal, "createTargetedSignal(str, str, str, str) -> QDBusMessage");

extern "C" {static PyObject *meth_QDBusMessage_createTargetedSignal(PyObject *, PyObject *);}
static PyObject *meth_QDBusMessage_createTargetedSignal(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
             ::QDBusMessage*sipRes;

            sipRes = new  ::QDBusMessage( ::QDBusMessage::createTargetedSignal(*a0,*a1,*a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            return sipConvertFromNewType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusMessage, sipName_createTargetedSignal, doc_QDBusMessage_createTargetedSignal);

    return NULL;
}


extern "C" {static PyObject *slot_QDBusMessage___lshift__(PyObject *,PyObject *);}
static PyObject *slot_QDBusMessage___lshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDBusMessage* a0;
        const  ::QVariant* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J1", sipType_QDBusMessage, &a0, sipType_QVariant, &a1, &a1State))
        {
             ::QDBusMessage*sipRes;

            sipRes = &(*a0 << *a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromType(sipRes,sipType_QDBusMessage,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus, lshift_slot, NULL, sipArg0, sipArg1);
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusMessage(void *, int);}
static void release_QDBusMessage(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDBusMessage *>(sipCppV);
}


extern "C" {static void assign_QDBusMessage(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusMessage(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusMessage *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusMessage *>(sipSrc);
}


extern "C" {static void *array_QDBusMessage(SIP_SSIZE_T);}
static void *array_QDBusMessage(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDBusMessage[sipNrElem];
}


extern "C" {static void *copy_QDBusMessage(const void *, SIP_SSIZE_T);}
static void *copy_QDBusMessage(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDBusMessage(reinterpret_cast<const  ::QDBusMessage *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusMessage(sipSimpleWrapper *);}
static void dealloc_QDBusMessage(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDBusMessage(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDBusMessage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusMessage(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDBusMessage *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDBusMessage();

            return sipCpp;
        }
    }

    {
        const  ::QDBusMessage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusMessage, &a0))
        {
            sipCpp = new  ::QDBusMessage(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusMessage[] = {
    {(void *)slot_QDBusMessage___lshift__, lshift_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDBusMessage[] = {
    {SIP_MLNAME_CAST(sipName_arguments), meth_QDBusMessage_arguments, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_arguments)},
    {SIP_MLNAME_CAST(sipName_autoStartService), meth_QDBusMessage_autoStartService, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_autoStartService)},
    {SIP_MLNAME_CAST(sipName_createError), meth_QDBusMessage_createError, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_createError)},
    {SIP_MLNAME_CAST(sipName_createErrorReply), meth_QDBusMessage_createErrorReply, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_createErrorReply)},
    {SIP_MLNAME_CAST(sipName_createMethodCall), meth_QDBusMessage_createMethodCall, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_createMethodCall)},
    {SIP_MLNAME_CAST(sipName_createReply), (PyCFunction)meth_QDBusMessage_createReply, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDBusMessage_createReply)},
    {SIP_MLNAME_CAST(sipName_createSignal), meth_QDBusMessage_createSignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_createSignal)},
    {SIP_MLNAME_CAST(sipName_createTargetedSignal), meth_QDBusMessage_createTargetedSignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_createTargetedSignal)},
    {SIP_MLNAME_CAST(sipName_errorMessage), meth_QDBusMessage_errorMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_errorMessage)},
    {SIP_MLNAME_CAST(sipName_errorName), meth_QDBusMessage_errorName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_errorName)},
    {SIP_MLNAME_CAST(sipName_interface), meth_QDBusMessage_interface, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_interface)},
    {SIP_MLNAME_CAST(sipName_isDelayedReply), meth_QDBusMessage_isDelayedReply, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_isDelayedReply)},
    {SIP_MLNAME_CAST(sipName_isReplyRequired), meth_QDBusMessage_isReplyRequired, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_isReplyRequired)},
    {SIP_MLNAME_CAST(sipName_member), meth_QDBusMessage_member, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_member)},
    {SIP_MLNAME_CAST(sipName_path), meth_QDBusMessage_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_path)},
    {SIP_MLNAME_CAST(sipName_service), meth_QDBusMessage_service, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_service)},
    {SIP_MLNAME_CAST(sipName_setArguments), meth_QDBusMessage_setArguments, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_setArguments)},
    {SIP_MLNAME_CAST(sipName_setAutoStartService), meth_QDBusMessage_setAutoStartService, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_setAutoStartService)},
    {SIP_MLNAME_CAST(sipName_setDelayedReply), meth_QDBusMessage_setDelayedReply, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_setDelayedReply)},
    {SIP_MLNAME_CAST(sipName_signature), meth_QDBusMessage_signature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_signature)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDBusMessage_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QDBusMessage_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusMessage_type)}
};

static sipEnumMemberDef enummembers_QDBusMessage[] = {
    {sipName_ErrorMessage, static_cast<int>( ::QDBusMessage::ErrorMessage), 20},
    {sipName_InvalidMessage, static_cast<int>( ::QDBusMessage::InvalidMessage), 20},
    {sipName_MethodCallMessage, static_cast<int>( ::QDBusMessage::MethodCallMessage), 20},
    {sipName_ReplyMessage, static_cast<int>( ::QDBusMessage::ReplyMessage), 20},
    {sipName_SignalMessage, static_cast<int>( ::QDBusMessage::SignalMessage), 20},
};

PyDoc_STRVAR(doc_QDBusMessage, "\1QDBusMessage()\n"
"QDBusMessage(QDBusMessage)");


static pyqt5ClassPluginDef plugin_QDBusMessage = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QDBusMessage = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDBusMessage,
        {0},
        &plugin_QDBusMessage
    },
    {
        sipNameNr_QDBusMessage,
        {0, 0, 1},
        22, methods_QDBusMessage,
        5, enummembers_QDBusMessage,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusMessage,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusMessage,
    init_type_QDBusMessage,
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
    dealloc_QDBusMessage,
    assign_QDBusMessage,
    array_QDBusMessage,
    copy_QDBusMessage,
    release_QDBusMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
