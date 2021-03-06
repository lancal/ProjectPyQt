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

#include "sipAPIQtWebEngine.h"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWebEngine/qtwebengineglobal.sip"
#include <qtwebengineglobal.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWebEngine/sipQtWebEngineQtWebEngine.cpp"



PyDoc_STRVAR(doc_QtWebEngine_initialize, "initialize()");

extern "C" {static PyObject *meth_QtWebEngine_initialize(PyObject *, PyObject *);}
static PyObject *meth_QtWebEngine_initialize(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QtWebEngine::initialize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_initialize, doc_QtWebEngine_initialize);

    return NULL;
}


static PyMethodDef methods_QtWebEngine[] = {
    {SIP_MLNAME_CAST(sipName_initialize), meth_QtWebEngine_initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWebEngine_initialize)}
};


static pyqt5ClassPluginDef plugin_QtWebEngine = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebEngine_QtWebEngine = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_NAMESPACE,
        sipNameNr_QtWebEngine,
        {0},
        &plugin_QtWebEngine
    },
    {
        sipNameNr_QtWebEngine,
        {0, 0, 1},
        1, methods_QtWebEngine,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
