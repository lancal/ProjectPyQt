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

#include "sipAPIQtCore.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qdatastream.sip"
#include <qdatastream.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"


PyDoc_STRVAR(doc_QVariant_value, "value(self) -> object");

extern "C" {static PyObject *meth_QVariant_value(PyObject *, PyObject *);}
static PyObject *meth_QVariant_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 140 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
        sipRes = qpycore_PyObject_FromQVariant(*sipCpp);
#line 53 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_value, doc_QVariant_value);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_type, "type(self) -> QVariant.Type");

extern "C" {static PyObject *meth_QVariant_type(PyObject *, PyObject *);}
static PyObject *meth_QVariant_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
             ::QVariant::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_type, doc_QVariant_type);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_userType, "userType(self) -> int");

extern "C" {static PyObject *meth_QVariant_userType(PyObject *, PyObject *);}
static PyObject *meth_QVariant_userType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->userType();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_userType, doc_QVariant_userType);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_typeName, "typeName(self) -> str");

extern "C" {static PyObject *meth_QVariant_typeName(PyObject *, PyObject *);}
static PyObject *meth_QVariant_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->typeName();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_typeName, doc_QVariant_typeName);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_canConvert, "canConvert(self, int) -> bool");

extern "C" {static PyObject *meth_QVariant_canConvert(PyObject *, PyObject *);}
static PyObject *meth_QVariant_canConvert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QVariant, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->canConvert(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_canConvert, doc_QVariant_canConvert);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_convert, "convert(self, int) -> bool");

extern "C" {static PyObject *meth_QVariant_convert(PyObject *, PyObject *);}
static PyObject *meth_QVariant_convert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QVariant, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->convert(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_convert, doc_QVariant_convert);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QVariant_isValid(PyObject *, PyObject *);}
static PyObject *meth_QVariant_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_isValid, doc_QVariant_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QVariant_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVariant_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_isNull, doc_QVariant_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_clear, "clear(self)");

extern "C" {static PyObject *meth_QVariant_clear(PyObject *, PyObject *);}
static PyObject *meth_QVariant_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVariant, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_clear, doc_QVariant_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_load, "load(self, QDataStream)");

extern "C" {static PyObject *meth_QVariant_load(PyObject *, PyObject *);}
static PyObject *meth_QVariant_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDataStream* a0;
         ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVariant, &sipCpp, sipType_QDataStream, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->load(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_load, doc_QVariant_load);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_save, "save(self, QDataStream)");

extern "C" {static PyObject *meth_QVariant_save(PyObject *, PyObject *);}
static PyObject *meth_QVariant_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDataStream* a0;
        const  ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVariant, &sipCpp, sipType_QDataStream, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->save(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_save, doc_QVariant_save);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_typeToName, "typeToName(int) -> str");

extern "C" {static PyObject *meth_QVariant_typeToName(PyObject *, PyObject *);}
static PyObject *meth_QVariant_typeToName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes;

            sipRes =  ::QVariant::typeToName(a0);

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_typeToName, doc_QVariant_typeToName);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_nameToType, "nameToType(str) -> QVariant.Type");

extern "C" {static PyObject *meth_QVariant_nameToType(PyObject *, PyObject *);}
static PyObject *meth_QVariant_nameToType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "AA", &a0Keep, &a0))
        {
             ::QVariant::Type sipRes;

            sipRes =  ::QVariant::nameToType(a0);
            Py_DECREF(a0Keep);

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_nameToType, doc_QVariant_nameToType);

    return NULL;
}


PyDoc_STRVAR(doc_QVariant_swap, "swap(self, QVariant)");

extern "C" {static PyObject *meth_QVariant_swap(PyObject *, PyObject *);}
static PyObject *meth_QVariant_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QVariant* a0;
         ::QVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVariant, &sipCpp, sipType_QVariant, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVariant, sipName_swap, doc_QVariant_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QVariant___ge__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator>=(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QVariant, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVariant___gt__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator>(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, gt_slot, sipType_QVariant, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVariant___le__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator<=(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, le_slot, sipType_QVariant, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVariant___lt__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator<(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QVariant, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVariant___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator!=(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QVariant, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVariant___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVariant___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVariant));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVariant::operator==(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QVariant, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QVariant(void *, int);}
static void release_QVariant(void *sipCppV, int)
{
    delete reinterpret_cast< ::QVariant *>(sipCppV);
}


extern "C" {static void assign_QVariant(void *, SIP_SSIZE_T, void *);}
static void assign_QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QVariant *>(sipSrc);
}


extern "C" {static void *array_QVariant(SIP_SSIZE_T);}
static void *array_QVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVariant[sipNrElem];
}


extern "C" {static void *copy_QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVariant(reinterpret_cast<const  ::QVariant *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVariant(sipSimpleWrapper *);}
static void dealloc_QVariant(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QVariant(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QVariant(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVariant(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QVariant *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QVariant();

            return sipCpp;
        }
    }

    {
         ::QVariant::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "XE", sipType_QVariant_Type, &a0))
        {
            sipCpp = new  ::QVariant(a0);

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "P0", &a0))
        {
#line 128 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
        int is_err = 0;
        QVariant var = qpycore_PyObject_AsQVariant(a0, &is_err);
        
        if (is_err)
            sipCpp = 0;
        else
            sipCpp = new QVariant(var);
#line 730 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"

            return sipCpp;
        }
    }

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant, &a0, &a0State))
        {
            sipCpp = new  ::QVariant(*a0);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QVariant **sipCppPtr = reinterpret_cast< ::QVariant **>(sipCppPtrV);

#line 30 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
if (sipIsErr == NULL)
    // We can convert everything to a QVariant.
    return 1;

// If it is already a QVariant then just return it.
if (Py_TYPE(sipPy) == sipTypeAsPyTypeObject(sipType_QVariant))
{
    *sipCppPtr = reinterpret_cast<QVariant *>(sipConvertToType(sipPy,
            sipType_QVariant, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

// Convert it to a QVariant.
QVariant var = qpycore_PyObject_AsQVariant(sipPy, sipIsErr);

if (*sipIsErr)
    return 0;

*sipCppPtr = new QVariant(var);

return sipGetState(sipTransferObj);
#line 781 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QVariant(void *, PyObject *);}
static PyObject *convertFrom_QVariant(void *sipCppV, PyObject *)
{
    ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipCppV);

#line 55 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
return qpycore_PyObject_FromQVariant(*sipCpp);
#line 792 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQVariant.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVariant[] = {
    {(void *)slot_QVariant___ge__, ge_slot},
    {(void *)slot_QVariant___gt__, gt_slot},
    {(void *)slot_QVariant___le__, le_slot},
    {(void *)slot_QVariant___lt__, lt_slot},
    {(void *)slot_QVariant___ne__, ne_slot},
    {(void *)slot_QVariant___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVariant[] = {
    {SIP_MLNAME_CAST(sipName_canConvert), meth_QVariant_canConvert, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_canConvert)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QVariant_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_clear)},
    {SIP_MLNAME_CAST(sipName_convert), meth_QVariant_convert, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_convert)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QVariant_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QVariant_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_isValid)},
    {SIP_MLNAME_CAST(sipName_load), meth_QVariant_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_load)},
    {SIP_MLNAME_CAST(sipName_nameToType), meth_QVariant_nameToType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_nameToType)},
    {SIP_MLNAME_CAST(sipName_save), meth_QVariant_save, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_save)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QVariant_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QVariant_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_type)},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QVariant_typeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_typeName)},
    {SIP_MLNAME_CAST(sipName_typeToName), meth_QVariant_typeToName, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_typeToName)},
    {SIP_MLNAME_CAST(sipName_userType), meth_QVariant_userType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_userType)},
    {SIP_MLNAME_CAST(sipName_value), meth_QVariant_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QVariant_value)}
};

static sipEnumMemberDef enummembers_QVariant[] = {
    {sipName_BitArray, static_cast<int>( ::QVariant::BitArray), 305},
    {sipName_Bitmap, static_cast<int>( ::QVariant::Bitmap), 305},
    {sipName_Bool, static_cast<int>( ::QVariant::Bool), 305},
    {sipName_Brush, static_cast<int>( ::QVariant::Brush), 305},
    {sipName_ByteArray, static_cast<int>( ::QVariant::ByteArray), 305},
    {sipName_Char, static_cast<int>( ::QVariant::Char), 305},
    {sipName_Color, static_cast<int>( ::QVariant::Color), 305},
    {sipName_Cursor, static_cast<int>( ::QVariant::Cursor), 305},
    {sipName_Date, static_cast<int>( ::QVariant::Date), 305},
    {sipName_DateTime, static_cast<int>( ::QVariant::DateTime), 305},
    {sipName_Double, static_cast<int>( ::QVariant::Double), 305},
    {sipName_EasingCurve, static_cast<int>( ::QVariant::EasingCurve), 305},
    {sipName_Font, static_cast<int>( ::QVariant::Font), 305},
    {sipName_Hash, static_cast<int>( ::QVariant::Hash), 305},
    {sipName_Icon, static_cast<int>( ::QVariant::Icon), 305},
    {sipName_Image, static_cast<int>( ::QVariant::Image), 305},
    {sipName_Int, static_cast<int>( ::QVariant::Int), 305},
    {sipName_Invalid, static_cast<int>( ::QVariant::Invalid), 305},
    {sipName_KeySequence, static_cast<int>( ::QVariant::KeySequence), 305},
    {sipName_Line, static_cast<int>( ::QVariant::Line), 305},
    {sipName_LineF, static_cast<int>( ::QVariant::LineF), 305},
    {sipName_List, static_cast<int>( ::QVariant::List), 305},
    {sipName_Locale, static_cast<int>( ::QVariant::Locale), 305},
    {sipName_LongLong, static_cast<int>( ::QVariant::LongLong), 305},
    {sipName_Map, static_cast<int>( ::QVariant::Map), 305},
    {sipName_Matrix, static_cast<int>( ::QVariant::Matrix), 305},
    {sipName_Matrix4x4, static_cast<int>( ::QVariant::Matrix4x4), 305},
    {sipName_ModelIndex, static_cast<int>( ::QVariant::ModelIndex), 305},
    {sipName_Palette, static_cast<int>( ::QVariant::Palette), 305},
    {sipName_Pen, static_cast<int>( ::QVariant::Pen), 305},
    {sipName_PersistentModelIndex, static_cast<int>( ::QVariant::PersistentModelIndex), 305},
    {sipName_Pixmap, static_cast<int>( ::QVariant::Pixmap), 305},
    {sipName_Point, static_cast<int>( ::QVariant::Point), 305},
    {sipName_PointF, static_cast<int>( ::QVariant::PointF), 305},
    {sipName_Polygon, static_cast<int>( ::QVariant::Polygon), 305},
    {sipName_PolygonF, static_cast<int>( ::QVariant::PolygonF), 305},
    {sipName_Quaternion, static_cast<int>( ::QVariant::Quaternion), 305},
    {sipName_Rect, static_cast<int>( ::QVariant::Rect), 305},
    {sipName_RectF, static_cast<int>( ::QVariant::RectF), 305},
    {sipName_RegExp, static_cast<int>( ::QVariant::RegExp), 305},
    {sipName_Region, static_cast<int>( ::QVariant::Region), 305},
    {sipName_RegularExpression, static_cast<int>( ::QVariant::RegularExpression), 305},
    {sipName_Size, static_cast<int>( ::QVariant::Size), 305},
    {sipName_SizeF, static_cast<int>( ::QVariant::SizeF), 305},
    {sipName_SizePolicy, static_cast<int>( ::QVariant::SizePolicy), 305},
    {sipName_String, static_cast<int>( ::QVariant::String), 305},
    {sipName_StringList, static_cast<int>( ::QVariant::StringList), 305},
    {sipName_TextFormat, static_cast<int>( ::QVariant::TextFormat), 305},
    {sipName_TextLength, static_cast<int>( ::QVariant::TextLength), 305},
    {sipName_Time, static_cast<int>( ::QVariant::Time), 305},
    {sipName_Transform, static_cast<int>( ::QVariant::Transform), 305},
    {sipName_UInt, static_cast<int>( ::QVariant::UInt), 305},
    {sipName_ULongLong, static_cast<int>( ::QVariant::ULongLong), 305},
    {sipName_Url, static_cast<int>( ::QVariant::Url), 305},
    {sipName_UserType, static_cast<int>( ::QVariant::UserType), 305},
    {sipName_Uuid, static_cast<int>( ::QVariant::Uuid), 305},
    {sipName_Vector2D, static_cast<int>( ::QVariant::Vector2D), 305},
    {sipName_Vector3D, static_cast<int>( ::QVariant::Vector3D), 305},
    {sipName_Vector4D, static_cast<int>( ::QVariant::Vector4D), 305},
};

PyDoc_STRVAR(doc_QVariant, "\1QVariant()\n"
"QVariant(QVariant.Type)\n"
"QVariant(object)\n"
"QVariant(QVariant)");


static pyqt5ClassPluginDef plugin_QVariant = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QVariant,
        {0},
        &plugin_QVariant
    },
    {
        sipNameNr_QVariant,
        {0, 0, 1},
        14, methods_QVariant,
        59, enummembers_QVariant,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVariant,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVariant,
    init_type_QVariant,
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
    dealloc_QVariant,
    assign_QVariant,
    array_QVariant,
    copy_QVariant,
    release_QVariant,
    0,
    convertTo_QVariant,
    convertFrom_QVariant,
    0,
    0,
    0,
    0
};
