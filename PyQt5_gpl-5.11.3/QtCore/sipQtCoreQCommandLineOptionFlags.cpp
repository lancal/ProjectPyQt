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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qcommandlineoption.sip"
#include <qcommandlineoption.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qcommandlineoption.sip"
#include <qcommandlineoption.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"


extern "C" {static long slot_QCommandLineOption_Flags___hash__(PyObject *);}
static long slot_QCommandLineOption_Flags___hash__(PyObject *sipSelf)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QCommandLineOption::Flags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QCommandLineOption_Flags___bool__(PyObject *);}
static int slot_QCommandLineOption_Flags___bool__(PyObject *sipSelf)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCommandLineOption::Flags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCommandLineOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCommandLineOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCommandLineOption::Flags::Int() != a0->operator QCommandLineOption::Flags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"
            sipReleaseType(const_cast< ::QCommandLineOption::Flags *>(a0),sipType_QCommandLineOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QCommandLineOption_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCommandLineOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCommandLineOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCommandLineOption::Flags::Int() == a0->operator QCommandLineOption::Flags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"
            sipReleaseType(const_cast< ::QCommandLineOption::Flags *>(a0),sipType_QCommandLineOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QCommandLineOption_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCommandLineOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = QCommandLineOption::Flags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"

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


extern "C" {static PyObject *slot_QCommandLineOption_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QCommandLineOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCommandLineOption_Flags, &a0, &a0State, &a1))
        {
             ::QCommandLineOption::Flags*sipRes;

            sipRes = new  ::QCommandLineOption::Flags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QCommandLineOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCommandLineOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCommandLineOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = QCommandLineOption::Flags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"

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


extern "C" {static PyObject *slot_QCommandLineOption_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QCommandLineOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCommandLineOption_Flags, &a0, &a0State, &a1))
        {
             ::QCommandLineOption::Flags*sipRes;

            sipRes = new  ::QCommandLineOption::Flags((*a0 | a1));
            sipReleaseType(a0,sipType_QCommandLineOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCommandLineOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCommandLineOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QCommandLineOption::Flags::operator&=(a0);

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


extern "C" {static PyObject *slot_QCommandLineOption_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QCommandLineOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCommandLineOption_Flags, &a0, &a0State, &a1))
        {
             ::QCommandLineOption::Flags*sipRes;

            sipRes = new  ::QCommandLineOption::Flags((*a0 & a1));
            sipReleaseType(a0,sipType_QCommandLineOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCommandLineOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___invert__(PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___invert__(PyObject *sipSelf)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QCommandLineOption::Flags*sipRes;

            sipRes = new  ::QCommandLineOption::Flags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QCommandLineOption_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCommandLineOption_Flags___int__(PyObject *);}
static PyObject *slot_QCommandLineOption_Flags___int__(PyObject *sipSelf)
{
     ::QCommandLineOption::Flags *sipCpp = reinterpret_cast< ::QCommandLineOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCommandLineOption_Flags));

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
extern "C" {static void release_QCommandLineOption_Flags(void *, int);}
static void release_QCommandLineOption_Flags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QCommandLineOption::Flags *>(sipCppV);
}


extern "C" {static void assign_QCommandLineOption_Flags(void *, SIP_SSIZE_T, void *);}
static void assign_QCommandLineOption_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QCommandLineOption::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QCommandLineOption::Flags *>(sipSrc);
}


extern "C" {static void *array_QCommandLineOption_Flags(SIP_SSIZE_T);}
static void *array_QCommandLineOption_Flags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QCommandLineOption::Flags[sipNrElem];
}


extern "C" {static void *copy_QCommandLineOption_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QCommandLineOption_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QCommandLineOption::Flags(reinterpret_cast<const  ::QCommandLineOption::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCommandLineOption_Flags(sipSimpleWrapper *);}
static void dealloc_QCommandLineOption_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QCommandLineOption_Flags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QCommandLineOption_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCommandLineOption_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QCommandLineOption::Flags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QCommandLineOption::Flags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QCommandLineOption::Flags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QCommandLineOption::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QCommandLineOption_Flags, &a0, &a0State))
        {
            sipCpp = new  ::QCommandLineOption::Flags(*a0);
            sipReleaseType(const_cast< ::QCommandLineOption::Flags *>(a0),sipType_QCommandLineOption_Flags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QCommandLineOption_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCommandLineOption_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QCommandLineOption::Flags **sipCppPtr = reinterpret_cast< ::QCommandLineOption::Flags **>(sipCppPtrV);

#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QCommandLineOption::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCommandLineOption_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QCommandLineOption_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCommandLineOption_Flag)))
{
    *sipCppPtr = new QCommandLineOption::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCommandLineOption::Flags *>(sipConvertToType(sipPy, sipType_QCommandLineOption_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQCommandLineOptionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCommandLineOption_Flags[] = {
    {(void *)slot_QCommandLineOption_Flags___hash__, hash_slot},
    {(void *)slot_QCommandLineOption_Flags___bool__, bool_slot},
    {(void *)slot_QCommandLineOption_Flags___ne__, ne_slot},
    {(void *)slot_QCommandLineOption_Flags___eq__, eq_slot},
    {(void *)slot_QCommandLineOption_Flags___ixor__, ixor_slot},
    {(void *)slot_QCommandLineOption_Flags___xor__, xor_slot},
    {(void *)slot_QCommandLineOption_Flags___ior__, ior_slot},
    {(void *)slot_QCommandLineOption_Flags___or__, or_slot},
    {(void *)slot_QCommandLineOption_Flags___iand__, iand_slot},
    {(void *)slot_QCommandLineOption_Flags___and__, and_slot},
    {(void *)slot_QCommandLineOption_Flags___invert__, invert_slot},
    {(void *)slot_QCommandLineOption_Flags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QCommandLineOption_Flags, "\1QCommandLineOption.Flags()\n"
"QCommandLineOption.Flags(Union[QCommandLineOption.Flags, QCommandLineOption.Flag])\n"
"QCommandLineOption.Flags(QCommandLineOption.Flags)");


static pyqt5ClassPluginDef plugin_QCommandLineOption_Flags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QCommandLineOption_Flags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QCommandLineOption__Flags,
        {0},
        &plugin_QCommandLineOption_Flags
    },
    {
        sipNameNr_Flags,
        {29, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCommandLineOption_Flags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCommandLineOption_Flags,
    init_type_QCommandLineOption_Flags,
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
    dealloc_QCommandLineOption_Flags,
    assign_QCommandLineOption_Flags,
    array_QCommandLineOption_Flags,
    copy_QCommandLineOption_Flags,
    release_QCommandLineOption_Flags,
    0,
    convertTo_QCommandLineOption_Flags,
    0,
    0,
    0,
    0,
    0
};
