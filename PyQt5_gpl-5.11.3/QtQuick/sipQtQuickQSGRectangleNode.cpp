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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgrectanglenode.sip"
#include <qsgrectanglenode.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"

#line 26 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGRectangleNode.cpp"


PyDoc_STRVAR(doc_QSGRectangleNode_setRect, "setRect(self, QRectF)\n"
"setRect(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGRectangleNode_setRect(PyObject *, PyObject *);}
static PyObject *meth_QSGRectangleNode_setRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QRectF* a0;
         ::QSGRectangleNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGRectangleNode, &sipCpp, sipType_QRectF, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGRectangleNode, sipName_setRect);
                return NULL;
            }

            sipCpp->setRect(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::QSGRectangleNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QSGRectangleNode, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setRect(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGRectangleNode, sipName_setRect, doc_QSGRectangleNode_setRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGRectangleNode_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGRectangleNode_rect(PyObject *, PyObject *);}
static PyObject *meth_QSGRectangleNode_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGRectangleNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGRectangleNode, &sipCpp))
        {
             ::QRectF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGRectangleNode, sipName_rect);
                return NULL;
            }

            sipRes = new  ::QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGRectangleNode, sipName_rect, doc_QSGRectangleNode_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGRectangleNode_setColor, "setColor(self, Union[QColor, Qt.GlobalColor])");

extern "C" {static PyObject *meth_QSGRectangleNode_setColor(PyObject *, PyObject *);}
static PyObject *meth_QSGRectangleNode_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QSGRectangleNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSGRectangleNode, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGRectangleNode, sipName_setColor);
                return NULL;
            }

            sipCpp->setColor(*a0);
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGRectangleNode, sipName_setColor, doc_QSGRectangleNode_setColor);

    return NULL;
}


PyDoc_STRVAR(doc_QSGRectangleNode_color, "color(self) -> QColor");

extern "C" {static PyObject *meth_QSGRectangleNode_color(PyObject *, PyObject *);}
static PyObject *meth_QSGRectangleNode_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGRectangleNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGRectangleNode, &sipCpp))
        {
             ::QColor*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGRectangleNode, sipName_color);
                return NULL;
            }

            sipRes = new  ::QColor(sipCpp->color());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGRectangleNode, sipName_color, doc_QSGRectangleNode_color);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSGRectangleNode(void *, const sipTypeDef *);}
static void *cast_QSGRectangleNode(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSGRectangleNode *sipCpp = reinterpret_cast< ::QSGRectangleNode *>(sipCppV);

    if (targetType == sipType_QSGGeometryNode)
        return static_cast< ::QSGGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGBasicGeometryNode)
        return static_cast< ::QSGBasicGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGNode)
        return static_cast< ::QSGNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGRectangleNode(void *, int);}
static void release_QSGRectangleNode(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGRectangleNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGRectangleNode(sipSimpleWrapper *);}
static void dealloc_QSGRectangleNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGRectangleNode(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGRectangleNode[] = {{51, 255, 1}};


static PyMethodDef methods_QSGRectangleNode[] = {
    {SIP_MLNAME_CAST(sipName_color), meth_QSGRectangleNode_color, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGRectangleNode_color)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QSGRectangleNode_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGRectangleNode_rect)},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QSGRectangleNode_setColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGRectangleNode_setColor)},
    {SIP_MLNAME_CAST(sipName_setRect), meth_QSGRectangleNode_setRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGRectangleNode_setRect)}
};


static pyqt5ClassPluginDef plugin_QSGRectangleNode = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGRectangleNode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGRectangleNode,
        {0},
        &plugin_QSGRectangleNode
    },
    {
        sipNameNr_QSGRectangleNode,
        {0, 0, 1},
        4, methods_QSGRectangleNode,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSGRectangleNode,
    0,
    0,
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
    dealloc_QSGRectangleNode,
    0,
    0,
    0,
    release_QSGRectangleNode,
    cast_QSGRectangleNode,
    0,
    0,
    0,
    0,
    0,
    0
};
