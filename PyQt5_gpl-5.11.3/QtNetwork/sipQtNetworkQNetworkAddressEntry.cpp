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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkAddressEntry.cpp"

#line 28 "sip/QtCore/qdeadlinetimer.sip"
#include <qdeadlinetimer.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkAddressEntry.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQNetworkAddressEntry.cpp"


PyDoc_STRVAR(doc_QNetworkAddressEntry_ip, "ip(self) -> QHostAddress");

extern "C" {static PyObject *meth_QNetworkAddressEntry_ip(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_ip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->ip());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_ip, doc_QNetworkAddressEntry_ip);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setIp, "setIp(self, Union[QHostAddress, QHostAddress.SpecialAddress])");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setIp(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setIp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QHostAddress, &a0, &a0State))
        {
            sipCpp->setIp(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setIp, doc_QNetworkAddressEntry_setIp);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_netmask, "netmask(self) -> QHostAddress");

extern "C" {static PyObject *meth_QNetworkAddressEntry_netmask(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_netmask(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->netmask());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_netmask, doc_QNetworkAddressEntry_netmask);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setNetmask, "setNetmask(self, Union[QHostAddress, QHostAddress.SpecialAddress])");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setNetmask(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setNetmask(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QHostAddress, &a0, &a0State))
        {
            sipCpp->setNetmask(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setNetmask, doc_QNetworkAddressEntry_setNetmask);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_broadcast, "broadcast(self) -> QHostAddress");

extern "C" {static PyObject *meth_QNetworkAddressEntry_broadcast(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_broadcast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->broadcast());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_broadcast, doc_QNetworkAddressEntry_broadcast);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setBroadcast, "setBroadcast(self, Union[QHostAddress, QHostAddress.SpecialAddress])");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setBroadcast(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setBroadcast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QHostAddress, &a0, &a0State))
        {
            sipCpp->setBroadcast(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setBroadcast, doc_QNetworkAddressEntry_setBroadcast);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_prefixLength, "prefixLength(self) -> int");

extern "C" {static PyObject *meth_QNetworkAddressEntry_prefixLength(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_prefixLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->prefixLength();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_prefixLength, doc_QNetworkAddressEntry_prefixLength);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setPrefixLength, "setPrefixLength(self, int)");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setPrefixLength(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setPrefixLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, &a0))
        {
            sipCpp->setPrefixLength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setPrefixLength, doc_QNetworkAddressEntry_setPrefixLength);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_swap, "swap(self, QNetworkAddressEntry)");

extern "C" {static PyObject *meth_QNetworkAddressEntry_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkAddressEntry* a0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QNetworkAddressEntry, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_swap, doc_QNetworkAddressEntry_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_dnsEligibility, "dnsEligibility(self) -> QNetworkAddressEntry.DnsEligibilityStatus");

extern "C" {static PyObject *meth_QNetworkAddressEntry_dnsEligibility(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_dnsEligibility(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QNetworkAddressEntry::DnsEligibilityStatus sipRes;

            sipRes = sipCpp->dnsEligibility();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkAddressEntry_DnsEligibilityStatus);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_dnsEligibility, doc_QNetworkAddressEntry_dnsEligibility);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setDnsEligibility, "setDnsEligibility(self, QNetworkAddressEntry.DnsEligibilityStatus)");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setDnsEligibility(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setDnsEligibility(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkAddressEntry::DnsEligibilityStatus a0;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QNetworkAddressEntry_DnsEligibilityStatus, &a0))
        {
            sipCpp->setDnsEligibility(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setDnsEligibility, doc_QNetworkAddressEntry_setDnsEligibility);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_isLifetimeKnown, "isLifetimeKnown(self) -> bool");

extern "C" {static PyObject *meth_QNetworkAddressEntry_isLifetimeKnown(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_isLifetimeKnown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLifetimeKnown();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_isLifetimeKnown, doc_QNetworkAddressEntry_isLifetimeKnown);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_preferredLifetime, "preferredLifetime(self) -> QDeadlineTimer");

extern "C" {static PyObject *meth_QNetworkAddressEntry_preferredLifetime(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_preferredLifetime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer(sipCpp->preferredLifetime());

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_preferredLifetime, doc_QNetworkAddressEntry_preferredLifetime);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_validityLifetime, "validityLifetime(self) -> QDeadlineTimer");

extern "C" {static PyObject *meth_QNetworkAddressEntry_validityLifetime(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_validityLifetime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer(sipCpp->validityLifetime());

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_validityLifetime, doc_QNetworkAddressEntry_validityLifetime);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_setAddressLifetime, "setAddressLifetime(self, QDeadlineTimer, QDeadlineTimer)");

extern "C" {static PyObject *meth_QNetworkAddressEntry_setAddressLifetime(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_setAddressLifetime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;
         ::QDeadlineTimer* a1;
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp, sipType_QDeadlineTimer, &a0, sipType_QDeadlineTimer, &a1))
        {
            sipCpp->setAddressLifetime(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_setAddressLifetime, doc_QNetworkAddressEntry_setAddressLifetime);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_clearAddressLifetime, "clearAddressLifetime(self)");

extern "C" {static PyObject *meth_QNetworkAddressEntry_clearAddressLifetime(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_clearAddressLifetime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
            sipCpp->clearAddressLifetime();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_clearAddressLifetime, doc_QNetworkAddressEntry_clearAddressLifetime);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_isPermanent, "isPermanent(self) -> bool");

extern "C" {static PyObject *meth_QNetworkAddressEntry_isPermanent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_isPermanent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isPermanent();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_isPermanent, doc_QNetworkAddressEntry_isPermanent);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkAddressEntry_isTemporary, "isTemporary(self) -> bool");

extern "C" {static PyObject *meth_QNetworkAddressEntry_isTemporary(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAddressEntry_isTemporary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkAddressEntry, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isTemporary();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkAddressEntry, sipName_isTemporary, doc_QNetworkAddressEntry_isTemporary);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkAddressEntry___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkAddressEntry___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkAddressEntry *sipCpp = reinterpret_cast< ::QNetworkAddressEntry *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkAddressEntry));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkAddressEntry, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkAddressEntry::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QNetworkAddressEntry, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QNetworkAddressEntry___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkAddressEntry___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkAddressEntry *sipCpp = reinterpret_cast< ::QNetworkAddressEntry *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkAddressEntry));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkAddressEntry* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkAddressEntry, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkAddressEntry::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QNetworkAddressEntry, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkAddressEntry(void *, int);}
static void release_QNetworkAddressEntry(void *sipCppV, int)
{
    delete reinterpret_cast< ::QNetworkAddressEntry *>(sipCppV);
}


extern "C" {static void assign_QNetworkAddressEntry(void *, SIP_SSIZE_T, void *);}
static void assign_QNetworkAddressEntry(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QNetworkAddressEntry *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QNetworkAddressEntry *>(sipSrc);
}


extern "C" {static void *array_QNetworkAddressEntry(SIP_SSIZE_T);}
static void *array_QNetworkAddressEntry(SIP_SSIZE_T sipNrElem)
{
    return new  ::QNetworkAddressEntry[sipNrElem];
}


extern "C" {static void *copy_QNetworkAddressEntry(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkAddressEntry(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QNetworkAddressEntry(reinterpret_cast<const  ::QNetworkAddressEntry *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkAddressEntry(sipSimpleWrapper *);}
static void dealloc_QNetworkAddressEntry(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkAddressEntry(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QNetworkAddressEntry(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkAddressEntry(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QNetworkAddressEntry *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QNetworkAddressEntry();

            return sipCpp;
        }
    }

    {
        const  ::QNetworkAddressEntry* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkAddressEntry, &a0))
        {
            sipCpp = new  ::QNetworkAddressEntry(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkAddressEntry[] = {
    {(void *)slot_QNetworkAddressEntry___ne__, ne_slot},
    {(void *)slot_QNetworkAddressEntry___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkAddressEntry[] = {
    {SIP_MLNAME_CAST(sipName_broadcast), meth_QNetworkAddressEntry_broadcast, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_broadcast)},
    {SIP_MLNAME_CAST(sipName_clearAddressLifetime), meth_QNetworkAddressEntry_clearAddressLifetime, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_clearAddressLifetime)},
    {SIP_MLNAME_CAST(sipName_dnsEligibility), meth_QNetworkAddressEntry_dnsEligibility, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_dnsEligibility)},
    {SIP_MLNAME_CAST(sipName_ip), meth_QNetworkAddressEntry_ip, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_ip)},
    {SIP_MLNAME_CAST(sipName_isLifetimeKnown), meth_QNetworkAddressEntry_isLifetimeKnown, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_isLifetimeKnown)},
    {SIP_MLNAME_CAST(sipName_isPermanent), meth_QNetworkAddressEntry_isPermanent, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_isPermanent)},
    {SIP_MLNAME_CAST(sipName_isTemporary), meth_QNetworkAddressEntry_isTemporary, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_isTemporary)},
    {SIP_MLNAME_CAST(sipName_netmask), meth_QNetworkAddressEntry_netmask, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_netmask)},
    {SIP_MLNAME_CAST(sipName_preferredLifetime), meth_QNetworkAddressEntry_preferredLifetime, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_preferredLifetime)},
    {SIP_MLNAME_CAST(sipName_prefixLength), meth_QNetworkAddressEntry_prefixLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_prefixLength)},
    {SIP_MLNAME_CAST(sipName_setAddressLifetime), meth_QNetworkAddressEntry_setAddressLifetime, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setAddressLifetime)},
    {SIP_MLNAME_CAST(sipName_setBroadcast), meth_QNetworkAddressEntry_setBroadcast, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setBroadcast)},
    {SIP_MLNAME_CAST(sipName_setDnsEligibility), meth_QNetworkAddressEntry_setDnsEligibility, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setDnsEligibility)},
    {SIP_MLNAME_CAST(sipName_setIp), meth_QNetworkAddressEntry_setIp, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setIp)},
    {SIP_MLNAME_CAST(sipName_setNetmask), meth_QNetworkAddressEntry_setNetmask, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setNetmask)},
    {SIP_MLNAME_CAST(sipName_setPrefixLength), meth_QNetworkAddressEntry_setPrefixLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_setPrefixLength)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QNetworkAddressEntry_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_swap)},
    {SIP_MLNAME_CAST(sipName_validityLifetime), meth_QNetworkAddressEntry_validityLifetime, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkAddressEntry_validityLifetime)}
};

static sipEnumMemberDef enummembers_QNetworkAddressEntry[] = {
    {sipName_DnsEligibilityUnknown, static_cast<int>( ::QNetworkAddressEntry::DnsEligibilityUnknown), 61},
    {sipName_DnsEligible, static_cast<int>( ::QNetworkAddressEntry::DnsEligible), 61},
    {sipName_DnsIneligible, static_cast<int>( ::QNetworkAddressEntry::DnsIneligible), 61},
};

PyDoc_STRVAR(doc_QNetworkAddressEntry, "\1QNetworkAddressEntry()\n"
"QNetworkAddressEntry(QNetworkAddressEntry)");


static pyqt5ClassPluginDef plugin_QNetworkAddressEntry = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkAddressEntry = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkAddressEntry,
        {0},
        &plugin_QNetworkAddressEntry
    },
    {
        sipNameNr_QNetworkAddressEntry,
        {0, 0, 1},
        18, methods_QNetworkAddressEntry,
        3, enummembers_QNetworkAddressEntry,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkAddressEntry,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkAddressEntry,
    init_type_QNetworkAddressEntry,
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
    dealloc_QNetworkAddressEntry,
    assign_QNetworkAddressEntry,
    array_QNetworkAddressEntry,
    copy_QNetworkAddressEntry,
    release_QNetworkAddressEntry,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
