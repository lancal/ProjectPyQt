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

#include "sipAPIQtLocation.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtLocation/qplaceproposedsearchresult.sip"
#include <qplaceproposedsearchresult.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQPlaceProposedSearchResult.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtLocation/qplacesearchresult.sip"
#include <qplacesearchresult.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQPlaceProposedSearchResult.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtLocation/qplacesearchrequest.sip"
#include <qplacesearchrequest.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQPlaceProposedSearchResult.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtLocation/qplaceicon.sip"
#include <qplaceicon.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQPlaceProposedSearchResult.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtLocation/sipQtLocationQPlaceProposedSearchResult.cpp"


class sipQPlaceProposedSearchResult : public  ::QPlaceProposedSearchResult
{
public:
    sipQPlaceProposedSearchResult();
    sipQPlaceProposedSearchResult(const  ::QPlaceSearchResult&);
    sipQPlaceProposedSearchResult(const  ::QPlaceProposedSearchResult&);
    ~sipQPlaceProposedSearchResult();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPlaceProposedSearchResult(const sipQPlaceProposedSearchResult &);
    sipQPlaceProposedSearchResult &operator = (const sipQPlaceProposedSearchResult &);
};

sipQPlaceProposedSearchResult::sipQPlaceProposedSearchResult():  ::QPlaceProposedSearchResult(), sipPySelf(0)
{
}

sipQPlaceProposedSearchResult::sipQPlaceProposedSearchResult(const  ::QPlaceSearchResult& a0):  ::QPlaceProposedSearchResult(a0), sipPySelf(0)
{
}

sipQPlaceProposedSearchResult::sipQPlaceProposedSearchResult(const  ::QPlaceProposedSearchResult& a0):  ::QPlaceProposedSearchResult(a0), sipPySelf(0)
{
}

sipQPlaceProposedSearchResult::~sipQPlaceProposedSearchResult()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QPlaceProposedSearchResult_searchRequest, "searchRequest(self) -> QPlaceSearchRequest");

extern "C" {static PyObject *meth_QPlaceProposedSearchResult_searchRequest(PyObject *, PyObject *);}
static PyObject *meth_QPlaceProposedSearchResult_searchRequest(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPlaceProposedSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPlaceProposedSearchResult, &sipCpp))
        {
             ::QPlaceSearchRequest*sipRes;

            sipRes = new  ::QPlaceSearchRequest(sipCpp->searchRequest());

            return sipConvertFromNewType(sipRes,sipType_QPlaceSearchRequest,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceProposedSearchResult, sipName_searchRequest, doc_QPlaceProposedSearchResult_searchRequest);

    return NULL;
}


PyDoc_STRVAR(doc_QPlaceProposedSearchResult_setSearchRequest, "setSearchRequest(self, QPlaceSearchRequest)");

extern "C" {static PyObject *meth_QPlaceProposedSearchResult_setSearchRequest(PyObject *, PyObject *);}
static PyObject *meth_QPlaceProposedSearchResult_setSearchRequest(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPlaceSearchRequest* a0;
         ::QPlaceProposedSearchResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPlaceProposedSearchResult, &sipCpp, sipType_QPlaceSearchRequest, &a0))
        {
            sipCpp->setSearchRequest(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPlaceProposedSearchResult, sipName_setSearchRequest, doc_QPlaceProposedSearchResult_setSearchRequest);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPlaceProposedSearchResult(void *, const sipTypeDef *);}
static void *cast_QPlaceProposedSearchResult(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPlaceProposedSearchResult *sipCpp = reinterpret_cast< ::QPlaceProposedSearchResult *>(sipCppV);

    if (targetType == sipType_QPlaceSearchResult)
        return static_cast< ::QPlaceSearchResult *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPlaceProposedSearchResult(void *, int);}
static void release_QPlaceProposedSearchResult(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPlaceProposedSearchResult *>(sipCppV);
    else
        delete reinterpret_cast< ::QPlaceProposedSearchResult *>(sipCppV);
}


extern "C" {static void assign_QPlaceProposedSearchResult(void *, SIP_SSIZE_T, void *);}
static void assign_QPlaceProposedSearchResult(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPlaceProposedSearchResult *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPlaceProposedSearchResult *>(sipSrc);
}


extern "C" {static void *array_QPlaceProposedSearchResult(SIP_SSIZE_T);}
static void *array_QPlaceProposedSearchResult(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPlaceProposedSearchResult[sipNrElem];
}


extern "C" {static void *copy_QPlaceProposedSearchResult(const void *, SIP_SSIZE_T);}
static void *copy_QPlaceProposedSearchResult(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPlaceProposedSearchResult(reinterpret_cast<const  ::QPlaceProposedSearchResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPlaceProposedSearchResult(sipSimpleWrapper *);}
static void dealloc_QPlaceProposedSearchResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPlaceProposedSearchResult *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPlaceProposedSearchResult(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPlaceProposedSearchResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPlaceProposedSearchResult(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPlaceProposedSearchResult *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPlaceProposedSearchResult();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QPlaceSearchResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceSearchResult, &a0))
        {
            sipCpp = new sipQPlaceProposedSearchResult(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QPlaceProposedSearchResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPlaceProposedSearchResult, &a0))
        {
            sipCpp = new sipQPlaceProposedSearchResult(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPlaceProposedSearchResult[] = {{79, 255, 1}};


static PyMethodDef methods_QPlaceProposedSearchResult[] = {
    {SIP_MLNAME_CAST(sipName_searchRequest), meth_QPlaceProposedSearchResult_searchRequest, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceProposedSearchResult_searchRequest)},
    {SIP_MLNAME_CAST(sipName_setSearchRequest), meth_QPlaceProposedSearchResult_setSearchRequest, METH_VARARGS, SIP_MLDOC_CAST(doc_QPlaceProposedSearchResult_setSearchRequest)}
};

PyDoc_STRVAR(doc_QPlaceProposedSearchResult, "\1QPlaceProposedSearchResult()\n"
"QPlaceProposedSearchResult(QPlaceSearchResult)\n"
"QPlaceProposedSearchResult(QPlaceProposedSearchResult)");


static pyqt5ClassPluginDef plugin_QPlaceProposedSearchResult = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtLocation_QPlaceProposedSearchResult = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPlaceProposedSearchResult,
        {0},
        &plugin_QPlaceProposedSearchResult
    },
    {
        sipNameNr_QPlaceProposedSearchResult,
        {0, 0, 1},
        2, methods_QPlaceProposedSearchResult,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPlaceProposedSearchResult,
    -1,
    -1,
    supers_QPlaceProposedSearchResult,
    0,
    init_type_QPlaceProposedSearchResult,
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
    dealloc_QPlaceProposedSearchResult,
    assign_QPlaceProposedSearchResult,
    array_QPlaceProposedSearchResult,
    copy_QPlaceProposedSearchResult,
    release_QPlaceProposedSearchResult,
    cast_QPlaceProposedSearchResult,
    0,
    0,
    0,
    0,
    0,
    0
};
