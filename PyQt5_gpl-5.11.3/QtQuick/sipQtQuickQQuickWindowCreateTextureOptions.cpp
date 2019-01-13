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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qquickwindow.sip"
#include <qquickwindow.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qquickwindow.sip"
#include <qquickwindow.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"


extern "C" {static long slot_QQuickWindow_CreateTextureOptions___hash__(PyObject *);}
static long slot_QQuickWindow_CreateTextureOptions___hash__(PyObject *sipSelf)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QQuickWindow::CreateTextureOptions::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QQuickWindow_CreateTextureOptions___bool__(PyObject *);}
static int slot_QQuickWindow_CreateTextureOptions___bool__(PyObject *sipSelf)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QQuickWindow::CreateTextureOptions::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QQuickWindow::CreateTextureOptions::Int() != a0->operator QQuickWindow::CreateTextureOptions::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"
            sipReleaseType(const_cast< ::QQuickWindow::CreateTextureOptions *>(a0),sipType_QQuickWindow_CreateTextureOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, ne_slot, sipType_QQuickWindow_CreateTextureOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QQuickWindow::CreateTextureOptions::Int() == a0->operator QQuickWindow::CreateTextureOptions::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"
            sipReleaseType(const_cast< ::QQuickWindow::CreateTextureOptions *>(a0),sipType_QQuickWindow_CreateTextureOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, eq_slot, sipType_QQuickWindow_CreateTextureOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QQuickWindow_CreateTextureOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QQuickWindow::CreateTextureOptions(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"

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


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State, &a1))
        {
             ::QQuickWindow::CreateTextureOptions*sipRes;

            sipRes = new  ::QQuickWindow::CreateTextureOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QQuickWindow_CreateTextureOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QQuickWindow_CreateTextureOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QQuickWindow_CreateTextureOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QQuickWindow::CreateTextureOptions(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"

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


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State, &a1))
        {
             ::QQuickWindow::CreateTextureOptions*sipRes;

            sipRes = new  ::QQuickWindow::CreateTextureOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QQuickWindow_CreateTextureOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QQuickWindow_CreateTextureOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QQuickWindow_CreateTextureOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QQuickWindow::CreateTextureOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State, &a1))
        {
             ::QQuickWindow::CreateTextureOptions*sipRes;

            sipRes = new  ::QQuickWindow::CreateTextureOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QQuickWindow_CreateTextureOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QQuickWindow_CreateTextureOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___invert__(PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___invert__(PyObject *sipSelf)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::QQuickWindow::CreateTextureOptions*sipRes;

            sipRes = new  ::QQuickWindow::CreateTextureOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QQuickWindow_CreateTextureOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QQuickWindow_CreateTextureOptions___int__(PyObject *);}
static PyObject *slot_QQuickWindow_CreateTextureOptions___int__(PyObject *sipSelf)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQuickWindow_CreateTextureOptions));

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
extern "C" {static void release_QQuickWindow_CreateTextureOptions(void *, int);}
static void release_QQuickWindow_CreateTextureOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipCppV);
}


extern "C" {static void assign_QQuickWindow_CreateTextureOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QQuickWindow_CreateTextureOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QQuickWindow::CreateTextureOptions *>(sipSrc);
}


extern "C" {static void *array_QQuickWindow_CreateTextureOptions(SIP_SSIZE_T);}
static void *array_QQuickWindow_CreateTextureOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QQuickWindow::CreateTextureOptions[sipNrElem];
}


extern "C" {static void *copy_QQuickWindow_CreateTextureOptions(const void *, SIP_SSIZE_T);}
static void *copy_QQuickWindow_CreateTextureOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QQuickWindow::CreateTextureOptions(reinterpret_cast<const  ::QQuickWindow::CreateTextureOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQuickWindow_CreateTextureOptions(sipSimpleWrapper *);}
static void dealloc_QQuickWindow_CreateTextureOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QQuickWindow_CreateTextureOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QQuickWindow_CreateTextureOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickWindow_CreateTextureOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QQuickWindow::CreateTextureOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QQuickWindow::CreateTextureOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QQuickWindow::CreateTextureOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QQuickWindow::CreateTextureOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QQuickWindow_CreateTextureOptions, &a0, &a0State))
        {
            sipCpp = new  ::QQuickWindow::CreateTextureOptions(*a0);
            sipReleaseType(const_cast< ::QQuickWindow::CreateTextureOptions *>(a0),sipType_QQuickWindow_CreateTextureOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QQuickWindow_CreateTextureOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QQuickWindow_CreateTextureOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QQuickWindow::CreateTextureOptions **sipCppPtr = reinterpret_cast< ::QQuickWindow::CreateTextureOptions **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QQuickWindow::CreateTextureOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QQuickWindow_CreateTextureOption)) ||
            sipCanConvertToType(sipPy, sipType_QQuickWindow_CreateTextureOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QQuickWindow_CreateTextureOption)))
{
    *sipCppPtr = new QQuickWindow::CreateTextureOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QQuickWindow::CreateTextureOptions *>(sipConvertToType(sipPy, sipType_QQuickWindow_CreateTextureOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQQuickWindowCreateTextureOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QQuickWindow_CreateTextureOptions[] = {
    {(void *)slot_QQuickWindow_CreateTextureOptions___hash__, hash_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___bool__, bool_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___ne__, ne_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___eq__, eq_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___ixor__, ixor_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___xor__, xor_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___ior__, ior_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___or__, or_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___iand__, iand_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___and__, and_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___invert__, invert_slot},
    {(void *)slot_QQuickWindow_CreateTextureOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QQuickWindow_CreateTextureOptions, "\1QQuickWindow.CreateTextureOptions()\n"
"QQuickWindow.CreateTextureOptions(Union[QQuickWindow.CreateTextureOptions, QQuickWindow.CreateTextureOption])\n"
"QQuickWindow.CreateTextureOptions(QQuickWindow.CreateTextureOptions)");


static pyqt5ClassPluginDef plugin_QQuickWindow_CreateTextureOptions = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QQuickWindow_CreateTextureOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QQuickWindow__CreateTextureOptions,
        {0},
        &plugin_QQuickWindow_CreateTextureOptions
    },
    {
        sipNameNr_CreateTextureOptions,
        {25, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickWindow_CreateTextureOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QQuickWindow_CreateTextureOptions,
    init_type_QQuickWindow_CreateTextureOptions,
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
    dealloc_QQuickWindow_CreateTextureOptions,
    assign_QQuickWindow_CreateTextureOptions,
    array_QQuickWindow_CreateTextureOptions,
    copy_QQuickWindow_CreateTextureOptions,
    release_QQuickWindow_CreateTextureOptions,
    0,
    convertTo_QQuickWindow_CreateTextureOptions,
    0,
    0,
    0,
    0,
    0
};
