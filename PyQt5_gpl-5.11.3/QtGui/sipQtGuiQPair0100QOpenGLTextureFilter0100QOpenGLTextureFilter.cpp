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

#line 30 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
#include <QOpenGLTexture>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair0100QOpenGLTextureFilter0100QOpenGLTextureFilter.cpp"

#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopengltexture.sip"
#include <qopengltexture.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair0100QOpenGLTextureFilter0100QOpenGLTextureFilter.cpp"


extern "C" {static void assign_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *, SIP_SSIZE_T, void *);}
static void assign_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *>(sipSrc);
}


extern "C" {static void *array_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(SIP_SSIZE_T);}
static void *array_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter>[sipNrElem];
}


extern "C" {static void *copy_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(const void *, SIP_SSIZE_T);}
static void *copy_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter>(reinterpret_cast<const  ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *, int);}
static void release_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *ptr, int)
{
    delete reinterpret_cast< ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *>(ptr);
}



extern "C" {static int convertTo_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> **sipCppPtr = reinterpret_cast< ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> **>(sipCppPtrV);

#line 40 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
    if (!sipIsErr)
        return (PySequence_Check(sipPy)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));

    Py_ssize_t len = PySequence_Size(sipPy);

    if (len != 2)
    {
        // A negative length should only be an internal error so let the
        // original exception stand.
        if (len >= 0)
            PyErr_Format(PyExc_TypeError,
                    "sequence has %zd elements but 2 elements are expected",
                    len);

        *sipIsErr = 1;

        return 0;
    }

    PyObject *firstobj = PySequence_GetItem(sipPy, 0);

    if (!firstobj)
    {
        *sipIsErr = 1;

        return 0;
    }

    int firstv = sipConvertToEnum(firstobj, sipType_QOpenGLTexture_Filter);

    if (PyErr_Occurred())
    {
        PyErr_Format(PyExc_TypeError,
                "the first element has type '%s' but 'QOpenGLTexture.Filter' is expected",
                sipPyTypeName(Py_TYPE(firstobj)));

        *sipIsErr = 1;

        return 0;
    }

    PyObject *secondobj = PySequence_GetItem(sipPy, 1);

    if (!secondobj)
    {
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    int secondv = sipConvertToEnum(secondobj, sipType_QOpenGLTexture_Filter);

    if (PyErr_Occurred())
    {
        PyErr_Format(PyExc_TypeError,
                "the second element has type '%s' but 'QOpenGLTexture.Filter' is expected",
                sipPyTypeName(Py_TYPE(secondobj)));

        Py_DECREF(secondobj);
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    *sipCppPtr = new QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter>(
            static_cast<QOpenGLTexture::Filter>(firstv),
            static_cast<QOpenGLTexture::Filter>(secondv));

    Py_DECREF(secondobj);
    Py_DECREF(firstobj);
 
    return sipGetState(sipTransferObj);
#line 150 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair0100QOpenGLTextureFilter0100QOpenGLTextureFilter.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *, PyObject *);}
static PyObject *convertFrom_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter(void *sipCppV, PyObject *)
{
    ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *sipCpp = reinterpret_cast< ::QPair< ::QOpenGLTexture::Filter, ::QOpenGLTexture::Filter> *>(sipCppV);

#line 34 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qpygui_qpair.sip"
    return sipBuildResult(NULL, "(FF)", sipCpp->first,
            sipType_QOpenGLTexture_Filter, sipCpp->second,
            sipType_QOpenGLTexture_Filter);
#line 163 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQPair0100QOpenGLTextureFilter0100QOpenGLTextureFilter.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_0,     /* QPair<QOpenGLTexture::Filter,QOpenGLTexture::Filter> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter,
    array_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter,
    copy_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter,
    release_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter,
    convertTo_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter,
    convertFrom_QPair_0100QOpenGLTexture_Filter_0100QOpenGLTexture_Filter
};
