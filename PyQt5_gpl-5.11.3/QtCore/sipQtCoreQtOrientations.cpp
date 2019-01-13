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
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"


extern "C" {static long slot_Qt_Orientations___hash__(PyObject *);}
static long slot_Qt_Orientations___hash__(PyObject *sipSelf)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::Orientations::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_Orientations___bool__(PyObject *);}
static int slot_Qt_Orientations___bool__(PyObject *sipSelf)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::Orientations::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_Orientations___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::Orientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Orientations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::Orientations::Int() != a0->operator Qt::Orientations::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"
            sipReleaseType(const_cast< ::Qt::Orientations *>(a0),sipType_Qt_Orientations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_Orientations, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_Orientations___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::Orientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Orientations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::Orientations::Int() == a0->operator Qt::Orientations::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"
            sipReleaseType(const_cast< ::Qt::Orientations *>(a0),sipType_Qt_Orientations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_Orientations, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_Orientations___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Orientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::Orientations(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"

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


extern "C" {static PyObject *slot_Qt_Orientations___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::Orientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Orientations, &a0, &a0State, &a1))
        {
             ::Qt::Orientations*sipRes;

            sipRes = new  ::Qt::Orientations((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_Orientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_Orientations___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Orientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::Orientations(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"

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


extern "C" {static PyObject *slot_Qt_Orientations___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::Orientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Orientations, &a0, &a0State, &a1))
        {
             ::Qt::Orientations*sipRes;

            sipRes = new  ::Qt::Orientations((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_Orientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_Orientations___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Orientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::Orientations::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_Orientations___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Orientations___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::Orientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Orientations, &a0, &a0State, &a1))
        {
             ::Qt::Orientations*sipRes;

            sipRes = new  ::Qt::Orientations((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_Orientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_Orientations___invert__(PyObject *);}
static PyObject *slot_Qt_Orientations___invert__(PyObject *sipSelf)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::Orientations*sipRes;

            sipRes = new  ::Qt::Orientations(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_Orientations___int__(PyObject *);}
static PyObject *slot_Qt_Orientations___int__(PyObject *sipSelf)
{
     ::Qt::Orientations *sipCpp = reinterpret_cast< ::Qt::Orientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Orientations));

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
extern "C" {static void release_Qt_Orientations(void *, int);}
static void release_Qt_Orientations(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::Orientations *>(sipCppV);
}


extern "C" {static void assign_Qt_Orientations(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_Orientations(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::Orientations *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::Orientations *>(sipSrc);
}


extern "C" {static void *array_Qt_Orientations(SIP_SSIZE_T);}
static void *array_Qt_Orientations(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::Orientations[sipNrElem];
}


extern "C" {static void *copy_Qt_Orientations(const void *, SIP_SSIZE_T);}
static void *copy_Qt_Orientations(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::Orientations(reinterpret_cast<const  ::Qt::Orientations *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_Orientations(sipSimpleWrapper *);}
static void dealloc_Qt_Orientations(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_Orientations(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_Orientations(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_Orientations(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::Orientations *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::Qt::Orientations();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::Orientations(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::Orientations* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_Orientations, &a0, &a0State))
        {
            sipCpp = new  ::Qt::Orientations(*a0);
            sipReleaseType(const_cast< ::Qt::Orientations *>(a0),sipType_Qt_Orientations,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_Orientations(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_Orientations(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::Orientations **sipCppPtr = reinterpret_cast< ::Qt::Orientations **>(sipCppPtrV);

#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::Orientations is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_Orientation)) ||
            sipCanConvertToType(sipPy, sipType_Qt_Orientations, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_Orientation)))
{
    *sipCppPtr = new Qt::Orientations(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::Orientations *>(sipConvertToType(sipPy, sipType_Qt_Orientations, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQtOrientations.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_Orientations[] = {
    {(void *)slot_Qt_Orientations___hash__, hash_slot},
    {(void *)slot_Qt_Orientations___bool__, bool_slot},
    {(void *)slot_Qt_Orientations___ne__, ne_slot},
    {(void *)slot_Qt_Orientations___eq__, eq_slot},
    {(void *)slot_Qt_Orientations___ixor__, ixor_slot},
    {(void *)slot_Qt_Orientations___xor__, xor_slot},
    {(void *)slot_Qt_Orientations___ior__, ior_slot},
    {(void *)slot_Qt_Orientations___or__, or_slot},
    {(void *)slot_Qt_Orientations___iand__, iand_slot},
    {(void *)slot_Qt_Orientations___and__, and_slot},
    {(void *)slot_Qt_Orientations___invert__, invert_slot},
    {(void *)slot_Qt_Orientations___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_Orientations, "\1Qt.Orientations()\n"
"Qt.Orientations(Union[Qt.Orientations, Qt.Orientation])\n"
"Qt.Orientations(Qt.Orientations)");


static pyqt5ClassPluginDef plugin_Qt_Orientations = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_Orientations = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__Orientations,
        {0},
        &plugin_Qt_Orientations
    },
    {
        sipNameNr_Orientations,
        {330, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_Orientations,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_Orientations,
    init_type_Qt_Orientations,
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
    dealloc_Qt_Orientations,
    assign_Qt_Orientations,
    array_Qt_Orientations,
    copy_Qt_Orientations,
    release_Qt_Orientations,
    0,
    convertTo_Qt_Orientations,
    0,
    0,
    0,
    0,
    0
};
