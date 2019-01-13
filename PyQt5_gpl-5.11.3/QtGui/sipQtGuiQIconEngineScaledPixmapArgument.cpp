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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 83 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQIconEngineScaledPixmapArgument.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQIconEngineScaledPixmapArgument.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 38 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQIconEngineScaledPixmapArgument.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 41 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQIconEngineScaledPixmapArgument.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine_ScaledPixmapArgument(void *, int);}
static void release_QIconEngine_ScaledPixmapArgument(void *sipCppV, int)
{
    delete reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipCppV);
}


extern "C" {static void assign_QIconEngine_ScaledPixmapArgument(void *, SIP_SSIZE_T, void *);}
static void assign_QIconEngine_ScaledPixmapArgument(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSrc);
}


extern "C" {static void *array_QIconEngine_ScaledPixmapArgument(SIP_SSIZE_T);}
static void *array_QIconEngine_ScaledPixmapArgument(SIP_SSIZE_T sipNrElem)
{
    return new  ::QIconEngine::ScaledPixmapArgument[sipNrElem];
}


extern "C" {static void *copy_QIconEngine_ScaledPixmapArgument(const void *, SIP_SSIZE_T);}
static void *copy_QIconEngine_ScaledPixmapArgument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QIconEngine::ScaledPixmapArgument(reinterpret_cast<const  ::QIconEngine::ScaledPixmapArgument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIconEngine_ScaledPixmapArgument(sipSimpleWrapper *);}
static void dealloc_QIconEngine_ScaledPixmapArgument(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QIconEngine_ScaledPixmapArgument(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QIconEngine_ScaledPixmapArgument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngine_ScaledPixmapArgument(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QIconEngine::ScaledPixmapArgument *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QIconEngine::ScaledPixmapArgument();

            return sipCpp;
        }
    }

    {
        const  ::QIconEngine::ScaledPixmapArgument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngine_ScaledPixmapArgument, &a0))
        {
            sipCpp = new  ::QIconEngine::ScaledPixmapArgument(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QIconEngine_ScaledPixmapArgument_mode(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_ScaledPixmapArgument_mode(void *sipSelf, PyObject *, PyObject *)
{
     ::QIcon::Mode sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = sipCpp->mode;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QIcon_Mode);
}


extern "C" {static int varset_QIconEngine_ScaledPixmapArgument_mode(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_ScaledPixmapArgument_mode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QIcon::Mode sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = ( ::QIcon::Mode)sipConvertToEnum(sipPy, sipType_QIcon_Mode);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_ScaledPixmapArgument_pixmap(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_ScaledPixmapArgument_pixmap(void *sipSelf, PyObject *, PyObject *)
{
     ::QPixmap*sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = &sipCpp->pixmap;

    return sipConvertFromType(sipVal, sipType_QPixmap, NULL);
}


extern "C" {static int varset_QIconEngine_ScaledPixmapArgument_pixmap(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_ScaledPixmapArgument_pixmap(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QPixmap*sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QPixmap *>(sipForceConvertToType(sipPy,sipType_QPixmap,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pixmap = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_ScaledPixmapArgument_scale(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_ScaledPixmapArgument_scale(void *sipSelf, PyObject *, PyObject *)
{
     ::qreal sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = sipCpp->scale;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QIconEngine_ScaledPixmapArgument_scale(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_ScaledPixmapArgument_scale(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::qreal sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->scale = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_ScaledPixmapArgument_size(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_ScaledPixmapArgument_size(void *sipSelf, PyObject *, PyObject *)
{
     ::QSize*sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = &sipCpp->size;

    return sipConvertFromType(sipVal, sipType_QSize, NULL);
}


extern "C" {static int varset_QIconEngine_ScaledPixmapArgument_size(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_ScaledPixmapArgument_size(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->size = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngine_ScaledPixmapArgument_state(void *, PyObject *, PyObject *);}
static PyObject *varget_QIconEngine_ScaledPixmapArgument_state(void *sipSelf, PyObject *, PyObject *)
{
     ::QIcon::State sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = sipCpp->state;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QIcon_State);
}


extern "C" {static int varset_QIconEngine_ScaledPixmapArgument_state(void *, PyObject *, PyObject *);}
static int varset_QIconEngine_ScaledPixmapArgument_state(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QIcon::State sipVal;
     ::QIconEngine::ScaledPixmapArgument *sipCpp = reinterpret_cast< ::QIconEngine::ScaledPixmapArgument *>(sipSelf);

    sipVal = ( ::QIcon::State)sipConvertToEnum(sipPy, sipType_QIcon_State);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->state = sipVal;

    return 0;
}

sipVariableDef variables_QIconEngine_ScaledPixmapArgument[] = {
    {InstanceVariable, sipName_mode, (PyMethodDef *)varget_QIconEngine_ScaledPixmapArgument_mode, (PyMethodDef *)varset_QIconEngine_ScaledPixmapArgument_mode, NULL, NULL},
    {InstanceVariable, sipName_pixmap, (PyMethodDef *)varget_QIconEngine_ScaledPixmapArgument_pixmap, (PyMethodDef *)varset_QIconEngine_ScaledPixmapArgument_pixmap, NULL, NULL},
    {InstanceVariable, sipName_scale, (PyMethodDef *)varget_QIconEngine_ScaledPixmapArgument_scale, (PyMethodDef *)varset_QIconEngine_ScaledPixmapArgument_scale, NULL, NULL},
    {InstanceVariable, sipName_size, (PyMethodDef *)varget_QIconEngine_ScaledPixmapArgument_size, (PyMethodDef *)varset_QIconEngine_ScaledPixmapArgument_size, NULL, NULL},
    {InstanceVariable, sipName_state, (PyMethodDef *)varget_QIconEngine_ScaledPixmapArgument_state, (PyMethodDef *)varset_QIconEngine_ScaledPixmapArgument_state, NULL, NULL},
};

PyDoc_STRVAR(doc_QIconEngine_ScaledPixmapArgument, "\1QIconEngine.ScaledPixmapArgument()\n"
"QIconEngine.ScaledPixmapArgument(QIconEngine.ScaledPixmapArgument)");


static pyqt5ClassPluginDef plugin_QIconEngine_ScaledPixmapArgument = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QIconEngine_ScaledPixmapArgument = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine__ScaledPixmapArgument,
        {0},
        &plugin_QIconEngine_ScaledPixmapArgument
    },
    {
        sipNameNr_ScaledPixmapArgument,
        {61, 255, 0},
        0, 0,
        0, 0,
        5, variables_QIconEngine_ScaledPixmapArgument,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconEngine_ScaledPixmapArgument,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QIconEngine_ScaledPixmapArgument,
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
    dealloc_QIconEngine_ScaledPixmapArgument,
    assign_QIconEngine_ScaledPixmapArgument,
    array_QIconEngine_ScaledPixmapArgument,
    copy_QIconEngine_ScaledPixmapArgument,
    release_QIconEngine_ScaledPixmapArgument,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
