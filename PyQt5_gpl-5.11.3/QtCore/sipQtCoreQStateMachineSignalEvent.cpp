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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"

#line 38 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_sender, "sender(self) -> QObject");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
             ::QObject*sipRes;

            sipRes = sipCpp->sender();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_sender, doc_QStateMachine_SignalEvent_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_signalIndex, "signalIndex(self) -> int");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->signalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_signalIndex, doc_QStateMachine_SignalEvent_signalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_arguments, "arguments(self) -> List[Any]");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QList< ::QVariant>*sipRes;

            sipRes = new QList< ::QVariant>(sipCpp->arguments());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_arguments, doc_QStateMachine_SignalEvent_arguments);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStateMachine_SignalEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_SignalEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStateMachine::SignalEvent *sipCpp = reinterpret_cast< ::QStateMachine::SignalEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_SignalEvent(void *, int);}
static void release_QStateMachine_SignalEvent(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStateMachine::SignalEvent *>(sipCppV);
}


extern "C" {static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStateMachine_SignalEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_SignalEvent[] = {{61, 255, 1}};


static PyMethodDef methods_QStateMachine_SignalEvent[] = {
    {SIP_MLNAME_CAST(sipName_arguments), meth_QStateMachine_SignalEvent_arguments, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_arguments)},
    {SIP_MLNAME_CAST(sipName_sender), meth_QStateMachine_SignalEvent_sender, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_sender)},
    {SIP_MLNAME_CAST(sipName_signalIndex), meth_QStateMachine_SignalEvent_signalIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_signalIndex)}
};


static pyqt5ClassPluginDef plugin_QStateMachine_SignalEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QStateMachine_SignalEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__SignalEvent,
        {0},
        &plugin_QStateMachine_SignalEvent
    },
    {
        sipNameNr_SignalEvent,
        {240, 255, 0},
        3, methods_QStateMachine_SignalEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStateMachine_SignalEvent,
    0,
    0,
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
    dealloc_QStateMachine_SignalEvent,
    0,
    0,
    0,
    release_QStateMachine_SignalEvent,
    cast_QStateMachine_SignalEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
