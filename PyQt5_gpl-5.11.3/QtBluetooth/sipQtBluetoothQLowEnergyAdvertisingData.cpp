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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qlowenergyadvertisingdata.sip"
#include <qlowenergyadvertisingdata.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyAdvertisingData.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyAdvertisingData.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyAdvertisingData.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtBluetooth/qbluetoothuuid.sip"
#include <qbluetoothuuid.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyAdvertisingData.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtBluetooth/sipQtBluetoothQLowEnergyAdvertisingData.cpp"


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setLocalName, "setLocalName(self, str)");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setLocalName(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setLocalName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setLocalName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setLocalName, doc_QLowEnergyAdvertisingData_setLocalName);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_localName, "localName(self) -> str");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_localName(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_localName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->localName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_localName, doc_QLowEnergyAdvertisingData_localName);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_invalidManufacturerId, "invalidManufacturerId() -> int");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_invalidManufacturerId(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_invalidManufacturerId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::quint16 sipRes;

            sipRes =  ::QLowEnergyAdvertisingData::invalidManufacturerId();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_invalidManufacturerId, doc_QLowEnergyAdvertisingData_invalidManufacturerId);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setManufacturerData, "setManufacturerData(self, int, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setManufacturerData(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setManufacturerData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint16 a0;
        const  ::QByteArray* a1;
        int a1State = 0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BtJ1", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, &a0, sipType_QByteArray, &a1, &a1State))
        {
            sipCpp->setManufacturerData(a0,*a1);
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setManufacturerData, doc_QLowEnergyAdvertisingData_setManufacturerData);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_manufacturerId, "manufacturerId(self) -> int");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_manufacturerId(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_manufacturerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->manufacturerId();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_manufacturerId, doc_QLowEnergyAdvertisingData_manufacturerId);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_manufacturerData, "manufacturerData(self) -> QByteArray");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_manufacturerData(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_manufacturerData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->manufacturerData());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_manufacturerData, doc_QLowEnergyAdvertisingData_manufacturerData);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setIncludePowerLevel, "setIncludePowerLevel(self, bool)");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setIncludePowerLevel(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setIncludePowerLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, &a0))
        {
            sipCpp->setIncludePowerLevel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setIncludePowerLevel, doc_QLowEnergyAdvertisingData_setIncludePowerLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_includePowerLevel, "includePowerLevel(self) -> bool");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_includePowerLevel(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_includePowerLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->includePowerLevel();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_includePowerLevel, doc_QLowEnergyAdvertisingData_includePowerLevel);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setDiscoverability, "setDiscoverability(self, QLowEnergyAdvertisingData.Discoverability)");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setDiscoverability(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setDiscoverability(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLowEnergyAdvertisingData::Discoverability a0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, sipType_QLowEnergyAdvertisingData_Discoverability, &a0))
        {
            sipCpp->setDiscoverability(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setDiscoverability, doc_QLowEnergyAdvertisingData_setDiscoverability);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_discoverability, "discoverability(self) -> QLowEnergyAdvertisingData.Discoverability");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_discoverability(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_discoverability(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
             ::QLowEnergyAdvertisingData::Discoverability sipRes;

            sipRes = sipCpp->discoverability();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QLowEnergyAdvertisingData_Discoverability);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_discoverability, doc_QLowEnergyAdvertisingData_discoverability);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setServices, "setServices(self, Iterable[QBluetoothUuid])");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setServices(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setServices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList< ::QBluetoothUuid>* a0;
        int a0State = 0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, sipType_QList_0100QBluetoothUuid,&a0, &a0State))
        {
            sipCpp->setServices(*a0);
            sipReleaseType(const_cast<QList< ::QBluetoothUuid> *>(a0),sipType_QList_0100QBluetoothUuid,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setServices, doc_QLowEnergyAdvertisingData_setServices);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_services, "services(self) -> List[QBluetoothUuid]");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_services(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_services(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
            QList< ::QBluetoothUuid>*sipRes;

            sipRes = new QList< ::QBluetoothUuid>(sipCpp->services());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QBluetoothUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_services, doc_QLowEnergyAdvertisingData_services);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_setRawData, "setRawData(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_setRawData(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_setRawData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setRawData(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_setRawData, doc_QLowEnergyAdvertisingData_setRawData);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_rawData, "rawData(self) -> QByteArray");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_rawData(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_rawData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->rawData());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_rawData, doc_QLowEnergyAdvertisingData_rawData);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyAdvertisingData_swap, "swap(self, QLowEnergyAdvertisingData)");

extern "C" {static PyObject *meth_QLowEnergyAdvertisingData_swap(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyAdvertisingData_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLowEnergyAdvertisingData* a0;
         ::QLowEnergyAdvertisingData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLowEnergyAdvertisingData, &sipCpp, sipType_QLowEnergyAdvertisingData, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyAdvertisingData, sipName_swap, doc_QLowEnergyAdvertisingData_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QLowEnergyAdvertisingData___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyAdvertisingData___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLowEnergyAdvertisingData *sipCpp = reinterpret_cast< ::QLowEnergyAdvertisingData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyAdvertisingData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLowEnergyAdvertisingData, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, eq_slot, sipType_QLowEnergyAdvertisingData, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QLowEnergyAdvertisingData___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyAdvertisingData___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QLowEnergyAdvertisingData *sipCpp = reinterpret_cast< ::QLowEnergyAdvertisingData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyAdvertisingData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QLowEnergyAdvertisingData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLowEnergyAdvertisingData, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth, ne_slot, sipType_QLowEnergyAdvertisingData, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QLowEnergyAdvertisingData(void *, int);}
static void release_QLowEnergyAdvertisingData(void *sipCppV, int)
{
    delete reinterpret_cast< ::QLowEnergyAdvertisingData *>(sipCppV);
}


extern "C" {static void assign_QLowEnergyAdvertisingData(void *, SIP_SSIZE_T, void *);}
static void assign_QLowEnergyAdvertisingData(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QLowEnergyAdvertisingData *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QLowEnergyAdvertisingData *>(sipSrc);
}


extern "C" {static void *array_QLowEnergyAdvertisingData(SIP_SSIZE_T);}
static void *array_QLowEnergyAdvertisingData(SIP_SSIZE_T sipNrElem)
{
    return new  ::QLowEnergyAdvertisingData[sipNrElem];
}


extern "C" {static void *copy_QLowEnergyAdvertisingData(const void *, SIP_SSIZE_T);}
static void *copy_QLowEnergyAdvertisingData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QLowEnergyAdvertisingData(reinterpret_cast<const  ::QLowEnergyAdvertisingData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLowEnergyAdvertisingData(sipSimpleWrapper *);}
static void dealloc_QLowEnergyAdvertisingData(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLowEnergyAdvertisingData(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QLowEnergyAdvertisingData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLowEnergyAdvertisingData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QLowEnergyAdvertisingData *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QLowEnergyAdvertisingData();

            return sipCpp;
        }
    }

    {
        const  ::QLowEnergyAdvertisingData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLowEnergyAdvertisingData, &a0))
        {
            sipCpp = new  ::QLowEnergyAdvertisingData(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLowEnergyAdvertisingData[] = {
    {(void *)slot_QLowEnergyAdvertisingData___eq__, eq_slot},
    {(void *)slot_QLowEnergyAdvertisingData___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLowEnergyAdvertisingData[] = {
    {SIP_MLNAME_CAST(sipName_discoverability), meth_QLowEnergyAdvertisingData_discoverability, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_discoverability)},
    {SIP_MLNAME_CAST(sipName_includePowerLevel), meth_QLowEnergyAdvertisingData_includePowerLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_includePowerLevel)},
    {SIP_MLNAME_CAST(sipName_invalidManufacturerId), meth_QLowEnergyAdvertisingData_invalidManufacturerId, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_invalidManufacturerId)},
    {SIP_MLNAME_CAST(sipName_localName), meth_QLowEnergyAdvertisingData_localName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_localName)},
    {SIP_MLNAME_CAST(sipName_manufacturerData), meth_QLowEnergyAdvertisingData_manufacturerData, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_manufacturerData)},
    {SIP_MLNAME_CAST(sipName_manufacturerId), meth_QLowEnergyAdvertisingData_manufacturerId, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_manufacturerId)},
    {SIP_MLNAME_CAST(sipName_rawData), meth_QLowEnergyAdvertisingData_rawData, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_rawData)},
    {SIP_MLNAME_CAST(sipName_services), meth_QLowEnergyAdvertisingData_services, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_services)},
    {SIP_MLNAME_CAST(sipName_setDiscoverability), meth_QLowEnergyAdvertisingData_setDiscoverability, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setDiscoverability)},
    {SIP_MLNAME_CAST(sipName_setIncludePowerLevel), meth_QLowEnergyAdvertisingData_setIncludePowerLevel, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setIncludePowerLevel)},
    {SIP_MLNAME_CAST(sipName_setLocalName), meth_QLowEnergyAdvertisingData_setLocalName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setLocalName)},
    {SIP_MLNAME_CAST(sipName_setManufacturerData), meth_QLowEnergyAdvertisingData_setManufacturerData, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setManufacturerData)},
    {SIP_MLNAME_CAST(sipName_setRawData), meth_QLowEnergyAdvertisingData_setRawData, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setRawData)},
    {SIP_MLNAME_CAST(sipName_setServices), meth_QLowEnergyAdvertisingData_setServices, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_setServices)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QLowEnergyAdvertisingData_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyAdvertisingData_swap)}
};

static sipEnumMemberDef enummembers_QLowEnergyAdvertisingData[] = {
    {sipName_DiscoverabilityGeneral, static_cast<int>( ::QLowEnergyAdvertisingData::DiscoverabilityGeneral), 68},
    {sipName_DiscoverabilityLimited, static_cast<int>( ::QLowEnergyAdvertisingData::DiscoverabilityLimited), 68},
    {sipName_DiscoverabilityNone, static_cast<int>( ::QLowEnergyAdvertisingData::DiscoverabilityNone), 68},
};

PyDoc_STRVAR(doc_QLowEnergyAdvertisingData, "\1QLowEnergyAdvertisingData()\n"
"QLowEnergyAdvertisingData(QLowEnergyAdvertisingData)");


static pyqt5ClassPluginDef plugin_QLowEnergyAdvertisingData = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtBluetooth_QLowEnergyAdvertisingData = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QLowEnergyAdvertisingData,
        {0},
        &plugin_QLowEnergyAdvertisingData
    },
    {
        sipNameNr_QLowEnergyAdvertisingData,
        {0, 0, 1},
        15, methods_QLowEnergyAdvertisingData,
        3, enummembers_QLowEnergyAdvertisingData,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLowEnergyAdvertisingData,
    -1,
    -1,
    0,
    slots_QLowEnergyAdvertisingData,
    init_type_QLowEnergyAdvertisingData,
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
    dealloc_QLowEnergyAdvertisingData,
    assign_QLowEnergyAdvertisingData,
    array_QLowEnergyAdvertisingData,
    copy_QLowEnergyAdvertisingData,
    release_QLowEnergyAdvertisingData,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
