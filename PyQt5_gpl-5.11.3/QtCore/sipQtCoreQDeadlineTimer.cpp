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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qdeadlinetimer.sip"
#include <qdeadlinetimer.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQDeadlineTimer.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQDeadlineTimer.cpp"


PyDoc_STRVAR(doc_QDeadlineTimer_swap, "swap(self, QDeadlineTimer)");

extern "C" {static PyObject *meth_QDeadlineTimer_swap(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;
         ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDeadlineTimer, &sipCpp, sipType_QDeadlineTimer, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_swap, doc_QDeadlineTimer_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_isForever, "isForever(self) -> bool");

extern "C" {static PyObject *meth_QDeadlineTimer_isForever(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_isForever(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isForever();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_isForever, doc_QDeadlineTimer_isForever);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_hasExpired, "hasExpired(self) -> bool");

extern "C" {static PyObject *meth_QDeadlineTimer_hasExpired(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_hasExpired(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasExpired();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_hasExpired, doc_QDeadlineTimer_hasExpired);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_timerType, "timerType(self) -> Qt.TimerType");

extern "C" {static PyObject *meth_QDeadlineTimer_timerType(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_timerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
             ::Qt::TimerType sipRes;

            sipRes = sipCpp->timerType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_TimerType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_timerType, doc_QDeadlineTimer_timerType);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_setTimerType, "setTimerType(self, Qt.TimerType)");

extern "C" {static PyObject *meth_QDeadlineTimer_setTimerType(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_setTimerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::TimerType a0;
         ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDeadlineTimer, &sipCpp, sipType_Qt_TimerType, &a0))
        {
            sipCpp->setTimerType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_setTimerType, doc_QDeadlineTimer_setTimerType);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_remainingTime, "remainingTime(self) -> int");

extern "C" {static PyObject *meth_QDeadlineTimer_remainingTime(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_remainingTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->remainingTime();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_remainingTime, doc_QDeadlineTimer_remainingTime);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_remainingTimeNSecs, "remainingTimeNSecs(self) -> int");

extern "C" {static PyObject *meth_QDeadlineTimer_remainingTimeNSecs(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_remainingTimeNSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->remainingTimeNSecs();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_remainingTimeNSecs, doc_QDeadlineTimer_remainingTimeNSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_setRemainingTime, "setRemainingTime(self, int, type: Qt.TimerType = Qt.CoarseTimer)");

extern "C" {static PyObject *meth_QDeadlineTimer_setRemainingTime(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_setRemainingTime(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::Qt::TimerType a1 = Qt::CoarseTimer;
         ::QDeadlineTimer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bn|E", &sipSelf, sipType_QDeadlineTimer, &sipCpp, &a0, sipType_Qt_TimerType, &a1))
        {
            sipCpp->setRemainingTime(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_setRemainingTime, doc_QDeadlineTimer_setRemainingTime);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_setPreciseRemainingTime, "setPreciseRemainingTime(self, int, nsecs: int = 0, type: Qt.TimerType = Qt.CoarseTimer)");

extern "C" {static PyObject *meth_QDeadlineTimer_setPreciseRemainingTime(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_setPreciseRemainingTime(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::qint64 a1 = 0;
         ::Qt::TimerType a2 = Qt::CoarseTimer;
         ::QDeadlineTimer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_nsecs,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bn|nE", &sipSelf, sipType_QDeadlineTimer, &sipCpp, &a0, &a1, sipType_Qt_TimerType, &a2))
        {
            sipCpp->setPreciseRemainingTime(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_setPreciseRemainingTime, doc_QDeadlineTimer_setPreciseRemainingTime);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_deadline, "deadline(self) -> int");

extern "C" {static PyObject *meth_QDeadlineTimer_deadline(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_deadline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->deadline();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_deadline, doc_QDeadlineTimer_deadline);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_deadlineNSecs, "deadlineNSecs(self) -> int");

extern "C" {static PyObject *meth_QDeadlineTimer_deadlineNSecs(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_deadlineNSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeadlineTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeadlineTimer, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = sipCpp->deadlineNSecs();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_deadlineNSecs, doc_QDeadlineTimer_deadlineNSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_setDeadline, "setDeadline(self, int, type: Qt.TimerType = Qt.CoarseTimer)");

extern "C" {static PyObject *meth_QDeadlineTimer_setDeadline(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_setDeadline(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::Qt::TimerType a1 = Qt::CoarseTimer;
         ::QDeadlineTimer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bn|E", &sipSelf, sipType_QDeadlineTimer, &sipCpp, &a0, sipType_Qt_TimerType, &a1))
        {
            sipCpp->setDeadline(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_setDeadline, doc_QDeadlineTimer_setDeadline);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_setPreciseDeadline, "setPreciseDeadline(self, int, nsecs: int = 0, type: Qt.TimerType = Qt.CoarseTimer)");

extern "C" {static PyObject *meth_QDeadlineTimer_setPreciseDeadline(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_setPreciseDeadline(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::qint64 a1 = 0;
         ::Qt::TimerType a2 = Qt::CoarseTimer;
         ::QDeadlineTimer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_nsecs,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bn|nE", &sipSelf, sipType_QDeadlineTimer, &sipCpp, &a0, &a1, sipType_Qt_TimerType, &a2))
        {
            sipCpp->setPreciseDeadline(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_setPreciseDeadline, doc_QDeadlineTimer_setPreciseDeadline);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_addNSecs, "addNSecs(QDeadlineTimer, int) -> QDeadlineTimer");

extern "C" {static PyObject *meth_QDeadlineTimer_addNSecs(PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_addNSecs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;
         ::qint64 a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9n", sipType_QDeadlineTimer, &a0, &a1))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer( ::QDeadlineTimer::addNSecs(*a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_addNSecs, doc_QDeadlineTimer_addNSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QDeadlineTimer_current, "current(type: Qt.TimerType = Qt.CoarseTimer) -> QDeadlineTimer");

extern "C" {static PyObject *meth_QDeadlineTimer_current(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeadlineTimer_current(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::TimerType a0 = Qt::CoarseTimer;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|E", sipType_Qt_TimerType, &a0))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer( ::QDeadlineTimer::current(a0));

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeadlineTimer, sipName_current, doc_QDeadlineTimer_current);

    return NULL;
}


extern "C" {static PyObject *slot_QDeadlineTimer___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___lt__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___le__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator<=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, le_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___gt__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator>((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, gt_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___ge__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDeadlineTimer, &a0))
        {
            bool sipRes;

            sipRes = operator>=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QDeadlineTimer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDeadlineTimer___add__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;
         ::qint64 a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9n", sipType_QDeadlineTimer, &a0, &a1))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    {
         ::qint64 a0;
         ::QDeadlineTimer* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "nJ9", &a0, sipType_QDeadlineTimer, &a1))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer((a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDeadlineTimer___sub__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDeadlineTimer* a0;
         ::qint64 a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9n", sipType_QDeadlineTimer, &a0, &a1))
        {
             ::QDeadlineTimer*sipRes;

            sipRes = new  ::QDeadlineTimer((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_QDeadlineTimer,NULL);
        }
    }

    {
         ::QDeadlineTimer* a0;
         ::QDeadlineTimer* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QDeadlineTimer, &a0, sipType_QDeadlineTimer, &a1))
        {
             ::qint64 sipRes;

            sipRes = (*a0 - *a1);

            return PyLong_FromLongLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDeadlineTimer___isub__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDeadlineTimer)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1n", &a0))
        {
            sipCpp-> ::QDeadlineTimer::operator-=(a0);

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


extern "C" {static PyObject *slot_QDeadlineTimer___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QDeadlineTimer___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDeadlineTimer)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDeadlineTimer *sipCpp = reinterpret_cast< ::QDeadlineTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeadlineTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1n", &a0))
        {
            sipCpp-> ::QDeadlineTimer::operator+=(a0);

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
extern "C" {static void release_QDeadlineTimer(void *, int);}
static void release_QDeadlineTimer(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDeadlineTimer *>(sipCppV);
}


extern "C" {static void assign_QDeadlineTimer(void *, SIP_SSIZE_T, void *);}
static void assign_QDeadlineTimer(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDeadlineTimer *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDeadlineTimer *>(sipSrc);
}


extern "C" {static void *array_QDeadlineTimer(SIP_SSIZE_T);}
static void *array_QDeadlineTimer(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDeadlineTimer[sipNrElem];
}


extern "C" {static void *copy_QDeadlineTimer(const void *, SIP_SSIZE_T);}
static void *copy_QDeadlineTimer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDeadlineTimer(reinterpret_cast<const  ::QDeadlineTimer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDeadlineTimer(sipSimpleWrapper *);}
static void dealloc_QDeadlineTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDeadlineTimer(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDeadlineTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeadlineTimer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDeadlineTimer *sipCpp = 0;

    {
         ::Qt::TimerType a0 = Qt::CoarseTimer;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_Qt_TimerType, &a0))
        {
            sipCpp = new  ::QDeadlineTimer(a0);

            return sipCpp;
        }
    }

    {
         ::QDeadlineTimer::ForeverConstant a0;
         ::Qt::TimerType a1 = Qt::CoarseTimer;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|E", sipType_QDeadlineTimer_ForeverConstant, &a0, sipType_Qt_TimerType, &a1))
        {
            sipCpp = new  ::QDeadlineTimer(a0,a1);

            return sipCpp;
        }
    }

    {
         ::qint64 a0;
         ::Qt::TimerType a1 = Qt::CoarseTimer;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "n|E", &a0, sipType_Qt_TimerType, &a1))
        {
            sipCpp = new  ::QDeadlineTimer(a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QDeadlineTimer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeadlineTimer, &a0))
        {
            sipCpp = new  ::QDeadlineTimer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDeadlineTimer[] = {
    {(void *)slot_QDeadlineTimer___eq__, eq_slot},
    {(void *)slot_QDeadlineTimer___ne__, ne_slot},
    {(void *)slot_QDeadlineTimer___lt__, lt_slot},
    {(void *)slot_QDeadlineTimer___le__, le_slot},
    {(void *)slot_QDeadlineTimer___gt__, gt_slot},
    {(void *)slot_QDeadlineTimer___ge__, ge_slot},
    {(void *)slot_QDeadlineTimer___add__, add_slot},
    {(void *)slot_QDeadlineTimer___sub__, sub_slot},
    {(void *)slot_QDeadlineTimer___isub__, isub_slot},
    {(void *)slot_QDeadlineTimer___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDeadlineTimer[] = {
    {SIP_MLNAME_CAST(sipName_addNSecs), meth_QDeadlineTimer_addNSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_addNSecs)},
    {SIP_MLNAME_CAST(sipName_current), (PyCFunction)meth_QDeadlineTimer_current, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDeadlineTimer_current)},
    {SIP_MLNAME_CAST(sipName_deadline), meth_QDeadlineTimer_deadline, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_deadline)},
    {SIP_MLNAME_CAST(sipName_deadlineNSecs), meth_QDeadlineTimer_deadlineNSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_deadlineNSecs)},
    {SIP_MLNAME_CAST(sipName_hasExpired), meth_QDeadlineTimer_hasExpired, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_hasExpired)},
    {SIP_MLNAME_CAST(sipName_isForever), meth_QDeadlineTimer_isForever, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_isForever)},
    {SIP_MLNAME_CAST(sipName_remainingTime), meth_QDeadlineTimer_remainingTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_remainingTime)},
    {SIP_MLNAME_CAST(sipName_remainingTimeNSecs), meth_QDeadlineTimer_remainingTimeNSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_remainingTimeNSecs)},
    {SIP_MLNAME_CAST(sipName_setDeadline), (PyCFunction)meth_QDeadlineTimer_setDeadline, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDeadlineTimer_setDeadline)},
    {SIP_MLNAME_CAST(sipName_setPreciseDeadline), (PyCFunction)meth_QDeadlineTimer_setPreciseDeadline, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDeadlineTimer_setPreciseDeadline)},
    {SIP_MLNAME_CAST(sipName_setPreciseRemainingTime), (PyCFunction)meth_QDeadlineTimer_setPreciseRemainingTime, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDeadlineTimer_setPreciseRemainingTime)},
    {SIP_MLNAME_CAST(sipName_setRemainingTime), (PyCFunction)meth_QDeadlineTimer_setRemainingTime, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDeadlineTimer_setRemainingTime)},
    {SIP_MLNAME_CAST(sipName_setTimerType), meth_QDeadlineTimer_setTimerType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_setTimerType)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDeadlineTimer_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_swap)},
    {SIP_MLNAME_CAST(sipName_timerType), meth_QDeadlineTimer_timerType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeadlineTimer_timerType)}
};

static sipEnumMemberDef enummembers_QDeadlineTimer[] = {
    {sipName_Forever, static_cast<int>( ::QDeadlineTimer::Forever), 47},
};

PyDoc_STRVAR(doc_QDeadlineTimer, "\1QDeadlineTimer(type: Qt.TimerType = Qt.CoarseTimer)\n"
"QDeadlineTimer(QDeadlineTimer.ForeverConstant, type: Qt.TimerType = Qt.CoarseTimer)\n"
"QDeadlineTimer(int, type: Qt.TimerType = Qt.CoarseTimer)\n"
"QDeadlineTimer(QDeadlineTimer)");


static pyqt5ClassPluginDef plugin_QDeadlineTimer = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QDeadlineTimer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDeadlineTimer,
        {0},
        &plugin_QDeadlineTimer
    },
    {
        sipNameNr_QDeadlineTimer,
        {0, 0, 1},
        15, methods_QDeadlineTimer,
        1, enummembers_QDeadlineTimer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeadlineTimer,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDeadlineTimer,
    init_type_QDeadlineTimer,
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
    dealloc_QDeadlineTimer,
    assign_QDeadlineTimer,
    array_QDeadlineTimer,
    copy_QDeadlineTimer,
    release_QDeadlineTimer,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
