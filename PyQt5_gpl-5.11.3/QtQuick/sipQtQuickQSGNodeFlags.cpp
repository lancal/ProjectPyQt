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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"


extern "C" {static long slot_QSGNode_Flags___hash__(PyObject *);}
static long slot_QSGNode_Flags___hash__(PyObject *sipSelf)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QSGNode::Flags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QSGNode_Flags___bool__(PyObject *);}
static int slot_QSGNode_Flags___bool__(PyObject *sipSelf)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGNode::Flags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGNode_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGNode::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGNode_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGNode::Flags::Int() != a0->operator QSGNode::Flags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"
            sipReleaseType(const_cast< ::QSGNode::Flags *>(a0),sipType_QSGNode_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, ne_slot, sipType_QSGNode_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGNode_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGNode::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGNode_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGNode::Flags::Int() == a0->operator QSGNode::Flags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"
            sipReleaseType(const_cast< ::QSGNode::Flags *>(a0),sipType_QSGNode_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, eq_slot, sipType_QSGNode_Flags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGNode_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGNode_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGNode::Flags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"

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


extern "C" {static PyObject *slot_QSGNode_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGNode::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGNode_Flags, &a0, &a0State, &a1))
        {
             ::QSGNode::Flags*sipRes;

            sipRes = new  ::QSGNode::Flags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSGNode_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGNode_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGNode_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGNode_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGNode::Flags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"

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


extern "C" {static PyObject *slot_QSGNode_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGNode::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGNode_Flags, &a0, &a0State, &a1))
        {
             ::QSGNode::Flags*sipRes;

            sipRes = new  ::QSGNode::Flags((*a0 | a1));
            sipReleaseType(a0,sipType_QSGNode_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGNode_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGNode_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGNode_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QSGNode::Flags::operator&=(a0);

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


extern "C" {static PyObject *slot_QSGNode_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGNode_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGNode::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGNode_Flags, &a0, &a0State, &a1))
        {
             ::QSGNode::Flags*sipRes;

            sipRes = new  ::QSGNode::Flags((*a0 & a1));
            sipReleaseType(a0,sipType_QSGNode_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGNode_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGNode_Flags___invert__(PyObject *);}
static PyObject *slot_QSGNode_Flags___invert__(PyObject *sipSelf)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QSGNode::Flags*sipRes;

            sipRes = new  ::QSGNode::Flags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGNode_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGNode_Flags___int__(PyObject *);}
static PyObject *slot_QSGNode_Flags___int__(PyObject *sipSelf)
{
     ::QSGNode::Flags *sipCpp = reinterpret_cast< ::QSGNode::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode_Flags));

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
extern "C" {static void release_QSGNode_Flags(void *, int);}
static void release_QSGNode_Flags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGNode::Flags *>(sipCppV);
}


extern "C" {static void assign_QSGNode_Flags(void *, SIP_SSIZE_T, void *);}
static void assign_QSGNode_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGNode::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGNode::Flags *>(sipSrc);
}


extern "C" {static void *array_QSGNode_Flags(SIP_SSIZE_T);}
static void *array_QSGNode_Flags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGNode::Flags[sipNrElem];
}


extern "C" {static void *copy_QSGNode_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QSGNode_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGNode::Flags(reinterpret_cast<const  ::QSGNode::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGNode_Flags(sipSimpleWrapper *);}
static void dealloc_QSGNode_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGNode_Flags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGNode_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGNode_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGNode::Flags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGNode::Flags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QSGNode::Flags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QSGNode::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGNode_Flags, &a0, &a0State))
        {
            sipCpp = new  ::QSGNode::Flags(*a0);
            sipReleaseType(const_cast< ::QSGNode::Flags *>(a0),sipType_QSGNode_Flags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGNode_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGNode_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSGNode::Flags **sipCppPtr = reinterpret_cast< ::QSGNode::Flags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGNode::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGNode_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QSGNode_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGNode_Flag)))
{
    *sipCppPtr = new QSGNode::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGNode::Flags *>(sipConvertToType(sipPy, sipType_QSGNode_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGNodeFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGNode_Flags[] = {
    {(void *)slot_QSGNode_Flags___hash__, hash_slot},
    {(void *)slot_QSGNode_Flags___bool__, bool_slot},
    {(void *)slot_QSGNode_Flags___ne__, ne_slot},
    {(void *)slot_QSGNode_Flags___eq__, eq_slot},
    {(void *)slot_QSGNode_Flags___ixor__, ixor_slot},
    {(void *)slot_QSGNode_Flags___xor__, xor_slot},
    {(void *)slot_QSGNode_Flags___ior__, ior_slot},
    {(void *)slot_QSGNode_Flags___or__, or_slot},
    {(void *)slot_QSGNode_Flags___iand__, iand_slot},
    {(void *)slot_QSGNode_Flags___and__, and_slot},
    {(void *)slot_QSGNode_Flags___invert__, invert_slot},
    {(void *)slot_QSGNode_Flags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGNode_Flags, "\1QSGNode.Flags()\n"
"QSGNode.Flags(Union[QSGNode.Flags, QSGNode.Flag])\n"
"QSGNode.Flags(QSGNode.Flags)");


static pyqt5ClassPluginDef plugin_QSGNode_Flags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGNode_Flags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGNode__Flags,
        {0},
        &plugin_QSGNode_Flags
    },
    {
        sipNameNr_Flags,
        {63, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGNode_Flags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGNode_Flags,
    init_type_QSGNode_Flags,
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
    dealloc_QSGNode_Flags,
    assign_QSGNode_Flags,
    array_QSGNode_Flags,
    copy_QSGNode_Flags,
    release_QSGNode_Flags,
    0,
    convertTo_QSGNode_Flags,
    0,
    0,
    0,
    0,
    0
};
