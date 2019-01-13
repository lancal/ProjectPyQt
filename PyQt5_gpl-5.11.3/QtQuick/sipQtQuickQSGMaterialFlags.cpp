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

#include "sipAPIQtQuick.h"

#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"

#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"


extern "C" {static long slot_QSGMaterial_Flags___hash__(PyObject *);}
static long slot_QSGMaterial_Flags___hash__(PyObject *sipSelf)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QSGMaterial::Flags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QSGMaterial_Flags___bool__(PyObject *);}
static int slot_QSGMaterial_Flags___bool__(PyObject *sipSelf)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGMaterial::Flags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGMaterial::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGMaterial_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGMaterial::Flags::Int() != a0->operator QSGMaterial::Flags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"
            sipReleaseType(const_cast< ::QSGMaterial::Flags *>(a0),sipType_QSGMaterial_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, ne_slot, sipType_QSGMaterial_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGMaterial::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGMaterial_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGMaterial::Flags::Int() == a0->operator QSGMaterial::Flags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"
            sipReleaseType(const_cast< ::QSGMaterial::Flags *>(a0),sipType_QSGMaterial_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, eq_slot, sipType_QSGMaterial_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGMaterial_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGMaterial::Flags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"

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


extern "C" {static PyObject *slot_QSGMaterial_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGMaterial::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGMaterial_Flags, &a0, &a0State, &a1))
        {
             ::QSGMaterial::Flags*sipRes;

            sipRes = new  ::QSGMaterial::Flags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSGMaterial_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGMaterial_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGMaterial_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGMaterial::Flags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"

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


extern "C" {static PyObject *slot_QSGMaterial_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGMaterial::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGMaterial_Flags, &a0, &a0State, &a1))
        {
             ::QSGMaterial::Flags*sipRes;

            sipRes = new  ::QSGMaterial::Flags((*a0 | a1));
            sipReleaseType(a0,sipType_QSGMaterial_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGMaterial_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGMaterial_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QSGMaterial::Flags::operator&=(a0);

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


extern "C" {static PyObject *slot_QSGMaterial_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGMaterial_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGMaterial::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGMaterial_Flags, &a0, &a0State, &a1))
        {
             ::QSGMaterial::Flags*sipRes;

            sipRes = new  ::QSGMaterial::Flags((*a0 & a1));
            sipReleaseType(a0,sipType_QSGMaterial_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGMaterial_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___invert__(PyObject *);}
static PyObject *slot_QSGMaterial_Flags___invert__(PyObject *sipSelf)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QSGMaterial::Flags*sipRes;

            sipRes = new  ::QSGMaterial::Flags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGMaterial_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGMaterial_Flags___int__(PyObject *);}
static PyObject *slot_QSGMaterial_Flags___int__(PyObject *sipSelf)
{
     ::QSGMaterial::Flags *sipCpp = reinterpret_cast< ::QSGMaterial::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGMaterial_Flags));

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
extern "C" {static void release_QSGMaterial_Flags(void *, int);}
static void release_QSGMaterial_Flags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGMaterial::Flags *>(sipCppV);
}


extern "C" {static void assign_QSGMaterial_Flags(void *, SIP_SSIZE_T, void *);}
static void assign_QSGMaterial_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGMaterial::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGMaterial::Flags *>(sipSrc);
}


extern "C" {static void *array_QSGMaterial_Flags(SIP_SSIZE_T);}
static void *array_QSGMaterial_Flags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGMaterial::Flags[sipNrElem];
}


extern "C" {static void *copy_QSGMaterial_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QSGMaterial_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGMaterial::Flags(reinterpret_cast<const  ::QSGMaterial::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGMaterial_Flags(sipSimpleWrapper *);}
static void dealloc_QSGMaterial_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGMaterial_Flags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGMaterial_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGMaterial_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGMaterial::Flags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGMaterial::Flags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QSGMaterial::Flags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QSGMaterial::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGMaterial_Flags, &a0, &a0State))
        {
            sipCpp = new  ::QSGMaterial::Flags(*a0);
            sipReleaseType(const_cast< ::QSGMaterial::Flags *>(a0),sipType_QSGMaterial_Flags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGMaterial_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGMaterial_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSGMaterial::Flags **sipCppPtr = reinterpret_cast< ::QSGMaterial::Flags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGMaterial::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGMaterial_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QSGMaterial_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGMaterial_Flag)))
{
    *sipCppPtr = new QSGMaterial::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGMaterial::Flags *>(sipConvertToType(sipPy, sipType_QSGMaterial_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGMaterialFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGMaterial_Flags[] = {
    {(void *)slot_QSGMaterial_Flags___hash__, hash_slot},
    {(void *)slot_QSGMaterial_Flags___bool__, bool_slot},
    {(void *)slot_QSGMaterial_Flags___ne__, ne_slot},
    {(void *)slot_QSGMaterial_Flags___eq__, eq_slot},
    {(void *)slot_QSGMaterial_Flags___ixor__, ixor_slot},
    {(void *)slot_QSGMaterial_Flags___xor__, xor_slot},
    {(void *)slot_QSGMaterial_Flags___ior__, ior_slot},
    {(void *)slot_QSGMaterial_Flags___or__, or_slot},
    {(void *)slot_QSGMaterial_Flags___iand__, iand_slot},
    {(void *)slot_QSGMaterial_Flags___and__, and_slot},
    {(void *)slot_QSGMaterial_Flags___invert__, invert_slot},
    {(void *)slot_QSGMaterial_Flags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGMaterial_Flags, "\1QSGMaterial.Flags()\n"
"QSGMaterial.Flags(Union[QSGMaterial.Flags, QSGMaterial.Flag])\n"
"QSGMaterial.Flags(QSGMaterial.Flags)");


static pyqt5ClassPluginDef plugin_QSGMaterial_Flags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGMaterial_Flags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGMaterial__Flags,
        {0},
        &plugin_QSGMaterial_Flags
    },
    {
        sipNameNr_Flags,
        {55, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGMaterial_Flags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGMaterial_Flags,
    init_type_QSGMaterial_Flags,
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
    dealloc_QSGMaterial_Flags,
    assign_QSGMaterial_Flags,
    array_QSGMaterial_Flags,
    copy_QSGMaterial_Flags,
    release_QSGMaterial_Flags,
    0,
    convertTo_QSGMaterial_Flags,
    0,
    0,
    0,
    0,
    0
};
