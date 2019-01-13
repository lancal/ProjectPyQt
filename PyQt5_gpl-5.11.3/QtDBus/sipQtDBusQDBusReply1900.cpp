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

#include "sipAPIQtDBus.h"

#line 162 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 30 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusReply1900.cpp"



extern "C" {static void assign_QDBusReply_1900(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusReply_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusReply<uint> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusReply<uint> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_1900(SIP_SSIZE_T);}
static void *array_QDBusReply_1900(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDBusReply<uint>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_1900(const void *, SIP_SSIZE_T);}
static void *copy_QDBusReply_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDBusReply<uint>(reinterpret_cast<const  ::QDBusReply<uint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_1900(void *, int);}
static void release_QDBusReply_1900(void *ptr, int)
{
    delete reinterpret_cast< ::QDBusReply<uint> *>(ptr);
}



extern "C" {static int convertTo_QDBusReply_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_1900(PyObject *,void **,int *,PyObject *)
{
#line 194 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 70 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusReply1900.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_1900(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_1900(void *sipCppV, PyObject *sipTransferObj)
{
    ::QDBusReply<uint> *sipCpp = reinterpret_cast< ::QDBusReply<uint> *>(sipCppV);

#line 167 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtDBus/qpydbusreply.sip"
    PyObject *value_obj;

    if (sipCpp->isValid())
    {
        if ((value_obj = PyLong_FromUnsignedLong(sipCpp->value())) == NULL)
            return NULL;
    }
    else
    {
        value_obj = 0;
    }

    QPyDBusReply *reply = new QPyDBusReply(value_obj,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 104 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtDBus/sipQtDBusQDBusReply1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1711,     /* QDBusReply<uint> */
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
    assign_QDBusReply_1900,
    array_QDBusReply_1900,
    copy_QDBusReply_1900,
    release_QDBusReply_1900,
    convertTo_QDBusReply_1900,
    convertFrom_QDBusReply_1900
};
