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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"


extern "C" {static long slot_Qt_ImageConversionFlags___hash__(PyObject *);}
static long slot_Qt_ImageConversionFlags___hash__(PyObject *sipSelf)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::ImageConversionFlags::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_ImageConversionFlags___bool__(PyObject *);}
static int slot_Qt_ImageConversionFlags___bool__(PyObject *sipSelf)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() != a0->operator Qt::ImageConversionFlags::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(const_cast< ::Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_ImageConversionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() == a0->operator Qt::ImageConversionFlags::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(const_cast< ::Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_ImageConversionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ImageConversionFlags(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
             ::Qt::ImageConversionFlags*sipRes;

            sipRes = new  ::Qt::ImageConversionFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::ImageConversionFlags(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
             ::Qt::ImageConversionFlags*sipRes;

            sipRes = new  ::Qt::ImageConversionFlags((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::ImageConversionFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
             ::Qt::ImageConversionFlags*sipRes;

            sipRes = new  ::Qt::ImageConversionFlags((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___invert__(PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___invert__(PyObject *sipSelf)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::ImageConversionFlags*sipRes;

            sipRes = new  ::Qt::ImageConversionFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___int__(PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___int__(PyObject *sipSelf)
{
     ::Qt::ImageConversionFlags *sipCpp = reinterpret_cast< ::Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

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
extern "C" {static void release_Qt_ImageConversionFlags(void *, int);}
static void release_Qt_ImageConversionFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::ImageConversionFlags *>(sipCppV);
}


extern "C" {static void assign_Qt_ImageConversionFlags(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_ImageConversionFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::ImageConversionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::ImageConversionFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_ImageConversionFlags(SIP_SSIZE_T);}
static void *array_Qt_ImageConversionFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::ImageConversionFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_ImageConversionFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ImageConversionFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::ImageConversionFlags(reinterpret_cast<const  ::Qt::ImageConversionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ImageConversionFlags(sipSimpleWrapper *);}
static void dealloc_Qt_ImageConversionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_ImageConversionFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_ImageConversionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ImageConversionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::ImageConversionFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::Qt::ImageConversionFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::ImageConversionFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            sipCpp = new  ::Qt::ImageConversionFlags(*a0);
            sipReleaseType(const_cast< ::Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ImageConversionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ImageConversionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::ImageConversionFlags **sipCppPtr = reinterpret_cast< ::Qt::ImageConversionFlags **>(sipCppPtrV);

#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ImageConversionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ImageConversionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlag)))
{
    *sipCppPtr = new Qt::ImageConversionFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ImageConversionFlags *>(sipConvertToType(sipPy, sipType_Qt_ImageConversionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtImageConversionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ImageConversionFlags[] = {
    {(void *)slot_Qt_ImageConversionFlags___hash__, hash_slot},
    {(void *)slot_Qt_ImageConversionFlags___bool__, bool_slot},
    {(void *)slot_Qt_ImageConversionFlags___ne__, ne_slot},
    {(void *)slot_Qt_ImageConversionFlags___eq__, eq_slot},
    {(void *)slot_Qt_ImageConversionFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_ImageConversionFlags___xor__, xor_slot},
    {(void *)slot_Qt_ImageConversionFlags___ior__, ior_slot},
    {(void *)slot_Qt_ImageConversionFlags___or__, or_slot},
    {(void *)slot_Qt_ImageConversionFlags___iand__, iand_slot},
    {(void *)slot_Qt_ImageConversionFlags___and__, and_slot},
    {(void *)slot_Qt_ImageConversionFlags___invert__, invert_slot},
    {(void *)slot_Qt_ImageConversionFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ImageConversionFlags, "\1Qt.ImageConversionFlags()\n"
"Qt.ImageConversionFlags(Union[Qt.ImageConversionFlags, Qt.ImageConversionFlag])\n"
"Qt.ImageConversionFlags(Qt.ImageConversionFlags)");


static pyqt5ClassPluginDef plugin_Qt_ImageConversionFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_ImageConversionFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__ImageConversionFlags,
        {0},
        &plugin_Qt_ImageConversionFlags
    },
    {
        sipNameNr_ImageConversionFlags,
        {330, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ImageConversionFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ImageConversionFlags,
    init_type_Qt_ImageConversionFlags,
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
    dealloc_Qt_ImageConversionFlags,
    assign_Qt_ImageConversionFlags,
    array_Qt_ImageConversionFlags,
    copy_Qt_ImageConversionFlags,
    release_Qt_ImageConversionFlags,
    0,
    convertTo_Qt_ImageConversionFlags,
    0,
    0,
    0,
    0,
    0
};
