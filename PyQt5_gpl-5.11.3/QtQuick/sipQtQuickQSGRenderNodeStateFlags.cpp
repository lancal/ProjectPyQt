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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgrendernode.sip"
#include <qsgrendernode.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgrendernode.sip"
#include <qsgrendernode.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"


extern "C" {static long slot_QSGRenderNode_StateFlags___hash__(PyObject *);}
static long slot_QSGRenderNode_StateFlags___hash__(PyObject *sipSelf)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QSGRenderNode::StateFlags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QSGRenderNode_StateFlags___bool__(PyObject *);}
static int slot_QSGRenderNode_StateFlags___bool__(PyObject *sipSelf)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRenderNode::StateFlags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGRenderNode_StateFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRenderNode::StateFlags::Int() != a0->operator QSGRenderNode::StateFlags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"
            sipReleaseType(const_cast< ::QSGRenderNode::StateFlags *>(a0),sipType_QSGRenderNode_StateFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, ne_slot, sipType_QSGRenderNode_StateFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGRenderNode_StateFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGRenderNode::StateFlags::Int() == a0->operator QSGRenderNode::StateFlags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"
            sipReleaseType(const_cast< ::QSGRenderNode::StateFlags *>(a0),sipType_QSGRenderNode_StateFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, eq_slot, sipType_QSGRenderNode_StateFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRenderNode_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGRenderNode::StateFlags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"

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


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRenderNode_StateFlags, &a0, &a0State, &a1))
        {
             ::QSGRenderNode::StateFlags*sipRes;

            sipRes = new  ::QSGRenderNode::StateFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QSGRenderNode_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRenderNode_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRenderNode_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QSGRenderNode::StateFlags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"

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


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRenderNode_StateFlags, &a0, &a0State, &a1))
        {
             ::QSGRenderNode::StateFlags*sipRes;

            sipRes = new  ::QSGRenderNode::StateFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QSGRenderNode_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRenderNode_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGRenderNode_StateFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QSGRenderNode::StateFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGRenderNode_StateFlags, &a0, &a0State, &a1))
        {
             ::QSGRenderNode::StateFlags*sipRes;

            sipRes = new  ::QSGRenderNode::StateFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QSGRenderNode_StateFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGRenderNode_StateFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___invert__(PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___invert__(PyObject *sipSelf)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QSGRenderNode::StateFlags*sipRes;

            sipRes = new  ::QSGRenderNode::StateFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGRenderNode_StateFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGRenderNode_StateFlags___int__(PyObject *);}
static PyObject *slot_QSGRenderNode_StateFlags___int__(PyObject *sipSelf)
{
     ::QSGRenderNode::StateFlags *sipCpp = reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGRenderNode_StateFlags));

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
extern "C" {static void release_QSGRenderNode_StateFlags(void *, int);}
static void release_QSGRenderNode_StateFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipCppV);
}


extern "C" {static void assign_QSGRenderNode_StateFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QSGRenderNode_StateFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGRenderNode::StateFlags *>(sipSrc);
}


extern "C" {static void *array_QSGRenderNode_StateFlags(SIP_SSIZE_T);}
static void *array_QSGRenderNode_StateFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGRenderNode::StateFlags[sipNrElem];
}


extern "C" {static void *copy_QSGRenderNode_StateFlags(const void *, SIP_SSIZE_T);}
static void *copy_QSGRenderNode_StateFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGRenderNode::StateFlags(reinterpret_cast<const  ::QSGRenderNode::StateFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGRenderNode_StateFlags(sipSimpleWrapper *);}
static void dealloc_QSGRenderNode_StateFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGRenderNode_StateFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGRenderNode_StateFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGRenderNode_StateFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGRenderNode::StateFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGRenderNode::StateFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QSGRenderNode::StateFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QSGRenderNode::StateFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGRenderNode_StateFlags, &a0, &a0State))
        {
            sipCpp = new  ::QSGRenderNode::StateFlags(*a0);
            sipReleaseType(const_cast< ::QSGRenderNode::StateFlags *>(a0),sipType_QSGRenderNode_StateFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGRenderNode_StateFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGRenderNode_StateFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSGRenderNode::StateFlags **sipCppPtr = reinterpret_cast< ::QSGRenderNode::StateFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGRenderNode::StateFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGRenderNode_StateFlag)) ||
            sipCanConvertToType(sipPy, sipType_QSGRenderNode_StateFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGRenderNode_StateFlag)))
{
    *sipCppPtr = new QSGRenderNode::StateFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGRenderNode::StateFlags *>(sipConvertToType(sipPy, sipType_QSGRenderNode_StateFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRenderNodeStateFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGRenderNode_StateFlags[] = {
    {(void *)slot_QSGRenderNode_StateFlags___hash__, hash_slot},
    {(void *)slot_QSGRenderNode_StateFlags___bool__, bool_slot},
    {(void *)slot_QSGRenderNode_StateFlags___ne__, ne_slot},
    {(void *)slot_QSGRenderNode_StateFlags___eq__, eq_slot},
    {(void *)slot_QSGRenderNode_StateFlags___ixor__, ixor_slot},
    {(void *)slot_QSGRenderNode_StateFlags___xor__, xor_slot},
    {(void *)slot_QSGRenderNode_StateFlags___ior__, ior_slot},
    {(void *)slot_QSGRenderNode_StateFlags___or__, or_slot},
    {(void *)slot_QSGRenderNode_StateFlags___iand__, iand_slot},
    {(void *)slot_QSGRenderNode_StateFlags___and__, and_slot},
    {(void *)slot_QSGRenderNode_StateFlags___invert__, invert_slot},
    {(void *)slot_QSGRenderNode_StateFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGRenderNode_StateFlags, "\1QSGRenderNode.StateFlags()\n"
"QSGRenderNode.StateFlags(Union[QSGRenderNode.StateFlags, QSGRenderNode.StateFlag])\n"
"QSGRenderNode.StateFlags(QSGRenderNode.StateFlags)");


static pyqt5ClassPluginDef plugin_QSGRenderNode_StateFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGRenderNode_StateFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGRenderNode__StateFlags,
        {0},
        &plugin_QSGRenderNode_StateFlags
    },
    {
        sipNameNr_StateFlags,
        {72, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGRenderNode_StateFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGRenderNode_StateFlags,
    init_type_QSGRenderNode_StateFlags,
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
    dealloc_QSGRenderNode_StateFlags,
    assign_QSGRenderNode_StateFlags,
    array_QSGRenderNode_StateFlags,
    copy_QSGRenderNode_StateFlags,
    release_QSGRenderNode_StateFlags,
    0,
    convertTo_QSGRenderNode_StateFlags,
    0,
    0,
    0,
    0,
    0
};
