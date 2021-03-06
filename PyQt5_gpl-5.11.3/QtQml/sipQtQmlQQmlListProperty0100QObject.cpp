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

#include "sipAPIQtQml.h"

#line 24 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qpyqmllistproperty.sip"
#include "qpyqmllistpropertywrapper.h"
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"


extern "C" {static void assign_QQmlListProperty_0100QObject(void *, SIP_SSIZE_T, void *);}
static void assign_QQmlListProperty_0100QObject(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QQmlListProperty< ::QObject> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QQmlListProperty< ::QObject> *>(sipSrc);
}


extern "C" {static void *array_QQmlListProperty_0100QObject(SIP_SSIZE_T);}
static void *array_QQmlListProperty_0100QObject(SIP_SSIZE_T sipNrElem)
{
    return new  ::QQmlListProperty< ::QObject>[sipNrElem];
}


extern "C" {static void *copy_QQmlListProperty_0100QObject(const void *, SIP_SSIZE_T);}
static void *copy_QQmlListProperty_0100QObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QQmlListProperty< ::QObject>(reinterpret_cast<const  ::QQmlListProperty< ::QObject> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QQmlListProperty_0100QObject(void *, int);}
static void release_QQmlListProperty_0100QObject(void *ptr, int)
{
    delete reinterpret_cast< ::QQmlListProperty< ::QObject> *>(ptr);
}



extern "C" {static int convertTo_QQmlListProperty_0100QObject(PyObject *, void **, int *, PyObject *);}
static int convertTo_QQmlListProperty_0100QObject(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
     ::QQmlListProperty< ::QObject> **sipCppPtr = reinterpret_cast< ::QQmlListProperty< ::QObject> **>(sipCppPtrV);

#line 32 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qpyqmllistproperty.sip"
    if (sipIsErr == NULL)
        return PyObject_IsInstance(sipPy, (PyObject *)qpyqml_QQmlListPropertyWrapper_TypeObject);

    *sipCppPtr = ((qpyqml_QQmlListPropertyWrapper *)sipPy)->qml_list_property;

    // It isn't a temporary copy.
    return 0;
#line 79 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"
}


extern "C" {static PyObject *convertFrom_QQmlListProperty_0100QObject(void *, PyObject *);}
static PyObject *convertFrom_QQmlListProperty_0100QObject(void *sipCppV, PyObject *)
{
    ::QQmlListProperty< ::QObject> *sipCpp = reinterpret_cast< ::QQmlListProperty< ::QObject> *>(sipCppV);

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtQml/qpyqmllistproperty.sip"
    return qpyqml_QQmlListPropertyWrapper_New(sipCpp, 0);
#line 90 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtQml/sipQtQmlQQmlListProperty0100QObject.cpp"
}


sipMappedTypeDef sipTypeDef_QtQml_QQmlListProperty_0100QObject = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_666,     /* QQmlListProperty<QObject> */
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
    assign_QQmlListProperty_0100QObject,
    array_QQmlListProperty_0100QObject,
    copy_QQmlListProperty_0100QObject,
    release_QQmlListProperty_0100QObject,
    convertTo_QQmlListProperty_0100QObject,
    convertFrom_QQmlListProperty_0100QObject
};
