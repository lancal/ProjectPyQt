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

#line 889 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPlatformSurfaceEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPlatformSurfaceEvent.cpp"


class sipQPlatformSurfaceEvent : public  ::QPlatformSurfaceEvent
{
public:
    sipQPlatformSurfaceEvent( ::QPlatformSurfaceEvent::SurfaceEventType);
    sipQPlatformSurfaceEvent(const  ::QPlatformSurfaceEvent&);
    ~sipQPlatformSurfaceEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlatformSurfaceEvent(const sipQPlatformSurfaceEvent &);
    sipQPlatformSurfaceEvent &operator = (const sipQPlatformSurfaceEvent &);
};

sipQPlatformSurfaceEvent::sipQPlatformSurfaceEvent( ::QPlatformSurfaceEvent::SurfaceEventType a0):  ::QPlatformSurfaceEvent(a0), sipPySelf(0)
{
}

sipQPlatformSurfaceEvent::sipQPlatformSurfaceEvent(const  ::QPlatformSurfaceEvent& a0):  ::QPlatformSurfaceEvent(a0), sipPySelf(0)
{
}

sipQPlatformSurfaceEvent::~sipQPlatformSurfaceEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QPlatformSurfaceEvent_surfaceEventType, "surfaceEventType(self) -> QPlatformSurfaceEvent.SurfaceEventType");

extern "C" {static PyObject *meth_QPlatformSurfaceEvent_surfaceEventType(PyObject *, PyObject *);}
static PyObject *meth_QPlatformSurfaceEvent_surfaceEventType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPlatformSurfaceEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlatformSurfaceEvent, &sipCpp))
        {
             ::QPlatformSurfaceEvent::SurfaceEventType sipRes;

            sipRes = sipCpp->surfaceEventType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QPlatformSurfaceEvent_SurfaceEventType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlatformSurfaceEvent, sipName_surfaceEventType, doc_QPlatformSurfaceEvent_surfaceEventType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPlatformSurfaceEvent(void *, const sipTypeDef *);}
static void *cast_QPlatformSurfaceEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPlatformSurfaceEvent *sipCpp = reinterpret_cast< ::QPlatformSurfaceEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlatformSurfaceEvent(void *, int);}
static void release_QPlatformSurfaceEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlatformSurfaceEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QPlatformSurfaceEvent *>(sipCppV);
}


extern "C" {static void dealloc_QPlatformSurfaceEvent(sipSimpleWrapper *);}
static void dealloc_QPlatformSurfaceEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPlatformSurfaceEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPlatformSurfaceEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPlatformSurfaceEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlatformSurfaceEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlatformSurfaceEvent *sipCpp = 0;

    {
         ::QPlatformSurfaceEvent::SurfaceEventType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QPlatformSurfaceEvent_SurfaceEventType, &a0))
        {
            sipCpp = new sipQPlatformSurfaceEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QPlatformSurfaceEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlatformSurfaceEvent, &a0))
        {
            sipCpp = new sipQPlatformSurfaceEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPlatformSurfaceEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QPlatformSurfaceEvent[] = {
    {SIP_MLNAME_CAST(sipName_surfaceEventType), meth_QPlatformSurfaceEvent_surfaceEventType, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlatformSurfaceEvent_surfaceEventType)}
};

static sipEnumMemberDef enummembers_QPlatformSurfaceEvent[] = {
    {sipName_SurfaceAboutToBeDestroyed, static_cast<int>( ::QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed), 236},
    {sipName_SurfaceCreated, static_cast<int>( ::QPlatformSurfaceEvent::SurfaceCreated), 236},
};

PyDoc_STRVAR(doc_QPlatformSurfaceEvent, "\1QPlatformSurfaceEvent(QPlatformSurfaceEvent.SurfaceEventType)\n"
"QPlatformSurfaceEvent(QPlatformSurfaceEvent)");


static pyqt5ClassPluginDef plugin_QPlatformSurfaceEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPlatformSurfaceEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPlatformSurfaceEvent,
        {0},
        &plugin_QPlatformSurfaceEvent
    },
    {
        sipNameNr_QPlatformSurfaceEvent,
        {0, 0, 1},
        1, methods_QPlatformSurfaceEvent,
        2, enummembers_QPlatformSurfaceEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlatformSurfaceEvent,
    -1,
    -1,
    supers_QPlatformSurfaceEvent,
    0,
    init_type_QPlatformSurfaceEvent,
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
    dealloc_QPlatformSurfaceEvent,
    0,
    0,
    0,
    release_QPlatformSurfaceEvent,
    cast_QPlatformSurfaceEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
