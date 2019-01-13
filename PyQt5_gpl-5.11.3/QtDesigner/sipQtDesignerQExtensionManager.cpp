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

#include "sipAPIQtDesigner.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDesigner/qextensionmanager.sip"
#include <qextensionmanager.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDesigner/sipQtDesignerQExtensionManager.cpp"


class sipQExtensionManager : public  ::QExtensionManager
{
public:
    sipQExtensionManager( ::QObject*);
    virtual ~sipQExtensionManager();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void registerExtensions( ::QAbstractExtensionFactory*,const  ::QString&);
    void unregisterExtensions( ::QAbstractExtensionFactory*,const  ::QString&);
     ::QObject* extension( ::QObject*,const  ::QString&) const;
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
    sipQExtensionManager(const sipQExtensionManager &);
    sipQExtensionManager &operator = (const sipQExtensionManager &);

    char sipPyMethods[10];
};

sipQExtensionManager::sipQExtensionManager( ::QObject*a0):  ::QExtensionManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQExtensionManager::~sipQExtensionManager()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQExtensionManager::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QExtensionManager);

    return  ::QExtensionManager::metaObject();
}

int sipQExtensionManager::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QExtensionManager::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QExtensionManager,_c,_id,_a);

    return _id;
}

void *sipQExtensionManager::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QExtensionManager, _clname, &sipCpp) ? sipCpp :  ::QExtensionManager::qt_metacast(_clname));
}

void sipQExtensionManager::registerExtensions( ::QAbstractExtensionFactory*a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_registerExtensions);

    if (!sipMeth)
    {
         ::QExtensionManager::registerExtensions(a0,a1);
        return;
    }

    extern void sipVH_QtDesigner_86(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QAbstractExtensionFactory*,const  ::QString&);

    sipVH_QtDesigner_86(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQExtensionManager::unregisterExtensions( ::QAbstractExtensionFactory*a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_unregisterExtensions);

    if (!sipMeth)
    {
         ::QExtensionManager::unregisterExtensions(a0,a1);
        return;
    }

    extern void sipVH_QtDesigner_86(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QAbstractExtensionFactory*,const  ::QString&);

    sipVH_QtDesigner_86(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

 ::QObject* sipQExtensionManager::extension( ::QObject*a0,const  ::QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_extension);

    if (!sipMeth)
        return  ::QExtensionManager::extension(a0,a1);

    extern  ::QObject* sipVH_QtDesigner_84(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*,const  ::QString&);

    return sipVH_QtDesigner_84(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQExtensionManager::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QExtensionManager::event(a0);

    extern bool sipVH_QtDesigner_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDesigner_31(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQExtensionManager::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QExtensionManager::eventFilter(a0,a1);

    extern bool sipVH_QtDesigner_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDesigner_32(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQExtensionManager::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QExtensionManager::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDesigner_33(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQExtensionManager::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QExtensionManager::childEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDesigner_34(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQExtensionManager::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QExtensionManager::customEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDesigner_7(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQExtensionManager::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QExtensionManager::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtDesigner_35(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQExtensionManager::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QExtensionManager::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtDesigner_35(sipGILState, sipImportedVirtErrorHandlers_QtDesigner_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QExtensionManager_registerExtensions, "registerExtensions(self, QAbstractExtensionFactory, iid: str = '')");

extern "C" {static PyObject *meth_QExtensionManager_registerExtensions(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QExtensionManager_registerExtensions(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QAbstractExtensionFactory* a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
         ::QExtensionManager *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_iid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J1", &sipSelf, sipType_QExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            (sipSelfWasArg ? sipCpp-> ::QExtensionManager::registerExtensions(a0,*a1) : sipCpp->registerExtensions(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionManager, sipName_registerExtensions, doc_QExtensionManager_registerExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QExtensionManager_unregisterExtensions, "unregisterExtensions(self, QAbstractExtensionFactory, iid: str = '')");

extern "C" {static PyObject *meth_QExtensionManager_unregisterExtensions(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QExtensionManager_unregisterExtensions(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QAbstractExtensionFactory* a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
         ::QExtensionManager *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_iid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J1", &sipSelf, sipType_QExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            (sipSelfWasArg ? sipCpp-> ::QExtensionManager::unregisterExtensions(a0,*a1) : sipCpp->unregisterExtensions(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionManager, sipName_unregisterExtensions, doc_QExtensionManager_unregisterExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QExtensionManager_extension, "extension(self, QObject, str) -> QObject");

extern "C" {static PyObject *meth_QExtensionManager_extension(PyObject *, PyObject *);}
static PyObject *meth_QExtensionManager_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QExtensionManager, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
             ::QObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QExtensionManager::extension(a0,*a1) : sipCpp->extension(a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionManager, sipName_extension, doc_QExtensionManager_extension);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QExtensionManager(void *, const sipTypeDef *);}
static void *cast_QExtensionManager(void *sipCppV, const sipTypeDef *targetType)
{
     ::QExtensionManager *sipCpp = reinterpret_cast< ::QExtensionManager *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QAbstractExtensionManager)
        return static_cast< ::QAbstractExtensionManager *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QExtensionManager(void *, int);}
static void release_QExtensionManager(void *sipCppV, int)
{
     ::QExtensionManager *sipCpp = reinterpret_cast< ::QExtensionManager *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QExtensionManager(sipSimpleWrapper *);}
static void dealloc_QExtensionManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQExtensionManager *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QExtensionManager(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QExtensionManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QExtensionManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQExtensionManager *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQExtensionManager(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QExtensionManager[] = {{7, 0, 0}, {1, 255, 1}};


static PyMethodDef methods_QExtensionManager[] = {
    {SIP_MLNAME_CAST(sipName_extension), meth_QExtensionManager_extension, METH_VARARGS, SIP_MLDOC_CAST(doc_QExtensionManager_extension)},
    {SIP_MLNAME_CAST(sipName_registerExtensions), (PyCFunction)meth_QExtensionManager_registerExtensions, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QExtensionManager_registerExtensions)},
    {SIP_MLNAME_CAST(sipName_unregisterExtensions), (PyCFunction)meth_QExtensionManager_unregisterExtensions, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QExtensionManager_unregisterExtensions)}
};

PyDoc_STRVAR(doc_QExtensionManager, "\1QExtensionManager(parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QExtensionManager = {
    & ::QExtensionManager::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QExtensionManager = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QExtensionManager,
        {0},
        &plugin_QExtensionManager
    },
    {
        sipNameNr_QExtensionManager,
        {0, 0, 1},
        3, methods_QExtensionManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QExtensionManager,
    -1,
    -1,
    supers_QExtensionManager,
    0,
    init_type_QExtensionManager,
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
    dealloc_QExtensionManager,
    0,
    0,
    0,
    release_QExtensionManager,
    cast_QExtensionManager,
    0,
    0,
    0,
    0,
    0,
    0
};
