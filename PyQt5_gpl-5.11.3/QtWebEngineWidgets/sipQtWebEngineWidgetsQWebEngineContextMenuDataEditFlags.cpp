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

#include "sipAPIQtWebEngineWidgets.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineWidgets/qwebenginecontextmenudata.sip"
#include <qwebenginecontextmenudata.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineWidgets/qwebenginecontextmenudata.sip"
#include <qwebenginecontextmenudata.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"


extern "C" {static long slot_QWebEngineContextMenuData_EditFlags___hash__(PyObject *);}
static long slot_QWebEngineContextMenuData_EditFlags___hash__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QWebEngineContextMenuData::EditFlags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QWebEngineContextMenuData_EditFlags___bool__(PyObject *);}
static int slot_QWebEngineContextMenuData_EditFlags___bool__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::EditFlags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::EditFlags::Int() != a0->operator QWebEngineContextMenuData::EditFlags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::EditFlags *>(a0),sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, ne_slot, sipType_QWebEngineContextMenuData_EditFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::EditFlags::Int() == a0->operator QWebEngineContextMenuData::EditFlags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::EditFlags *>(a0),sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, eq_slot, sipType_QWebEngineContextMenuData_EditFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_EditFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebEngineContextMenuData::EditFlags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::EditFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::EditFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_EditFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_EditFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebEngineContextMenuData::EditFlags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::EditFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::EditFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_EditFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_EditFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QWebEngineContextMenuData::EditFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::EditFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::EditFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_EditFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___invert__(PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___invert__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QWebEngineContextMenuData::EditFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::EditFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_EditFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_EditFlags___int__(PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_EditFlags___int__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_EditFlags));

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
extern "C" {static void release_QWebEngineContextMenuData_EditFlags(void *, int);}
static void release_QWebEngineContextMenuData_EditFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipCppV);
}


extern "C" {static void assign_QWebEngineContextMenuData_EditFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QWebEngineContextMenuData_EditFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebEngineContextMenuData::EditFlags *>(sipSrc);
}


extern "C" {static void *array_QWebEngineContextMenuData_EditFlags(SIP_SSIZE_T);}
static void *array_QWebEngineContextMenuData_EditFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebEngineContextMenuData::EditFlags[sipNrElem];
}


extern "C" {static void *copy_QWebEngineContextMenuData_EditFlags(const void *, SIP_SSIZE_T);}
static void *copy_QWebEngineContextMenuData_EditFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebEngineContextMenuData::EditFlags(reinterpret_cast<const  ::QWebEngineContextMenuData::EditFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebEngineContextMenuData_EditFlags(sipSimpleWrapper *);}
static void dealloc_QWebEngineContextMenuData_EditFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebEngineContextMenuData_EditFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebEngineContextMenuData_EditFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEngineContextMenuData_EditFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebEngineContextMenuData::EditFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QWebEngineContextMenuData::EditFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QWebEngineContextMenuData::EditFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QWebEngineContextMenuData::EditFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWebEngineContextMenuData_EditFlags, &a0, &a0State))
        {
            sipCpp = new  ::QWebEngineContextMenuData::EditFlags(*a0);
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::EditFlags *>(a0),sipType_QWebEngineContextMenuData_EditFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWebEngineContextMenuData_EditFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWebEngineContextMenuData_EditFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QWebEngineContextMenuData::EditFlags **sipCppPtr = reinterpret_cast< ::QWebEngineContextMenuData::EditFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWebEngineContextMenuData::EditFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_EditFlag)) ||
            sipCanConvertToType(sipPy, sipType_QWebEngineContextMenuData_EditFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_EditFlag)))
{
    *sipCppPtr = new QWebEngineContextMenuData::EditFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWebEngineContextMenuData::EditFlags *>(sipConvertToType(sipPy, sipType_QWebEngineContextMenuData_EditFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataEditFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEngineContextMenuData_EditFlags[] = {
    {(void *)slot_QWebEngineContextMenuData_EditFlags___hash__, hash_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___bool__, bool_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___ne__, ne_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___eq__, eq_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___ixor__, ixor_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___xor__, xor_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___ior__, ior_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___or__, or_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___iand__, iand_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___and__, and_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___invert__, invert_slot},
    {(void *)slot_QWebEngineContextMenuData_EditFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWebEngineContextMenuData_EditFlags, "\1QWebEngineContextMenuData.EditFlags()\n"
"QWebEngineContextMenuData.EditFlags(Union[QWebEngineContextMenuData.EditFlags, QWebEngineContextMenuData.EditFlag])\n"
"QWebEngineContextMenuData.EditFlags(QWebEngineContextMenuData.EditFlags)");


static pyqt5ClassPluginDef plugin_QWebEngineContextMenuData_EditFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineContextMenuData_EditFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineContextMenuData__EditFlags,
        {0},
        &plugin_QWebEngineContextMenuData_EditFlags
    },
    {
        sipNameNr_EditFlags,
        {4, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEngineContextMenuData_EditFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEngineContextMenuData_EditFlags,
    init_type_QWebEngineContextMenuData_EditFlags,
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
    dealloc_QWebEngineContextMenuData_EditFlags,
    assign_QWebEngineContextMenuData_EditFlags,
    array_QWebEngineContextMenuData_EditFlags,
    copy_QWebEngineContextMenuData_EditFlags,
    release_QWebEngineContextMenuData_EditFlags,
    0,
    convertTo_QWebEngineContextMenuData_EditFlags,
    0,
    0,
    0,
    0,
    0
};
