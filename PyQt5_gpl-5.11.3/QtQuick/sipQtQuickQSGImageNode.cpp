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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgimagenode.sip"
#include <qsgimagenode.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgtexture.sip"
#include <qsgtexture.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgimagenode.sip"
#include <qsgimagenode.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"


PyDoc_STRVAR(doc_QSGImageNode_setRect, "setRect(self, QRectF)\n"
"setRect(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGImageNode_setRect(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QRectF* a0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGImageNode, &sipCpp, sipType_QRectF, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setRect);
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
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QSGImageNode, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setRect(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setRect, doc_QSGImageNode_setRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGImageNode_rect(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QRectF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_rect);
                return NULL;
            }

            sipRes = new  ::QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_rect, doc_QSGImageNode_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setSourceRect, "setSourceRect(self, QRectF)\n"
"setSourceRect(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGImageNode_setSourceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setSourceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QRectF* a0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGImageNode, &sipCpp, sipType_QRectF, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setSourceRect);
                return NULL;
            }

            sipCpp->setSourceRect(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QSGImageNode, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setSourceRect(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setSourceRect, doc_QSGImageNode_setSourceRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_sourceRect, "sourceRect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGImageNode_sourceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_sourceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QRectF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_sourceRect);
                return NULL;
            }

            sipRes = new  ::QRectF(sipCpp->sourceRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_sourceRect, doc_QSGImageNode_sourceRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setTexture, "setTexture(self, QSGTexture)");

extern "C" {static PyObject *meth_QSGImageNode_setTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QSGTexture* a0;
        PyObject *a0Wrapper;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGImageNode, &sipCpp, &a0Wrapper, sipType_QSGTexture, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setTexture);
                return NULL;
            }

#line 41 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgimagenode.sip"
        sipCpp->setTexture(a0);
        
        if (sipCpp->ownsTexture())
            sipTransferTo(a0Wrapper, sipSelf);
#line 260 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGImageNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setTexture, doc_QSGImageNode_setTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_texture, "texture(self) -> QSGTexture");

extern "C" {static PyObject *meth_QSGImageNode_texture(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QSGTexture*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_texture);
                return NULL;
            }

            sipRes = sipCpp->texture();

            return sipConvertFromType(sipRes,sipType_QSGTexture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_texture, doc_QSGImageNode_texture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setFiltering, "setFiltering(self, QSGTexture.Filtering)");

extern "C" {static PyObject *meth_QSGImageNode_setFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QSGTexture::Filtering a0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGImageNode, &sipCpp, sipType_QSGTexture_Filtering, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setFiltering);
                return NULL;
            }

            sipCpp->setFiltering(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setFiltering, doc_QSGImageNode_setFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_filtering, "filtering(self) -> QSGTexture.Filtering");

extern "C" {static PyObject *meth_QSGImageNode_filtering(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_filtering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QSGTexture::Filtering sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_filtering);
                return NULL;
            }

            sipRes = sipCpp->filtering();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSGTexture_Filtering);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_filtering, doc_QSGImageNode_filtering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setMipmapFiltering, "setMipmapFiltering(self, QSGTexture.Filtering)");

extern "C" {static PyObject *meth_QSGImageNode_setMipmapFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setMipmapFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QSGTexture::Filtering a0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGImageNode, &sipCpp, sipType_QSGTexture_Filtering, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setMipmapFiltering);
                return NULL;
            }

            sipCpp->setMipmapFiltering(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setMipmapFiltering, doc_QSGImageNode_setMipmapFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_mipmapFiltering, "mipmapFiltering(self) -> QSGTexture.Filtering");

extern "C" {static PyObject *meth_QSGImageNode_mipmapFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_mipmapFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QSGTexture::Filtering sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_mipmapFiltering);
                return NULL;
            }

            sipRes = sipCpp->mipmapFiltering();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSGTexture_Filtering);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_mipmapFiltering, doc_QSGImageNode_mipmapFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setTextureCoordinatesTransform, "setTextureCoordinatesTransform(self, Union[QSGImageNode.TextureCoordinatesTransformMode, QSGImageNode.TextureCoordinatesTransformFlag])");

extern "C" {static PyObject *meth_QSGImageNode_setTextureCoordinatesTransform(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setTextureCoordinatesTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QSGImageNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSGImageNode, &sipCpp, sipType_QSGImageNode_TextureCoordinatesTransformMode, &a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setTextureCoordinatesTransform);
                return NULL;
            }

            sipCpp->setTextureCoordinatesTransform(*a0);
            sipReleaseType(a0,sipType_QSGImageNode_TextureCoordinatesTransformMode,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setTextureCoordinatesTransform, doc_QSGImageNode_setTextureCoordinatesTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_textureCoordinatesTransform, "textureCoordinatesTransform(self) -> QSGImageNode.TextureCoordinatesTransformMode");

extern "C" {static PyObject *meth_QSGImageNode_textureCoordinatesTransform(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_textureCoordinatesTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
             ::QSGImageNode::TextureCoordinatesTransformMode*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_textureCoordinatesTransform);
                return NULL;
            }

            sipRes = new  ::QSGImageNode::TextureCoordinatesTransformMode(sipCpp->textureCoordinatesTransform());

            return sipConvertFromNewType(sipRes,sipType_QSGImageNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_textureCoordinatesTransform, doc_QSGImageNode_textureCoordinatesTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_setOwnsTexture, "setOwnsTexture(self, bool)");

extern "C" {static PyObject *meth_QSGImageNode_setOwnsTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_setOwnsTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        bool a0;
         ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSGImageNode, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_setOwnsTexture);
                return NULL;
            }

            sipCpp->setOwnsTexture(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_setOwnsTexture, doc_QSGImageNode_setOwnsTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_ownsTexture, "ownsTexture(self) -> bool");

extern "C" {static PyObject *meth_QSGImageNode_ownsTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_ownsTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSGImageNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGImageNode, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGImageNode, sipName_ownsTexture);
                return NULL;
            }

            sipRes = sipCpp->ownsTexture();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_ownsTexture, doc_QSGImageNode_ownsTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGImageNode_rebuildGeometry, "rebuildGeometry(QSGGeometry, QSGTexture, QRectF, QRectF, Union[QSGImageNode.TextureCoordinatesTransformMode, QSGImageNode.TextureCoordinatesTransformFlag])");

extern "C" {static PyObject *meth_QSGImageNode_rebuildGeometry(PyObject *, PyObject *);}
static PyObject *meth_QSGImageNode_rebuildGeometry(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGGeometry* a0;
         ::QSGTexture* a1;
        const  ::QRectF* a2;
         ::QRectF* a3;
         ::QSGImageNode::TextureCoordinatesTransformMode* a4;
        int a4State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J8J9J9J1", sipType_QSGGeometry, &a0, sipType_QSGTexture, &a1, sipType_QRectF, &a2, sipType_QRectF, &a3, sipType_QSGImageNode_TextureCoordinatesTransformMode, &a4, &a4State))
        {
             ::QSGImageNode::rebuildGeometry(a0,a1,*a2,*a3,*a4);
            sipReleaseType(a4,sipType_QSGImageNode_TextureCoordinatesTransformMode,a4State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGImageNode, sipName_rebuildGeometry, doc_QSGImageNode_rebuildGeometry);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSGImageNode(void *, const sipTypeDef *);}
static void *cast_QSGImageNode(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSGImageNode *sipCpp = reinterpret_cast< ::QSGImageNode *>(sipCppV);

    if (targetType == sipType_QSGGeometryNode)
        return static_cast< ::QSGGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGBasicGeometryNode)
        return static_cast< ::QSGBasicGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGNode)
        return static_cast< ::QSGNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGImageNode(void *, int);}
static void release_QSGImageNode(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSGImageNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGImageNode(sipSimpleWrapper *);}
static void dealloc_QSGImageNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGImageNode(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGImageNode[] = {{51, 255, 1}};


static PyMethodDef methods_QSGImageNode[] = {
    {SIP_MLNAME_CAST(sipName_filtering), meth_QSGImageNode_filtering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_filtering)},
    {SIP_MLNAME_CAST(sipName_mipmapFiltering), meth_QSGImageNode_mipmapFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_mipmapFiltering)},
    {SIP_MLNAME_CAST(sipName_ownsTexture), meth_QSGImageNode_ownsTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_ownsTexture)},
    {SIP_MLNAME_CAST(sipName_rebuildGeometry), meth_QSGImageNode_rebuildGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_rebuildGeometry)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QSGImageNode_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_rect)},
    {SIP_MLNAME_CAST(sipName_setFiltering), meth_QSGImageNode_setFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setFiltering)},
    {SIP_MLNAME_CAST(sipName_setMipmapFiltering), meth_QSGImageNode_setMipmapFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setMipmapFiltering)},
    {SIP_MLNAME_CAST(sipName_setOwnsTexture), meth_QSGImageNode_setOwnsTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setOwnsTexture)},
    {SIP_MLNAME_CAST(sipName_setRect), meth_QSGImageNode_setRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setRect)},
    {SIP_MLNAME_CAST(sipName_setSourceRect), meth_QSGImageNode_setSourceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setSourceRect)},
    {SIP_MLNAME_CAST(sipName_setTexture), meth_QSGImageNode_setTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setTexture)},
    {SIP_MLNAME_CAST(sipName_setTextureCoordinatesTransform), meth_QSGImageNode_setTextureCoordinatesTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_setTextureCoordinatesTransform)},
    {SIP_MLNAME_CAST(sipName_sourceRect), meth_QSGImageNode_sourceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_sourceRect)},
    {SIP_MLNAME_CAST(sipName_texture), meth_QSGImageNode_texture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_texture)},
    {SIP_MLNAME_CAST(sipName_textureCoordinatesTransform), meth_QSGImageNode_textureCoordinatesTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGImageNode_textureCoordinatesTransform)}
};

static sipEnumMemberDef enummembers_QSGImageNode[] = {
    {sipName_MirrorHorizontally, static_cast<int>( ::QSGImageNode::MirrorHorizontally), 53},
    {sipName_MirrorVertically, static_cast<int>( ::QSGImageNode::MirrorVertically), 53},
    {sipName_NoTransform, static_cast<int>( ::QSGImageNode::NoTransform), 53},
};


static pyqt5ClassPluginDef plugin_QSGImageNode = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGImageNode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGImageNode,
        {0},
        &plugin_QSGImageNode
    },
    {
        sipNameNr_QSGImageNode,
        {0, 0, 1},
        15, methods_QSGImageNode,
        3, enummembers_QSGImageNode,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSGImageNode,
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
    dealloc_QSGImageNode,
    0,
    0,
    0,
    release_QSGImageNode,
    cast_QSGImageNode,
    0,
    0,
    0,
    0,
    0,
    0
};