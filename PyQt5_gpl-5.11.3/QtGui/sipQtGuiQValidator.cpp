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

#include "sipAPIQtGui.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qvalidator.sip"
#include <qvalidator.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQValidator.cpp"


class sipQValidator : public  ::QValidator
{
public:
    sipQValidator( ::QObject*);
    virtual ~sipQValidator();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void fixup( ::QString&) const;
     ::QValidator::State validate( ::QString&,int&) const;
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const  ::QMetaMethod&);
    void disconnectNotify(const  ::QMetaMethod&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQValidator(const sipQValidator &);
    sipQValidator &operator = (const sipQValidator &);

    char sipPyMethods[9];
};

sipQValidator::sipQValidator( ::QObject*a0):  ::QValidator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQValidator::~sipQValidator()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQValidator::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QValidator);

    return  ::QValidator::metaObject();
}

int sipQValidator::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QValidator::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QValidator,_c,_id,_a);

    return _id;
}

void *sipQValidator::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QValidator, _clname, &sipCpp) ? sipCpp :  ::QValidator::qt_metacast(_clname));
}

void sipQValidator::fixup( ::QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_fixup);

    if (!sipMeth)
    {
         ::QValidator::fixup(a0);
        return;
    }

    extern void sipVH_QtGui_108(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QString&);

    sipVH_QtGui_108(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QValidator::State sipQValidator::validate( ::QString& a0,int& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QValidator,sipName_validate);

    if (!sipMeth)
        return  ::QValidator::Invalid;

    extern  ::QValidator::State sipVH_QtGui_107(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QString&,int&);

    return sipVH_QtGui_107(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQValidator::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QValidator::event(a0);

    extern bool sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_5(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQValidator::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QValidator::eventFilter(a0,a1);

    extern bool sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_4(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQValidator::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QValidator::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_3(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQValidator::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QValidator::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_2(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQValidator::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QValidator::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_1(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQValidator::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QValidator::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQValidator::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QValidator::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QValidator_validate, "validate(self, str, int) -> Tuple[QValidator.State, str, int]");

extern "C" {static PyObject *meth_QValidator_validate(PyObject *, PyObject *);}
static PyObject *meth_QValidator_validate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QString* a0;
        int a0State = 0;
        int a1;
        const  ::QValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QValidator, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
             ::QValidator::State sipRes;
            PyObject *sipResObj;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QValidator, sipName_validate);
                return NULL;
            }

            sipRes = sipCpp->validate(*a0,a1);

            sipResObj = sipBuildResult(0,"(FDi)",sipRes,sipType_QValidator_State,a0,sipType_QString,NULL,a1);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QValidator, sipName_validate, doc_QValidator_validate);

    return NULL;
}


PyDoc_STRVAR(doc_QValidator_fixup, "fixup(self, str) -> str");

extern "C" {static PyObject *meth_QValidator_fixup(PyObject *, PyObject *);}
static PyObject *meth_QValidator_fixup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QString* a0;
        int a0State = 0;
        const  ::QValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QValidator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            PyObject *sipResObj;

            (sipSelfWasArg ? sipCpp-> ::QValidator::fixup(*a0) : sipCpp->fixup(*a0));

            sipResObj = sipConvertFromType(a0,sipType_QString,NULL);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QValidator, sipName_fixup, doc_QValidator_fixup);

    return NULL;
}


PyDoc_STRVAR(doc_QValidator_setLocale, "setLocale(self, QLocale)");

extern "C" {static PyObject *meth_QValidator_setLocale(PyObject *, PyObject *);}
static PyObject *meth_QValidator_setLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocale* a0;
         ::QValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QValidator, &sipCpp, sipType_QLocale, &a0))
        {
            sipCpp->setLocale(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QValidator, sipName_setLocale, doc_QValidator_setLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QValidator_locale, "locale(self) -> QLocale");

extern "C" {static PyObject *meth_QValidator_locale(PyObject *, PyObject *);}
static PyObject *meth_QValidator_locale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QValidator, &sipCpp))
        {
             ::QLocale*sipRes;

            sipRes = new  ::QLocale(sipCpp->locale());

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QValidator, sipName_locale, doc_QValidator_locale);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QValidator(void *, const sipTypeDef *);}
static void *cast_QValidator(void *sipCppV, const sipTypeDef *targetType)
{
     ::QValidator *sipCpp = reinterpret_cast< ::QValidator *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QValidator(void *, int);}
static void release_QValidator(void *sipCppV, int)
{
     ::QValidator *sipCpp = reinterpret_cast< ::QValidator *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QValidator(sipSimpleWrapper *);}
static void dealloc_QValidator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQValidator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QValidator(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QValidator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QValidator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQValidator *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQValidator(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QValidator[] = {{25, 0, 1}};


static PyMethodDef methods_QValidator[] = {
    {SIP_MLNAME_CAST(sipName_fixup), meth_QValidator_fixup, METH_VARARGS, SIP_MLDOC_CAST(doc_QValidator_fixup)},
    {SIP_MLNAME_CAST(sipName_locale), meth_QValidator_locale, METH_VARARGS, SIP_MLDOC_CAST(doc_QValidator_locale)},
    {SIP_MLNAME_CAST(sipName_setLocale), meth_QValidator_setLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QValidator_setLocale)},
    {SIP_MLNAME_CAST(sipName_validate), meth_QValidator_validate, METH_VARARGS, SIP_MLDOC_CAST(doc_QValidator_validate)}
};

static sipEnumMemberDef enummembers_QValidator[] = {
    {sipName_Acceptable, static_cast<int>( ::QValidator::Acceptable), 356},
    {sipName_Intermediate, static_cast<int>( ::QValidator::Intermediate), 356},
    {sipName_Invalid, static_cast<int>( ::QValidator::Invalid), 356},
};

PyDoc_STRVAR(doc_QValidator, "\1QValidator(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt5QtSignal signals_QValidator[] = {
    {"changed()", "\1changed(self)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt5ClassPluginDef plugin_QValidator = {
    & ::QValidator::staticMetaObject,
    0,
    signals_QValidator,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QValidator = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QValidator,
        {0},
        &plugin_QValidator
    },
    {
        sipNameNr_QValidator,
        {0, 0, 1},
        4, methods_QValidator,
        3, enummembers_QValidator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QValidator,
    -1,
    -1,
    supers_QValidator,
    0,
    init_type_QValidator,
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
    dealloc_QValidator,
    0,
    0,
    0,
    release_QValidator,
    cast_QValidator,
    0,
    0,
    0,
    0,
    0,
    0
};
