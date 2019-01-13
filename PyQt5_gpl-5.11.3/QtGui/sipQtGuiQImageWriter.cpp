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

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimagewriter.sip"
#include <qimagewriter.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"

#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQImageWriter.cpp"


PyDoc_STRVAR(doc_QImageWriter_setFormat, "setFormat(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QImageWriter_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setFormat(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setFormat, doc_QImageWriter_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_format, "format(self) -> QByteArray");

extern "C" {static PyObject *meth_QImageWriter_format(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_format, doc_QImageWriter_format);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setDevice, "setDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QImageWriter_setDevice(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QIODevice* a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setDevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setDevice, doc_QImageWriter_setDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_device, "device(self) -> QIODevice");

extern "C" {static PyObject *meth_QImageWriter_device(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QIODevice*sipRes;

            sipRes = sipCpp->device();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_device, doc_QImageWriter_device);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setFileName, "setFileName(self, str)");

extern "C" {static PyObject *meth_QImageWriter_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setFileName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setFileName, doc_QImageWriter_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_fileName, "fileName(self) -> str");

extern "C" {static PyObject *meth_QImageWriter_fileName(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_fileName, doc_QImageWriter_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setQuality, "setQuality(self, int)");

extern "C" {static PyObject *meth_QImageWriter_setQuality(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setQuality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QImageWriter, &sipCpp, &a0))
        {
            sipCpp->setQuality(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setQuality, doc_QImageWriter_setQuality);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_quality, "quality(self) -> int");

extern "C" {static PyObject *meth_QImageWriter_quality(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_quality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->quality();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_quality, doc_QImageWriter_quality);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setGamma, "setGamma(self, float)");

extern "C" {static PyObject *meth_QImageWriter_setGamma(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setGamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QImageWriter, &sipCpp, &a0))
        {
            sipCpp->setGamma(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setGamma, doc_QImageWriter_setGamma);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_gamma, "gamma(self) -> float");

extern "C" {static PyObject *meth_QImageWriter_gamma(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_gamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->gamma();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_gamma, doc_QImageWriter_gamma);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_canWrite, "canWrite(self) -> bool");

extern "C" {static PyObject *meth_QImageWriter_canWrite(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_canWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canWrite();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_canWrite, doc_QImageWriter_canWrite);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_write, "write(self, QImage) -> bool");

extern "C" {static PyObject *meth_QImageWriter_write(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImage* a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QImage, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->write(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_write, doc_QImageWriter_write);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_error, "error(self) -> QImageWriter.ImageWriterError");

extern "C" {static PyObject *meth_QImageWriter_error(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QImageWriter::ImageWriterError sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QImageWriter_ImageWriterError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_error, doc_QImageWriter_error);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QImageWriter_errorString(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_errorString, doc_QImageWriter_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_supportedImageFormats, "supportedImageFormats() -> List[QByteArray]");

extern "C" {static PyObject *meth_QImageWriter_supportedImageFormats(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_supportedImageFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>( ::QImageWriter::supportedImageFormats());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_supportedImageFormats, doc_QImageWriter_supportedImageFormats);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setText, "setText(self, str, str)");

extern "C" {static PyObject *meth_QImageWriter_setText(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->setText(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setText, doc_QImageWriter_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_supportsOption, "supportsOption(self, QImageIOHandler.ImageOption) -> bool");

extern "C" {static PyObject *meth_QImageWriter_supportsOption(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_supportsOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QImageIOHandler::ImageOption a0;
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QImageIOHandler_ImageOption, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->supportsOption(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_supportsOption, doc_QImageWriter_supportsOption);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setCompression, "setCompression(self, int)");

extern "C" {static PyObject *meth_QImageWriter_setCompression(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setCompression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QImageWriter, &sipCpp, &a0))
        {
            sipCpp->setCompression(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setCompression, doc_QImageWriter_setCompression);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_compression, "compression(self) -> int");

extern "C" {static PyObject *meth_QImageWriter_compression(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_compression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->compression();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_compression, doc_QImageWriter_compression);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_supportedMimeTypes, "supportedMimeTypes() -> List[QByteArray]");

extern "C" {static PyObject *meth_QImageWriter_supportedMimeTypes(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_supportedMimeTypes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>( ::QImageWriter::supportedMimeTypes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_supportedMimeTypes, doc_QImageWriter_supportedMimeTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setSubType, "setSubType(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QImageWriter_setSubType(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setSubType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setSubType(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setSubType, doc_QImageWriter_setSubType);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_subType, "subType(self) -> QByteArray");

extern "C" {static PyObject *meth_QImageWriter_subType(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_subType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->subType());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_subType, doc_QImageWriter_subType);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_supportedSubTypes, "supportedSubTypes(self) -> List[QByteArray]");

extern "C" {static PyObject *meth_QImageWriter_supportedSubTypes(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_supportedSubTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            QList< ::QByteArray>*sipRes;

            sipRes = new QList< ::QByteArray>(sipCpp->supportedSubTypes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_supportedSubTypes, doc_QImageWriter_supportedSubTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setOptimizedWrite, "setOptimizedWrite(self, bool)");

extern "C" {static PyObject *meth_QImageWriter_setOptimizedWrite(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setOptimizedWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QImageWriter, &sipCpp, &a0))
        {
            sipCpp->setOptimizedWrite(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setOptimizedWrite, doc_QImageWriter_setOptimizedWrite);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_optimizedWrite, "optimizedWrite(self) -> bool");

extern "C" {static PyObject *meth_QImageWriter_optimizedWrite(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_optimizedWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->optimizedWrite();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_optimizedWrite, doc_QImageWriter_optimizedWrite);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setProgressiveScanWrite, "setProgressiveScanWrite(self, bool)");

extern "C" {static PyObject *meth_QImageWriter_setProgressiveScanWrite(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setProgressiveScanWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QImageWriter, &sipCpp, &a0))
        {
            sipCpp->setProgressiveScanWrite(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setProgressiveScanWrite, doc_QImageWriter_setProgressiveScanWrite);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_progressiveScanWrite, "progressiveScanWrite(self) -> bool");

extern "C" {static PyObject *meth_QImageWriter_progressiveScanWrite(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_progressiveScanWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->progressiveScanWrite();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_progressiveScanWrite, doc_QImageWriter_progressiveScanWrite);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_transformation, "transformation(self) -> QImageIOHandler.Transformations");

extern "C" {static PyObject *meth_QImageWriter_transformation(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_transformation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageWriter, &sipCpp))
        {
             ::QImageIOHandler::Transformations*sipRes;

            sipRes = new  ::QImageIOHandler::Transformations(sipCpp->transformation());

            return sipConvertFromNewType(sipRes,sipType_QImageIOHandler_Transformations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_transformation, doc_QImageWriter_transformation);

    return NULL;
}


PyDoc_STRVAR(doc_QImageWriter_setTransformation, "setTransformation(self, Union[QImageIOHandler.Transformations, QImageIOHandler.Transformation])");

extern "C" {static PyObject *meth_QImageWriter_setTransformation(PyObject *, PyObject *);}
static PyObject *meth_QImageWriter_setTransformation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QImageIOHandler::Transformations* a0;
        int a0State = 0;
         ::QImageWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageWriter, &sipCpp, sipType_QImageIOHandler_Transformations, &a0, &a0State))
        {
            sipCpp->setTransformation(*a0);
            sipReleaseType(a0,sipType_QImageIOHandler_Transformations,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageWriter, sipName_setTransformation, doc_QImageWriter_setTransformation);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QImageWriter(void *, int);}
static void release_QImageWriter(void *sipCppV, int)
{
    delete reinterpret_cast< ::QImageWriter *>(sipCppV);
}


extern "C" {static void dealloc_QImageWriter(sipSimpleWrapper *);}
static void dealloc_QImageWriter(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QImageWriter(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QImageWriter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QImageWriter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QImageWriter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QImageWriter();

            return sipCpp;
        }
    }

    {
         ::QIODevice* a0;
        const  ::QByteArray* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1", sipType_QIODevice, &a0, sipType_QByteArray, &a1, &a1State))
        {
            sipCpp = new  ::QImageWriter(a0,*a1);
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QByteArray& a1def = QByteArray();
        const  ::QByteArray* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            sipCpp = new  ::QImageWriter(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QImageWriter[] = {
    {SIP_MLNAME_CAST(sipName_canWrite), meth_QImageWriter_canWrite, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_canWrite)},
    {SIP_MLNAME_CAST(sipName_compression), meth_QImageWriter_compression, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_compression)},
    {SIP_MLNAME_CAST(sipName_device), meth_QImageWriter_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_device)},
    {SIP_MLNAME_CAST(sipName_error), meth_QImageWriter_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QImageWriter_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_errorString)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QImageWriter_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_fileName)},
    {SIP_MLNAME_CAST(sipName_format), meth_QImageWriter_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_format)},
    {SIP_MLNAME_CAST(sipName_gamma), meth_QImageWriter_gamma, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_gamma)},
    {SIP_MLNAME_CAST(sipName_optimizedWrite), meth_QImageWriter_optimizedWrite, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_optimizedWrite)},
    {SIP_MLNAME_CAST(sipName_progressiveScanWrite), meth_QImageWriter_progressiveScanWrite, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_progressiveScanWrite)},
    {SIP_MLNAME_CAST(sipName_quality), meth_QImageWriter_quality, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_quality)},
    {SIP_MLNAME_CAST(sipName_setCompression), meth_QImageWriter_setCompression, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setCompression)},
    {SIP_MLNAME_CAST(sipName_setDevice), meth_QImageWriter_setDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setDevice)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QImageWriter_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setFileName)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QImageWriter_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setFormat)},
    {SIP_MLNAME_CAST(sipName_setGamma), meth_QImageWriter_setGamma, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setGamma)},
    {SIP_MLNAME_CAST(sipName_setOptimizedWrite), meth_QImageWriter_setOptimizedWrite, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setOptimizedWrite)},
    {SIP_MLNAME_CAST(sipName_setProgressiveScanWrite), meth_QImageWriter_setProgressiveScanWrite, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setProgressiveScanWrite)},
    {SIP_MLNAME_CAST(sipName_setQuality), meth_QImageWriter_setQuality, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setQuality)},
    {SIP_MLNAME_CAST(sipName_setSubType), meth_QImageWriter_setSubType, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setSubType)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QImageWriter_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setText)},
    {SIP_MLNAME_CAST(sipName_setTransformation), meth_QImageWriter_setTransformation, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_setTransformation)},
    {SIP_MLNAME_CAST(sipName_subType), meth_QImageWriter_subType, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_subType)},
    {SIP_MLNAME_CAST(sipName_supportedImageFormats), meth_QImageWriter_supportedImageFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_supportedImageFormats)},
    {SIP_MLNAME_CAST(sipName_supportedMimeTypes), meth_QImageWriter_supportedMimeTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_supportedMimeTypes)},
    {SIP_MLNAME_CAST(sipName_supportedSubTypes), meth_QImageWriter_supportedSubTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_supportedSubTypes)},
    {SIP_MLNAME_CAST(sipName_supportsOption), meth_QImageWriter_supportsOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_supportsOption)},
    {SIP_MLNAME_CAST(sipName_transformation), meth_QImageWriter_transformation, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_transformation)},
    {SIP_MLNAME_CAST(sipName_write), meth_QImageWriter_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageWriter_write)}
};

static sipEnumMemberDef enummembers_QImageWriter[] = {
    {sipName_DeviceError, static_cast<int>( ::QImageWriter::DeviceError), 75},
    {sipName_InvalidImageError, static_cast<int>( ::QImageWriter::InvalidImageError), 75},
    {sipName_UnknownError, static_cast<int>( ::QImageWriter::UnknownError), 75},
    {sipName_UnsupportedFormatError, static_cast<int>( ::QImageWriter::UnsupportedFormatError), 75},
};

PyDoc_STRVAR(doc_QImageWriter, "\1QImageWriter()\n"
"QImageWriter(QIODevice, Union[QByteArray, bytes, bytearray])\n"
"QImageWriter(str, format: Union[QByteArray, bytes, bytearray] = QByteArray())");


static pyqt5ClassPluginDef plugin_QImageWriter = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QImageWriter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QImageWriter,
        {0},
        &plugin_QImageWriter
    },
    {
        sipNameNr_QImageWriter,
        {0, 0, 1},
        29, methods_QImageWriter,
        4, enummembers_QImageWriter,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QImageWriter,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QImageWriter,
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
    dealloc_QImageWriter,
    0,
    0,
    0,
    release_QImageWriter,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};