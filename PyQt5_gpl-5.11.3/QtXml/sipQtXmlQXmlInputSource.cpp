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

#line 82 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQXmlInputSource.cpp"

#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQXmlInputSource.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQXmlInputSource.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQXmlInputSource.cpp"
#line 27 "sip/QtCore/qchar.sip"
#include <qchar.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtXml/sipQtXmlQXmlInputSource.cpp"


class sipQXmlInputSource : public  ::QXmlInputSource
{
public:
    sipQXmlInputSource();
    sipQXmlInputSource( ::QIODevice*);
    sipQXmlInputSource(const  ::QXmlInputSource&);
    virtual ~sipQXmlInputSource();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString fromRawData(const  ::QByteArray&,bool);
    void reset();
     ::QChar next();
     ::QString data() const;
    void fetchData();
    void setData(const  ::QByteArray&);
    void setData(const  ::QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlInputSource(const sipQXmlInputSource &);
    sipQXmlInputSource &operator = (const sipQXmlInputSource &);

    char sipPyMethods[7];
};

sipQXmlInputSource::sipQXmlInputSource():  ::QXmlInputSource(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlInputSource::sipQXmlInputSource( ::QIODevice*a0):  ::QXmlInputSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlInputSource::sipQXmlInputSource(const  ::QXmlInputSource& a0):  ::QXmlInputSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlInputSource::~sipQXmlInputSource()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlInputSource::fromRawData(const  ::QByteArray& a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_fromRawData);

    if (!sipMeth)
        return  ::QXmlInputSource::fromRawData(a0,a1);

    extern  ::QString sipVH_QtXml_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QByteArray&,bool);

    return sipVH_QtXml_5(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQXmlInputSource::reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_reset);

    if (!sipMeth)
    {
         ::QXmlInputSource::reset();
        return;
    }

    extern void sipVH_QtXml_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXml_2(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QChar sipQXmlInputSource::next()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_next);

    if (!sipMeth)
        return  ::QXmlInputSource::next();

    extern  ::QChar sipVH_QtXml_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_4(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QString sipQXmlInputSource::data() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_data);

    if (!sipMeth)
        return  ::QXmlInputSource::data();

    extern  ::QString sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_3(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlInputSource::fetchData()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_fetchData);

    if (!sipMeth)
    {
         ::QXmlInputSource::fetchData();
        return;
    }

    extern void sipVH_QtXml_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXml_2(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlInputSource::setData(const  ::QByteArray& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setData);

    if (!sipMeth)
    {
         ::QXmlInputSource::setData(a0);
        return;
    }

    extern void sipVH_QtXml_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QByteArray&);

    sipVH_QtXml_1(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQXmlInputSource::setData(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setData);

    if (!sipMeth)
    {
         ::QXmlInputSource::setData(a0);
        return;
    }

    extern void sipVH_QtXml_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    sipVH_QtXml_0(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlInputSource_setData, "setData(self, str)\n"
"setData(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QXmlInputSource_setData(PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlInputSource, &sipCpp, sipType_QString,&a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp-> ::QXmlInputSource::setData(*a0) : sipCpp->setData(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlInputSource, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp-> ::QXmlInputSource::setData(*a0) : sipCpp->setData(*a0));
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_setData, doc_QXmlInputSource_setData);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlInputSource_fetchData, "fetchData(self)");

extern "C" {static PyObject *meth_QXmlInputSource_fetchData(PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_fetchData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlInputSource, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QXmlInputSource::fetchData() : sipCpp->fetchData());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_fetchData, doc_QXmlInputSource_fetchData);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlInputSource_data, "data(self) -> str");

extern "C" {static PyObject *meth_QXmlInputSource_data(PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlInputSource, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QXmlInputSource::data() : sipCpp->data()));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_data, doc_QXmlInputSource_data);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlInputSource_next, "next(self) -> str");

extern "C" {static PyObject *meth_QXmlInputSource_next(PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlInputSource, &sipCpp))
        {
             ::QChar*sipRes;

            sipRes = new  ::QChar((sipSelfWasArg ? sipCpp-> ::QXmlInputSource::next() : sipCpp->next()));

            return sipConvertFromNewType(sipRes,sipType_QChar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_next, doc_QXmlInputSource_next);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlInputSource_reset, "reset(self)");

extern "C" {static PyObject *meth_QXmlInputSource_reset(PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlInputSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlInputSource, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QXmlInputSource::reset() : sipCpp->reset());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_reset, doc_QXmlInputSource_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlInputSource_fromRawData, "fromRawData(self, Union[QByteArray, bytes, bytearray], beginning: bool = False) -> str");

extern "C" {static PyObject *meth_QXmlInputSource_fromRawData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlInputSource_fromRawData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        bool a1 = 0;
         ::QXmlInputSource *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_beginning,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "pJ1|b", &sipSelf, sipType_QXmlInputSource, &sipCpp, sipType_QByteArray, &a0, &a0State, &a1))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QXmlInputSource::fromRawData(*a0,a1) : sipCpp->fromRawData(*a0,a1)));
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlInputSource, sipName_fromRawData, doc_QXmlInputSource_fromRawData);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlInputSource(void *, int);}
static void release_QXmlInputSource(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlInputSource *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlInputSource *>(sipCppV);
}


extern "C" {static void assign_QXmlInputSource(void *, SIP_SSIZE_T, void *);}
static void assign_QXmlInputSource(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QXmlInputSource *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QXmlInputSource *>(sipSrc);
}


extern "C" {static void *array_QXmlInputSource(SIP_SSIZE_T);}
static void *array_QXmlInputSource(SIP_SSIZE_T sipNrElem)
{
    return new  ::QXmlInputSource[sipNrElem];
}


extern "C" {static void *copy_QXmlInputSource(const void *, SIP_SSIZE_T);}
static void *copy_QXmlInputSource(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QXmlInputSource(reinterpret_cast<const  ::QXmlInputSource *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlInputSource(sipSimpleWrapper *);}
static void dealloc_QXmlInputSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlInputSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlInputSource(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlInputSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlInputSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlInputSource *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlInputSource();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QIODevice* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QIODevice, &a0))
        {
            sipCpp = new sipQXmlInputSource(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlInputSource* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlInputSource, &a0))
        {
            sipCpp = new sipQXmlInputSource(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlInputSource[] = {
    {SIP_MLNAME_CAST(sipName_data), meth_QXmlInputSource_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlInputSource_data)},
    {SIP_MLNAME_CAST(sipName_fetchData), meth_QXmlInputSource_fetchData, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlInputSource_fetchData)},
    {SIP_MLNAME_CAST(sipName_fromRawData), (PyCFunction)meth_QXmlInputSource_fromRawData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlInputSource_fromRawData)},
    {SIP_MLNAME_CAST(sipName_next), meth_QXmlInputSource_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlInputSource_next)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QXmlInputSource_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlInputSource_reset)},
    {SIP_MLNAME_CAST(sipName_setData), meth_QXmlInputSource_setData, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlInputSource_setData)}
};


extern "C" {static PyObject *varget_QXmlInputSource_EndOfData(void *, PyObject *, PyObject *);}
static PyObject *varget_QXmlInputSource_EndOfData(void *, PyObject *, PyObject *)
{
     ::ushort sipVal;

    sipVal =  ::QXmlInputSource::EndOfData;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static PyObject *varget_QXmlInputSource_EndOfDocument(void *, PyObject *, PyObject *);}
static PyObject *varget_QXmlInputSource_EndOfDocument(void *, PyObject *, PyObject *)
{
     ::ushort sipVal;

    sipVal =  ::QXmlInputSource::EndOfDocument;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}

sipVariableDef variables_QXmlInputSource[] = {
    {ClassVariable, sipName_EndOfData, (PyMethodDef *)varget_QXmlInputSource_EndOfData, NULL, NULL, NULL},
    {ClassVariable, sipName_EndOfDocument, (PyMethodDef *)varget_QXmlInputSource_EndOfDocument, NULL, NULL, NULL},
};

PyDoc_STRVAR(doc_QXmlInputSource, "\1QXmlInputSource()\n"
"QXmlInputSource(QIODevice)\n"
"QXmlInputSource(QXmlInputSource)");


static pyqt5ClassPluginDef plugin_QXmlInputSource = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlInputSource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlInputSource,
        {0},
        &plugin_QXmlInputSource
    },
    {
        sipNameNr_QXmlInputSource,
        {0, 0, 1},
        6, methods_QXmlInputSource,
        0, 0,
        2, variables_QXmlInputSource,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlInputSource,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlInputSource,
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
    dealloc_QXmlInputSource,
    assign_QXmlInputSource,
    array_QXmlInputSource,
    copy_QXmlInputSource,
    release_QXmlInputSource,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
