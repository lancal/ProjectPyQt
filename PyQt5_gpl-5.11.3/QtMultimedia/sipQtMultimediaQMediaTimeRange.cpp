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

#include "sipAPIQtMultimedia.h"

#line 47 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qmediatimerange.sip"
#include <qmediatimerange.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQMediaTimeRange.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qmediatimerange.sip"
#include <qmediatimerange.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQMediaTimeRange.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQMediaTimeRange.cpp"


PyDoc_STRVAR(doc_QMediaTimeRange_earliestTime, "earliestTime(self) -> int");

extern "C" {static PyObject *meth_QMediaTimeRange_earliestTime(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_earliestTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->earliestTime();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_earliestTime, doc_QMediaTimeRange_earliestTime);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_latestTime, "latestTime(self) -> int");

extern "C" {static PyObject *meth_QMediaTimeRange_latestTime(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_latestTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->latestTime();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_latestTime, doc_QMediaTimeRange_latestTime);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_intervals, "intervals(self) -> List[QMediaTimeInterval]");

extern "C" {static PyObject *meth_QMediaTimeRange_intervals(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_intervals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
            QList< ::QMediaTimeInterval>*sipRes;

            sipRes = new QList< ::QMediaTimeInterval>(sipCpp->intervals());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QMediaTimeInterval,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_intervals, doc_QMediaTimeRange_intervals);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QMediaTimeRange_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_isEmpty, doc_QMediaTimeRange_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_isContinuous, "isContinuous(self) -> bool");

extern "C" {static PyObject *meth_QMediaTimeRange_isContinuous(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_isContinuous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isContinuous();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_isContinuous, doc_QMediaTimeRange_isContinuous);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_contains, "contains(self, int) -> bool");

extern "C" {static PyObject *meth_QMediaTimeRange_contains(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
        const  ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QMediaTimeRange, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_contains, doc_QMediaTimeRange_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_addInterval, "addInterval(self, int, int)\n"
"addInterval(self, QMediaTimeInterval)");

extern "C" {static PyObject *meth_QMediaTimeRange_addInterval(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_addInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::qint64 a1;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bnn", &sipSelf, sipType_QMediaTimeRange, &sipCpp, &a0, &a1))
        {
            sipCpp->addInterval(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QMediaTimeInterval* a0;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMediaTimeRange, &sipCpp, sipType_QMediaTimeInterval, &a0))
        {
            sipCpp->addInterval(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_addInterval, doc_QMediaTimeRange_addInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_addTimeRange, "addTimeRange(self, QMediaTimeRange)");

extern "C" {static PyObject *meth_QMediaTimeRange_addTimeRange(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_addTimeRange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMediaTimeRange, &sipCpp, sipType_QMediaTimeRange, &a0))
        {
            sipCpp->addTimeRange(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_addTimeRange, doc_QMediaTimeRange_addTimeRange);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_removeInterval, "removeInterval(self, int, int)\n"
"removeInterval(self, QMediaTimeInterval)");

extern "C" {static PyObject *meth_QMediaTimeRange_removeInterval(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_removeInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::qint64 a1;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bnn", &sipSelf, sipType_QMediaTimeRange, &sipCpp, &a0, &a1))
        {
            sipCpp->removeInterval(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QMediaTimeInterval* a0;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMediaTimeRange, &sipCpp, sipType_QMediaTimeInterval, &a0))
        {
            sipCpp->removeInterval(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_removeInterval, doc_QMediaTimeRange_removeInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_removeTimeRange, "removeTimeRange(self, QMediaTimeRange)");

extern "C" {static PyObject *meth_QMediaTimeRange_removeTimeRange(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_removeTimeRange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMediaTimeRange, &sipCpp, sipType_QMediaTimeRange, &a0))
        {
            sipCpp->removeTimeRange(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_removeTimeRange, doc_QMediaTimeRange_removeTimeRange);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaTimeRange_clear, "clear(self)");

extern "C" {static PyObject *meth_QMediaTimeRange_clear(PyObject *, PyObject *);}
static PyObject *meth_QMediaTimeRange_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMediaTimeRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaTimeRange, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaTimeRange, sipName_clear, doc_QMediaTimeRange_clear);

    return NULL;
}


extern "C" {static PyObject *slot_QMediaTimeRange___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMediaTimeRange *sipCpp = reinterpret_cast< ::QMediaTimeRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaTimeRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeRange, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, eq_slot, sipType_QMediaTimeRange, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMediaTimeRange___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMediaTimeRange *sipCpp = reinterpret_cast< ::QMediaTimeRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaTimeRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeRange, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, ne_slot, sipType_QMediaTimeRange, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMediaTimeRange___add__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;
        const  ::QMediaTimeRange* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMediaTimeRange, &a0, sipType_QMediaTimeRange, &a1))
        {
             ::QMediaTimeRange*sipRes;

            sipRes = new  ::QMediaTimeRange((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMediaTimeRange,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMediaTimeRange___sub__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;
        const  ::QMediaTimeRange* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMediaTimeRange, &a0, sipType_QMediaTimeRange, &a1))
        {
             ::QMediaTimeRange*sipRes;

            sipRes = new  ::QMediaTimeRange((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QMediaTimeRange,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMediaTimeRange___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMediaTimeRange)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMediaTimeRange *sipCpp = reinterpret_cast< ::QMediaTimeRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaTimeRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeRange, &a0))
        {
            sipCpp-> ::QMediaTimeRange::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::QMediaTimeInterval* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeInterval, &a0))
        {
            sipCpp-> ::QMediaTimeRange::operator-=(*a0);

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


extern "C" {static PyObject *slot_QMediaTimeRange___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMediaTimeRange___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMediaTimeRange)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMediaTimeRange *sipCpp = reinterpret_cast< ::QMediaTimeRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaTimeRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMediaTimeRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeRange, &a0))
        {
            sipCpp-> ::QMediaTimeRange::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::QMediaTimeInterval* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMediaTimeInterval, &a0))
        {
            sipCpp-> ::QMediaTimeRange::operator+=(*a0);

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


/* Call the instance's destructor. */
extern "C" {static void release_QMediaTimeRange(void *, int);}
static void release_QMediaTimeRange(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMediaTimeRange *>(sipCppV);
}


extern "C" {static void assign_QMediaTimeRange(void *, SIP_SSIZE_T, void *);}
static void assign_QMediaTimeRange(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMediaTimeRange *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMediaTimeRange *>(sipSrc);
}


extern "C" {static void *array_QMediaTimeRange(SIP_SSIZE_T);}
static void *array_QMediaTimeRange(SIP_SSIZE_T sipNrElem)
{
    return new  ::QMediaTimeRange[sipNrElem];
}


extern "C" {static void *copy_QMediaTimeRange(const void *, SIP_SSIZE_T);}
static void *copy_QMediaTimeRange(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QMediaTimeRange(reinterpret_cast<const  ::QMediaTimeRange *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMediaTimeRange(sipSimpleWrapper *);}
static void dealloc_QMediaTimeRange(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMediaTimeRange(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMediaTimeRange(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMediaTimeRange(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMediaTimeRange *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QMediaTimeRange();

            return sipCpp;
        }
    }

    {
         ::qint64 a0;
         ::qint64 a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "nn", &a0, &a1))
        {
            sipCpp = new  ::QMediaTimeRange(a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QMediaTimeInterval* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMediaTimeInterval, &a0))
        {
            sipCpp = new  ::QMediaTimeRange(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QMediaTimeRange* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMediaTimeRange, &a0))
        {
            sipCpp = new  ::QMediaTimeRange(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMediaTimeRange[] = {
    {(void *)slot_QMediaTimeRange___eq__, eq_slot},
    {(void *)slot_QMediaTimeRange___ne__, ne_slot},
    {(void *)slot_QMediaTimeRange___add__, add_slot},
    {(void *)slot_QMediaTimeRange___sub__, sub_slot},
    {(void *)slot_QMediaTimeRange___isub__, isub_slot},
    {(void *)slot_QMediaTimeRange___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMediaTimeRange[] = {
    {SIP_MLNAME_CAST(sipName_addInterval), meth_QMediaTimeRange_addInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_addInterval)},
    {SIP_MLNAME_CAST(sipName_addTimeRange), meth_QMediaTimeRange_addTimeRange, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_addTimeRange)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QMediaTimeRange_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QMediaTimeRange_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_contains)},
    {SIP_MLNAME_CAST(sipName_earliestTime), meth_QMediaTimeRange_earliestTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_earliestTime)},
    {SIP_MLNAME_CAST(sipName_intervals), meth_QMediaTimeRange_intervals, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_intervals)},
    {SIP_MLNAME_CAST(sipName_isContinuous), meth_QMediaTimeRange_isContinuous, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_isContinuous)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QMediaTimeRange_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_isEmpty)},
    {SIP_MLNAME_CAST(sipName_latestTime), meth_QMediaTimeRange_latestTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_latestTime)},
    {SIP_MLNAME_CAST(sipName_removeInterval), meth_QMediaTimeRange_removeInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_removeInterval)},
    {SIP_MLNAME_CAST(sipName_removeTimeRange), meth_QMediaTimeRange_removeTimeRange, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaTimeRange_removeTimeRange)}
};

PyDoc_STRVAR(doc_QMediaTimeRange, "\1QMediaTimeRange()\n"
"QMediaTimeRange(int, int)\n"
"QMediaTimeRange(QMediaTimeInterval)\n"
"QMediaTimeRange(QMediaTimeRange)");


static pyqt5ClassPluginDef plugin_QMediaTimeRange = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtMultimedia_QMediaTimeRange = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMediaTimeRange,
        {0},
        &plugin_QMediaTimeRange
    },
    {
        sipNameNr_QMediaTimeRange,
        {0, 0, 1},
        11, methods_QMediaTimeRange,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMediaTimeRange,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMediaTimeRange,
    init_type_QMediaTimeRange,
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
    dealloc_QMediaTimeRange,
    assign_QMediaTimeRange,
    array_QMediaTimeRange,
    copy_QMediaTimeRange,
    release_QMediaTimeRange,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
