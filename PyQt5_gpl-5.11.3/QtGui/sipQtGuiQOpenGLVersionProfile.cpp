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

#line 121 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qopenglcontext.sip"
#include <qopenglcontext.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVersionProfile.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtGui/qsurfaceformat.sip"
#include <qsurfaceformat.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVersionProfile.cpp"
#line 250 "sip/QtCore/qpycore_qpair.sip"
#include <qpair.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtGui/sipQtGuiQOpenGLVersionProfile.cpp"


PyDoc_STRVAR(doc_QOpenGLVersionProfile_version, "version(self) -> Tuple[int, int]");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_version(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_version(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp))
        {
             ::QPair<int,int>*sipRes;

            sipRes = new  ::QPair<int,int>(sipCpp->version());

            return sipConvertFromNewType(sipRes,sipType_QPair_1800_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_version, doc_QOpenGLVersionProfile_version);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_setVersion, "setVersion(self, int, int)");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_setVersion(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_setVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
         ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp, &a0, &a1))
        {
            sipCpp->setVersion(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_setVersion, doc_QOpenGLVersionProfile_setVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_profile, "profile(self) -> QSurfaceFormat.OpenGLContextProfile");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_profile(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_profile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp))
        {
             ::QSurfaceFormat::OpenGLContextProfile sipRes;

            sipRes = sipCpp->profile();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSurfaceFormat_OpenGLContextProfile);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_profile, doc_QOpenGLVersionProfile_profile);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_setProfile, "setProfile(self, QSurfaceFormat.OpenGLContextProfile)");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_setProfile(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_setProfile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSurfaceFormat::OpenGLContextProfile a0;
         ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp, sipType_QSurfaceFormat_OpenGLContextProfile, &a0))
        {
            sipCpp->setProfile(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_setProfile, doc_QOpenGLVersionProfile_setProfile);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_hasProfiles, "hasProfiles(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_hasProfiles(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_hasProfiles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasProfiles();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_hasProfiles, doc_QOpenGLVersionProfile_hasProfiles);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_isLegacyVersion, "isLegacyVersion(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_isLegacyVersion(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_isLegacyVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLegacyVersion();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_isLegacyVersion, doc_QOpenGLVersionProfile_isLegacyVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLVersionProfile_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLVersionProfile_isValid(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLVersionProfile_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLVersionProfile, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLVersionProfile, sipName_isValid, doc_QOpenGLVersionProfile_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_QOpenGLVersionProfile___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLVersionProfile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLVersionProfile *sipCpp = reinterpret_cast< ::QOpenGLVersionProfile *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLVersionProfile));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QOpenGLVersionProfile, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QOpenGLVersionProfile, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLVersionProfile___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLVersionProfile___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLVersionProfile *sipCpp = reinterpret_cast< ::QOpenGLVersionProfile *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLVersionProfile));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLVersionProfile* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QOpenGLVersionProfile, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QOpenGLVersionProfile, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLVersionProfile(void *, int);}
static void release_QOpenGLVersionProfile(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLVersionProfile *>(sipCppV);
}


extern "C" {static void assign_QOpenGLVersionProfile(void *, SIP_SSIZE_T, void *);}
static void assign_QOpenGLVersionProfile(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLVersionProfile *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLVersionProfile *>(sipSrc);
}


extern "C" {static void *array_QOpenGLVersionProfile(SIP_SSIZE_T);}
static void *array_QOpenGLVersionProfile(SIP_SSIZE_T sipNrElem)
{
    return new  ::QOpenGLVersionProfile[sipNrElem];
}


extern "C" {static void *copy_QOpenGLVersionProfile(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLVersionProfile(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QOpenGLVersionProfile(reinterpret_cast<const  ::QOpenGLVersionProfile *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLVersionProfile(sipSimpleWrapper *);}
static void dealloc_QOpenGLVersionProfile(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLVersionProfile(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLVersionProfile(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLVersionProfile(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLVersionProfile *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLVersionProfile();

            return sipCpp;
        }
    }

    {
        const  ::QSurfaceFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSurfaceFormat, &a0))
        {
            sipCpp = new  ::QOpenGLVersionProfile(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLVersionProfile* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QOpenGLVersionProfile, &a0))
        {
            sipCpp = new  ::QOpenGLVersionProfile(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLVersionProfile[] = {
    {(void *)slot_QOpenGLVersionProfile___eq__, eq_slot},
    {(void *)slot_QOpenGLVersionProfile___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QOpenGLVersionProfile[] = {
    {SIP_MLNAME_CAST(sipName_hasProfiles), meth_QOpenGLVersionProfile_hasProfiles, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_hasProfiles)},
    {SIP_MLNAME_CAST(sipName_isLegacyVersion), meth_QOpenGLVersionProfile_isLegacyVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_isLegacyVersion)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QOpenGLVersionProfile_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_isValid)},
    {SIP_MLNAME_CAST(sipName_profile), meth_QOpenGLVersionProfile_profile, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_profile)},
    {SIP_MLNAME_CAST(sipName_setProfile), meth_QOpenGLVersionProfile_setProfile, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_setProfile)},
    {SIP_MLNAME_CAST(sipName_setVersion), meth_QOpenGLVersionProfile_setVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_setVersion)},
    {SIP_MLNAME_CAST(sipName_version), meth_QOpenGLVersionProfile_version, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLVersionProfile_version)}
};

PyDoc_STRVAR(doc_QOpenGLVersionProfile, "\1QOpenGLVersionProfile()\n"
"QOpenGLVersionProfile(QSurfaceFormat)\n"
"QOpenGLVersionProfile(QOpenGLVersionProfile)");


static pyqt5ClassPluginDef plugin_QOpenGLVersionProfile = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLVersionProfile = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLVersionProfile,
        {0},
        &plugin_QOpenGLVersionProfile
    },
    {
        sipNameNr_QOpenGLVersionProfile,
        {0, 0, 1},
        7, methods_QOpenGLVersionProfile,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLVersionProfile,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLVersionProfile,
    init_type_QOpenGLVersionProfile,
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
    dealloc_QOpenGLVersionProfile,
    assign_QOpenGLVersionProfile,
    array_QOpenGLVersionProfile,
    copy_QOpenGLVersionProfile,
    release_QOpenGLVersionProfile,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
