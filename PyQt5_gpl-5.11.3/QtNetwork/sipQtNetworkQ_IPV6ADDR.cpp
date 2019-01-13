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

#include "sipAPIQtNetwork.h"

#line 147 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"



extern "C" {static void assign_Q_IPV6ADDR(void *, SIP_SSIZE_T, void *);}
static void assign_Q_IPV6ADDR(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Q_IPV6ADDR *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Q_IPV6ADDR *>(sipSrc);
}


extern "C" {static void *array_Q_IPV6ADDR(SIP_SSIZE_T);}
static void *array_Q_IPV6ADDR(SIP_SSIZE_T sipNrElem)
{
    return new  ::Q_IPV6ADDR[sipNrElem];
}


extern "C" {static void *copy_Q_IPV6ADDR(const void *, SIP_SSIZE_T);}
static void *copy_Q_IPV6ADDR(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Q_IPV6ADDR(reinterpret_cast<const  ::Q_IPV6ADDR *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_Q_IPV6ADDR(void *, int);}
static void release_Q_IPV6ADDR(void *ptr, int)
{
    delete reinterpret_cast< ::Q_IPV6ADDR *>(ptr);
}



extern "C" {static int convertTo_Q_IPV6ADDR(PyObject *, void **, int *, PyObject *);}
static int convertTo_Q_IPV6ADDR(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Q_IPV6ADDR **sipCppPtr = reinterpret_cast< ::Q_IPV6ADDR **>(sipCppPtrV);

#line 176 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qhostaddress.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PySequence_Check(sipPy) && PySequence_Size(sipPy) == 16);

    Q_IPV6ADDR *qa = new Q_IPV6ADDR;
 
    for (Py_ssize_t i = 0; i < 16; ++i)
    {
        PyObject *itm = PySequence_GetItem(sipPy, i);

        if (!itm)
        {
            delete qa;
            *sipIsErr = 1;

            return 0;
        }

        (*qa)[i] = SIPLong_AsLong(itm);

        Py_DECREF(itm);
    }
 
    *sipCppPtr = qa;
 
    return sipGetState(sipTransferObj);
#line 95 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"
}


extern "C" {static PyObject *convertFrom_Q_IPV6ADDR(void *, PyObject *);}
static PyObject *convertFrom_Q_IPV6ADDR(void *sipCppV, PyObject *)
{
    ::Q_IPV6ADDR *sipCpp = reinterpret_cast< ::Q_IPV6ADDR *>(sipCppV);

#line 151 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtNetwork/qhostaddress.sip"
    // Create the tuple.
    PyObject *t;

    if ((t = PyTuple_New(16)) == NULL)
        return NULL;

    // Set the tuple elements.
    for (int i = 0; i < 16; ++i)
    {
        PyObject *pobj;

        if ((pobj = SIPLong_FromLong((*sipCpp)[i])) == NULL)
        {
            Py_DECREF(t);

            return NULL;
        }

        PyTuple_SetItem(t, i, pobj);
    }

    return t;
#line 127 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_Q_IPV6ADDR = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_Q_IPV6ADDR,     /* Q_IPV6ADDR */
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
    assign_Q_IPV6ADDR,
    array_Q_IPV6ADDR,
    copy_Q_IPV6ADDR,
    release_Q_IPV6ADDR,
    convertTo_Q_IPV6ADDR,
    convertFrom_Q_IPV6ADDR
};
