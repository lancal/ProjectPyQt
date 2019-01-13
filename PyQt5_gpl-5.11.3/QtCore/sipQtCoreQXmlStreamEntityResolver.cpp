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

#include "sipAPIQtCore.h"

#line 283 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQXmlStreamEntityResolver.cpp"

#line 27 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQXmlStreamEntityResolver.cpp"


class sipQXmlStreamEntityResolver : public  ::QXmlStreamEntityResolver
{
public:
    sipQXmlStreamEntityResolver();
    sipQXmlStreamEntityResolver(const  ::QXmlStreamEntityResolver&);
    virtual ~sipQXmlStreamEntityResolver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString resolveUndeclaredEntity(const  ::QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlStreamEntityResolver(const sipQXmlStreamEntityResolver &);
    sipQXmlStreamEntityResolver &operator = (const sipQXmlStreamEntityResolver &);

    char sipPyMethods[1];
};

sipQXmlStreamEntityResolver::sipQXmlStreamEntityResolver():  ::QXmlStreamEntityResolver(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlStreamEntityResolver::sipQXmlStreamEntityResolver(const  ::QXmlStreamEntityResolver& a0):  ::QXmlStreamEntityResolver(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlStreamEntityResolver::~sipQXmlStreamEntityResolver()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlStreamEntityResolver::resolveUndeclaredEntity(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_resolveUndeclaredEntity);

    if (!sipMeth)
        return  ::QXmlStreamEntityResolver::resolveUndeclaredEntity(a0);

    extern  ::QString sipVH_QtCore_66(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtCore_66(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlStreamEntityResolver_resolveUndeclaredEntity, "resolveUndeclaredEntity(self, str) -> str");

extern "C" {static PyObject *meth_QXmlStreamEntityResolver_resolveUndeclaredEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamEntityResolver_resolveUndeclaredEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlStreamEntityResolver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlStreamEntityResolver, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QXmlStreamEntityResolver::resolveUndeclaredEntity(*a0) : sipCpp->resolveUndeclaredEntity(*a0)));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamEntityResolver, sipName_resolveUndeclaredEntity, doc_QXmlStreamEntityResolver_resolveUndeclaredEntity);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamEntityResolver(void *, int);}
static void release_QXmlStreamEntityResolver(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlStreamEntityResolver *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlStreamEntityResolver *>(sipCppV);
}


extern "C" {static void assign_QXmlStreamEntityResolver(void *, SIP_SSIZE_T, void *);}
static void assign_QXmlStreamEntityResolver(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QXmlStreamEntityResolver *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QXmlStreamEntityResolver *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamEntityResolver(SIP_SSIZE_T);}
static void *array_QXmlStreamEntityResolver(SIP_SSIZE_T sipNrElem)
{
    return new  ::QXmlStreamEntityResolver[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamEntityResolver(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamEntityResolver(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QXmlStreamEntityResolver(reinterpret_cast<const  ::QXmlStreamEntityResolver *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamEntityResolver(sipSimpleWrapper *);}
static void dealloc_QXmlStreamEntityResolver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlStreamEntityResolver *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlStreamEntityResolver(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlStreamEntityResolver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamEntityResolver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlStreamEntityResolver *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlStreamEntityResolver();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlStreamEntityResolver* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlStreamEntityResolver, &a0))
        {
            sipCpp = new sipQXmlStreamEntityResolver(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlStreamEntityResolver[] = {
    {SIP_MLNAME_CAST(sipName_resolveUndeclaredEntity), meth_QXmlStreamEntityResolver_resolveUndeclaredEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamEntityResolver_resolveUndeclaredEntity)}
};

PyDoc_STRVAR(doc_QXmlStreamEntityResolver, "\1QXmlStreamEntityResolver()\n"
"QXmlStreamEntityResolver(QXmlStreamEntityResolver)");


static pyqt5ClassPluginDef plugin_QXmlStreamEntityResolver = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QXmlStreamEntityResolver = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamEntityResolver,
        {0},
        &plugin_QXmlStreamEntityResolver
    },
    {
        sipNameNr_QXmlStreamEntityResolver,
        {0, 0, 1},
        1, methods_QXmlStreamEntityResolver,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamEntityResolver,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlStreamEntityResolver,
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
    dealloc_QXmlStreamEntityResolver,
    assign_QXmlStreamEntityResolver,
    array_QXmlStreamEntityResolver,
    copy_QXmlStreamEntityResolver,
    release_QXmlStreamEntityResolver,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
