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

#include "sipAPIQtQuick.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 55 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGGeometryAttribute.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGGeometryAttribute.cpp"


PyDoc_STRVAR(doc_QSGGeometry_Attribute_create, "create(int, int, int, isPosition: bool = False) -> QSGGeometry.Attribute");

extern "C" {static PyObject *meth_QSGGeometry_Attribute_create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_Attribute_create(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
        bool a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_isPosition,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "iii|b", &a0, &a1, &a2, &a3))
        {
             ::QSGGeometry::Attribute*sipRes;

            sipRes = new  ::QSGGeometry::Attribute( ::QSGGeometry::Attribute::create(a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QSGGeometry_Attribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Attribute, sipName_create, doc_QSGGeometry_Attribute_create);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_Attribute_createWithAttributeType, "createWithAttributeType(int, int, int, QSGGeometry.AttributeType) -> QSGGeometry.Attribute");

extern "C" {static PyObject *meth_QSGGeometry_Attribute_createWithAttributeType(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_Attribute_createWithAttributeType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
         ::QSGGeometry::AttributeType a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "iiiE", &a0, &a1, &a2, sipType_QSGGeometry_AttributeType, &a3))
        {
             ::QSGGeometry::Attribute*sipRes;

            sipRes = new  ::QSGGeometry::Attribute( ::QSGGeometry::Attribute::createWithAttributeType(a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QSGGeometry_Attribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Attribute, sipName_createWithAttributeType, doc_QSGGeometry_Attribute_createWithAttributeType);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry_Attribute(void *, int);}
static void release_QSGGeometry_Attribute(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGGeometry::Attribute *>(sipCppV);
}


extern "C" {static void assign_QSGGeometry_Attribute(void *, SIP_SSIZE_T, void *);}
static void assign_QSGGeometry_Attribute(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGGeometry::Attribute *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGGeometry::Attribute *>(sipSrc);
}


extern "C" {static void *array_QSGGeometry_Attribute(SIP_SSIZE_T);}
static void *array_QSGGeometry_Attribute(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGGeometry::Attribute[sipNrElem];
}


extern "C" {static void *copy_QSGGeometry_Attribute(const void *, SIP_SSIZE_T);}
static void *copy_QSGGeometry_Attribute(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGGeometry::Attribute(reinterpret_cast<const  ::QSGGeometry::Attribute *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGGeometry_Attribute(sipSimpleWrapper *);}
static void dealloc_QSGGeometry_Attribute(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGGeometry_Attribute(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGGeometry_Attribute(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry_Attribute(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGGeometry::Attribute *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGGeometry::Attribute();

            return sipCpp;
        }
    }

    {
        const  ::QSGGeometry::Attribute* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometry_Attribute, &a0))
        {
            sipCpp = new  ::QSGGeometry::Attribute(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGGeometry_Attribute[] = {
    {SIP_MLNAME_CAST(sipName_create), (PyCFunction)meth_QSGGeometry_Attribute_create, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSGGeometry_Attribute_create)},
    {SIP_MLNAME_CAST(sipName_createWithAttributeType), meth_QSGGeometry_Attribute_createWithAttributeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_Attribute_createWithAttributeType)}
};


extern "C" {static PyObject *varget_QSGGeometry_Attribute_attributeType(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Attribute_attributeType(void *sipSelf, PyObject *, PyObject *)
{
     ::QSGGeometry::AttributeType sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipCpp->attributeType;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QSGGeometry_AttributeType);
}


extern "C" {static int varset_QSGGeometry_Attribute_attributeType(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Attribute_attributeType(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSGGeometry::AttributeType sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = ( ::QSGGeometry::AttributeType)sipConvertToEnum(sipPy, sipType_QSGGeometry_AttributeType);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->attributeType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_Attribute_isVertexCoordinate(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Attribute_isVertexCoordinate(void *sipSelf, PyObject *, PyObject *)
{
     ::uint sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipCpp->isVertexCoordinate;

    return PyLong_FromUnsignedLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_Attribute_isVertexCoordinate(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Attribute_isVertexCoordinate(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::uint sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipLong_AsUnsignedInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->isVertexCoordinate = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_Attribute_position(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Attribute_position(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipCpp->position;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_Attribute_position(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Attribute_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_Attribute_tupleSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Attribute_tupleSize(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipCpp->tupleSize;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_Attribute_tupleSize(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Attribute_tupleSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->tupleSize = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_Attribute_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Attribute_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipCpp->type;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_Attribute_type(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Attribute_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QSGGeometry::Attribute *sipCpp = reinterpret_cast< ::QSGGeometry::Attribute *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}

sipVariableDef variables_QSGGeometry_Attribute[] = {
    {InstanceVariable, sipName_attributeType, (PyMethodDef *)varget_QSGGeometry_Attribute_attributeType, (PyMethodDef *)varset_QSGGeometry_Attribute_attributeType, NULL, NULL},
    {InstanceVariable, sipName_isVertexCoordinate, (PyMethodDef *)varget_QSGGeometry_Attribute_isVertexCoordinate, (PyMethodDef *)varset_QSGGeometry_Attribute_isVertexCoordinate, NULL, NULL},
    {InstanceVariable, sipName_position, (PyMethodDef *)varget_QSGGeometry_Attribute_position, (PyMethodDef *)varset_QSGGeometry_Attribute_position, NULL, NULL},
    {InstanceVariable, sipName_tupleSize, (PyMethodDef *)varget_QSGGeometry_Attribute_tupleSize, (PyMethodDef *)varset_QSGGeometry_Attribute_tupleSize, NULL, NULL},
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QSGGeometry_Attribute_type, (PyMethodDef *)varset_QSGGeometry_Attribute_type, NULL, NULL},
};

PyDoc_STRVAR(doc_QSGGeometry_Attribute, "\1QSGGeometry.Attribute()\n"
"QSGGeometry.Attribute(QSGGeometry.Attribute)");


static pyqt5ClassPluginDef plugin_QSGGeometry_Attribute = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGGeometry_Attribute = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry__Attribute,
        {0},
        &plugin_QSGGeometry_Attribute
    },
    {
        sipNameNr_Attribute,
        {41, 255, 0},
        2, methods_QSGGeometry_Attribute,
        0, 0,
        5, variables_QSGGeometry_Attribute,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry_Attribute,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGGeometry_Attribute,
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
    dealloc_QSGGeometry_Attribute,
    assign_QSGGeometry_Attribute,
    array_QSGGeometry_Attribute,
    copy_QSGGeometry_Attribute,
    release_QSGGeometry_Attribute,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
