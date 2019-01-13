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

#line 208 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"

#line 208 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qframe.sip"
#include <qframe.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleOptionFrame.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionFrame(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrame(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrame(void *, int);}
static void release_QStyleOptionFrame(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionFrame *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionFrame(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionFrame(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionFrame *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionFrame *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrame(SIP_SSIZE_T);}
static void *array_QStyleOptionFrame(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionFrame[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrame(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrame(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionFrame(reinterpret_cast<const  ::QStyleOptionFrame *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrame(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionFrame(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrame(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrame(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionFrame *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionFrame();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            sipCpp = new  ::QStyleOptionFrame(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrame[] = {{312, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrame[] = {
    {sipName_Flat, static_cast<int>( ::QStyleOptionFrame::Flat), 334},
    {sipName_None_, static_cast<int>( ::QStyleOptionFrame::None), 334},
    {sipName_Rounded, static_cast<int>( ::QStyleOptionFrame::Rounded), 334},
    {sipName_Type, static_cast<int>( ::QStyleOptionFrame::Type), 336},
    {sipName_Version, static_cast<int>( ::QStyleOptionFrame::Version), 337},
};


extern "C" {static PyObject *varget_QStyleOptionFrame_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_features(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionFrame::FrameFeatures*sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = &sipCpp->features;

    return sipConvertFromType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, NULL);
}


extern "C" {static int varset_QStyleOptionFrame_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionFrame::FrameFeatures*sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QStyleOptionFrame::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrame_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_frameShape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_frameShape(void *sipSelf, PyObject *, PyObject *)
{
     ::QFrame::Shape sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->frameShape;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QFrame_Shape);
}


extern "C" {static int varset_QStyleOptionFrame_frameShape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_frameShape(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QFrame::Shape sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = ( ::QFrame::Shape)sipConvertToEnum(sipPy, sipType_QFrame_Shape);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frameShape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionFrame_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrame_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrame_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionFrame_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrame_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionFrame *sipCpp = reinterpret_cast< ::QStyleOptionFrame *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionFrame[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionFrame_features, (PyMethodDef *)varset_QStyleOptionFrame_features, NULL, NULL},
    {InstanceVariable, sipName_frameShape, (PyMethodDef *)varget_QStyleOptionFrame_frameShape, (PyMethodDef *)varset_QStyleOptionFrame_frameShape, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionFrame_lineWidth, (PyMethodDef *)varset_QStyleOptionFrame_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionFrame_midLineWidth, (PyMethodDef *)varset_QStyleOptionFrame_midLineWidth, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFrame, "\1QStyleOptionFrame()\n"
"QStyleOptionFrame(QStyleOptionFrame)");


static pyqt5ClassPluginDef plugin_QStyleOptionFrame = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionFrame = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrame,
        {0},
        &plugin_QStyleOptionFrame
    },
    {
        sipNameNr_QStyleOptionFrame,
        {0, 0, 1},
        0, 0,
        5, enummembers_QStyleOptionFrame,
        4, variables_QStyleOptionFrame,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrame,
    -1,
    -1,
    supers_QStyleOptionFrame,
    0,
    init_type_QStyleOptionFrame,
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
    dealloc_QStyleOptionFrame,
    assign_QStyleOptionFrame,
    array_QStyleOptionFrame,
    copy_QStyleOptionFrame,
    release_QStyleOptionFrame,
    cast_QStyleOptionFrame,
    0,
    0,
    0,
    0,
    0,
    0
};