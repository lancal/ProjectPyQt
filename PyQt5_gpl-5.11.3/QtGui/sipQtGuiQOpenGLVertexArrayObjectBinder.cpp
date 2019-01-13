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

#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglvertexarrayobject.sip"
#include <qopenglvertexarrayobject.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglvertexarrayobject.sip"
#include <qopenglvertexarrayobject.h>
#line 31 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVertexArrayObjectBinder.cpp"

#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglvertexarrayobject.sip"
#include <qopenglvertexarrayobject.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVertexArrayObjectBinder.cpp"


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_Binder_release, "release(self)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_Binder_release(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_Binder_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLVertexArrayObject::Binder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject_Binder, &sipCpp))
        {
            sipCpp->release();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Binder, sipName_release, doc_QOpenGLVertexArrayObject_Binder_release);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_Binder_rebind, "rebind(self)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_Binder_rebind(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_Binder_rebind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLVertexArrayObject::Binder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject_Binder, &sipCpp))
        {
            sipCpp->rebind();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Binder, sipName_rebind, doc_QOpenGLVertexArrayObject_Binder_rebind);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_Binder___enter__, "__enter__(self) -> object");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_Binder___enter__(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_Binder___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLVertexArrayObject::Binder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVertexArrayObject_Binder, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 55 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglvertexarrayobject.sip"
            // Just return a reference to self.
            sipRes = sipSelf;
            Py_INCREF(sipRes);
#line 111 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVertexArrayObjectBinder.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Binder, sipName___enter__, doc_QOpenGLVertexArrayObject_Binder___enter__);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_Binder___exit__, "__exit__(self, object, object, object)");

extern "C" {static PyObject *meth_QOpenGLVertexArrayObject_Binder___exit__(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVertexArrayObject_Binder___exit__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
         ::QOpenGLVertexArrayObject::Binder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0P0P0", &sipSelf, sipType_QOpenGLVertexArrayObject_Binder, &sipCpp, &a0, &a1, &a2))
        {
#line 62 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglvertexarrayobject.sip"
            sipCpp->release();
#line 142 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVertexArrayObjectBinder.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Binder, sipName___exit__, doc_QOpenGLVertexArrayObject_Binder___exit__);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLVertexArrayObject_Binder(void *, int);}
static void release_QOpenGLVertexArrayObject_Binder(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLVertexArrayObject::Binder *>(sipCppV);
}


extern "C" {static void dealloc_QOpenGLVertexArrayObject_Binder(sipSimpleWrapper *);}
static void dealloc_QOpenGLVertexArrayObject_Binder(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLVertexArrayObject_Binder(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLVertexArrayObject_Binder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLVertexArrayObject_Binder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLVertexArrayObject::Binder *sipCpp = 0;

    {
         ::QOpenGLVertexArrayObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QOpenGLVertexArrayObject, &a0))
        {
            sipCpp = new  ::QOpenGLVertexArrayObject::Binder(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QOpenGLVertexArrayObject_Binder[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QOpenGLVertexArrayObject_Binder___enter__, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_Binder___enter__)},
    {SIP_MLNAME_CAST(sipName___exit__), meth_QOpenGLVertexArrayObject_Binder___exit__, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_Binder___exit__)},
    {SIP_MLNAME_CAST(sipName_rebind), meth_QOpenGLVertexArrayObject_Binder_rebind, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_Binder_rebind)},
    {SIP_MLNAME_CAST(sipName_release), meth_QOpenGLVertexArrayObject_Binder_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVertexArrayObject_Binder_release)}
};

PyDoc_STRVAR(doc_QOpenGLVertexArrayObject_Binder, "\1QOpenGLVertexArrayObject.Binder(QOpenGLVertexArrayObject)");


static pyqt5ClassPluginDef plugin_QOpenGLVertexArrayObject_Binder = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLVertexArrayObject_Binder = {
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLVertexArrayObject__Binder,
        {0},
        &plugin_QOpenGLVertexArrayObject_Binder
    },
    {
        sipNameNr_Binder,
        {176, 255, 0},
        4, methods_QOpenGLVertexArrayObject_Binder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLVertexArrayObject_Binder,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QOpenGLVertexArrayObject_Binder,
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
    dealloc_QOpenGLVertexArrayObject_Binder,
    0,
    0,
    0,
    release_QOpenGLVertexArrayObject_Binder,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
