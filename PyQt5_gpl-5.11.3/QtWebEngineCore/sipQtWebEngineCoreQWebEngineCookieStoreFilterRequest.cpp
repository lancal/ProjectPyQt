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

#include "sipAPIQtWebEngineCore.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineCore/qwebenginecookiestore.sip"
#include <qwebenginecookiestore.h>
#line 83 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngineCore/qwebenginecookiestore.sip"
#include <qwebenginecookiestore.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQWebEngineCookieStoreFilterRequest.cpp"

#line 96 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngineCore/sipQtWebEngineCoreQWebEngineCookieStoreFilterRequest.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineCookieStore_FilterRequest(void *, int);}
static void release_QWebEngineCookieStore_FilterRequest(void *sipCppV, int)
{
    delete reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipCppV);
}


extern "C" {static void assign_QWebEngineCookieStore_FilterRequest(void *, SIP_SSIZE_T, void *);}
static void assign_QWebEngineCookieStore_FilterRequest(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSrc);
}


extern "C" {static void *array_QWebEngineCookieStore_FilterRequest(SIP_SSIZE_T);}
static void *array_QWebEngineCookieStore_FilterRequest(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebEngineCookieStore::FilterRequest[sipNrElem];
}


extern "C" {static void *copy_QWebEngineCookieStore_FilterRequest(const void *, SIP_SSIZE_T);}
static void *copy_QWebEngineCookieStore_FilterRequest(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebEngineCookieStore::FilterRequest(reinterpret_cast<const  ::QWebEngineCookieStore::FilterRequest *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebEngineCookieStore_FilterRequest(sipSimpleWrapper *);}
static void dealloc_QWebEngineCookieStore_FilterRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebEngineCookieStore_FilterRequest(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebEngineCookieStore_FilterRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEngineCookieStore_FilterRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebEngineCookieStore::FilterRequest *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QWebEngineCookieStore::FilterRequest();

            return sipCpp;
        }
    }

    {
        const  ::QWebEngineCookieStore::FilterRequest* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebEngineCookieStore_FilterRequest, &a0))
        {
            sipCpp = new  ::QWebEngineCookieStore::FilterRequest(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QWebEngineCookieStore_FilterRequest_firstPartyUrl(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebEngineCookieStore_FilterRequest_firstPartyUrl(void *sipSelf, PyObject *, PyObject *)
{
     ::QUrl*sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    sipVal = &sipCpp->firstPartyUrl;

    return sipConvertFromType(sipVal, sipType_QUrl, NULL);
}


extern "C" {static int varset_QWebEngineCookieStore_FilterRequest_firstPartyUrl(void *, PyObject *, PyObject *);}
static int varset_QWebEngineCookieStore_FilterRequest_firstPartyUrl(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QUrl*sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QUrl *>(sipForceConvertToType(sipPy,sipType_QUrl,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->firstPartyUrl = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QWebEngineCookieStore_FilterRequest_origin(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebEngineCookieStore_FilterRequest_origin(void *sipSelf, PyObject *, PyObject *)
{
     ::QUrl*sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    sipVal = &sipCpp->origin;

    return sipConvertFromType(sipVal, sipType_QUrl, NULL);
}


extern "C" {static int varset_QWebEngineCookieStore_FilterRequest_origin(void *, PyObject *, PyObject *);}
static int varset_QWebEngineCookieStore_FilterRequest_origin(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QUrl*sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QUrl *>(sipForceConvertToType(sipPy,sipType_QUrl,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->origin = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QWebEngineCookieStore_FilterRequest_thirdParty(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebEngineCookieStore_FilterRequest_thirdParty(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    sipVal = sipCpp->thirdParty;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QWebEngineCookieStore_FilterRequest_thirdParty(void *, PyObject *, PyObject *);}
static int varset_QWebEngineCookieStore_FilterRequest_thirdParty(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QWebEngineCookieStore::FilterRequest *sipCpp = reinterpret_cast< ::QWebEngineCookieStore::FilterRequest *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->thirdParty = static_cast<bool>(sipVal);

    return 0;
}

sipVariableDef variables_QWebEngineCookieStore_FilterRequest[] = {
    {InstanceVariable, sipName_firstPartyUrl, (PyMethodDef *)varget_QWebEngineCookieStore_FilterRequest_firstPartyUrl, (PyMethodDef *)varset_QWebEngineCookieStore_FilterRequest_firstPartyUrl, NULL, NULL},
    {InstanceVariable, sipName_origin, (PyMethodDef *)varget_QWebEngineCookieStore_FilterRequest_origin, (PyMethodDef *)varset_QWebEngineCookieStore_FilterRequest_origin, NULL, NULL},
    {InstanceVariable, sipName_thirdParty, (PyMethodDef *)varget_QWebEngineCookieStore_FilterRequest_thirdParty, (PyMethodDef *)varset_QWebEngineCookieStore_FilterRequest_thirdParty, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebEngineCookieStore_FilterRequest, "\1QWebEngineCookieStore.FilterRequest()\n"
"QWebEngineCookieStore.FilterRequest(QWebEngineCookieStore.FilterRequest)");


static pyqt5ClassPluginDef plugin_QWebEngineCookieStore_FilterRequest = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngineCore_QWebEngineCookieStore_FilterRequest = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineCookieStore__FilterRequest,
        {0},
        &plugin_QWebEngineCookieStore_FilterRequest
    },
    {
        sipNameNr_FilterRequest,
        {2, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebEngineCookieStore_FilterRequest,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEngineCookieStore_FilterRequest,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebEngineCookieStore_FilterRequest,
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
    dealloc_QWebEngineCookieStore_FilterRequest,
    assign_QWebEngineCookieStore_FilterRequest,
    array_QWebEngineCookieStore_FilterRequest,
    copy_QWebEngineCookieStore_FilterRequest,
    release_QWebEngineCookieStore_FilterRequest,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
