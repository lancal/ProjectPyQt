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

#include "sipAPIQtGui.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"


extern "C" {static long slot_QImageIOHandler_Transformations___hash__(PyObject *);}
static long slot_QImageIOHandler_Transformations___hash__(PyObject *sipSelf)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QImageIOHandler::Transformations::Int();
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QImageIOHandler_Transformations___bool__(PyObject *);}
static int slot_QImageIOHandler_Transformations___bool__(PyObject *sipSelf)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QImageIOHandler::Transformations::Int() != 0);
#line 76 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___ne__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QImageIOHandler::Transformations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QImageIOHandler_Transformations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QImageIOHandler::Transformations::Int() != a0->operator QImageIOHandler::Transformations::Int());
#line 106 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"
            sipReleaseType(const_cast< ::QImageIOHandler::Transformations *>(a0),sipType_QImageIOHandler_Transformations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QImageIOHandler_Transformations, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___eq__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QImageIOHandler::Transformations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QImageIOHandler_Transformations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QImageIOHandler::Transformations::Int() == a0->operator QImageIOHandler::Transformations::Int());
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"
            sipReleaseType(const_cast< ::QImageIOHandler::Transformations *>(a0),sipType_QImageIOHandler_Transformations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QImageIOHandler_Transformations, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QImageIOHandler_Transformations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QImageIOHandler::Transformations(*sipCpp ^ a0);
#line 181 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"

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


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___xor__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QImageIOHandler::Transformations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QImageIOHandler_Transformations, &a0, &a0State, &a1))
        {
             ::QImageIOHandler::Transformations*sipRes;

            sipRes = new  ::QImageIOHandler::Transformations((*a0 ^ a1));
            sipReleaseType(a0,sipType_QImageIOHandler_Transformations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QImageIOHandler_Transformations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___ior__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QImageIOHandler_Transformations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QImageIOHandler::Transformations(*sipCpp | a0);
#line 253 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"

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


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___or__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QImageIOHandler::Transformations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QImageIOHandler_Transformations, &a0, &a0State, &a1))
        {
             ::QImageIOHandler::Transformations*sipRes;

            sipRes = new  ::QImageIOHandler::Transformations((*a0 | a1));
            sipReleaseType(a0,sipType_QImageIOHandler_Transformations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QImageIOHandler_Transformations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___iand__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QImageIOHandler_Transformations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QImageIOHandler::Transformations::operator&=(a0);

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


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___and__(PyObject *,PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QImageIOHandler::Transformations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QImageIOHandler_Transformations, &a0, &a0State, &a1))
        {
             ::QImageIOHandler::Transformations*sipRes;

            sipRes = new  ::QImageIOHandler::Transformations((*a0 & a1));
            sipReleaseType(a0,sipType_QImageIOHandler_Transformations,a0State);

            return sipConvertFromNewType(sipRes,sipType_QImageIOHandler_Transformations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___invert__(PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___invert__(PyObject *sipSelf)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

    if (!sipCpp)
        return 0;


    {
        {
             ::QImageIOHandler::Transformations*sipRes;

            sipRes = new  ::QImageIOHandler::Transformations(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QImageIOHandler_Transformations,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QImageIOHandler_Transformations___int__(PyObject *);}
static PyObject *slot_QImageIOHandler_Transformations___int__(PyObject *sipSelf)
{
     ::QImageIOHandler::Transformations *sipCpp = reinterpret_cast< ::QImageIOHandler::Transformations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QImageIOHandler_Transformations));

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
extern "C" {static void release_QImageIOHandler_Transformations(void *, int);}
static void release_QImageIOHandler_Transformations(void *sipCppV, int)
{
    delete reinterpret_cast< ::QImageIOHandler::Transformations *>(sipCppV);
}


extern "C" {static void assign_QImageIOHandler_Transformations(void *, SIP_SSIZE_T, void *);}
static void assign_QImageIOHandler_Transformations(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QImageIOHandler::Transformations *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QImageIOHandler::Transformations *>(sipSrc);
}


extern "C" {static void *array_QImageIOHandler_Transformations(SIP_SSIZE_T);}
static void *array_QImageIOHandler_Transformations(SIP_SSIZE_T sipNrElem)
{
    return new  ::QImageIOHandler::Transformations[sipNrElem];
}


extern "C" {static void *copy_QImageIOHandler_Transformations(const void *, SIP_SSIZE_T);}
static void *copy_QImageIOHandler_Transformations(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QImageIOHandler::Transformations(reinterpret_cast<const  ::QImageIOHandler::Transformations *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QImageIOHandler_Transformations(sipSimpleWrapper *);}
static void dealloc_QImageIOHandler_Transformations(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QImageIOHandler_Transformations(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QImageIOHandler_Transformations(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QImageIOHandler_Transformations(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QImageIOHandler::Transformations *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QImageIOHandler::Transformations();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QImageIOHandler::Transformations(a0);

            return sipCpp;
        }
    }

    {
        const  ::QImageIOHandler::Transformations* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QImageIOHandler_Transformations, &a0, &a0State))
        {
            sipCpp = new  ::QImageIOHandler::Transformations(*a0);
            sipReleaseType(const_cast< ::QImageIOHandler::Transformations *>(a0),sipType_QImageIOHandler_Transformations,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QImageIOHandler_Transformations(PyObject *, void **, int *, PyObject *);}
static int convertTo_QImageIOHandler_Transformations(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QImageIOHandler::Transformations **sipCppPtr = reinterpret_cast< ::QImageIOHandler::Transformations **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QImageIOHandler::Transformations is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QImageIOHandler_Transformation)) ||
            sipCanConvertToType(sipPy, sipType_QImageIOHandler_Transformations, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QImageIOHandler_Transformation)))
{
    *sipCppPtr = new QImageIOHandler::Transformations(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QImageIOHandler::Transformations *>(sipConvertToType(sipPy, sipType_QImageIOHandler_Transformations, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageIOHandlerTransformations.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QImageIOHandler_Transformations[] = {
    {(void *)slot_QImageIOHandler_Transformations___hash__, hash_slot},
    {(void *)slot_QImageIOHandler_Transformations___bool__, bool_slot},
    {(void *)slot_QImageIOHandler_Transformations___ne__, ne_slot},
    {(void *)slot_QImageIOHandler_Transformations___eq__, eq_slot},
    {(void *)slot_QImageIOHandler_Transformations___ixor__, ixor_slot},
    {(void *)slot_QImageIOHandler_Transformations___xor__, xor_slot},
    {(void *)slot_QImageIOHandler_Transformations___ior__, ior_slot},
    {(void *)slot_QImageIOHandler_Transformations___or__, or_slot},
    {(void *)slot_QImageIOHandler_Transformations___iand__, iand_slot},
    {(void *)slot_QImageIOHandler_Transformations___and__, and_slot},
    {(void *)slot_QImageIOHandler_Transformations___invert__, invert_slot},
    {(void *)slot_QImageIOHandler_Transformations___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QImageIOHandler_Transformations, "\1QImageIOHandler.Transformations()\n"
"QImageIOHandler.Transformations(Union[QImageIOHandler.Transformations, QImageIOHandler.Transformation])\n"
"QImageIOHandler.Transformations(QImageIOHandler.Transformations)");


static pyqt5ClassPluginDef plugin_QImageIOHandler_Transformations = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QImageIOHandler_Transformations = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QImageIOHandler__Transformations,
        {0},
        &plugin_QImageIOHandler_Transformations
    },
    {
        sipNameNr_Transformations,
        {68, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QImageIOHandler_Transformations,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QImageIOHandler_Transformations,
    init_type_QImageIOHandler_Transformations,
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
    dealloc_QImageIOHandler_Transformations,
    assign_QImageIOHandler_Transformations,
    array_QImageIOHandler_Transformations,
    copy_QImageIOHandler_Transformations,
    release_QImageIOHandler_Transformations,
    0,
    convertTo_QImageIOHandler_Transformations,
    0,
    0,
    0,
    0,
    0
};
