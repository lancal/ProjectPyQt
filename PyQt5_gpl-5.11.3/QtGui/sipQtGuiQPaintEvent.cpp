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

#line 386 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPaintEvent.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPaintEvent.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPaintEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPaintEvent.cpp"


class sipQPaintEvent : public  ::QPaintEvent
{
public:
    sipQPaintEvent(const  ::QRegion&);
    sipQPaintEvent(const  ::QRect&);
    sipQPaintEvent(const  ::QPaintEvent&);
    ~sipQPaintEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPaintEvent(const sipQPaintEvent &);
    sipQPaintEvent &operator = (const sipQPaintEvent &);
};

sipQPaintEvent::sipQPaintEvent(const  ::QRegion& a0):  ::QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const  ::QRect& a0):  ::QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const  ::QPaintEvent& a0):  ::QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::~sipQPaintEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QPaintEvent_rect, "rect(self) -> QRect");

extern "C" {static PyObject *meth_QPaintEvent_rect(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEvent, &sipCpp))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEvent, sipName_rect, doc_QPaintEvent_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEvent_region, "region(self) -> QRegion");

extern "C" {static PyObject *meth_QPaintEvent_region(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_region(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEvent, &sipCpp))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->region());

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEvent, sipName_region, doc_QPaintEvent_region);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPaintEvent(void *, const sipTypeDef *);}
static void *cast_QPaintEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPaintEvent *sipCpp = reinterpret_cast< ::QPaintEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEvent(void *, int);}
static void release_QPaintEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPaintEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QPaintEvent *>(sipCppV);
}


extern "C" {static void dealloc_QPaintEvent(sipSimpleWrapper *);}
static void dealloc_QPaintEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPaintEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPaintEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPaintEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPaintEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPaintEvent *sipCpp = 0;

    {
        const  ::QRegion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegion, &a0))
        {
            sipCpp = new sipQPaintEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QRect* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRect, &a0))
        {
            sipCpp = new sipQPaintEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QPaintEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPaintEvent, &a0))
        {
            sipCpp = new sipQPaintEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPaintEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QPaintEvent[] = {
    {SIP_MLNAME_CAST(sipName_rect), meth_QPaintEvent_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEvent_rect)},
    {SIP_MLNAME_CAST(sipName_region), meth_QPaintEvent_region, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEvent_region)}
};

PyDoc_STRVAR(doc_QPaintEvent, "\1QPaintEvent(QRegion)\n"
"QPaintEvent(QRect)\n"
"QPaintEvent(QPaintEvent)");


static pyqt5ClassPluginDef plugin_QPaintEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPaintEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPaintEvent,
        {0},
        &plugin_QPaintEvent
    },
    {
        sipNameNr_QPaintEvent,
        {0, 0, 1},
        2, methods_QPaintEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPaintEvent,
    -1,
    -1,
    supers_QPaintEvent,
    0,
    init_type_QPaintEvent,
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
    dealloc_QPaintEvent,
    0,
    0,
    0,
    release_QPaintEvent,
    cast_QPaintEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
