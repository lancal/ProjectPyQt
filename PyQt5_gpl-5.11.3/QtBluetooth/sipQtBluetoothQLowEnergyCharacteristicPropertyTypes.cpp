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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qlowenergycharacteristic.sip"
#include <qlowenergycharacteristic.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qlowenergycharacteristic.sip"
#include <qlowenergycharacteristic.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"


extern "C" {static long slot_QLowEnergyCharacteristic_PropertyTypes___hash__(PyObject *);}
static long slot_QLowEnergyCharacteristic_PropertyTypes___hash__(PyObject *sipSelf)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QLowEnergyCharacteristic::PropertyTypes::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QLowEnergyCharacteristic_PropertyTypes___bool__(PyObject *);}
static int slot_QLowEnergyCharacteristic_PropertyTypes___bool__(PyObject *sipSelf)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLowEnergyCharacteristic::PropertyTypes::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLowEnergyCharacteristic::PropertyTypes::Int() != a0->operator QLowEnergyCharacteristic::PropertyTypes::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"
            sipReleaseType(const_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(a0),sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, ne_slot, sipType_QLowEnergyCharacteristic_PropertyTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QLowEnergyCharacteristic::PropertyTypes::Int() == a0->operator QLowEnergyCharacteristic::PropertyTypes::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"
            sipReleaseType(const_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(a0),sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, eq_slot, sipType_QLowEnergyCharacteristic_PropertyTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLowEnergyCharacteristic_PropertyTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QLowEnergyCharacteristic::PropertyTypes(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"

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


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State, &a1))
        {
             ::QLowEnergyCharacteristic::PropertyTypes*sipRes;

            sipRes = new  ::QLowEnergyCharacteristic::PropertyTypes((*a0 ^ a1));
            sipReleaseType(a0,sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLowEnergyCharacteristic_PropertyTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLowEnergyCharacteristic_PropertyTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QLowEnergyCharacteristic::PropertyTypes(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"

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


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___or__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State, &a1))
        {
             ::QLowEnergyCharacteristic::PropertyTypes*sipRes;

            sipRes = new  ::QLowEnergyCharacteristic::PropertyTypes((*a0 | a1));
            sipReleaseType(a0,sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLowEnergyCharacteristic_PropertyTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLowEnergyCharacteristic_PropertyTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QLowEnergyCharacteristic::PropertyTypes::operator&=(a0);

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


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___and__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State, &a1))
        {
             ::QLowEnergyCharacteristic::PropertyTypes*sipRes;

            sipRes = new  ::QLowEnergyCharacteristic::PropertyTypes((*a0 & a1));
            sipReleaseType(a0,sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLowEnergyCharacteristic_PropertyTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___invert__(PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___invert__(PyObject *sipSelf)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

    if (!sipCpp)
        return 0;


    {
        {
             ::QLowEnergyCharacteristic::PropertyTypes*sipRes;

            sipRes = new  ::QLowEnergyCharacteristic::PropertyTypes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QLowEnergyCharacteristic_PropertyTypes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___int__(PyObject *);}
static PyObject *slot_QLowEnergyCharacteristic_PropertyTypes___int__(PyObject *sipSelf)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyCharacteristic_PropertyTypes));

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
extern "C" {static void release_QLowEnergyCharacteristic_PropertyTypes(void *, int);}
static void release_QLowEnergyCharacteristic_PropertyTypes(void *sipCppV, int)
{
    delete reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipCppV);
}


extern "C" {static void assign_QLowEnergyCharacteristic_PropertyTypes(void *, SIP_SSIZE_T, void *);}
static void assign_QLowEnergyCharacteristic_PropertyTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(sipSrc);
}


extern "C" {static void *array_QLowEnergyCharacteristic_PropertyTypes(SIP_SSIZE_T);}
static void *array_QLowEnergyCharacteristic_PropertyTypes(SIP_SSIZE_T sipNrElem)
{
    return new  ::QLowEnergyCharacteristic::PropertyTypes[sipNrElem];
}


extern "C" {static void *copy_QLowEnergyCharacteristic_PropertyTypes(const void *, SIP_SSIZE_T);}
static void *copy_QLowEnergyCharacteristic_PropertyTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QLowEnergyCharacteristic::PropertyTypes(reinterpret_cast<const  ::QLowEnergyCharacteristic::PropertyTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLowEnergyCharacteristic_PropertyTypes(sipSimpleWrapper *);}
static void dealloc_QLowEnergyCharacteristic_PropertyTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLowEnergyCharacteristic_PropertyTypes(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QLowEnergyCharacteristic_PropertyTypes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLowEnergyCharacteristic_PropertyTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QLowEnergyCharacteristic::PropertyTypes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QLowEnergyCharacteristic::PropertyTypes();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QLowEnergyCharacteristic::PropertyTypes(a0);

            return sipCpp;
        }
    }

    {
        const  ::QLowEnergyCharacteristic::PropertyTypes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLowEnergyCharacteristic_PropertyTypes, &a0, &a0State))
        {
            sipCpp = new  ::QLowEnergyCharacteristic::PropertyTypes(*a0);
            sipReleaseType(const_cast< ::QLowEnergyCharacteristic::PropertyTypes *>(a0),sipType_QLowEnergyCharacteristic_PropertyTypes,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLowEnergyCharacteristic_PropertyTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLowEnergyCharacteristic_PropertyTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QLowEnergyCharacteristic::PropertyTypes **sipCppPtr = reinterpret_cast< ::QLowEnergyCharacteristic::PropertyTypes **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLowEnergyCharacteristic::PropertyTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLowEnergyCharacteristic_PropertyType)) ||
            sipCanConvertToType(sipPy, sipType_QLowEnergyCharacteristic_PropertyTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLowEnergyCharacteristic_PropertyType)))
{
    *sipCppPtr = new QLowEnergyCharacteristic::PropertyTypes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLowEnergyCharacteristic::PropertyTypes *>(sipConvertToType(sipPy, sipType_QLowEnergyCharacteristic_PropertyTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLowEnergyCharacteristic_PropertyTypes[] = {
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___hash__, hash_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___bool__, bool_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___ne__, ne_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___eq__, eq_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___ixor__, ixor_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___xor__, xor_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___ior__, ior_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___or__, or_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___iand__, iand_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___and__, and_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___invert__, invert_slot},
    {(void *)slot_QLowEnergyCharacteristic_PropertyTypes___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLowEnergyCharacteristic_PropertyTypes, "\1QLowEnergyCharacteristic.PropertyTypes()\n"
"QLowEnergyCharacteristic.PropertyTypes(Union[QLowEnergyCharacteristic.PropertyTypes, QLowEnergyCharacteristic.PropertyType])\n"
"QLowEnergyCharacteristic.PropertyTypes(QLowEnergyCharacteristic.PropertyTypes)");


static pyqt5ClassPluginDef plugin_QLowEnergyCharacteristic_PropertyTypes = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtBluetooth_QLowEnergyCharacteristic_PropertyTypes = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QLowEnergyCharacteristic__PropertyTypes,
        {0},
        &plugin_QLowEnergyCharacteristic_PropertyTypes
    },
    {
        sipNameNr_PropertyTypes,
        {73, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLowEnergyCharacteristic_PropertyTypes,
    -1,
    -1,
    0,
    slots_QLowEnergyCharacteristic_PropertyTypes,
    init_type_QLowEnergyCharacteristic_PropertyTypes,
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
    dealloc_QLowEnergyCharacteristic_PropertyTypes,
    assign_QLowEnergyCharacteristic_PropertyTypes,
    array_QLowEnergyCharacteristic_PropertyTypes,
    copy_QLowEnergyCharacteristic_PropertyTypes,
    release_QLowEnergyCharacteristic_PropertyTypes,
    0,
    convertTo_QLowEnergyCharacteristic_PropertyTypes,
    0,
    0,
    0,
    0,
    0
};
