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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgrendererinterface.sip"
#include <qsgrendererinterface.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgrendererinterface.sip"
#include <qsgrendererinterface.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"


extern "C" {static long slot_QSGRendererInterface_ShaderSourceTypes___hash__(PyObject *);}
static long slot_QSGRendererInterface_ShaderSourceTypes___hash__(PyObject *sipSelf)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QSGRendererInterface::ShaderSourceTypes::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QSGRendererInterface_ShaderSourceTypes___bool__(PyObject *);}
static int slot_QSGRendererInterface_ShaderSourceTypes___bool__(PyObject *sipSelf)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRendererInterface::ShaderSourceTypes::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRendererInterface::ShaderSourceTypes::Int() != a0->operator QSGRendererInterface::ShaderSourceTypes::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"
            sipReleaseType(const_cast< ::QSGRendererInterface::ShaderSourceTypes *>(a0),sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, ne_slot, sipType_QSGRendererInterface_ShaderSourceTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRendererInterface::ShaderSourceTypes::Int() == a0->operator QSGRendererInterface::ShaderSourceTypes::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"
            sipReleaseType(const_cast< ::QSGRendererInterface::ShaderSourceTypes *>(a0),sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, eq_slot, sipType_QSGRendererInterface_ShaderSourceTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRendererInterface_ShaderSourceTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGRendererInterface::ShaderSourceTypes(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"

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


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State, &a1))
        {
             ::QSGRendererInterface::ShaderSourceTypes*sipRes;

            sipRes = new  ::QSGRendererInterface::ShaderSourceTypes((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRendererInterface_ShaderSourceTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRendererInterface_ShaderSourceTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGRendererInterface::ShaderSourceTypes(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"

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


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State, &a1))
        {
             ::QSGRendererInterface::ShaderSourceTypes*sipRes;

            sipRes = new  ::QSGRendererInterface::ShaderSourceTypes((*a0 | a1));
            sipReleaseType(a0,sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRendererInterface_ShaderSourceTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRendererInterface_ShaderSourceTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QSGRendererInterface::ShaderSourceTypes::operator&=(a0);

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


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State, &a1))
        {
             ::QSGRendererInterface::ShaderSourceTypes*sipRes;

            sipRes = new  ::QSGRendererInterface::ShaderSourceTypes((*a0 & a1));
            sipReleaseType(a0,sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRendererInterface_ShaderSourceTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___invert__(PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___invert__(PyObject *sipSelf)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

    if (!sipCpp)
        return 0;


    {
        {
             ::QSGRendererInterface::ShaderSourceTypes*sipRes;

            sipRes = new  ::QSGRendererInterface::ShaderSourceTypes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGRendererInterface_ShaderSourceTypes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___int__(PyObject *);}
static PyObject *slot_QSGRendererInterface_ShaderSourceTypes___int__(PyObject *sipSelf)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRendererInterface_ShaderSourceTypes));

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
extern "C" {static void release_QSGRendererInterface_ShaderSourceTypes(void *, int);}
static void release_QSGRendererInterface_ShaderSourceTypes(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipCppV);
}


extern "C" {static void assign_QSGRendererInterface_ShaderSourceTypes(void *, SIP_SSIZE_T, void *);}
static void assign_QSGRendererInterface_ShaderSourceTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes *>(sipSrc);
}


extern "C" {static void *array_QSGRendererInterface_ShaderSourceTypes(SIP_SSIZE_T);}
static void *array_QSGRendererInterface_ShaderSourceTypes(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGRendererInterface::ShaderSourceTypes[sipNrElem];
}


extern "C" {static void *copy_QSGRendererInterface_ShaderSourceTypes(const void *, SIP_SSIZE_T);}
static void *copy_QSGRendererInterface_ShaderSourceTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGRendererInterface::ShaderSourceTypes(reinterpret_cast<const  ::QSGRendererInterface::ShaderSourceTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGRendererInterface_ShaderSourceTypes(sipSimpleWrapper *);}
static void dealloc_QSGRendererInterface_ShaderSourceTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGRendererInterface_ShaderSourceTypes(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGRendererInterface_ShaderSourceTypes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGRendererInterface_ShaderSourceTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGRendererInterface::ShaderSourceTypes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGRendererInterface::ShaderSourceTypes();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QSGRendererInterface::ShaderSourceTypes(a0);

            return sipCpp;
        }
    }

    {
        const  ::QSGRendererInterface::ShaderSourceTypes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGRendererInterface_ShaderSourceTypes, &a0, &a0State))
        {
            sipCpp = new  ::QSGRendererInterface::ShaderSourceTypes(*a0);
            sipReleaseType(const_cast< ::QSGRendererInterface::ShaderSourceTypes *>(a0),sipType_QSGRendererInterface_ShaderSourceTypes,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGRendererInterface_ShaderSourceTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGRendererInterface_ShaderSourceTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSGRendererInterface::ShaderSourceTypes **sipCppPtr = reinterpret_cast< ::QSGRendererInterface::ShaderSourceTypes **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGRendererInterface::ShaderSourceTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGRendererInterface_ShaderSourceType)) ||
            sipCanConvertToType(sipPy, sipType_QSGRendererInterface_ShaderSourceTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGRendererInterface_ShaderSourceType)))
{
    *sipCppPtr = new QSGRendererInterface::ShaderSourceTypes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGRendererInterface::ShaderSourceTypes *>(sipConvertToType(sipPy, sipType_QSGRendererInterface_ShaderSourceTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRendererInterfaceShaderSourceTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGRendererInterface_ShaderSourceTypes[] = {
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___hash__, hash_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___bool__, bool_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___ne__, ne_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___eq__, eq_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___ixor__, ixor_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___xor__, xor_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___ior__, ior_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___or__, or_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___iand__, iand_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___and__, and_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___invert__, invert_slot},
    {(void *)slot_QSGRendererInterface_ShaderSourceTypes___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGRendererInterface_ShaderSourceTypes, "\1QSGRendererInterface.ShaderSourceTypes()\n"
"QSGRendererInterface.ShaderSourceTypes(Union[QSGRendererInterface.ShaderSourceTypes, QSGRendererInterface.ShaderSourceType])\n"
"QSGRendererInterface.ShaderSourceTypes(QSGRendererInterface.ShaderSourceTypes)");


static pyqt5ClassPluginDef plugin_QSGRendererInterface_ShaderSourceTypes = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGRendererInterface_ShaderSourceTypes = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGRendererInterface__ShaderSourceTypes,
        {0},
        &plugin_QSGRendererInterface_ShaderSourceTypes
    },
    {
        sipNameNr_ShaderSourceTypes,
        {78, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGRendererInterface_ShaderSourceTypes,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGRendererInterface_ShaderSourceTypes,
    init_type_QSGRendererInterface_ShaderSourceTypes,
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
    dealloc_QSGRendererInterface_ShaderSourceTypes,
    assign_QSGRendererInterface_ShaderSourceTypes,
    array_QSGRendererInterface_ShaderSourceTypes,
    copy_QSGRendererInterface_ShaderSourceTypes,
    release_QSGRendererInterface_ShaderSourceTypes,
    0,
    convertTo_QSGRendererInterface_ShaderSourceTypes,
    0,
    0,
    0,
    0,
    0
};
