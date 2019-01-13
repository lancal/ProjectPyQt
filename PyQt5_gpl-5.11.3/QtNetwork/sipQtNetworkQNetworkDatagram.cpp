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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qnetworkdatagram.sip"
#include <qnetworkdatagram.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkDatagram.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkDatagram.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkDatagram.cpp"


PyDoc_STRVAR(doc_QNetworkDatagram_swap, "swap(self, QNetworkDatagram)");

extern "C" {static PyObject *meth_QNetworkDatagram_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkDatagram* a0;
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkDatagram, &sipCpp, sipType_QNetworkDatagram, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_swap, doc_QNetworkDatagram_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_clear, "clear(self)");

extern "C" {static PyObject *meth_QNetworkDatagram_clear(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_clear, doc_QNetworkDatagram_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QNetworkDatagram_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_isValid, doc_QNetworkDatagram_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QNetworkDatagram_isNull(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_isNull, doc_QNetworkDatagram_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_interfaceIndex, "interfaceIndex(self) -> int");

extern "C" {static PyObject *meth_QNetworkDatagram_interfaceIndex(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_interfaceIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
             ::uint sipRes;

            sipRes = sipCpp->interfaceIndex();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_interfaceIndex, doc_QNetworkDatagram_interfaceIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_setInterfaceIndex, "setInterfaceIndex(self, int)");

extern "C" {static PyObject *meth_QNetworkDatagram_setInterfaceIndex(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_setInterfaceIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::uint a0;
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QNetworkDatagram, &sipCpp, &a0))
        {
            sipCpp->setInterfaceIndex(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_setInterfaceIndex, doc_QNetworkDatagram_setInterfaceIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_senderAddress, "senderAddress(self) -> QHostAddress");

extern "C" {static PyObject *meth_QNetworkDatagram_senderAddress(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_senderAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->senderAddress());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_senderAddress, doc_QNetworkDatagram_senderAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_destinationAddress, "destinationAddress(self) -> QHostAddress");

extern "C" {static PyObject *meth_QNetworkDatagram_destinationAddress(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_destinationAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->destinationAddress());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_destinationAddress, doc_QNetworkDatagram_destinationAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_senderPort, "senderPort(self) -> int");

extern "C" {static PyObject *meth_QNetworkDatagram_senderPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_senderPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->senderPort();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_senderPort, doc_QNetworkDatagram_senderPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_destinationPort, "destinationPort(self) -> int");

extern "C" {static PyObject *meth_QNetworkDatagram_destinationPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_destinationPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->destinationPort();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_destinationPort, doc_QNetworkDatagram_destinationPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_setSender, "setSender(self, Union[QHostAddress, QHostAddress.SpecialAddress], port: int = 0)");

extern "C" {static PyObject *meth_QNetworkDatagram_setSender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_setSender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::quint16 a1 = 0;
         ::QNetworkDatagram *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_port,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|t", &sipSelf, sipType_QNetworkDatagram, &sipCpp, sipType_QHostAddress, &a0, &a0State, &a1))
        {
            sipCpp->setSender(*a0,a1);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_setSender, doc_QNetworkDatagram_setSender);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_setDestination, "setDestination(self, Union[QHostAddress, QHostAddress.SpecialAddress], int)");

extern "C" {static PyObject *meth_QNetworkDatagram_setDestination(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_setDestination(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::quint16 a1;
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1t", &sipSelf, sipType_QNetworkDatagram, &sipCpp, sipType_QHostAddress, &a0, &a0State, &a1))
        {
            sipCpp->setDestination(*a0,a1);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_setDestination, doc_QNetworkDatagram_setDestination);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_hopLimit, "hopLimit(self) -> int");

extern "C" {static PyObject *meth_QNetworkDatagram_hopLimit(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_hopLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->hopLimit();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_hopLimit, doc_QNetworkDatagram_hopLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_setHopLimit, "setHopLimit(self, int)");

extern "C" {static PyObject *meth_QNetworkDatagram_setHopLimit(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_setHopLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkDatagram, &sipCpp, &a0))
        {
            sipCpp->setHopLimit(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_setHopLimit, doc_QNetworkDatagram_setHopLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_data, "data(self) -> QByteArray");

extern "C" {static PyObject *meth_QNetworkDatagram_data(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkDatagram, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->data());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_data, doc_QNetworkDatagram_data);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_setData, "setData(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QNetworkDatagram_setData(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkDatagram, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setData(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_setData, doc_QNetworkDatagram_setData);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkDatagram_makeReply, "makeReply(self, Union[QByteArray, bytes, bytearray]) -> QNetworkDatagram");

extern "C" {static PyObject *meth_QNetworkDatagram_makeReply(PyObject *, PyObject *);}
static PyObject *meth_QNetworkDatagram_makeReply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QNetworkDatagram *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkDatagram, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
             ::QNetworkDatagram*sipRes;

            sipRes = new  ::QNetworkDatagram(sipCpp->makeReply(*a0));
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkDatagram,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkDatagram, sipName_makeReply, doc_QNetworkDatagram_makeReply);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkDatagram(void *, int);}
static void release_QNetworkDatagram(void *sipCppV, int)
{
    delete reinterpret_cast< ::QNetworkDatagram *>(sipCppV);
}


extern "C" {static void assign_QNetworkDatagram(void *, SIP_SSIZE_T, void *);}
static void assign_QNetworkDatagram(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QNetworkDatagram *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QNetworkDatagram *>(sipSrc);
}


extern "C" {static void *array_QNetworkDatagram(SIP_SSIZE_T);}
static void *array_QNetworkDatagram(SIP_SSIZE_T sipNrElem)
{
    return new  ::QNetworkDatagram[sipNrElem];
}


extern "C" {static void *copy_QNetworkDatagram(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkDatagram(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QNetworkDatagram(reinterpret_cast<const  ::QNetworkDatagram *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkDatagram(sipSimpleWrapper *);}
static void dealloc_QNetworkDatagram(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkDatagram(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QNetworkDatagram(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkDatagram(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QNetworkDatagram *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QNetworkDatagram();

            return sipCpp;
        }
    }

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QHostAddress& a1def = QHostAddress();
        const  ::QHostAddress* a1 = &a1def;
        int a1State = 0;
         ::quint16 a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_destinationAddress,
            sipName_port,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1t", sipType_QByteArray, &a0, &a0State, sipType_QHostAddress, &a1, &a1State, &a2))
        {
            sipCpp = new  ::QNetworkDatagram(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast< ::QHostAddress *>(a1),sipType_QHostAddress,a1State);

            return sipCpp;
        }
    }

    {
        const  ::QNetworkDatagram* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkDatagram, &a0))
        {
            sipCpp = new  ::QNetworkDatagram(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QNetworkDatagram[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QNetworkDatagram_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_clear)},
    {SIP_MLNAME_CAST(sipName_data), meth_QNetworkDatagram_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_data)},
    {SIP_MLNAME_CAST(sipName_destinationAddress), meth_QNetworkDatagram_destinationAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_destinationAddress)},
    {SIP_MLNAME_CAST(sipName_destinationPort), meth_QNetworkDatagram_destinationPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_destinationPort)},
    {SIP_MLNAME_CAST(sipName_hopLimit), meth_QNetworkDatagram_hopLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_hopLimit)},
    {SIP_MLNAME_CAST(sipName_interfaceIndex), meth_QNetworkDatagram_interfaceIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_interfaceIndex)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QNetworkDatagram_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkDatagram_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_isValid)},
    {SIP_MLNAME_CAST(sipName_makeReply), meth_QNetworkDatagram_makeReply, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_makeReply)},
    {SIP_MLNAME_CAST(sipName_senderAddress), meth_QNetworkDatagram_senderAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_senderAddress)},
    {SIP_MLNAME_CAST(sipName_senderPort), meth_QNetworkDatagram_senderPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_senderPort)},
    {SIP_MLNAME_CAST(sipName_setData), meth_QNetworkDatagram_setData, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_setData)},
    {SIP_MLNAME_CAST(sipName_setDestination), meth_QNetworkDatagram_setDestination, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_setDestination)},
    {SIP_MLNAME_CAST(sipName_setHopLimit), meth_QNetworkDatagram_setHopLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_setHopLimit)},
    {SIP_MLNAME_CAST(sipName_setInterfaceIndex), meth_QNetworkDatagram_setInterfaceIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_setInterfaceIndex)},
    {SIP_MLNAME_CAST(sipName_setSender), (PyCFunction)meth_QNetworkDatagram_setSender, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkDatagram_setSender)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QNetworkDatagram_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkDatagram_swap)}
};

PyDoc_STRVAR(doc_QNetworkDatagram, "\1QNetworkDatagram()\n"
"QNetworkDatagram(Union[QByteArray, bytes, bytearray], destinationAddress: Union[QHostAddress, QHostAddress.SpecialAddress] = QHostAddress(), port: int = 0)\n"
"QNetworkDatagram(QNetworkDatagram)");


static pyqt5ClassPluginDef plugin_QNetworkDatagram = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkDatagram = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkDatagram,
        {0},
        &plugin_QNetworkDatagram
    },
    {
        sipNameNr_QNetworkDatagram,
        {0, 0, 1},
        17, methods_QNetworkDatagram,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkDatagram,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QNetworkDatagram,
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
    dealloc_QNetworkDatagram,
    assign_QNetworkDatagram,
    array_QNetworkDatagram,
    copy_QNetworkDatagram,
    release_QNetworkDatagram,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
