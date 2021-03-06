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
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineWidgets/qwebenginecontextmenudata.sip"
#include <qwebenginecontextmenudata.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"


extern "C" {static long slot_QWebEngineContextMenuData_MediaFlags___hash__(PyObject *);}
static long slot_QWebEngineContextMenuData_MediaFlags___hash__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QWebEngineContextMenuData::MediaFlags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QWebEngineContextMenuData_MediaFlags___bool__(PyObject *);}
static int slot_QWebEngineContextMenuData_MediaFlags___bool__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::MediaFlags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::MediaFlags::Int() != a0->operator QWebEngineContextMenuData::MediaFlags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::MediaFlags *>(a0),sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, ne_slot, sipType_QWebEngineContextMenuData_MediaFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEngineContextMenuData::MediaFlags::Int() == a0->operator QWebEngineContextMenuData::MediaFlags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::MediaFlags *>(a0),sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, eq_slot, sipType_QWebEngineContextMenuData_MediaFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_MediaFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebEngineContextMenuData::MediaFlags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::MediaFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::MediaFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_MediaFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_MediaFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebEngineContextMenuData::MediaFlags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::MediaFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::MediaFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_MediaFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_MediaFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QWebEngineContextMenuData::MediaFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State, &a1))
        {
             ::QWebEngineContextMenuData::MediaFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::MediaFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_MediaFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___invert__(PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___invert__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QWebEngineContextMenuData::MediaFlags*sipRes;

            sipRes = new  ::QWebEngineContextMenuData::MediaFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QWebEngineContextMenuData_MediaFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEngineContextMenuData_MediaFlags___int__(PyObject *);}
static PyObject *slot_QWebEngineContextMenuData_MediaFlags___int__(PyObject *sipSelf)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineContextMenuData_MediaFlags));

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
extern "C" {static void release_QWebEngineContextMenuData_MediaFlags(void *, int);}
static void release_QWebEngineContextMenuData_MediaFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipCppV);
}


extern "C" {static void assign_QWebEngineContextMenuData_MediaFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QWebEngineContextMenuData_MediaFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags *>(sipSrc);
}


extern "C" {static void *array_QWebEngineContextMenuData_MediaFlags(SIP_SSIZE_T);}
static void *array_QWebEngineContextMenuData_MediaFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebEngineContextMenuData::MediaFlags[sipNrElem];
}


extern "C" {static void *copy_QWebEngineContextMenuData_MediaFlags(const void *, SIP_SSIZE_T);}
static void *copy_QWebEngineContextMenuData_MediaFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebEngineContextMenuData::MediaFlags(reinterpret_cast<const  ::QWebEngineContextMenuData::MediaFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebEngineContextMenuData_MediaFlags(sipSimpleWrapper *);}
static void dealloc_QWebEngineContextMenuData_MediaFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebEngineContextMenuData_MediaFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebEngineContextMenuData_MediaFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEngineContextMenuData_MediaFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebEngineContextMenuData::MediaFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QWebEngineContextMenuData::MediaFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QWebEngineContextMenuData::MediaFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QWebEngineContextMenuData::MediaFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWebEngineContextMenuData_MediaFlags, &a0, &a0State))
        {
            sipCpp = new  ::QWebEngineContextMenuData::MediaFlags(*a0);
            sipReleaseType(const_cast< ::QWebEngineContextMenuData::MediaFlags *>(a0),sipType_QWebEngineContextMenuData_MediaFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWebEngineContextMenuData_MediaFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWebEngineContextMenuData_MediaFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QWebEngineContextMenuData::MediaFlags **sipCppPtr = reinterpret_cast< ::QWebEngineContextMenuData::MediaFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWebEngineContextMenuData::MediaFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_MediaFlag)) ||
            sipCanConvertToType(sipPy, sipType_QWebEngineContextMenuData_MediaFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEngineContextMenuData_MediaFlag)))
{
    *sipCppPtr = new QWebEngineContextMenuData::MediaFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWebEngineContextMenuData::MediaFlags *>(sipConvertToType(sipPy, sipType_QWebEngineContextMenuData_MediaFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineContextMenuDataMediaFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEngineContextMenuData_MediaFlags[] = {
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___hash__, hash_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___bool__, bool_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___ne__, ne_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___eq__, eq_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___ixor__, ixor_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___xor__, xor_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___ior__, ior_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___or__, or_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___iand__, iand_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___and__, and_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___invert__, invert_slot},
    {(void *)slot_QWebEngineContextMenuData_MediaFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWebEngineContextMenuData_MediaFlags, "\1QWebEngineContextMenuData.MediaFlags()\n"
"QWebEngineContextMenuData.MediaFlags(Union[QWebEngineContextMenuData.MediaFlags, QWebEngineContextMenuData.MediaFlag])\n"
"QWebEngineContextMenuData.MediaFlags(QWebEngineContextMenuData.MediaFlags)");


static pyqt5ClassPluginDef plugin_QWebEngineContextMenuData_MediaFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineContextMenuData_MediaFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineContextMenuData__MediaFlags,
        {0},
        &plugin_QWebEngineContextMenuData_MediaFlags
    },
    {
        sipNameNr_MediaFlags,
        {4, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEngineContextMenuData_MediaFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEngineContextMenuData_MediaFlags,
    init_type_QWebEngineContextMenuData_MediaFlags,
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
    dealloc_QWebEngineContextMenuData_MediaFlags,
    assign_QWebEngineContextMenuData_MediaFlags,
    array_QWebEngineContextMenuData_MediaFlags,
    copy_QWebEngineContextMenuData_MediaFlags,
    release_QWebEngineContextMenuData_MediaFlags,
    0,
    convertTo_QWebEngineContextMenuData_MediaFlags,
    0,
    0,
    0,
    0,
    0
};
