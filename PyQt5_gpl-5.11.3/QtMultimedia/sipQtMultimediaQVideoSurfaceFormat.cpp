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

#include "sipAPIQtMultimedia.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qvideosurfaceformat.sip"
#include <qvideosurfaceformat.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"

#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qabstractvideobuffer.sip"
#include <qabstractvideobuffer.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQVideoSurfaceFormat.cpp"


PyDoc_STRVAR(doc_QVideoSurfaceFormat_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_isValid, doc_QVideoSurfaceFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_pixelFormat, "pixelFormat(self) -> QVideoFrame.PixelFormat");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_pixelFormat(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_pixelFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QVideoFrame::PixelFormat sipRes;

            sipRes = sipCpp->pixelFormat();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVideoFrame_PixelFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_pixelFormat, doc_QVideoSurfaceFormat_pixelFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_handleType, "handleType(self) -> QAbstractVideoBuffer.HandleType");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_handleType(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_handleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QAbstractVideoBuffer::HandleType sipRes;

            sipRes = sipCpp->handleType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QAbstractVideoBuffer_HandleType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_handleType, doc_QVideoSurfaceFormat_handleType);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_frameSize, "frameSize(self) -> QSize");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_frameSize(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_frameSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize(sipCpp->frameSize());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_frameSize, doc_QVideoSurfaceFormat_frameSize);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setFrameSize, "setFrameSize(self, QSize)\n"
"setFrameSize(self, int, int)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setFrameSize(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setFrameSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSize* a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setFrameSize(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0, &a1))
        {
            sipCpp->setFrameSize(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setFrameSize, doc_QVideoSurfaceFormat_setFrameSize);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_frameWidth, "frameWidth(self) -> int");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_frameWidth(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_frameWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->frameWidth();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_frameWidth, doc_QVideoSurfaceFormat_frameWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_frameHeight, "frameHeight(self) -> int");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_frameHeight(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_frameHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->frameHeight();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_frameHeight, doc_QVideoSurfaceFormat_frameHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_viewport, "viewport(self) -> QRect");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_viewport(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_viewport(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect(sipCpp->viewport());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_viewport, doc_QVideoSurfaceFormat_viewport);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setViewport, "setViewport(self, QRect)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setViewport(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setViewport(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRect* a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, sipType_QRect, &a0))
        {
            sipCpp->setViewport(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setViewport, doc_QVideoSurfaceFormat_setViewport);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_scanLineDirection, "scanLineDirection(self) -> QVideoSurfaceFormat.Direction");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_scanLineDirection(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_scanLineDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QVideoSurfaceFormat::Direction sipRes;

            sipRes = sipCpp->scanLineDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVideoSurfaceFormat_Direction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_scanLineDirection, doc_QVideoSurfaceFormat_scanLineDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setScanLineDirection, "setScanLineDirection(self, QVideoSurfaceFormat.Direction)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setScanLineDirection(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setScanLineDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QVideoSurfaceFormat::Direction a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, sipType_QVideoSurfaceFormat_Direction, &a0))
        {
            sipCpp->setScanLineDirection(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setScanLineDirection, doc_QVideoSurfaceFormat_setScanLineDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_frameRate, "frameRate(self) -> float");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_frameRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_frameRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->frameRate();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_frameRate, doc_QVideoSurfaceFormat_frameRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setFrameRate, "setFrameRate(self, float)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setFrameRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setFrameRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0))
        {
            sipCpp->setFrameRate(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setFrameRate, doc_QVideoSurfaceFormat_setFrameRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_pixelAspectRatio, "pixelAspectRatio(self) -> QSize");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_pixelAspectRatio(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_pixelAspectRatio(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize(sipCpp->pixelAspectRatio());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_pixelAspectRatio, doc_QVideoSurfaceFormat_pixelAspectRatio);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setPixelAspectRatio, "setPixelAspectRatio(self, QSize)\n"
"setPixelAspectRatio(self, int, int)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setPixelAspectRatio(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setPixelAspectRatio(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSize* a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setPixelAspectRatio(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0, &a1))
        {
            sipCpp->setPixelAspectRatio(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setPixelAspectRatio, doc_QVideoSurfaceFormat_setPixelAspectRatio);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_yCbCrColorSpace, "yCbCrColorSpace(self) -> QVideoSurfaceFormat.YCbCrColorSpace");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_yCbCrColorSpace(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_yCbCrColorSpace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QVideoSurfaceFormat::YCbCrColorSpace sipRes;

            sipRes = sipCpp->yCbCrColorSpace();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QVideoSurfaceFormat_YCbCrColorSpace);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_yCbCrColorSpace, doc_QVideoSurfaceFormat_yCbCrColorSpace);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setYCbCrColorSpace, "setYCbCrColorSpace(self, QVideoSurfaceFormat.YCbCrColorSpace)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setYCbCrColorSpace(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setYCbCrColorSpace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QVideoSurfaceFormat::YCbCrColorSpace a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, sipType_QVideoSurfaceFormat_YCbCrColorSpace, &a0))
        {
            sipCpp->setYCbCrColorSpace(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setYCbCrColorSpace, doc_QVideoSurfaceFormat_setYCbCrColorSpace);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_sizeHint, "sizeHint(self) -> QSize");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize(sipCpp->sizeHint());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_sizeHint, doc_QVideoSurfaceFormat_sizeHint);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_propertyNames, "propertyNames(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_propertyNames(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_propertyNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>(sipCpp->propertyNames());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_propertyNames, doc_QVideoSurfaceFormat_propertyNames);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_property, "property(self, str) -> Any");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_property(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0Keep, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->property(a0));
            Py_DECREF(a0Keep);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_property, doc_QVideoSurfaceFormat_property);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setProperty, "setProperty(self, str, Any)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAAJ1", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0Keep, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setProperty(a0,*a1);
            Py_DECREF(a0Keep);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setProperty, doc_QVideoSurfaceFormat_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_isMirrored, "isMirrored(self) -> bool");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_isMirrored(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_isMirrored(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMirrored();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_isMirrored, doc_QVideoSurfaceFormat_isMirrored);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoSurfaceFormat_setMirrored, "setMirrored(self, bool)");

extern "C" {static PyObject *meth_QVideoSurfaceFormat_setMirrored(PyObject *, PyObject *);}
static PyObject *meth_QVideoSurfaceFormat_setMirrored(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QVideoSurfaceFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QVideoSurfaceFormat, &sipCpp, &a0))
        {
            sipCpp->setMirrored(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoSurfaceFormat, sipName_setMirrored, doc_QVideoSurfaceFormat_setMirrored);

    return NULL;
}


extern "C" {static PyObject *slot_QVideoSurfaceFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVideoSurfaceFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVideoSurfaceFormat *sipCpp = reinterpret_cast< ::QVideoSurfaceFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoSurfaceFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVideoSurfaceFormat, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVideoSurfaceFormat::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, ne_slot, sipType_QVideoSurfaceFormat, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVideoSurfaceFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVideoSurfaceFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVideoSurfaceFormat *sipCpp = reinterpret_cast< ::QVideoSurfaceFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoSurfaceFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QVideoSurfaceFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVideoSurfaceFormat, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QVideoSurfaceFormat::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, eq_slot, sipType_QVideoSurfaceFormat, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QVideoSurfaceFormat(void *, int);}
static void release_QVideoSurfaceFormat(void *sipCppV, int)
{
    delete reinterpret_cast< ::QVideoSurfaceFormat *>(sipCppV);
}


extern "C" {static void assign_QVideoSurfaceFormat(void *, SIP_SSIZE_T, void *);}
static void assign_QVideoSurfaceFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QVideoSurfaceFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QVideoSurfaceFormat *>(sipSrc);
}


extern "C" {static void *array_QVideoSurfaceFormat(SIP_SSIZE_T);}
static void *array_QVideoSurfaceFormat(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVideoSurfaceFormat[sipNrElem];
}


extern "C" {static void *copy_QVideoSurfaceFormat(const void *, SIP_SSIZE_T);}
static void *copy_QVideoSurfaceFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVideoSurfaceFormat(reinterpret_cast<const  ::QVideoSurfaceFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVideoSurfaceFormat(sipSimpleWrapper *);}
static void dealloc_QVideoSurfaceFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QVideoSurfaceFormat(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QVideoSurfaceFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVideoSurfaceFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QVideoSurfaceFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QVideoSurfaceFormat();

            return sipCpp;
        }
    }

    {
        const  ::QSize* a0;
         ::QVideoFrame::PixelFormat a1;
         ::QAbstractVideoBuffer::HandleType a2 = QAbstractVideoBuffer::NoHandle;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9E|E", sipType_QSize, &a0, sipType_QVideoFrame_PixelFormat, &a1, sipType_QAbstractVideoBuffer_HandleType, &a2))
        {
            sipCpp = new  ::QVideoSurfaceFormat(*a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const  ::QVideoSurfaceFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVideoSurfaceFormat, &a0))
        {
            sipCpp = new  ::QVideoSurfaceFormat(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVideoSurfaceFormat[] = {
    {(void *)slot_QVideoSurfaceFormat___ne__, ne_slot},
    {(void *)slot_QVideoSurfaceFormat___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVideoSurfaceFormat[] = {
    {SIP_MLNAME_CAST(sipName_frameHeight), meth_QVideoSurfaceFormat_frameHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_frameHeight)},
    {SIP_MLNAME_CAST(sipName_frameRate), meth_QVideoSurfaceFormat_frameRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_frameRate)},
    {SIP_MLNAME_CAST(sipName_frameSize), meth_QVideoSurfaceFormat_frameSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_frameSize)},
    {SIP_MLNAME_CAST(sipName_frameWidth), meth_QVideoSurfaceFormat_frameWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_frameWidth)},
    {SIP_MLNAME_CAST(sipName_handleType), meth_QVideoSurfaceFormat_handleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_handleType)},
    {SIP_MLNAME_CAST(sipName_isMirrored), meth_QVideoSurfaceFormat_isMirrored, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_isMirrored)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QVideoSurfaceFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_pixelAspectRatio), meth_QVideoSurfaceFormat_pixelAspectRatio, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_pixelAspectRatio)},
    {SIP_MLNAME_CAST(sipName_pixelFormat), meth_QVideoSurfaceFormat_pixelFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_pixelFormat)},
    {SIP_MLNAME_CAST(sipName_property), meth_QVideoSurfaceFormat_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_property)},
    {SIP_MLNAME_CAST(sipName_propertyNames), meth_QVideoSurfaceFormat_propertyNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_propertyNames)},
    {SIP_MLNAME_CAST(sipName_scanLineDirection), meth_QVideoSurfaceFormat_scanLineDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_scanLineDirection)},
    {SIP_MLNAME_CAST(sipName_setFrameRate), meth_QVideoSurfaceFormat_setFrameRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setFrameRate)},
    {SIP_MLNAME_CAST(sipName_setFrameSize), meth_QVideoSurfaceFormat_setFrameSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setFrameSize)},
    {SIP_MLNAME_CAST(sipName_setMirrored), meth_QVideoSurfaceFormat_setMirrored, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setMirrored)},
    {SIP_MLNAME_CAST(sipName_setPixelAspectRatio), meth_QVideoSurfaceFormat_setPixelAspectRatio, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setPixelAspectRatio)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QVideoSurfaceFormat_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setProperty)},
    {SIP_MLNAME_CAST(sipName_setScanLineDirection), meth_QVideoSurfaceFormat_setScanLineDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setScanLineDirection)},
    {SIP_MLNAME_CAST(sipName_setViewport), meth_QVideoSurfaceFormat_setViewport, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setViewport)},
    {SIP_MLNAME_CAST(sipName_setYCbCrColorSpace), meth_QVideoSurfaceFormat_setYCbCrColorSpace, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_setYCbCrColorSpace)},
    {SIP_MLNAME_CAST(sipName_sizeHint), meth_QVideoSurfaceFormat_sizeHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_sizeHint)},
    {SIP_MLNAME_CAST(sipName_viewport), meth_QVideoSurfaceFormat_viewport, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_viewport)},
    {SIP_MLNAME_CAST(sipName_yCbCrColorSpace), meth_QVideoSurfaceFormat_yCbCrColorSpace, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoSurfaceFormat_yCbCrColorSpace)}
};

static sipEnumMemberDef enummembers_QVideoSurfaceFormat[] = {
    {sipName_BottomToTop, static_cast<int>( ::QVideoSurfaceFormat::BottomToTop), 122},
    {sipName_TopToBottom, static_cast<int>( ::QVideoSurfaceFormat::TopToBottom), 122},
    {sipName_YCbCr_BT601, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_BT601), 123},
    {sipName_YCbCr_BT709, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_BT709), 123},
    {sipName_YCbCr_JPEG, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_JPEG), 123},
    {sipName_YCbCr_Undefined, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_Undefined), 123},
    {sipName_YCbCr_xvYCC601, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_xvYCC601), 123},
    {sipName_YCbCr_xvYCC709, static_cast<int>( ::QVideoSurfaceFormat::YCbCr_xvYCC709), 123},
};

PyDoc_STRVAR(doc_QVideoSurfaceFormat, "\1QVideoSurfaceFormat()\n"
"QVideoSurfaceFormat(QSize, QVideoFrame.PixelFormat, type: QAbstractVideoBuffer.HandleType = QAbstractVideoBuffer.NoHandle)\n"
"QVideoSurfaceFormat(QVideoSurfaceFormat)");


static pyqt5ClassPluginDef plugin_QVideoSurfaceFormat = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtMultimedia_QVideoSurfaceFormat = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QVideoSurfaceFormat,
        {0},
        &plugin_QVideoSurfaceFormat
    },
    {
        sipNameNr_QVideoSurfaceFormat,
        {0, 0, 1},
        23, methods_QVideoSurfaceFormat,
        8, enummembers_QVideoSurfaceFormat,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVideoSurfaceFormat,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVideoSurfaceFormat,
    init_type_QVideoSurfaceFormat,
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
    dealloc_QVideoSurfaceFormat,
    assign_QVideoSurfaceFormat,
    array_QVideoSurfaceFormat,
    copy_QVideoSurfaceFormat,
    release_QVideoSurfaceFormat,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
