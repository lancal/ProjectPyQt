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

#include "sipAPIQtBluetooth.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qbluetoothdevicediscoveryagent.sip"
#include <qbluetoothdevicediscoveryagent.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qbluetoothdevicediscoveryagent.sip"
#include <qbluetoothdevicediscoveryagent.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"


extern "C" {static long slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___hash__(PyObject *);}
static long slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___hash__(PyObject *sipSelf)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___bool__(PyObject *);}
static int slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___bool__(PyObject *sipSelf)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int() != a0->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"
            sipReleaseType(const_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(a0),sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, ne_slot, sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int() == a0->operator QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"
            sipReleaseType(const_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(a0),sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, eq_slot, sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___xor__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State, &a1))
        {
             ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods*sipRes;

            sipRes = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods((*a0 ^ a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ior__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___or__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State, &a1))
        {
             ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods*sipRes;

            sipRes = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods((*a0 | a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___iand__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___and__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State, &a1))
        {
             ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods*sipRes;

            sipRes = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods((*a0 & a1));
            sipReleaseType(a0,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___invert__(PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___invert__(PyObject *sipSelf)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;


    {
        {
             ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods*sipRes;

            sipRes = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___int__(PyObject *);}
static PyObject *slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___int__(PyObject *sipSelf)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(void *, int);}
static void release_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(void *sipCppV, int)
{
    delete reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipCppV);
}


extern "C" {static void assign_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(void *, SIP_SSIZE_T, void *);}
static void assign_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipSrc);
}


extern "C" {static void *array_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(SIP_SSIZE_T);}
static void *array_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(SIP_SSIZE_T sipNrElem)
{
    return new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods[sipNrElem];
}


extern "C" {static void *copy_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(reinterpret_cast<const  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(sipSimpleWrapper *);}
static void dealloc_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(a0);

            return sipCpp;
        }
    }

    {
        const  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, &a0, &a0State))
        {
            sipCpp = new  ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(*a0);
            sipReleaseType(const_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(a0),sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods **sipCppPtr = reinterpret_cast< ::QBluetoothDeviceDiscoveryAgent::DiscoveryMethods **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QBluetoothDeviceDiscoveryAgent::DiscoveryMethods is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethod)) ||
            sipCanConvertToType(sipPy, sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethod)))
{
    *sipCppPtr = new QBluetoothDeviceDiscoveryAgent::DiscoveryMethods(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QBluetoothDeviceDiscoveryAgent::DiscoveryMethods *>(sipConvertToType(sipPy, sipType_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQBluetoothDeviceDiscoveryAgentDiscoveryMethods.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods[] = {
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___hash__, hash_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___bool__, bool_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ne__, ne_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___eq__, eq_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ixor__, ixor_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___xor__, xor_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___ior__, ior_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___or__, or_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___iand__, iand_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___and__, and_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___invert__, invert_slot},
    {(void *)slot_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods, "\1QBluetoothDeviceDiscoveryAgent.DiscoveryMethods()\n"
"QBluetoothDeviceDiscoveryAgent.DiscoveryMethods(Union[QBluetoothDeviceDiscoveryAgent.DiscoveryMethods, QBluetoothDeviceDiscoveryAgent.DiscoveryMethod])\n"
"QBluetoothDeviceDiscoveryAgent.DiscoveryMethods(QBluetoothDeviceDiscoveryAgent.DiscoveryMethods)");


static pyqt5ClassPluginDef plugin_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtBluetooth_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothDeviceDiscoveryAgent__DiscoveryMethods,
        {0},
        &plugin_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods
    },
    {
        sipNameNr_DiscoveryMethods,
        {6, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    -1,
    -1,
    0,
    slots_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    init_type_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
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
    dealloc_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    assign_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    array_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    copy_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    release_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    0,
    convertTo_QBluetoothDeviceDiscoveryAgent_DiscoveryMethods,
    0,
    0,
    0,
    0,
    0
};
