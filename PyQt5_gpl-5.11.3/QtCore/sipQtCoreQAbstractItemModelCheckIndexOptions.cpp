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

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"


extern "C" {static long slot_QAbstractItemModel_CheckIndexOptions___hash__(PyObject *);}
static long slot_QAbstractItemModel_CheckIndexOptions___hash__(PyObject *sipSelf)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QAbstractItemModel::CheckIndexOptions::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QAbstractItemModel_CheckIndexOptions___bool__(PyObject *);}
static int slot_QAbstractItemModel_CheckIndexOptions___bool__(PyObject *sipSelf)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractItemModel::CheckIndexOptions::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractItemModel::CheckIndexOptions::Int() != a0->operator QAbstractItemModel::CheckIndexOptions::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"
            sipReleaseType(const_cast< ::QAbstractItemModel::CheckIndexOptions *>(a0),sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QAbstractItemModel_CheckIndexOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractItemModel::CheckIndexOptions::Int() == a0->operator QAbstractItemModel::CheckIndexOptions::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"
            sipReleaseType(const_cast< ::QAbstractItemModel::CheckIndexOptions *>(a0),sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QAbstractItemModel_CheckIndexOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemModel_CheckIndexOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractItemModel::CheckIndexOptions(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"

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


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State, &a1))
        {
             ::QAbstractItemModel::CheckIndexOptions*sipRes;

            sipRes = new  ::QAbstractItemModel::CheckIndexOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemModel_CheckIndexOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemModel_CheckIndexOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractItemModel::CheckIndexOptions(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"

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


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State, &a1))
        {
             ::QAbstractItemModel::CheckIndexOptions*sipRes;

            sipRes = new  ::QAbstractItemModel::CheckIndexOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemModel_CheckIndexOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemModel_CheckIndexOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QAbstractItemModel::CheckIndexOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State, &a1))
        {
             ::QAbstractItemModel::CheckIndexOptions*sipRes;

            sipRes = new  ::QAbstractItemModel::CheckIndexOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemModel_CheckIndexOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___invert__(PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___invert__(PyObject *sipSelf)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::QAbstractItemModel::CheckIndexOptions*sipRes;

            sipRes = new  ::QAbstractItemModel::CheckIndexOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemModel_CheckIndexOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractItemModel_CheckIndexOptions___int__(PyObject *);}
static PyObject *slot_QAbstractItemModel_CheckIndexOptions___int__(PyObject *sipSelf)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemModel_CheckIndexOptions));

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
extern "C" {static void release_QAbstractItemModel_CheckIndexOptions(void *, int);}
static void release_QAbstractItemModel_CheckIndexOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipCppV);
}


extern "C" {static void assign_QAbstractItemModel_CheckIndexOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QAbstractItemModel_CheckIndexOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions *>(sipSrc);
}


extern "C" {static void *array_QAbstractItemModel_CheckIndexOptions(SIP_SSIZE_T);}
static void *array_QAbstractItemModel_CheckIndexOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QAbstractItemModel::CheckIndexOptions[sipNrElem];
}


extern "C" {static void *copy_QAbstractItemModel_CheckIndexOptions(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractItemModel_CheckIndexOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QAbstractItemModel::CheckIndexOptions(reinterpret_cast<const  ::QAbstractItemModel::CheckIndexOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractItemModel_CheckIndexOptions(sipSimpleWrapper *);}
static void dealloc_QAbstractItemModel_CheckIndexOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractItemModel_CheckIndexOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAbstractItemModel_CheckIndexOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractItemModel_CheckIndexOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAbstractItemModel::CheckIndexOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QAbstractItemModel::CheckIndexOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QAbstractItemModel::CheckIndexOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QAbstractItemModel::CheckIndexOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractItemModel_CheckIndexOptions, &a0, &a0State))
        {
            sipCpp = new  ::QAbstractItemModel::CheckIndexOptions(*a0);
            sipReleaseType(const_cast< ::QAbstractItemModel::CheckIndexOptions *>(a0),sipType_QAbstractItemModel_CheckIndexOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractItemModel_CheckIndexOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractItemModel_CheckIndexOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QAbstractItemModel::CheckIndexOptions **sipCppPtr = reinterpret_cast< ::QAbstractItemModel::CheckIndexOptions **>(sipCppPtrV);

#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractItemModel::CheckIndexOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractItemModel_CheckIndexOption)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractItemModel_CheckIndexOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractItemModel_CheckIndexOption)))
{
    *sipCppPtr = new QAbstractItemModel::CheckIndexOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractItemModel::CheckIndexOptions *>(sipConvertToType(sipPy, sipType_QAbstractItemModel_CheckIndexOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQAbstractItemModelCheckIndexOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractItemModel_CheckIndexOptions[] = {
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___hash__, hash_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___bool__, bool_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___ne__, ne_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___eq__, eq_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___ixor__, ixor_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___xor__, xor_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___ior__, ior_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___or__, or_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___iand__, iand_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___and__, and_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___invert__, invert_slot},
    {(void *)slot_QAbstractItemModel_CheckIndexOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractItemModel_CheckIndexOptions, "\1QAbstractItemModel.CheckIndexOptions()\n"
"QAbstractItemModel.CheckIndexOptions(Union[QAbstractItemModel.CheckIndexOptions, QAbstractItemModel.CheckIndexOption])\n"
"QAbstractItemModel.CheckIndexOptions(QAbstractItemModel.CheckIndexOptions)");


static pyqt5ClassPluginDef plugin_QAbstractItemModel_CheckIndexOptions = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractItemModel_CheckIndexOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QAbstractItemModel__CheckIndexOptions,
        {0},
        &plugin_QAbstractItemModel_CheckIndexOptions
    },
    {
        sipNameNr_CheckIndexOptions,
        {6, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractItemModel_CheckIndexOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractItemModel_CheckIndexOptions,
    init_type_QAbstractItemModel_CheckIndexOptions,
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
    dealloc_QAbstractItemModel_CheckIndexOptions,
    assign_QAbstractItemModel_CheckIndexOptions,
    array_QAbstractItemModel_CheckIndexOptions,
    copy_QAbstractItemModel_CheckIndexOptions,
    release_QAbstractItemModel_CheckIndexOptions,
    0,
    convertTo_QAbstractItemModel_CheckIndexOptions,
    0,
    0,
    0,
    0,
    0
};
