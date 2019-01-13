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

#include "sipAPIQtSensors.h"

#line 61 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qtapsensor.sip"
#include <qtapsensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapFilter.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qtapsensor.sip"
#include <qtapsensor.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQTapFilter.cpp"


class sipQTapFilter : public  ::QTapFilter
{
public:
    sipQTapFilter();
    sipQTapFilter(const  ::QTapFilter&);
    virtual ~sipQTapFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter( ::QTapReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTapFilter(const sipQTapFilter &);
    sipQTapFilter &operator = (const sipQTapFilter &);

    char sipPyMethods[1];
};

sipQTapFilter::sipQTapFilter():  ::QTapFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTapFilter::sipQTapFilter(const  ::QTapFilter& a0):  ::QTapFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTapFilter::~sipQTapFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQTapFilter::filter( ::QTapReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QTapFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTapReading*);

    return sipVH_QtSensors_23(sipGILState, sipImportedVirtErrorHandlers_QtSensors_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTapFilter_filter, "filter(self, QTapReading) -> bool");

extern "C" {static PyObject *meth_QTapFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QTapFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QTapReading* a0;
         ::QTapFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTapFilter, &sipCpp, sipType_QTapReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTapFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapFilter, sipName_filter, doc_QTapFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTapFilter(void *, const sipTypeDef *);}
static void *cast_QTapFilter(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTapFilter *sipCpp = reinterpret_cast< ::QTapFilter *>(sipCppV);

    if (targetType == sipType_QSensorFilter)
        return static_cast< ::QSensorFilter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTapFilter(void *, int);}
static void release_QTapFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTapFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::QTapFilter *>(sipCppV);
}


extern "C" {static void dealloc_QTapFilter(sipSimpleWrapper *);}
static void dealloc_QTapFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTapFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTapFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTapFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTapFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTapFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQTapFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QTapFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTapFilter, &a0))
        {
            sipCpp = new sipQTapFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTapFilter[] = {{59, 255, 1}};


static PyMethodDef methods_QTapFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QTapFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapFilter_filter)}
};

PyDoc_STRVAR(doc_QTapFilter, "\1QTapFilter()\n"
"QTapFilter(QTapFilter)");


static pyqt5ClassPluginDef plugin_QTapFilter = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QTapFilter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTapFilter,
        {0},
        &plugin_QTapFilter
    },
    {
        sipNameNr_QTapFilter,
        {0, 0, 1},
        1, methods_QTapFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTapFilter,
    -1,
    -1,
    supers_QTapFilter,
    0,
    init_type_QTapFilter,
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
    dealloc_QTapFilter,
    0,
    0,
    0,
    release_QTapFilter,
    cast_QTapFilter,
    0,
    0,
    0,
    0,
    0,
    0
};
