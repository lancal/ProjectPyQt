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

#include "sipAPIQtWebChannel.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebChannel/qwebchannelabstracttransport.sip"
#include <qwebchannelabstracttransport.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 25 "sip/QtCore/qjsonobject.sip"
#include <qjsonobject.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebChannel/sipQtWebChannelQWebChannelAbstractTransport.cpp"


class sipQWebChannelAbstractTransport : public  ::QWebChannelAbstractTransport
{
public:
    sipQWebChannelAbstractTransport( ::QObject*);
    virtual ~sipQWebChannelAbstractTransport();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void sendMessage(const  ::QJsonObject&);
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
    sipQWebChannelAbstractTransport(const sipQWebChannelAbstractTransport &);
    sipQWebChannelAbstractTransport &operator = (const sipQWebChannelAbstractTransport &);

    char sipPyMethods[8];
};

sipQWebChannelAbstractTransport::sipQWebChannelAbstractTransport( ::QObject*a0):  ::QWebChannelAbstractTransport(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWebChannelAbstractTransport::~sipQWebChannelAbstractTransport()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQWebChannelAbstractTransport::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWebChannel_qt_metaobject(sipPySelf,sipType_QWebChannelAbstractTransport);

    return  ::QWebChannelAbstractTransport::metaObject();
}

int sipQWebChannelAbstractTransport::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QWebChannelAbstractTransport::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWebChannel_qt_metacall(sipPySelf,sipType_QWebChannelAbstractTransport,_c,_id,_a);

    return _id;
}

void *sipQWebChannelAbstractTransport::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWebChannel_qt_metacast(sipPySelf, sipType_QWebChannelAbstractTransport, _clname, &sipCpp) ? sipCpp :  ::QWebChannelAbstractTransport::qt_metacast(_clname));
}

void sipQWebChannelAbstractTransport::sendMessage(const  ::QJsonObject& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QWebChannelAbstractTransport,sipName_sendMessage);

    if (!sipMeth)
        return;

    extern void sipVH_QtWebChannel_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QJsonObject&);

    sipVH_QtWebChannel_6(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQWebChannelAbstractTransport::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QWebChannelAbstractTransport::event(a0);

    extern bool sipVH_QtWebChannel_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtWebChannel_5(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQWebChannelAbstractTransport::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QWebChannelAbstractTransport::eventFilter(a0,a1);

    extern bool sipVH_QtWebChannel_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtWebChannel_4(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQWebChannelAbstractTransport::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QWebChannelAbstractTransport::timerEvent(a0);
        return;
    }

    extern void sipVH_QtWebChannel_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtWebChannel_3(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQWebChannelAbstractTransport::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QWebChannelAbstractTransport::childEvent(a0);
        return;
    }

    extern void sipVH_QtWebChannel_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtWebChannel_2(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQWebChannelAbstractTransport::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QWebChannelAbstractTransport::customEvent(a0);
        return;
    }

    extern void sipVH_QtWebChannel_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWebChannel_1(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQWebChannelAbstractTransport::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QWebChannelAbstractTransport::connectNotify(a0);
        return;
    }

    extern void sipVH_QtWebChannel_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWebChannel_0(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQWebChannelAbstractTransport::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QWebChannelAbstractTransport::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtWebChannel_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWebChannel_0(sipGILState, sipImportedVirtErrorHandlers_QtWebChannel_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QWebChannelAbstractTransport_sendMessage, "sendMessage(self, Dict[str, Union[QJsonValue, QJsonValue.Type, Iterable[QJsonValue], bool, int, float, str]])");

extern "C" {static PyObject *meth_QWebChannelAbstractTransport_sendMessage(PyObject *, PyObject *);}
static PyObject *meth_QWebChannelAbstractTransport_sendMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QJsonObject* a0;
        int a0State = 0;
         ::QWebChannelAbstractTransport *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebChannelAbstractTransport, &sipCpp, sipType_QJsonObject,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QWebChannelAbstractTransport, sipName_sendMessage);
                return NULL;
            }

            sipCpp->sendMessage(*a0);
            sipReleaseType(const_cast< ::QJsonObject *>(a0),sipType_QJsonObject,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebChannelAbstractTransport, sipName_sendMessage, doc_QWebChannelAbstractTransport_sendMessage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QWebChannelAbstractTransport(void *, const sipTypeDef *);}
static void *cast_QWebChannelAbstractTransport(void *sipCppV, const sipTypeDef *targetType)
{
     ::QWebChannelAbstractTransport *sipCpp = reinterpret_cast< ::QWebChannelAbstractTransport *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebChannelAbstractTransport(void *, int);}
static void release_QWebChannelAbstractTransport(void *sipCppV, int)
{
     ::QWebChannelAbstractTransport *sipCpp = reinterpret_cast< ::QWebChannelAbstractTransport *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QWebChannelAbstractTransport(sipSimpleWrapper *);}
static void dealloc_QWebChannelAbstractTransport(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQWebChannelAbstractTransport *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebChannelAbstractTransport(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QWebChannelAbstractTransport(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebChannelAbstractTransport(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQWebChannelAbstractTransport *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQWebChannelAbstractTransport(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebChannelAbstractTransport[] = {{4, 0, 1}};


static PyMethodDef methods_QWebChannelAbstractTransport[] = {
    {SIP_MLNAME_CAST(sipName_sendMessage), meth_QWebChannelAbstractTransport_sendMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebChannelAbstractTransport_sendMessage)}
};

PyDoc_STRVAR(doc_QWebChannelAbstractTransport, "\1QWebChannelAbstractTransport(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt5QtSignal signals_QWebChannelAbstractTransport[] = {
    {"messageReceived(QJsonObject,QWebChannelAbstractTransport*)", "\1messageReceived(self, Dict[str, Union[QJsonValue, QJsonValue.Type, Iterable[QJsonValue], bool, int, float, str]], QWebChannelAbstractTransport)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt5ClassPluginDef plugin_QWebChannelAbstractTransport = {
    & ::QWebChannelAbstractTransport::staticMetaObject,
    0,
    signals_QWebChannelAbstractTransport,
    0
};


sipClassTypeDef sipTypeDef_QtWebChannel_QWebChannelAbstractTransport = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWebChannelAbstractTransport,
        {0},
        &plugin_QWebChannelAbstractTransport
    },
    {
        sipNameNr_QWebChannelAbstractTransport,
        {0, 0, 1},
        1, methods_QWebChannelAbstractTransport,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebChannelAbstractTransport,
    -1,
    -1,
    supers_QWebChannelAbstractTransport,
    0,
    init_type_QWebChannelAbstractTransport,
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
    dealloc_QWebChannelAbstractTransport,
    0,
    0,
    0,
    release_QWebChannelAbstractTransport,
    cast_QWebChannelAbstractTransport,
    0,
    0,
    0,
    0,
    0,
    0
};
