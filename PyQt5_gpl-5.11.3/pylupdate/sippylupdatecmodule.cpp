/*
 * Module code.
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

#include "sipAPIpylupdate.h"

#line 70 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/pylupdate/pylupdatemod.sip"
#include "pylupdate.h"
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/pylupdate/sippylupdatecmodule.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 32 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/pylupdate/sippylupdatecmodule.cpp"
#line 27 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 35 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/pylupdate/sippylupdatecmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_pylupdate[] = {
    'Q', 'M', 'a', 'p', '<', 'Q', 'S', 't', 'r', 'i', 'n', 'g', ',', 'Q', 'S', 't', 'r', 'i', 'n', 'g', '>', 0,
    's', 't', 'r', 'i', 'p', 'O', 'b', 's', 'o', 'l', 'e', 't', 'e', 'M', 'e', 's', 's', 'a', 'g', 'e', 's', 0,
    's', 't', 'r', 'i', 'p', 'E', 'm', 'p', 't', 'y', 'C', 'o', 'n', 't', 'e', 'x', 't', 's', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'P', 'y', 'Q', 't', '5', '.', 'p', 'y', 'l', 'u', 'p', 'd', 'a', 't', 'e', 0,
    'M', 'e', 't', 'a', 'T', 'r', 'a', 'n', 's', 'l', 'a', 't', 'o', 'r', 0,
    'p', 'r', 'o', 'F', 'i', 'l', 'e', 'T', 'a', 'g', 'M', 'a', 'p', 0,
    'f', 'e', 't', 'c', 'h', 't', 'r', '_', 'u', 'i', 0,
    'f', 'e', 't', 'c', 'h', 't', 'r', '_', 'p', 'y', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    's', 'e', 't', 'C', 'o', 'd', 'e', 'c', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'm', 'e', 'r', 'g', 'e', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 'a', 'v', 'e', 0,
    'l', 'o', 'a', 'd', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'p', 'i', 'd', 0,
};


extern "C" {static PyObject *func_proFileTagMap(PyObject *,PyObject *);}
static PyObject *func_proFileTagMap(PyObject *,PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QMap< ::QString, ::QString>*sipRes;

            sipRes = new QMap< ::QString, ::QString>(proFileTagMap(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_proFileTagMap, NULL);

    return NULL;
}


extern "C" {static PyObject *func_merge(PyObject *,PyObject *);}
static PyObject *func_merge(PyObject *,PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::MetaTranslator* a0;
        const  ::MetaTranslator* a1;
         ::MetaTranslator* a2;
        bool a3;
        bool a4;
        const  ::QString* a5;
        int a5State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J8J8bbJ1", sipType_MetaTranslator, &a0, sipType_MetaTranslator, &a1, sipType_MetaTranslator, &a2, &a3, &a4, sipType_QString,&a5, &a5State))
        {
            merge(a0,a1,a2,a3,a4,*a5);
            sipReleaseType(const_cast< ::QString *>(a5),sipType_QString,a5State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_merge, NULL);

    return NULL;
}


extern "C" {static PyObject *func_fetchtr_ui(PyObject *,PyObject *);}
static PyObject *func_fetchtr_ui(PyObject *,PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::MetaTranslator* a1;
        const char* a2;
        PyObject *a2Keep;
        bool a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "ALJ8ALb", &a0Keep, &a0, sipType_MetaTranslator, &a1, &a2Keep, &a2, &a3))
        {
            fetchtr_ui(a0,a1,a2,a3);
            Py_DECREF(a0Keep);
            Py_DECREF(a2Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_fetchtr_ui, NULL);

    return NULL;
}


extern "C" {static PyObject *func_fetchtr_py(PyObject *,PyObject *);}
static PyObject *func_fetchtr_py(PyObject *,PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::MetaTranslator* a1;
        const char* a2;
        PyObject *a2Keep;
        bool a3;
        const char* a4;
        PyObject *a4Keep;
        const char* a5;
        PyObject *a5Keep;
        const char* a6;
        PyObject *a6Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "ALJ8ALbALALAL", &a0Keep, &a0, sipType_MetaTranslator, &a1, &a2Keep, &a2, &a3, &a4Keep, &a4, &a5Keep, &a5, &a6Keep, &a6))
        {
            fetchtr_py(a0,a1,a2,a3,a4,a5,a6);
            Py_DECREF(a0Keep);
            Py_DECREF(a2Keep);
            Py_DECREF(a4Keep);
            Py_DECREF(a5Keep);
            Py_DECREF(a6Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_fetchtr_py, NULL);

    return NULL;
}


/*
 * This defines each type in this module.
 */
sipTypeDef *sipExportedTypes_pylupdate[] = {
    &sipTypeDef_pylupdate_MetaTranslator.ctd_base,
    &sipTypeDef_pylupdate_QMap_0100QString_0100QString.mtd_base,
};


/* This defines the types that this module needs to import from QtCore. */
sipImportedTypeDef sipImportedTypes_pylupdate_QtCore[] = {
    {"QString"},
    {NULL}
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", sipImportedTypes_pylupdate_QtCore, NULL, NULL},
    {NULL, NULL, NULL, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_pylupdate = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_pylupdate,
    0,
    sipStrings_pylupdate,
    importsTable,
    NULL,
    2,
    sipExportedTypes_pylupdate,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_pylupdate;

sip_qt_metaobject_func sip_pylupdate_qt_metaobject;
sip_qt_metacall_func sip_pylupdate_qt_metacall;
sip_qt_metacast_func sip_pylupdate_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_pylupdate
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initpylupdate
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {SIP_MLNAME_CAST(sipName_proFileTagMap), func_proFileTagMap, METH_VARARGS, NULL},
        {SIP_MLNAME_CAST(sipName_merge), func_merge, METH_VARARGS, NULL},
        {SIP_MLNAME_CAST(sipName_fetchtr_ui), func_fetchtr_ui, METH_VARARGS, NULL},
        {SIP_MLNAME_CAST(sipName_fetchtr_py), func_fetchtr_py, METH_VARARGS, NULL},
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.pylupdate",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt5_pylupdate, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_pylupdate), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule("PyQt5.sip");
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>("PyQt5.sip"));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_pylupdate = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, "PyQt5.sip._C_API"));
#else
    sipAPI_pylupdate = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_pylupdate == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_pylupdate,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_pylupdate_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_pylupdate_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_pylupdate_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_pylupdate_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_pylupdate,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    SIP_MODULE_RETURN(sipModule);
}
