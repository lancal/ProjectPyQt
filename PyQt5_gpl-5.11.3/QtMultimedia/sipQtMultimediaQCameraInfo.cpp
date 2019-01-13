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

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qcamerainfo.sip"
#include <qcamerainfo.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQCameraInfo.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQCameraInfo.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qcamera.sip"
#include <qcamera.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQCameraInfo.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQCameraInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQCameraInfo.cpp"


PyDoc_STRVAR(doc_QCameraInfo_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QCameraInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_isNull, doc_QCameraInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_deviceName, "deviceName(self) -> str");

extern "C" {static PyObject *meth_QCameraInfo_deviceName(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_deviceName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->deviceName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_deviceName, doc_QCameraInfo_deviceName);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_description, "description(self) -> str");

extern "C" {static PyObject *meth_QCameraInfo_description(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_description, doc_QCameraInfo_description);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_position, "position(self) -> QCamera.Position");

extern "C" {static PyObject *meth_QCameraInfo_position(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraInfo, &sipCpp))
        {
             ::QCamera::Position sipRes;

            sipRes = sipCpp->position();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QCamera_Position);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_position, doc_QCameraInfo_position);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_orientation, "orientation(self) -> int");

extern "C" {static PyObject *meth_QCameraInfo_orientation(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCameraInfo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->orientation();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_orientation, doc_QCameraInfo_orientation);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_defaultCamera, "defaultCamera() -> QCameraInfo");

extern "C" {static PyObject *meth_QCameraInfo_defaultCamera(PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_defaultCamera(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QCameraInfo*sipRes;

            sipRes = new  ::QCameraInfo( ::QCameraInfo::defaultCamera());

            return sipConvertFromNewType(sipRes,sipType_QCameraInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_defaultCamera, doc_QCameraInfo_defaultCamera);

    return NULL;
}


PyDoc_STRVAR(doc_QCameraInfo_availableCameras, "availableCameras(position: QCamera.Position = QCamera.UnspecifiedPosition) -> List[QCameraInfo]");

extern "C" {static PyObject *meth_QCameraInfo_availableCameras(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QCameraInfo_availableCameras(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QCamera::Position a0 = QCamera::UnspecifiedPosition;

        static const char *sipKwdList[] = {
            sipName_position,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|E", sipType_QCamera_Position, &a0))
        {
            QList< ::QCameraInfo>*sipRes;

            sipRes = new QList< ::QCameraInfo>( ::QCameraInfo::availableCameras(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QCameraInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCameraInfo, sipName_availableCameras, doc_QCameraInfo_availableCameras);

    return NULL;
}


extern "C" {static PyObject *slot_QCameraInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCameraInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCameraInfo *sipCpp = reinterpret_cast< ::QCameraInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCameraInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QCameraInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, ne_slot, sipType_QCameraInfo, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QCameraInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCameraInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCameraInfo *sipCpp = reinterpret_cast< ::QCameraInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCameraInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCameraInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QCameraInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia, eq_slot, sipType_QCameraInfo, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QCameraInfo(void *, int);}
static void release_QCameraInfo(void *sipCppV, int)
{
    delete reinterpret_cast< ::QCameraInfo *>(sipCppV);
}


extern "C" {static void assign_QCameraInfo(void *, SIP_SSIZE_T, void *);}
static void assign_QCameraInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QCameraInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QCameraInfo *>(sipSrc);
}


extern "C" {static void *array_QCameraInfo(SIP_SSIZE_T);}
static void *array_QCameraInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QCameraInfo[sipNrElem];
}


extern "C" {static void *copy_QCameraInfo(const void *, SIP_SSIZE_T);}
static void *copy_QCameraInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QCameraInfo(reinterpret_cast<const  ::QCameraInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCameraInfo(sipSimpleWrapper *);}
static void dealloc_QCameraInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QCameraInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QCameraInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCameraInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QCameraInfo *sipCpp = 0;

    {
        const  ::QByteArray& a0def = QByteArray();
        const  ::QByteArray* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new  ::QCameraInfo(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QCamera* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCamera, &a0))
        {
            sipCpp = new  ::QCameraInfo(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QCameraInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCameraInfo, &a0))
        {
            sipCpp = new  ::QCameraInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCameraInfo[] = {
    {(void *)slot_QCameraInfo___ne__, ne_slot},
    {(void *)slot_QCameraInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QCameraInfo[] = {
    {SIP_MLNAME_CAST(sipName_availableCameras), (PyCFunction)meth_QCameraInfo_availableCameras, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QCameraInfo_availableCameras)},
    {SIP_MLNAME_CAST(sipName_defaultCamera), meth_QCameraInfo_defaultCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_defaultCamera)},
    {SIP_MLNAME_CAST(sipName_description), meth_QCameraInfo_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_description)},
    {SIP_MLNAME_CAST(sipName_deviceName), meth_QCameraInfo_deviceName, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_deviceName)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QCameraInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QCameraInfo_orientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_orientation)},
    {SIP_MLNAME_CAST(sipName_position), meth_QCameraInfo_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QCameraInfo_position)}
};

PyDoc_STRVAR(doc_QCameraInfo, "\1QCameraInfo(name: Union[QByteArray, bytes, bytearray] = QByteArray())\n"
"QCameraInfo(QCamera)\n"
"QCameraInfo(QCameraInfo)");


static pyqt5ClassPluginDef plugin_QCameraInfo = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtMultimedia_QCameraInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QCameraInfo,
        {0},
        &plugin_QCameraInfo
    },
    {
        sipNameNr_QCameraInfo,
        {0, 0, 1},
        7, methods_QCameraInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCameraInfo,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCameraInfo,
    init_type_QCameraInfo,
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
    dealloc_QCameraInfo,
    assign_QCameraInfo,
    array_QCameraInfo,
    copy_QCameraInfo,
    release_QCameraInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
