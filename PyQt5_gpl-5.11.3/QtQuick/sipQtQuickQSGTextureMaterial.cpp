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

#line 55 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgtexturematerial.sip"
#include <qsgtexturematerial.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"
#line 158 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgtexture.sip"
#include <qsgtexture.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"
#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"
#line 165 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQuick/sipQtQuickQSGTextureMaterial.cpp"


class sipQSGTextureMaterial : public  ::QSGTextureMaterial
{
public:
    sipQSGTextureMaterial();
    virtual ~sipQSGTextureMaterial();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int compare(const  ::QSGMaterial*) const;
     ::QSGMaterialShader* createShader() const;
     ::QSGMaterialType* type() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGTextureMaterial(const sipQSGTextureMaterial &);
    sipQSGTextureMaterial &operator = (const sipQSGTextureMaterial &);

    char sipPyMethods[3];
};

sipQSGTextureMaterial::sipQSGTextureMaterial():  ::QSGTextureMaterial(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGTextureMaterial::~sipQSGTextureMaterial()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

int sipQSGTextureMaterial::compare(const  ::QSGMaterial*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_compare);

    if (!sipMeth)
        return  ::QSGTextureMaterial::compare(a0);

    extern int sipVH_QtQuick_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QSGMaterial*);

    return sipVH_QtQuick_55(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QSGMaterialShader* sipQSGTextureMaterial::createShader() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_createShader);

    if (!sipMeth)
        return  ::QSGTextureMaterial::createShader();

    extern  ::QSGMaterialShader* sipVH_QtQuick_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_54(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSGMaterialType* sipQSGTextureMaterial::type() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_type);

    if (!sipMeth)
        return  ::QSGTextureMaterial::type();

    extern  ::QSGMaterialType* sipVH_QtQuick_53(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_53(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGTextureMaterial_type, "type(self) -> QSGMaterialType");

extern "C" {static PyObject *meth_QSGTextureMaterial_type(PyObject *, PyObject *);}
static PyObject *meth_QSGTextureMaterial_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QSGTextureMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTextureMaterial, &sipCpp))
        {
             ::QSGMaterialType*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QSGTextureMaterial::type() : sipCpp->type());

            return sipConvertFromType(sipRes,sipType_QSGMaterialType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTextureMaterial, sipName_type, doc_QSGTextureMaterial_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSGTextureMaterial_createShader, "createShader(self) -> QSGMaterialShader");

extern "C" {static PyObject *meth_QSGTextureMaterial_createShader(PyObject *, PyObject *);}
static PyObject *meth_QSGTextureMaterial_createShader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QSGTextureMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGTextureMaterial, &sipCpp))
        {
             ::QSGMaterialShader*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QSGTextureMaterial::createShader() : sipCpp->createShader());

            return sipConvertFromNewType(sipRes,sipType_QSGMaterialShader,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGTextureMaterial, sipName_createShader, doc_QSGTextureMaterial_createShader);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSGTextureMaterial(void *, const sipTypeDef *);}
static void *cast_QSGTextureMaterial(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSGTextureMaterial *sipCpp = reinterpret_cast< ::QSGTextureMaterial *>(sipCppV);

    if (targetType == sipType_QSGOpaqueTextureMaterial)
        return static_cast< ::QSGOpaqueTextureMaterial *>(sipCpp);

    if (targetType == sipType_QSGMaterial)
        return static_cast< ::QSGMaterial *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGTextureMaterial(void *, int);}
static void release_QSGTextureMaterial(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGTextureMaterial *>(sipCppV);
    else
        delete reinterpret_cast< ::QSGTextureMaterial *>(sipCppV);
}


extern "C" {static void dealloc_QSGTextureMaterial(sipSimpleWrapper *);}
static void dealloc_QSGTextureMaterial(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSGTextureMaterial *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSGTextureMaterial(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSGTextureMaterial(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGTextureMaterial(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGTextureMaterial *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGTextureMaterial();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGTextureMaterial[] = {{70, 255, 1}};


static PyMethodDef methods_QSGTextureMaterial[] = {
    {SIP_MLNAME_CAST(sipName_createShader), meth_QSGTextureMaterial_createShader, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTextureMaterial_createShader)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSGTextureMaterial_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGTextureMaterial_type)}
};

PyDoc_STRVAR(doc_QSGTextureMaterial, "\1QSGTextureMaterial()");


static pyqt5ClassPluginDef plugin_QSGTextureMaterial = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QSGTextureMaterial = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSGTextureMaterial,
        {0},
        &plugin_QSGTextureMaterial
    },
    {
        sipNameNr_QSGTextureMaterial,
        {0, 0, 1},
        2, methods_QSGTextureMaterial,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGTextureMaterial,
    -1,
    -1,
    supers_QSGTextureMaterial,
    0,
    init_type_QSGTextureMaterial,
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
    dealloc_QSGTextureMaterial,
    0,
    0,
    0,
    release_QSGTextureMaterial,
    cast_QSGTextureMaterial,
    0,
    0,
    0,
    0,
    0,
    0
};