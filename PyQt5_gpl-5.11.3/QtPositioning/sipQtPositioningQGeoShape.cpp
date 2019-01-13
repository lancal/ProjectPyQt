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

#include "sipAPIQtPositioning.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPositioning/qgeoshape.sip"
#include <qgeoshape.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPositioning/sipQtPositioningQGeoShape.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPositioning/qgeorectangle.sip"
#include <qgeorectangle.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPositioning/sipQtPositioningQGeoShape.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPositioning/sipQtPositioningQGeoShape.cpp"
#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtPositioning/sipQtPositioningQGeoShape.cpp"


PyDoc_STRVAR(doc_QGeoShape_type, "type(self) -> QGeoShape.ShapeType");

extern "C" {static PyObject *meth_QGeoShape_type(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
             ::QGeoShape::ShapeType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QGeoShape_ShapeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_type, doc_QGeoShape_type);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QGeoShape_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_isValid, doc_QGeoShape_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QGeoShape_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_isEmpty, doc_QGeoShape_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_contains, "contains(self, QGeoCoordinate) -> bool");

extern "C" {static PyObject *meth_QGeoShape_contains(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoCoordinate* a0;
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoShape, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_contains, doc_QGeoShape_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_extendShape, "extendShape(self, QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoShape_extendShape(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_extendShape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoCoordinate* a0;
         ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoShape, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->extendShape(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_extendShape, doc_QGeoShape_extendShape);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_center, "center(self) -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoShape_center(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
             ::QGeoCoordinate*sipRes;

            sipRes = new  ::QGeoCoordinate(sipCpp->center());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_center, doc_QGeoShape_center);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_toString, "toString(self) -> str");

extern "C" {static PyObject *meth_QGeoShape_toString(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_toString, doc_QGeoShape_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoShape_boundingGeoRectangle, "boundingGeoRectangle(self) -> QGeoRectangle");

extern "C" {static PyObject *meth_QGeoShape_boundingGeoRectangle(PyObject *, PyObject *);}
static PyObject *meth_QGeoShape_boundingGeoRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoShape, &sipCpp))
        {
             ::QGeoRectangle*sipRes;

            sipRes = new  ::QGeoRectangle(sipCpp->boundingGeoRectangle());

            return sipConvertFromNewType(sipRes,sipType_QGeoRectangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoShape, sipName_boundingGeoRectangle, doc_QGeoShape_boundingGeoRectangle);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoShape___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoShape___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGeoShape *sipCpp = reinterpret_cast< ::QGeoShape *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoShape));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QGeoShape::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning, ne_slot, sipType_QGeoShape, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGeoShape___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoShape___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGeoShape *sipCpp = reinterpret_cast< ::QGeoShape *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoShape));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGeoShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QGeoShape::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning, eq_slot, sipType_QGeoShape, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoShape(void *, int);}
static void release_QGeoShape(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGeoShape *>(sipCppV);
}


extern "C" {static void assign_QGeoShape(void *, SIP_SSIZE_T, void *);}
static void assign_QGeoShape(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGeoShape *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGeoShape *>(sipSrc);
}


extern "C" {static void *array_QGeoShape(SIP_SSIZE_T);}
static void *array_QGeoShape(SIP_SSIZE_T sipNrElem)
{
    return new  ::QGeoShape[sipNrElem];
}


extern "C" {static void *copy_QGeoShape(const void *, SIP_SSIZE_T);}
static void *copy_QGeoShape(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QGeoShape(reinterpret_cast<const  ::QGeoShape *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoShape(sipSimpleWrapper *);}
static void dealloc_QGeoShape(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGeoShape(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGeoShape(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoShape(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGeoShape *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QGeoShape();

            return sipCpp;
        }
    }

    {
        const  ::QGeoShape* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoShape, &a0))
        {
            sipCpp = new  ::QGeoShape(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoShape[] = {
    {(void *)slot_QGeoShape___ne__, ne_slot},
    {(void *)slot_QGeoShape___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoShape[] = {
    {SIP_MLNAME_CAST(sipName_boundingGeoRectangle), meth_QGeoShape_boundingGeoRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_boundingGeoRectangle)},
    {SIP_MLNAME_CAST(sipName_center), meth_QGeoShape_center, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_center)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QGeoShape_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_contains)},
    {SIP_MLNAME_CAST(sipName_extendShape), meth_QGeoShape_extendShape, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_extendShape)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QGeoShape_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGeoShape_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_isValid)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QGeoShape_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_toString)},
    {SIP_MLNAME_CAST(sipName_type), meth_QGeoShape_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoShape_type)}
};

static sipEnumMemberDef enummembers_QGeoShape[] = {
    {sipName_CircleType, static_cast<int>( ::QGeoShape::CircleType), 26},
    {sipName_PathType, static_cast<int>( ::QGeoShape::PathType), 26},
    {sipName_PolygonType, static_cast<int>( ::QGeoShape::PolygonType), 26},
    {sipName_RectangleType, static_cast<int>( ::QGeoShape::RectangleType), 26},
    {sipName_UnknownType, static_cast<int>( ::QGeoShape::UnknownType), 26},
};

PyDoc_STRVAR(doc_QGeoShape, "\1QGeoShape()\n"
"QGeoShape(QGeoShape)");


static pyqt5ClassPluginDef plugin_QGeoShape = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtPositioning_QGeoShape = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGeoShape,
        {0},
        &plugin_QGeoShape
    },
    {
        sipNameNr_QGeoShape,
        {0, 0, 1},
        8, methods_QGeoShape,
        5, enummembers_QGeoShape,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoShape,
    -1,
    -1,
    0,
    slots_QGeoShape,
    init_type_QGeoShape,
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
    dealloc_QGeoShape,
    assign_QGeoShape,
    array_QGeoShape,
    copy_QGeoShape,
    release_QGeoShape,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};