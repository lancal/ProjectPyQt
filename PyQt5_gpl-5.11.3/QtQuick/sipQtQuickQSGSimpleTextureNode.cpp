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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgsimpletexturenode.sip"
#include <qsgsimpletexturenode.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"

#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgsimpletexturenode.sip"
#include <qsgsimpletexturenode.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgtexture.sip"
#include <qsgtexture.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGSimpleTextureNode.cpp"


class sipQSGSimpleTextureNode : public  ::QSGSimpleTextureNode
{
public:
    sipQSGSimpleTextureNode();
    virtual ~sipQSGSimpleTextureNode();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool isSubtreeBlocked() const;
    void preprocess();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGSimpleTextureNode(const sipQSGSimpleTextureNode &);
    sipQSGSimpleTextureNode &operator = (const sipQSGSimpleTextureNode &);

    char sipPyMethods[2];
};

sipQSGSimpleTextureNode::sipQSGSimpleTextureNode():  ::QSGSimpleTextureNode(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGSimpleTextureNode::~sipQSGSimpleTextureNode()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQSGSimpleTextureNode::isSubtreeBlocked() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_isSubtreeBlocked);

    if (!sipMeth)
        return  ::QSGSimpleTextureNode::isSubtreeBlocked();

    extern bool sipVH_QtQuick_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_9(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQSGSimpleTextureNode::preprocess()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_preprocess);

    if (!sipMeth)
    {
         ::QSGSimpleTextureNode::preprocess();
        return;
    }

    extern void sipVH_QtQuick_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtQuick_6(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setRect, "setRect(self, QRectF)\n"
"setRect(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setRect(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRectF* a0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, sipType_QRectF, &a0))
        {
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
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setRect(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setRect, doc_QSGSimpleTextureNode_setRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_rect(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_rect, doc_QSGSimpleTextureNode_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setTexture, "setTexture(self, QSGTexture)");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGTexture* a0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, sipType_QSGTexture, &a0))
        {
            sipCpp->setTexture(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setTexture, doc_QSGSimpleTextureNode_setTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_texture, "texture(self) -> QSGTexture");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_texture(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
             ::QSGTexture*sipRes;

            sipRes = sipCpp->texture();

            return sipConvertFromType(sipRes,sipType_QSGTexture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_texture, doc_QSGSimpleTextureNode_texture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setFiltering, "setFiltering(self, QSGTexture.Filtering)");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setFiltering(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setFiltering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGTexture::Filtering a0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, sipType_QSGTexture_Filtering, &a0))
        {
            sipCpp->setFiltering(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setFiltering, doc_QSGSimpleTextureNode_setFiltering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_filtering, "filtering(self) -> QSGTexture.Filtering");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_filtering(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_filtering(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
             ::QSGTexture::Filtering sipRes;

            sipRes = sipCpp->filtering();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSGTexture_Filtering);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_filtering, doc_QSGSimpleTextureNode_filtering);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setTextureCoordinatesTransform, "setTextureCoordinatesTransform(self, Union[QSGSimpleTextureNode.TextureCoordinatesTransformMode, QSGSimpleTextureNode.TextureCoordinatesTransformFlag])");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setTextureCoordinatesTransform(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setTextureCoordinatesTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSGSimpleTextureNode::TextureCoordinatesTransformMode* a0;
        int a0State = 0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode, &a0, &a0State))
        {
            sipCpp->setTextureCoordinatesTransform(*a0);
            sipReleaseType(a0,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setTextureCoordinatesTransform, doc_QSGSimpleTextureNode_setTextureCoordinatesTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_textureCoordinatesTransform, "textureCoordinatesTransform(self) -> QSGSimpleTextureNode.TextureCoordinatesTransformMode");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_textureCoordinatesTransform(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_textureCoordinatesTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
             ::QSGSimpleTextureNode::TextureCoordinatesTransformMode*sipRes;

            sipRes = new  ::QSGSimpleTextureNode::TextureCoordinatesTransformMode(sipCpp->textureCoordinatesTransform());

            return sipConvertFromNewType(sipRes,sipType_QSGSimpleTextureNode_TextureCoordinatesTransformMode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_textureCoordinatesTransform, doc_QSGSimpleTextureNode_textureCoordinatesTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setOwnsTexture, "setOwnsTexture(self, bool)");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setOwnsTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setOwnsTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, &a0))
        {
            sipCpp->setOwnsTexture(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setOwnsTexture, doc_QSGSimpleTextureNode_setOwnsTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_ownsTexture, "ownsTexture(self) -> bool");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_ownsTexture(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_ownsTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ownsTexture();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_ownsTexture, doc_QSGSimpleTextureNode_ownsTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_setSourceRect, "setSourceRect(self, QRectF)\n"
"setSourceRect(self, float, float, float, float)");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_setSourceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_setSourceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRectF* a0;
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, sipType_QRectF, &a0))
        {
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
         ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setSourceRect(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_setSourceRect, doc_QSGSimpleTextureNode_setSourceRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGSimpleTextureNode_sourceRect, "sourceRect(self) -> QRectF");

extern "C" {static PyObject *meth_QSGSimpleTextureNode_sourceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGSimpleTextureNode_sourceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSGSimpleTextureNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGSimpleTextureNode, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->sourceRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGSimpleTextureNode, sipName_sourceRect, doc_QSGSimpleTextureNode_sourceRect);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSGSimpleTextureNode(void *, const sipTypeDef *);}
static void *cast_QSGSimpleTextureNode(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSGSimpleTextureNode *sipCpp = reinterpret_cast< ::QSGSimpleTextureNode *>(sipCppV);

    if (targetType == sipType_QSGGeometryNode)
        return static_cast< ::QSGGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGBasicGeometryNode)
        return static_cast< ::QSGBasicGeometryNode *>(sipCpp);

    if (targetType == sipType_QSGNode)
        return static_cast< ::QSGNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGSimpleTextureNode(void *, int);}
static void release_QSGSimpleTextureNode(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGSimpleTextureNode *>(sipCppV);
    else
        delete reinterpret_cast< ::QSGSimpleTextureNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGSimpleTextureNode(sipSimpleWrapper *);}
static void dealloc_QSGSimpleTextureNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSGSimpleTextureNode *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGSimpleTextureNode(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSGSimpleTextureNode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGSimpleTextureNode(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGSimpleTextureNode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGSimpleTextureNode();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGSimpleTextureNode[] = {{51, 255, 1}};


static PyMethodDef methods_QSGSimpleTextureNode[] = {
    {SIP_MLNAME_CAST(sipName_filtering), meth_QSGSimpleTextureNode_filtering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_filtering)},
    {SIP_MLNAME_CAST(sipName_ownsTexture), meth_QSGSimpleTextureNode_ownsTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_ownsTexture)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QSGSimpleTextureNode_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_rect)},
    {SIP_MLNAME_CAST(sipName_setFiltering), meth_QSGSimpleTextureNode_setFiltering, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setFiltering)},
    {SIP_MLNAME_CAST(sipName_setOwnsTexture), meth_QSGSimpleTextureNode_setOwnsTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setOwnsTexture)},
    {SIP_MLNAME_CAST(sipName_setRect), meth_QSGSimpleTextureNode_setRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setRect)},
    {SIP_MLNAME_CAST(sipName_setSourceRect), meth_QSGSimpleTextureNode_setSourceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setSourceRect)},
    {SIP_MLNAME_CAST(sipName_setTexture), meth_QSGSimpleTextureNode_setTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setTexture)},
    {SIP_MLNAME_CAST(sipName_setTextureCoordinatesTransform), meth_QSGSimpleTextureNode_setTextureCoordinatesTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_setTextureCoordinatesTransform)},
    {SIP_MLNAME_CAST(sipName_sourceRect), meth_QSGSimpleTextureNode_sourceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_sourceRect)},
    {SIP_MLNAME_CAST(sipName_texture), meth_QSGSimpleTextureNode_texture, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_texture)},
    {SIP_MLNAME_CAST(sipName_textureCoordinatesTransform), meth_QSGSimpleTextureNode_textureCoordinatesTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGSimpleTextureNode_textureCoordinatesTransform)}
};

static sipEnumMemberDef enummembers_QSGSimpleTextureNode[] = {
    {sipName_MirrorHorizontally, static_cast<int>( ::QSGSimpleTextureNode::MirrorHorizontally), 88},
    {sipName_MirrorVertically, static_cast<int>( ::QSGSimpleTextureNode::MirrorVertically), 88},
    {sipName_NoTransform, static_cast<int>( ::QSGSimpleTextureNode::NoTransform), 88},
};

PyDoc_STRVAR(doc_QSGSimpleTextureNode, "\1QSGSimpleTextureNode()");


static pyqt5ClassPluginDef plugin_QSGSimpleTextureNode = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGSimpleTextureNode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGSimpleTextureNode,
        {0},
        &plugin_QSGSimpleTextureNode
    },
    {
        sipNameNr_QSGSimpleTextureNode,
        {0, 0, 1},
        12, methods_QSGSimpleTextureNode,
        3, enummembers_QSGSimpleTextureNode,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGSimpleTextureNode,
    -1,
    -1,
    supers_QSGSimpleTextureNode,
    0,
    init_type_QSGSimpleTextureNode,
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
    dealloc_QSGSimpleTextureNode,
    0,
    0,
    0,
    release_QSGSimpleTextureNode,
    cast_QSGSimpleTextureNode,
    0,
    0,
    0,
    0,
    0,
    0
};
