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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQEvent.cpp"



class sipQEvent : public  ::QEvent
{
public:
    sipQEvent( ::QEvent::Type);
    sipQEvent(const  ::QEvent&);
    ~sipQEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQEvent(const sipQEvent &);
    sipQEvent &operator = (const sipQEvent &);
};

sipQEvent::sipQEvent( ::QEvent::Type a0):  ::QEvent(a0), sipPySelf(0)
{
}

sipQEvent::sipQEvent(const  ::QEvent& a0):  ::QEvent(a0), sipPySelf(0)
{
}

sipQEvent::~sipQEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QEvent_type, "type(self) -> QEvent.Type");

extern "C" {static PyObject *meth_QEvent_type(PyObject *, PyObject *);}
static PyObject *meth_QEvent_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
             ::QEvent::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QEvent_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_type, doc_QEvent_type);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_spontaneous, "spontaneous(self) -> bool");

extern "C" {static PyObject *meth_QEvent_spontaneous(PyObject *, PyObject *);}
static PyObject *meth_QEvent_spontaneous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->spontaneous();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_spontaneous, doc_QEvent_spontaneous);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_setAccepted, "setAccepted(self, bool)");

extern "C" {static PyObject *meth_QEvent_setAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_setAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QEvent, &sipCpp, &a0))
        {
            sipCpp->setAccepted(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_setAccepted, doc_QEvent_setAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_isAccepted, "isAccepted(self) -> bool");

extern "C" {static PyObject *meth_QEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAccepted();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_isAccepted, doc_QEvent_isAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_accept, "accept(self)");

extern "C" {static PyObject *meth_QEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_accept, doc_QEvent_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_ignore, "ignore(self)");

extern "C" {static PyObject *meth_QEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->ignore();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_ignore, doc_QEvent_ignore);

    return NULL;
}


PyDoc_STRVAR(doc_QEvent_registerEventType, "registerEventType(hint: int = -1) -> int");

extern "C" {static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_hint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &a0))
        {
            int sipRes;

            sipRes =  ::QEvent::registerEventType(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QEvent, sipName_registerEventType, doc_QEvent_registerEventType);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEvent(void *, int);}
static void release_QEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QEvent *>(sipCppV);
}


extern "C" {static void dealloc_QEvent(sipSimpleWrapper *);}
static void dealloc_QEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQEvent *sipCpp = 0;

    {
         ::QEvent::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QEvent_Type, &a0))
        {
            sipCpp = new sipQEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QEvent, &a0))
        {
            sipCpp = new sipQEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QEvent_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_accept)},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QEvent_ignore, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_ignore)},
    {SIP_MLNAME_CAST(sipName_isAccepted), meth_QEvent_isAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_isAccepted)},
    {SIP_MLNAME_CAST(sipName_registerEventType), (PyCFunction)meth_QEvent_registerEventType, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QEvent_registerEventType)},
    {SIP_MLNAME_CAST(sipName_setAccepted), meth_QEvent_setAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_setAccepted)},
    {SIP_MLNAME_CAST(sipName_spontaneous), meth_QEvent_spontaneous, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_spontaneous)},
    {SIP_MLNAME_CAST(sipName_type), meth_QEvent_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QEvent_type)}
};

static sipEnumMemberDef enummembers_QEvent[] = {
    {sipName_ActionAdded, static_cast<int>( ::QEvent::ActionAdded), 62},
    {sipName_ActionChanged, static_cast<int>( ::QEvent::ActionChanged), 62},
    {sipName_ActionRemoved, static_cast<int>( ::QEvent::ActionRemoved), 62},
    {sipName_ActivationChange, static_cast<int>( ::QEvent::ActivationChange), 62},
    {sipName_ApplicationActivate, static_cast<int>( ::QEvent::ApplicationActivate), 62},
    {sipName_ApplicationActivated, static_cast<int>( ::QEvent::ApplicationActivated), 62},
    {sipName_ApplicationDeactivate, static_cast<int>( ::QEvent::ApplicationDeactivate), 62},
    {sipName_ApplicationDeactivated, static_cast<int>( ::QEvent::ApplicationDeactivated), 62},
    {sipName_ApplicationFontChange, static_cast<int>( ::QEvent::ApplicationFontChange), 62},
    {sipName_ApplicationLayoutDirectionChange, static_cast<int>( ::QEvent::ApplicationLayoutDirectionChange), 62},
    {sipName_ApplicationPaletteChange, static_cast<int>( ::QEvent::ApplicationPaletteChange), 62},
    {sipName_ApplicationStateChange, static_cast<int>( ::QEvent::ApplicationStateChange), 62},
    {sipName_ApplicationWindowIconChange, static_cast<int>( ::QEvent::ApplicationWindowIconChange), 62},
    {sipName_ChildAdded, static_cast<int>( ::QEvent::ChildAdded), 62},
    {sipName_ChildPolished, static_cast<int>( ::QEvent::ChildPolished), 62},
    {sipName_ChildRemoved, static_cast<int>( ::QEvent::ChildRemoved), 62},
    {sipName_Clipboard, static_cast<int>( ::QEvent::Clipboard), 62},
    {sipName_Close, static_cast<int>( ::QEvent::Close), 62},
    {sipName_CloseSoftwareInputPanel, static_cast<int>( ::QEvent::CloseSoftwareInputPanel), 62},
    {sipName_ContentsRectChange, static_cast<int>( ::QEvent::ContentsRectChange), 62},
    {sipName_ContextMenu, static_cast<int>( ::QEvent::ContextMenu), 62},
    {sipName_CursorChange, static_cast<int>( ::QEvent::CursorChange), 62},
    {sipName_DeferredDelete, static_cast<int>( ::QEvent::DeferredDelete), 62},
    {sipName_DragEnter, static_cast<int>( ::QEvent::DragEnter), 62},
    {sipName_DragLeave, static_cast<int>( ::QEvent::DragLeave), 62},
    {sipName_DragMove, static_cast<int>( ::QEvent::DragMove), 62},
    {sipName_Drop, static_cast<int>( ::QEvent::Drop), 62},
    {sipName_DynamicPropertyChange, static_cast<int>( ::QEvent::DynamicPropertyChange), 62},
    {sipName_EnabledChange, static_cast<int>( ::QEvent::EnabledChange), 62},
    {sipName_Enter, static_cast<int>( ::QEvent::Enter), 62},
    {sipName_EnterWhatsThisMode, static_cast<int>( ::QEvent::EnterWhatsThisMode), 62},
    {sipName_Expose, static_cast<int>( ::QEvent::Expose), 62},
    {sipName_FileOpen, static_cast<int>( ::QEvent::FileOpen), 62},
    {sipName_FocusAboutToChange, static_cast<int>( ::QEvent::FocusAboutToChange), 62},
    {sipName_FocusIn, static_cast<int>( ::QEvent::FocusIn), 62},
    {sipName_FocusOut, static_cast<int>( ::QEvent::FocusOut), 62},
    {sipName_FontChange, static_cast<int>( ::QEvent::FontChange), 62},
    {sipName_Gesture, static_cast<int>( ::QEvent::Gesture), 62},
    {sipName_GestureOverride, static_cast<int>( ::QEvent::GestureOverride), 62},
    {sipName_GrabKeyboard, static_cast<int>( ::QEvent::GrabKeyboard), 62},
    {sipName_GrabMouse, static_cast<int>( ::QEvent::GrabMouse), 62},
    {sipName_GraphicsSceneContextMenu, static_cast<int>( ::QEvent::GraphicsSceneContextMenu), 62},
    {sipName_GraphicsSceneDragEnter, static_cast<int>( ::QEvent::GraphicsSceneDragEnter), 62},
    {sipName_GraphicsSceneDragLeave, static_cast<int>( ::QEvent::GraphicsSceneDragLeave), 62},
    {sipName_GraphicsSceneDragMove, static_cast<int>( ::QEvent::GraphicsSceneDragMove), 62},
    {sipName_GraphicsSceneDrop, static_cast<int>( ::QEvent::GraphicsSceneDrop), 62},
    {sipName_GraphicsSceneHelp, static_cast<int>( ::QEvent::GraphicsSceneHelp), 62},
    {sipName_GraphicsSceneHoverEnter, static_cast<int>( ::QEvent::GraphicsSceneHoverEnter), 62},
    {sipName_GraphicsSceneHoverLeave, static_cast<int>( ::QEvent::GraphicsSceneHoverLeave), 62},
    {sipName_GraphicsSceneHoverMove, static_cast<int>( ::QEvent::GraphicsSceneHoverMove), 62},
    {sipName_GraphicsSceneMouseDoubleClick, static_cast<int>( ::QEvent::GraphicsSceneMouseDoubleClick), 62},
    {sipName_GraphicsSceneMouseMove, static_cast<int>( ::QEvent::GraphicsSceneMouseMove), 62},
    {sipName_GraphicsSceneMousePress, static_cast<int>( ::QEvent::GraphicsSceneMousePress), 62},
    {sipName_GraphicsSceneMouseRelease, static_cast<int>( ::QEvent::GraphicsSceneMouseRelease), 62},
    {sipName_GraphicsSceneMove, static_cast<int>( ::QEvent::GraphicsSceneMove), 62},
    {sipName_GraphicsSceneResize, static_cast<int>( ::QEvent::GraphicsSceneResize), 62},
    {sipName_GraphicsSceneWheel, static_cast<int>( ::QEvent::GraphicsSceneWheel), 62},
    {sipName_Hide, static_cast<int>( ::QEvent::Hide), 62},
    {sipName_HideToParent, static_cast<int>( ::QEvent::HideToParent), 62},
    {sipName_HoverEnter, static_cast<int>( ::QEvent::HoverEnter), 62},
    {sipName_HoverLeave, static_cast<int>( ::QEvent::HoverLeave), 62},
    {sipName_HoverMove, static_cast<int>( ::QEvent::HoverMove), 62},
    {sipName_IconDrag, static_cast<int>( ::QEvent::IconDrag), 62},
    {sipName_IconTextChange, static_cast<int>( ::QEvent::IconTextChange), 62},
    {sipName_InputMethod, static_cast<int>( ::QEvent::InputMethod), 62},
    {sipName_InputMethodQuery, static_cast<int>( ::QEvent::InputMethodQuery), 62},
    {sipName_KeyPress, static_cast<int>( ::QEvent::KeyPress), 62},
    {sipName_KeyRelease, static_cast<int>( ::QEvent::KeyRelease), 62},
    {sipName_KeyboardLayoutChange, static_cast<int>( ::QEvent::KeyboardLayoutChange), 62},
    {sipName_LanguageChange, static_cast<int>( ::QEvent::LanguageChange), 62},
    {sipName_LayoutDirectionChange, static_cast<int>( ::QEvent::LayoutDirectionChange), 62},
    {sipName_LayoutRequest, static_cast<int>( ::QEvent::LayoutRequest), 62},
    {sipName_Leave, static_cast<int>( ::QEvent::Leave), 62},
    {sipName_LeaveWhatsThisMode, static_cast<int>( ::QEvent::LeaveWhatsThisMode), 62},
    {sipName_LocaleChange, static_cast<int>( ::QEvent::LocaleChange), 62},
    {sipName_MacSizeChange, static_cast<int>( ::QEvent::MacSizeChange), 62},
    {sipName_MaxUser, static_cast<int>( ::QEvent::MaxUser), 62},
    {sipName_MetaCall, static_cast<int>( ::QEvent::MetaCall), 62},
    {sipName_ModifiedChange, static_cast<int>( ::QEvent::ModifiedChange), 62},
    {sipName_MouseButtonDblClick, static_cast<int>( ::QEvent::MouseButtonDblClick), 62},
    {sipName_MouseButtonPress, static_cast<int>( ::QEvent::MouseButtonPress), 62},
    {sipName_MouseButtonRelease, static_cast<int>( ::QEvent::MouseButtonRelease), 62},
    {sipName_MouseMove, static_cast<int>( ::QEvent::MouseMove), 62},
    {sipName_MouseTrackingChange, static_cast<int>( ::QEvent::MouseTrackingChange), 62},
    {sipName_Move, static_cast<int>( ::QEvent::Move), 62},
    {sipName_NonClientAreaMouseButtonDblClick, static_cast<int>( ::QEvent::NonClientAreaMouseButtonDblClick), 62},
    {sipName_NonClientAreaMouseButtonPress, static_cast<int>( ::QEvent::NonClientAreaMouseButtonPress), 62},
    {sipName_NonClientAreaMouseButtonRelease, static_cast<int>( ::QEvent::NonClientAreaMouseButtonRelease), 62},
    {sipName_NonClientAreaMouseMove, static_cast<int>( ::QEvent::NonClientAreaMouseMove), 62},
    {sipName_None_, static_cast<int>( ::QEvent::None), 62},
    {sipName_OkRequest, static_cast<int>( ::QEvent::OkRequest), 62},
    {sipName_OrientationChange, static_cast<int>( ::QEvent::OrientationChange), 62},
    {sipName_Paint, static_cast<int>( ::QEvent::Paint), 62},
    {sipName_PaletteChange, static_cast<int>( ::QEvent::PaletteChange), 62},
    {sipName_ParentAboutToChange, static_cast<int>( ::QEvent::ParentAboutToChange), 62},
    {sipName_ParentChange, static_cast<int>( ::QEvent::ParentChange), 62},
    {sipName_PlatformPanel, static_cast<int>( ::QEvent::PlatformPanel), 62},
    {sipName_PlatformSurface, static_cast<int>( ::QEvent::PlatformSurface), 62},
    {sipName_Polish, static_cast<int>( ::QEvent::Polish), 62},
    {sipName_PolishRequest, static_cast<int>( ::QEvent::PolishRequest), 62},
    {sipName_QueryWhatsThis, static_cast<int>( ::QEvent::QueryWhatsThis), 62},
    {sipName_ReadOnlyChange, static_cast<int>( ::QEvent::ReadOnlyChange), 62},
    {sipName_RequestSoftwareInputPanel, static_cast<int>( ::QEvent::RequestSoftwareInputPanel), 62},
    {sipName_Resize, static_cast<int>( ::QEvent::Resize), 62},
    {sipName_Scroll, static_cast<int>( ::QEvent::Scroll), 62},
    {sipName_ScrollPrepare, static_cast<int>( ::QEvent::ScrollPrepare), 62},
    {sipName_Shortcut, static_cast<int>( ::QEvent::Shortcut), 62},
    {sipName_ShortcutOverride, static_cast<int>( ::QEvent::ShortcutOverride), 62},
    {sipName_Show, static_cast<int>( ::QEvent::Show), 62},
    {sipName_ShowToParent, static_cast<int>( ::QEvent::ShowToParent), 62},
    {sipName_SockAct, static_cast<int>( ::QEvent::SockAct), 62},
    {sipName_StateMachineSignal, static_cast<int>( ::QEvent::StateMachineSignal), 62},
    {sipName_StateMachineWrapped, static_cast<int>( ::QEvent::StateMachineWrapped), 62},
    {sipName_StatusTip, static_cast<int>( ::QEvent::StatusTip), 62},
    {sipName_StyleChange, static_cast<int>( ::QEvent::StyleChange), 62},
    {sipName_TabletEnterProximity, static_cast<int>( ::QEvent::TabletEnterProximity), 62},
    {sipName_TabletLeaveProximity, static_cast<int>( ::QEvent::TabletLeaveProximity), 62},
    {sipName_TabletMove, static_cast<int>( ::QEvent::TabletMove), 62},
    {sipName_TabletPress, static_cast<int>( ::QEvent::TabletPress), 62},
    {sipName_TabletRelease, static_cast<int>( ::QEvent::TabletRelease), 62},
    {sipName_TabletTrackingChange, static_cast<int>( ::QEvent::TabletTrackingChange), 62},
    {sipName_ThreadChange, static_cast<int>( ::QEvent::ThreadChange), 62},
    {sipName_Timer, static_cast<int>( ::QEvent::Timer), 62},
    {sipName_ToolBarChange, static_cast<int>( ::QEvent::ToolBarChange), 62},
    {sipName_ToolTip, static_cast<int>( ::QEvent::ToolTip), 62},
    {sipName_ToolTipChange, static_cast<int>( ::QEvent::ToolTipChange), 62},
    {sipName_TouchBegin, static_cast<int>( ::QEvent::TouchBegin), 62},
    {sipName_TouchCancel, static_cast<int>( ::QEvent::TouchCancel), 62},
    {sipName_TouchEnd, static_cast<int>( ::QEvent::TouchEnd), 62},
    {sipName_TouchUpdate, static_cast<int>( ::QEvent::TouchUpdate), 62},
    {sipName_UngrabKeyboard, static_cast<int>( ::QEvent::UngrabKeyboard), 62},
    {sipName_UngrabMouse, static_cast<int>( ::QEvent::UngrabMouse), 62},
    {sipName_UpdateLater, static_cast<int>( ::QEvent::UpdateLater), 62},
    {sipName_UpdateRequest, static_cast<int>( ::QEvent::UpdateRequest), 62},
    {sipName_User, static_cast<int>( ::QEvent::User), 62},
    {sipName_WhatsThis, static_cast<int>( ::QEvent::WhatsThis), 62},
    {sipName_WhatsThisClicked, static_cast<int>( ::QEvent::WhatsThisClicked), 62},
    {sipName_Wheel, static_cast<int>( ::QEvent::Wheel), 62},
    {sipName_WinEventAct, static_cast<int>( ::QEvent::WinEventAct), 62},
    {sipName_WinIdChange, static_cast<int>( ::QEvent::WinIdChange), 62},
    {sipName_WindowActivate, static_cast<int>( ::QEvent::WindowActivate), 62},
    {sipName_WindowBlocked, static_cast<int>( ::QEvent::WindowBlocked), 62},
    {sipName_WindowDeactivate, static_cast<int>( ::QEvent::WindowDeactivate), 62},
    {sipName_WindowIconChange, static_cast<int>( ::QEvent::WindowIconChange), 62},
    {sipName_WindowStateChange, static_cast<int>( ::QEvent::WindowStateChange), 62},
    {sipName_WindowTitleChange, static_cast<int>( ::QEvent::WindowTitleChange), 62},
    {sipName_WindowUnblocked, static_cast<int>( ::QEvent::WindowUnblocked), 62},
    {sipName_ZOrderChange, static_cast<int>( ::QEvent::ZOrderChange), 62},
};

PyDoc_STRVAR(doc_QEvent, "\1QEvent(QEvent.Type)\n"
"QEvent(QEvent)");


static pyqt5ClassPluginDef plugin_QEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QEvent,
        {0},
        &plugin_QEvent
    },
    {
        sipNameNr_QEvent,
        {0, 0, 1},
        7, methods_QEvent,
        148, enummembers_QEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEvent,
    -1,
    -1,
    0,
    0,
    init_type_QEvent,
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
    dealloc_QEvent,
    0,
    0,
    0,
    release_QEvent,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};