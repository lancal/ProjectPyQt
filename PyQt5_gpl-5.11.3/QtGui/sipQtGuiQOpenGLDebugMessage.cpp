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

#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLDebugMessage.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLDebugMessage.cpp"


PyDoc_STRVAR(doc_QOpenGLDebugMessage_swap, "swap(self, QOpenGLDebugMessage)");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_swap(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLDebugMessage* a0;
         ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp, sipType_QOpenGLDebugMessage, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_swap, doc_QOpenGLDebugMessage_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_source, "source(self) -> QOpenGLDebugMessage.Source");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_source(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp))
        {
             ::QOpenGLDebugMessage::Source sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QOpenGLDebugMessage_Source);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_source, doc_QOpenGLDebugMessage_source);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_type, "type(self) -> QOpenGLDebugMessage.Type");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_type(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp))
        {
             ::QOpenGLDebugMessage::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QOpenGLDebugMessage_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_type, doc_QOpenGLDebugMessage_type);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_severity, "severity(self) -> QOpenGLDebugMessage.Severity");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_severity(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_severity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp))
        {
             ::QOpenGLDebugMessage::Severity sipRes;

            sipRes = sipCpp->severity();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QOpenGLDebugMessage_Severity);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_severity, doc_QOpenGLDebugMessage_severity);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_id, "id(self) -> int");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_id(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp))
        {
             ::GLuint sipRes;

            sipRes = sipCpp->id();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_id, doc_QOpenGLDebugMessage_id);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_message, "message(self) -> str");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_message(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_message(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLDebugMessage, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->message());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_message, doc_QOpenGLDebugMessage_message);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_createApplicationMessage, "createApplicationMessage(str, id: int = 0, severity: QOpenGLDebugMessage.Severity = QOpenGLDebugMessage.NotificationSeverity, type: QOpenGLDebugMessage.Type = QOpenGLDebugMessage.OtherType) -> QOpenGLDebugMessage");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_createApplicationMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_createApplicationMessage(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::GLuint a1 = 0;
         ::QOpenGLDebugMessage::Severity a2 = QOpenGLDebugMessage::NotificationSeverity;
         ::QOpenGLDebugMessage::Type a3 = QOpenGLDebugMessage::OtherType;

        static const char *sipKwdList[] = {
            NULL,
            sipName_id,
            sipName_severity,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|uEE", sipType_QString,&a0, &a0State, &a1, sipType_QOpenGLDebugMessage_Severity, &a2, sipType_QOpenGLDebugMessage_Type, &a3))
        {
             ::QOpenGLDebugMessage*sipRes;

            sipRes = new  ::QOpenGLDebugMessage( ::QOpenGLDebugMessage::createApplicationMessage(*a0,a1,a2,a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_createApplicationMessage, doc_QOpenGLDebugMessage_createApplicationMessage);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLDebugMessage_createThirdPartyMessage, "createThirdPartyMessage(str, id: int = 0, severity: QOpenGLDebugMessage.Severity = QOpenGLDebugMessage.NotificationSeverity, type: QOpenGLDebugMessage.Type = QOpenGLDebugMessage.OtherType) -> QOpenGLDebugMessage");

extern "C" {static PyObject *meth_QOpenGLDebugMessage_createThirdPartyMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLDebugMessage_createThirdPartyMessage(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::GLuint a1 = 0;
         ::QOpenGLDebugMessage::Severity a2 = QOpenGLDebugMessage::NotificationSeverity;
         ::QOpenGLDebugMessage::Type a3 = QOpenGLDebugMessage::OtherType;

        static const char *sipKwdList[] = {
            NULL,
            sipName_id,
            sipName_severity,
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|uEE", sipType_QString,&a0, &a0State, &a1, sipType_QOpenGLDebugMessage_Severity, &a2, sipType_QOpenGLDebugMessage_Type, &a3))
        {
             ::QOpenGLDebugMessage*sipRes;

            sipRes = new  ::QOpenGLDebugMessage( ::QOpenGLDebugMessage::createThirdPartyMessage(*a0,a1,a2,a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLDebugMessage, sipName_createThirdPartyMessage, doc_QOpenGLDebugMessage_createThirdPartyMessage);

    return NULL;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QOpenGLDebugMessage, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QOpenGLDebugMessage::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QOpenGLDebugMessage, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QOpenGLDebugMessage, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QOpenGLDebugMessage::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QOpenGLDebugMessage, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLDebugMessage(void *, int);}
static void release_QOpenGLDebugMessage(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLDebugMessage *>(sipCppV);
}


extern "C" {static void assign_QOpenGLDebugMessage(void *, SIP_SSIZE_T, void *);}
static void assign_QOpenGLDebugMessage(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLDebugMessage *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLDebugMessage *>(sipSrc);
}


extern "C" {static void *array_QOpenGLDebugMessage(SIP_SSIZE_T);}
static void *array_QOpenGLDebugMessage(SIP_SSIZE_T sipNrElem)
{
    return new  ::QOpenGLDebugMessage[sipNrElem];
}


extern "C" {static void *copy_QOpenGLDebugMessage(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLDebugMessage(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QOpenGLDebugMessage(reinterpret_cast<const  ::QOpenGLDebugMessage *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLDebugMessage(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLDebugMessage *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLDebugMessage();

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLDebugMessage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QOpenGLDebugMessage, &a0))
        {
            sipCpp = new  ::QOpenGLDebugMessage(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage[] = {
    {(void *)slot_QOpenGLDebugMessage___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QOpenGLDebugMessage[] = {
    {SIP_MLNAME_CAST(sipName_createApplicationMessage), (PyCFunction)meth_QOpenGLDebugMessage_createApplicationMessage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_createApplicationMessage)},
    {SIP_MLNAME_CAST(sipName_createThirdPartyMessage), (PyCFunction)meth_QOpenGLDebugMessage_createThirdPartyMessage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_createThirdPartyMessage)},
    {SIP_MLNAME_CAST(sipName_id), meth_QOpenGLDebugMessage_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_id)},
    {SIP_MLNAME_CAST(sipName_message), meth_QOpenGLDebugMessage_message, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_message)},
    {SIP_MLNAME_CAST(sipName_severity), meth_QOpenGLDebugMessage_severity, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_severity)},
    {SIP_MLNAME_CAST(sipName_source), meth_QOpenGLDebugMessage_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_source)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QOpenGLDebugMessage_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QOpenGLDebugMessage_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLDebugMessage_type)}
};

static sipEnumMemberDef enummembers_QOpenGLDebugMessage[] = {
    {sipName_APISource, static_cast<int>( ::QOpenGLDebugMessage::APISource), 138},
    {sipName_AnySeverity, static_cast<int>( ::QOpenGLDebugMessage::AnySeverity), 137},
    {sipName_AnySource, static_cast<int>( ::QOpenGLDebugMessage::AnySource), 138},
    {sipName_AnyType, static_cast<int>( ::QOpenGLDebugMessage::AnyType), 140},
    {sipName_ApplicationSource, static_cast<int>( ::QOpenGLDebugMessage::ApplicationSource), 138},
    {sipName_DeprecatedBehaviorType, static_cast<int>( ::QOpenGLDebugMessage::DeprecatedBehaviorType), 140},
    {sipName_ErrorType, static_cast<int>( ::QOpenGLDebugMessage::ErrorType), 140},
    {sipName_GroupPopType, static_cast<int>( ::QOpenGLDebugMessage::GroupPopType), 140},
    {sipName_GroupPushType, static_cast<int>( ::QOpenGLDebugMessage::GroupPushType), 140},
    {sipName_HighSeverity, static_cast<int>( ::QOpenGLDebugMessage::HighSeverity), 137},
    {sipName_InvalidSeverity, static_cast<int>( ::QOpenGLDebugMessage::InvalidSeverity), 137},
    {sipName_InvalidSource, static_cast<int>( ::QOpenGLDebugMessage::InvalidSource), 138},
    {sipName_InvalidType, static_cast<int>( ::QOpenGLDebugMessage::InvalidType), 140},
    {sipName_LowSeverity, static_cast<int>( ::QOpenGLDebugMessage::LowSeverity), 137},
    {sipName_MarkerType, static_cast<int>( ::QOpenGLDebugMessage::MarkerType), 140},
    {sipName_MediumSeverity, static_cast<int>( ::QOpenGLDebugMessage::MediumSeverity), 137},
    {sipName_NotificationSeverity, static_cast<int>( ::QOpenGLDebugMessage::NotificationSeverity), 137},
    {sipName_OtherSource, static_cast<int>( ::QOpenGLDebugMessage::OtherSource), 138},
    {sipName_OtherType, static_cast<int>( ::QOpenGLDebugMessage::OtherType), 140},
    {sipName_PerformanceType, static_cast<int>( ::QOpenGLDebugMessage::PerformanceType), 140},
    {sipName_PortabilityType, static_cast<int>( ::QOpenGLDebugMessage::PortabilityType), 140},
    {sipName_ShaderCompilerSource, static_cast<int>( ::QOpenGLDebugMessage::ShaderCompilerSource), 138},
    {sipName_ThirdPartySource, static_cast<int>( ::QOpenGLDebugMessage::ThirdPartySource), 138},
    {sipName_UndefinedBehaviorType, static_cast<int>( ::QOpenGLDebugMessage::UndefinedBehaviorType), 140},
    {sipName_WindowSystemSource, static_cast<int>( ::QOpenGLDebugMessage::WindowSystemSource), 138},
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage, "\1QOpenGLDebugMessage()\n"
"QOpenGLDebugMessage(QOpenGLDebugMessage)");


static pyqt5ClassPluginDef plugin_QOpenGLDebugMessage = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage,
        {0},
        &plugin_QOpenGLDebugMessage
    },
    {
        sipNameNr_QOpenGLDebugMessage,
        {0, 0, 1},
        8, methods_QOpenGLDebugMessage,
        25, enummembers_QOpenGLDebugMessage,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLDebugMessage,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLDebugMessage,
    init_type_QOpenGLDebugMessage,
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
    dealloc_QOpenGLDebugMessage,
    assign_QOpenGLDebugMessage,
    array_QOpenGLDebugMessage,
    copy_QOpenGLDebugMessage,
    release_QOpenGLDebugMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
