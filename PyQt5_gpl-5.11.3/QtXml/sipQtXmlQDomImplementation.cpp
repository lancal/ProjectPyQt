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

#include "sipAPIQtXml.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQDomImplementation.cpp"

#line 192 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQDomImplementation.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQDomImplementation.cpp"
#line 174 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQDomImplementation.cpp"


PyDoc_STRVAR(doc_QDomImplementation_hasFeature, "hasFeature(self, str, str) -> bool");

extern "C" {static PyObject *meth_QDomImplementation_hasFeature(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_hasFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->hasFeature(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_hasFeature, doc_QDomImplementation_hasFeature);

    return NULL;
}


PyDoc_STRVAR(doc_QDomImplementation_createDocumentType, "createDocumentType(self, str, str, str) -> QDomDocumentType");

extern "C" {static PyObject *meth_QDomImplementation_createDocumentType(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_createDocumentType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
         ::QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QDomDocumentType*sipRes;

            sipRes = new  ::QDomDocumentType(sipCpp->createDocumentType(*a0,*a1,*a2));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QDomDocumentType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_createDocumentType, doc_QDomImplementation_createDocumentType);

    return NULL;
}


PyDoc_STRVAR(doc_QDomImplementation_createDocument, "createDocument(self, str, str, QDomDocumentType) -> QDomDocument");

extern "C" {static PyObject *meth_QDomImplementation_createDocument(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_createDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDomDocumentType* a2;
         ::QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J9", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QDomDocumentType, &a2))
        {
             ::QDomDocument*sipRes;

            sipRes = new  ::QDomDocument(sipCpp->createDocument(*a0,*a1,*a2));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_createDocument, doc_QDomImplementation_createDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QDomImplementation_invalidDataPolicy, "invalidDataPolicy() -> QDomImplementation.InvalidDataPolicy");

extern "C" {static PyObject *meth_QDomImplementation_invalidDataPolicy(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_invalidDataPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QDomImplementation::InvalidDataPolicy sipRes;

            sipRes =  ::QDomImplementation::invalidDataPolicy();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDomImplementation_InvalidDataPolicy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_invalidDataPolicy, doc_QDomImplementation_invalidDataPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QDomImplementation_setInvalidDataPolicy, "setInvalidDataPolicy(QDomImplementation.InvalidDataPolicy)");

extern "C" {static PyObject *meth_QDomImplementation_setInvalidDataPolicy(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_setInvalidDataPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDomImplementation::InvalidDataPolicy a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QDomImplementation_InvalidDataPolicy, &a0))
        {
             ::QDomImplementation::setInvalidDataPolicy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_setInvalidDataPolicy, doc_QDomImplementation_setInvalidDataPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QDomImplementation_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QDomImplementation_isNull(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomImplementation, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_isNull, doc_QDomImplementation_isNull);

    return NULL;
}


extern "C" {static PyObject *slot_QDomImplementation___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDomImplementation___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDomImplementation *sipCpp = reinterpret_cast< ::QDomImplementation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomImplementation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDomImplementation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomImplementation, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QDomImplementation::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml, ne_slot, sipType_QDomImplementation, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDomImplementation___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDomImplementation___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDomImplementation *sipCpp = reinterpret_cast< ::QDomImplementation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomImplementation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDomImplementation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomImplementation, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QDomImplementation::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml, eq_slot, sipType_QDomImplementation, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomImplementation(void *, int);}
static void release_QDomImplementation(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDomImplementation *>(sipCppV);
}


extern "C" {static void assign_QDomImplementation(void *, SIP_SSIZE_T, void *);}
static void assign_QDomImplementation(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDomImplementation *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDomImplementation *>(sipSrc);
}


extern "C" {static void *array_QDomImplementation(SIP_SSIZE_T);}
static void *array_QDomImplementation(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDomImplementation[sipNrElem];
}


extern "C" {static void *copy_QDomImplementation(const void *, SIP_SSIZE_T);}
static void *copy_QDomImplementation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDomImplementation(reinterpret_cast<const  ::QDomImplementation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomImplementation(sipSimpleWrapper *);}
static void dealloc_QDomImplementation(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDomImplementation(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDomImplementation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomImplementation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDomImplementation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDomImplementation();

            return sipCpp;
        }
    }

    {
        const  ::QDomImplementation* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomImplementation, &a0))
        {
            sipCpp = new  ::QDomImplementation(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDomImplementation[] = {
    {(void *)slot_QDomImplementation___ne__, ne_slot},
    {(void *)slot_QDomImplementation___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDomImplementation[] = {
    {SIP_MLNAME_CAST(sipName_createDocument), meth_QDomImplementation_createDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_createDocument)},
    {SIP_MLNAME_CAST(sipName_createDocumentType), meth_QDomImplementation_createDocumentType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_createDocumentType)},
    {SIP_MLNAME_CAST(sipName_hasFeature), meth_QDomImplementation_hasFeature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_hasFeature)},
    {SIP_MLNAME_CAST(sipName_invalidDataPolicy), meth_QDomImplementation_invalidDataPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_invalidDataPolicy)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QDomImplementation_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_isNull)},
    {SIP_MLNAME_CAST(sipName_setInvalidDataPolicy), meth_QDomImplementation_setInvalidDataPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomImplementation_setInvalidDataPolicy)}
};

static sipEnumMemberDef enummembers_QDomImplementation[] = {
    {sipName_AcceptInvalidChars, static_cast<int>( ::QDomImplementation::AcceptInvalidChars), 11},
    {sipName_DropInvalidChars, static_cast<int>( ::QDomImplementation::DropInvalidChars), 11},
    {sipName_ReturnNullNode, static_cast<int>( ::QDomImplementation::ReturnNullNode), 11},
};

PyDoc_STRVAR(doc_QDomImplementation, "\1QDomImplementation()\n"
"QDomImplementation(QDomImplementation)");


static pyqt5ClassPluginDef plugin_QDomImplementation = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QDomImplementation = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDomImplementation,
        {0},
        &plugin_QDomImplementation
    },
    {
        sipNameNr_QDomImplementation,
        {0, 0, 1},
        6, methods_QDomImplementation,
        3, enummembers_QDomImplementation,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomImplementation,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDomImplementation,
    init_type_QDomImplementation,
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
    dealloc_QDomImplementation,
    assign_QDomImplementation,
    array_QDomImplementation,
    copy_QDomImplementation,
    release_QDomImplementation,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
