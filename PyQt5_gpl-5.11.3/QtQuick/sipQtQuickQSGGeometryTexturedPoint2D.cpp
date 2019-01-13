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
#line 248 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGGeometryTexturedPoint2D.cpp"



PyDoc_STRVAR(doc_QSGGeometry_TexturedPoint2D_set, "set(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGGeometry_TexturedPoint2D_set(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_TexturedPoint2D_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        float a1;
        float a2;
        float a3;
         ::QSGGeometry::TexturedPoint2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bffff", &sipSelf, sipType_QSGGeometry_TexturedPoint2D, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->set(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TexturedPoint2D, sipName_set, doc_QSGGeometry_TexturedPoint2D_set);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry_TexturedPoint2D(void *, int);}
static void release_QSGGeometry_TexturedPoint2D(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipCppV);
}


extern "C" {static void assign_QSGGeometry_TexturedPoint2D(void *, SIP_SSIZE_T, void *);}
static void assign_QSGGeometry_TexturedPoint2D(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSrc);
}


extern "C" {static void *array_QSGGeometry_TexturedPoint2D(SIP_SSIZE_T);}
static void *array_QSGGeometry_TexturedPoint2D(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSGGeometry::TexturedPoint2D[sipNrElem];
}


extern "C" {static void *copy_QSGGeometry_TexturedPoint2D(const void *, SIP_SSIZE_T);}
static void *copy_QSGGeometry_TexturedPoint2D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSGGeometry::TexturedPoint2D(reinterpret_cast<const  ::QSGGeometry::TexturedPoint2D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGGeometry_TexturedPoint2D(sipSimpleWrapper *);}
static void dealloc_QSGGeometry_TexturedPoint2D(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGGeometry_TexturedPoint2D(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSGGeometry_TexturedPoint2D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry_TexturedPoint2D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSGGeometry::TexturedPoint2D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QSGGeometry::TexturedPoint2D();

            return sipCpp;
        }
    }

    {
        const  ::QSGGeometry::TexturedPoint2D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometry_TexturedPoint2D, &a0))
        {
            sipCpp = new  ::QSGGeometry::TexturedPoint2D(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGGeometry_TexturedPoint2D[] = {
    {SIP_MLNAME_CAST(sipName_set), meth_QSGGeometry_TexturedPoint2D_set, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_TexturedPoint2D_set)}
};


extern "C" {static PyObject *varget_QSGGeometry_TexturedPoint2D_tx(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_TexturedPoint2D_tx(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = sipCpp->tx;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_TexturedPoint2D_tx(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_TexturedPoint2D_tx(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->tx = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_TexturedPoint2D_ty(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_TexturedPoint2D_ty(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = sipCpp->ty;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_TexturedPoint2D_ty(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_TexturedPoint2D_ty(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->ty = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_TexturedPoint2D_x(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_TexturedPoint2D_x(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_TexturedPoint2D_x(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_TexturedPoint2D_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_TexturedPoint2D_y(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_TexturedPoint2D_y(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_TexturedPoint2D_y(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_TexturedPoint2D_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
     ::QSGGeometry::TexturedPoint2D *sipCpp = reinterpret_cast< ::QSGGeometry::TexturedPoint2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_QSGGeometry_TexturedPoint2D[] = {
    {InstanceVariable, sipName_tx, (PyMethodDef *)varget_QSGGeometry_TexturedPoint2D_tx, (PyMethodDef *)varset_QSGGeometry_TexturedPoint2D_tx, NULL, NULL},
    {InstanceVariable, sipName_ty, (PyMethodDef *)varget_QSGGeometry_TexturedPoint2D_ty, (PyMethodDef *)varset_QSGGeometry_TexturedPoint2D_ty, NULL, NULL},
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_QSGGeometry_TexturedPoint2D_x, (PyMethodDef *)varset_QSGGeometry_TexturedPoint2D_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_QSGGeometry_TexturedPoint2D_y, (PyMethodDef *)varset_QSGGeometry_TexturedPoint2D_y, NULL, NULL},
};

PyDoc_STRVAR(doc_QSGGeometry_TexturedPoint2D, "\1QSGGeometry.TexturedPoint2D()\n"
"QSGGeometry.TexturedPoint2D(QSGGeometry.TexturedPoint2D)");


static pyqt5ClassPluginDef plugin_QSGGeometry_TexturedPoint2D = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGGeometry_TexturedPoint2D = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry__TexturedPoint2D,
        {0},
        &plugin_QSGGeometry_TexturedPoint2D
    },
    {
        sipNameNr_TexturedPoint2D,
        {41, 255, 0},
        1, methods_QSGGeometry_TexturedPoint2D,
        0, 0,
        4, variables_QSGGeometry_TexturedPoint2D,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry_TexturedPoint2D,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGGeometry_TexturedPoint2D,
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
    dealloc_QSGGeometry_TexturedPoint2D,
    assign_QSGGeometry_TexturedPoint2D,
    array_QSGGeometry_TexturedPoint2D,
    copy_QSGGeometry_TexturedPoint2D,
    release_QSGGeometry_TexturedPoint2D,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
