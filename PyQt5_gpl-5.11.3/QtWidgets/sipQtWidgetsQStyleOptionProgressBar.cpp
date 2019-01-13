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

#include "sipAPIQtWidgets.h"

#line 454 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionProgressBar.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionProgressBar.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionProgressBar.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionProgressBar.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionProgressBar.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionProgressBar(void *, const sipTypeDef *);}
static void *cast_QStyleOptionProgressBar(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionProgressBar(void *, int);}
static void release_QStyleOptionProgressBar(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionProgressBar *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionProgressBar(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionProgressBar(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionProgressBar *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionProgressBar *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionProgressBar(SIP_SSIZE_T);}
static void *array_QStyleOptionProgressBar(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionProgressBar[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionProgressBar(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionProgressBar(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionProgressBar(reinterpret_cast<const  ::QStyleOptionProgressBar *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionProgressBar(sipSimpleWrapper *);}
static void dealloc_QStyleOptionProgressBar(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionProgressBar(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionProgressBar(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionProgressBar(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionProgressBar *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionProgressBar();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionProgressBar* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionProgressBar, &a0))
        {
            sipCpp = new  ::QStyleOptionProgressBar(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionProgressBar[] = {{312, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionProgressBar[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionProgressBar::Type), 356},
    {sipName_Version, static_cast<int>( ::QStyleOptionProgressBar::Version), 357},
};


extern "C" {static PyObject *varget_QStyleOptionProgressBar_bottomToTop(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_bottomToTop(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->bottomToTop;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_bottomToTop(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_bottomToTop(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->bottomToTop = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_invertedAppearance(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_invertedAppearance(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->invertedAppearance;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_invertedAppearance(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_invertedAppearance(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->invertedAppearance = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_maximum(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_maximum(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->maximum;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_maximum(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_maximum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->maximum = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_minimum(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_minimum(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->minimum;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_minimum(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_minimum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->minimum = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_orientation(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_orientation(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::Orientation sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->orientation;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_Qt_Orientation);
}


extern "C" {static int varset_QStyleOptionProgressBar_orientation(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_orientation(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::Orientation sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = ( ::Qt::Orientation)sipConvertToEnum(sipPy, sipType_Qt_Orientation);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->orientation = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_progress(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_progress(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->progress;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_progress(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_progress(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->progress = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_text(void *sipSelf, PyObject *, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionProgressBar_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_textAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_textAlignment(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = &sipCpp->textAlignment;

    return sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
}


extern "C" {static int varset_QStyleOptionProgressBar_textAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_textAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionProgressBar_textVisible(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionProgressBar_textVisible(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipCpp->textVisible;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionProgressBar_textVisible(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionProgressBar_textVisible(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionProgressBar *sipCpp = reinterpret_cast< ::QStyleOptionProgressBar *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->textVisible = static_cast<bool>(sipVal);

    return 0;
}

sipVariableDef variables_QStyleOptionProgressBar[] = {
    {InstanceVariable, sipName_bottomToTop, (PyMethodDef *)varget_QStyleOptionProgressBar_bottomToTop, (PyMethodDef *)varset_QStyleOptionProgressBar_bottomToTop, NULL, NULL},
    {InstanceVariable, sipName_invertedAppearance, (PyMethodDef *)varget_QStyleOptionProgressBar_invertedAppearance, (PyMethodDef *)varset_QStyleOptionProgressBar_invertedAppearance, NULL, NULL},
    {InstanceVariable, sipName_maximum, (PyMethodDef *)varget_QStyleOptionProgressBar_maximum, (PyMethodDef *)varset_QStyleOptionProgressBar_maximum, NULL, NULL},
    {InstanceVariable, sipName_minimum, (PyMethodDef *)varget_QStyleOptionProgressBar_minimum, (PyMethodDef *)varset_QStyleOptionProgressBar_minimum, NULL, NULL},
    {InstanceVariable, sipName_orientation, (PyMethodDef *)varget_QStyleOptionProgressBar_orientation, (PyMethodDef *)varset_QStyleOptionProgressBar_orientation, NULL, NULL},
    {InstanceVariable, sipName_progress, (PyMethodDef *)varget_QStyleOptionProgressBar_progress, (PyMethodDef *)varset_QStyleOptionProgressBar_progress, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionProgressBar_text, (PyMethodDef *)varset_QStyleOptionProgressBar_text, NULL, NULL},
    {InstanceVariable, sipName_textAlignment, (PyMethodDef *)varget_QStyleOptionProgressBar_textAlignment, (PyMethodDef *)varset_QStyleOptionProgressBar_textAlignment, NULL, NULL},
    {InstanceVariable, sipName_textVisible, (PyMethodDef *)varget_QStyleOptionProgressBar_textVisible, (PyMethodDef *)varset_QStyleOptionProgressBar_textVisible, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionProgressBar, "\1QStyleOptionProgressBar()\n"
"QStyleOptionProgressBar(QStyleOptionProgressBar)");


static pyqt5ClassPluginDef plugin_QStyleOptionProgressBar = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionProgressBar = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionProgressBar,
        {0},
        &plugin_QStyleOptionProgressBar
    },
    {
        sipNameNr_QStyleOptionProgressBar,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionProgressBar,
        9, variables_QStyleOptionProgressBar,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionProgressBar,
    -1,
    -1,
    supers_QStyleOptionProgressBar,
    0,
    init_type_QStyleOptionProgressBar,
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
    dealloc_QStyleOptionProgressBar,
    assign_QStyleOptionProgressBar,
    array_QStyleOptionProgressBar,
    copy_QStyleOptionProgressBar,
    release_QStyleOptionProgressBar,
    cast_QStyleOptionProgressBar,
    0,
    0,
    0,
    0,
    0,
    0
};
