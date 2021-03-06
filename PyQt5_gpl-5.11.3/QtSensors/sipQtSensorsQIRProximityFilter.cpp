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

#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qirproximitysensor.sip"
#include <qirproximitysensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQIRProximityFilter.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qirproximitysensor.sip"
#include <qirproximitysensor.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQIRProximityFilter.cpp"


class sipQIRProximityFilter : public  ::QIRProximityFilter
{
public:
    sipQIRProximityFilter();
    sipQIRProximityFilter(const  ::QIRProximityFilter&);
    virtual ~sipQIRProximityFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter( ::QIRProximityReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIRProximityFilter(const sipQIRProximityFilter &);
    sipQIRProximityFilter &operator = (const sipQIRProximityFilter &);

    char sipPyMethods[1];
};

sipQIRProximityFilter::sipQIRProximityFilter():  ::QIRProximityFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIRProximityFilter::sipQIRProximityFilter(const  ::QIRProximityFilter& a0):  ::QIRProximityFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIRProximityFilter::~sipQIRProximityFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQIRProximityFilter::filter( ::QIRProximityReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QIRProximityFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QIRProximityReading*);

    return sipVH_QtSensors_16(sipGILState, sipImportedVirtErrorHandlers_QtSensors_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QIRProximityFilter_filter, "filter(self, QIRProximityReading) -> bool");

extern "C" {static PyObject *meth_QIRProximityFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QIRProximityFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QIRProximityReading* a0;
         ::QIRProximityFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QIRProximityFilter, &sipCpp, sipType_QIRProximityReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIRProximityFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIRProximityFilter, sipName_filter, doc_QIRProximityFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QIRProximityFilter(void *, const sipTypeDef *);}
static void *cast_QIRProximityFilter(void *sipCppV, const sipTypeDef *targetType)
{
     ::QIRProximityFilter *sipCpp = reinterpret_cast< ::QIRProximityFilter *>(sipCppV);

    if (targetType == sipType_QSensorFilter)
        return static_cast< ::QSensorFilter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIRProximityFilter(void *, int);}
static void release_QIRProximityFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIRProximityFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::QIRProximityFilter *>(sipCppV);
}


extern "C" {static void dealloc_QIRProximityFilter(sipSimpleWrapper *);}
static void dealloc_QIRProximityFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQIRProximityFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QIRProximityFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QIRProximityFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIRProximityFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIRProximityFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQIRProximityFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QIRProximityFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIRProximityFilter, &a0))
        {
            sipCpp = new sipQIRProximityFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QIRProximityFilter[] = {{59, 255, 1}};


static PyMethodDef methods_QIRProximityFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QIRProximityFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QIRProximityFilter_filter)}
};

PyDoc_STRVAR(doc_QIRProximityFilter, "\1QIRProximityFilter()\n"
"QIRProximityFilter(QIRProximityFilter)");


static pyqt5ClassPluginDef plugin_QIRProximityFilter = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QIRProximityFilter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QIRProximityFilter,
        {0},
        &plugin_QIRProximityFilter
    },
    {
        sipNameNr_QIRProximityFilter,
        {0, 0, 1},
        1, methods_QIRProximityFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIRProximityFilter,
    -1,
    -1,
    supers_QIRProximityFilter,
    0,
    init_type_QIRProximityFilter,
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
    dealloc_QIRProximityFilter,
    0,
    0,
    0,
    release_QIRProximityFilter,
    cast_QIRProximityFilter,
    0,
    0,
    0,
    0,
    0,
    0
};
