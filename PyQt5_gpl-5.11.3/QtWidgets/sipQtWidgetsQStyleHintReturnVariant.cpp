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

#line 1035 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleHintReturnVariant.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQStyleHintReturnVariant.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleHintReturnVariant(void *, const sipTypeDef *);}
static void *cast_QStyleHintReturnVariant(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipCppV);

    if (targetType == sipType_QStyleHintReturn)
        return static_cast< ::QStyleHintReturn *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturnVariant(void *, int);}
static void release_QStyleHintReturnVariant(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleHintReturnVariant *>(sipCppV);
}


extern "C" {static void assign_QStyleHintReturnVariant(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleHintReturnVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleHintReturnVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleHintReturnVariant *>(sipSrc);
}


extern "C" {static void *array_QStyleHintReturnVariant(SIP_SSIZE_T);}
static void *array_QStyleHintReturnVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleHintReturnVariant[sipNrElem];
}


extern "C" {static void *copy_QStyleHintReturnVariant(const void *, SIP_SSIZE_T);}
static void *copy_QStyleHintReturnVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleHintReturnVariant(reinterpret_cast<const  ::QStyleHintReturnVariant *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleHintReturnVariant(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleHintReturnVariant *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleHintReturnVariant();

            return sipCpp;
        }
    }

    {
        const  ::QStyleHintReturnVariant* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleHintReturnVariant, &a0))
        {
            sipCpp = new  ::QStyleHintReturnVariant(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleHintReturnVariant[] = {{302, 255, 1}};

static sipEnumMemberDef enummembers_QStyleHintReturnVariant[] = {
    {sipName_Type, static_cast<int>( ::QStyleHintReturnVariant::Type), 310},
    {sipName_Version, static_cast<int>( ::QStyleHintReturnVariant::Version), 311},
};


extern "C" {static PyObject *varget_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *, PyObject *)
{
     ::QVariant*sipVal;
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipSelf);

    sipVal = &sipCpp->variant;

    return sipConvertFromType(sipVal, sipType_QVariant, NULL);
}


extern "C" {static int varset_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QVariant*sipVal;
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QVariant *>(sipForceConvertToType(sipPy,sipType_QVariant,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->variant = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QStyleHintReturnVariant[] = {
    {InstanceVariable, sipName_variant, (PyMethodDef *)varget_QStyleHintReturnVariant_variant, (PyMethodDef *)varset_QStyleHintReturnVariant_variant, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleHintReturnVariant, "\1QStyleHintReturnVariant()\n"
"QStyleHintReturnVariant(QStyleHintReturnVariant)");


static pyqt5ClassPluginDef plugin_QStyleHintReturnVariant = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleHintReturnVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturnVariant,
        {0},
        &plugin_QStyleHintReturnVariant
    },
    {
        sipNameNr_QStyleHintReturnVariant,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleHintReturnVariant,
        1, variables_QStyleHintReturnVariant,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleHintReturnVariant,
    -1,
    -1,
    supers_QStyleHintReturnVariant,
    0,
    init_type_QStyleHintReturnVariant,
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
    dealloc_QStyleHintReturnVariant,
    assign_QStyleHintReturnVariant,
    array_QStyleHintReturnVariant,
    copy_QStyleHintReturnVariant,
    release_QStyleHintReturnVariant,
    cast_QStyleHintReturnVariant,
    0,
    0,
    0,
    0,
    0,
    0
};
