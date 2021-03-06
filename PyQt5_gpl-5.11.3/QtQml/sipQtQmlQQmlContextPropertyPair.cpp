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

#include "sipAPIQtQml.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qqmlcontext.sip"
#include <qqmlcontext.h>
#line 50 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qqmlcontext.sip"
#include <qqmlcontext.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlContextPropertyPair.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlContextPropertyPair.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlContextPropertyPair.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QQmlContext_PropertyPair(void *, int);}
static void release_QQmlContext_PropertyPair(void *sipCppV, int)
{
    delete reinterpret_cast< ::QQmlContext::PropertyPair *>(sipCppV);
}


extern "C" {static void assign_QQmlContext_PropertyPair(void *, SIP_SSIZE_T, void *);}
static void assign_QQmlContext_PropertyPair(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QQmlContext::PropertyPair *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QQmlContext::PropertyPair *>(sipSrc);
}


extern "C" {static void *array_QQmlContext_PropertyPair(SIP_SSIZE_T);}
static void *array_QQmlContext_PropertyPair(SIP_SSIZE_T sipNrElem)
{
    return new  ::QQmlContext::PropertyPair[sipNrElem];
}


extern "C" {static void *copy_QQmlContext_PropertyPair(const void *, SIP_SSIZE_T);}
static void *copy_QQmlContext_PropertyPair(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QQmlContext::PropertyPair(reinterpret_cast<const  ::QQmlContext::PropertyPair *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQmlContext_PropertyPair(sipSimpleWrapper *);}
static void dealloc_QQmlContext_PropertyPair(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QQmlContext_PropertyPair(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QQmlContext_PropertyPair(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlContext_PropertyPair(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QQmlContext::PropertyPair *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QQmlContext::PropertyPair();

            return sipCpp;
        }
    }

    {
        const  ::QQmlContext::PropertyPair* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlContext_PropertyPair, &a0))
        {
            sipCpp = new  ::QQmlContext::PropertyPair(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QQmlContext_PropertyPair_name(void *, PyObject *, PyObject *);}
static PyObject *varget_QQmlContext_PropertyPair_name(void *sipSelf, PyObject *, PyObject *)
{
     ::QString*sipVal;
     ::QQmlContext::PropertyPair *sipCpp = reinterpret_cast< ::QQmlContext::PropertyPair *>(sipSelf);

    sipVal = &sipCpp->name;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QQmlContext_PropertyPair_name(void *, PyObject *, PyObject *);}
static int varset_QQmlContext_PropertyPair_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QString*sipVal;
     ::QQmlContext::PropertyPair *sipCpp = reinterpret_cast< ::QQmlContext::PropertyPair *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QQmlContext_PropertyPair_value(void *, PyObject *, PyObject *);}
static PyObject *varget_QQmlContext_PropertyPair_value(void *sipSelf, PyObject *, PyObject *)
{
     ::QVariant*sipVal;
     ::QQmlContext::PropertyPair *sipCpp = reinterpret_cast< ::QQmlContext::PropertyPair *>(sipSelf);

    sipVal = &sipCpp->value;

    return sipConvertFromType(sipVal, sipType_QVariant, NULL);
}


extern "C" {static int varset_QQmlContext_PropertyPair_value(void *, PyObject *, PyObject *);}
static int varset_QQmlContext_PropertyPair_value(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QVariant*sipVal;
     ::QQmlContext::PropertyPair *sipCpp = reinterpret_cast< ::QQmlContext::PropertyPair *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QVariant *>(sipForceConvertToType(sipPy,sipType_QVariant,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->value = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QQmlContext_PropertyPair[] = {
    {InstanceVariable, sipName_name, (PyMethodDef *)varget_QQmlContext_PropertyPair_name, (PyMethodDef *)varset_QQmlContext_PropertyPair_name, NULL, NULL},
    {InstanceVariable, sipName_value, (PyMethodDef *)varget_QQmlContext_PropertyPair_value, (PyMethodDef *)varset_QQmlContext_PropertyPair_value, NULL, NULL},
};

PyDoc_STRVAR(doc_QQmlContext_PropertyPair, "\1QQmlContext.PropertyPair()\n"
"QQmlContext.PropertyPair(QQmlContext.PropertyPair)");


static pyqt5ClassPluginDef plugin_QQmlContext_PropertyPair = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQml_QQmlContext_PropertyPair = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QQmlContext__PropertyPair,
        {0},
        &plugin_QQmlContext_PropertyPair
    },
    {
        sipNameNr_PropertyPair,
        {15, 255, 0},
        0, 0,
        0, 0,
        2, variables_QQmlContext_PropertyPair,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlContext_PropertyPair,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlContext_PropertyPair,
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
    dealloc_QQmlContext_PropertyPair,
    assign_QQmlContext_PropertyPair,
    array_QQmlContext_PropertyPair,
    copy_QQmlContext_PropertyPair,
    release_QQmlContext_PropertyPair,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
