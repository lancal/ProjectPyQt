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

#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qproximitysensor.sip"
#include <qproximitysensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQProximityFilter.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qproximitysensor.sip"
#include <qproximitysensor.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQProximityFilter.cpp"


class sipQProximityFilter : public  ::QProximityFilter
{
public:
    sipQProximityFilter();
    sipQProximityFilter(const  ::QProximityFilter&);
    virtual ~sipQProximityFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter( ::QProximityReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQProximityFilter(const sipQProximityFilter &);
    sipQProximityFilter &operator = (const sipQProximityFilter &);

    char sipPyMethods[1];
};

sipQProximityFilter::sipQProximityFilter():  ::QProximityFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQProximityFilter::sipQProximityFilter(const  ::QProximityFilter& a0):  ::QProximityFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQProximityFilter::~sipQProximityFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQProximityFilter::filter( ::QProximityReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QProximityFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QProximityReading*);

    return sipVH_QtSensors_22(sipGILState, sipImportedVirtErrorHandlers_QtSensors_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QProximityFilter_filter, "filter(self, QProximityReading) -> bool");

extern "C" {static PyObject *meth_QProximityFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QProximityFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QProximityReading* a0;
         ::QProximityFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QProximityFilter, &sipCpp, sipType_QProximityReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QProximityFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProximityFilter, sipName_filter, doc_QProximityFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QProximityFilter(void *, const sipTypeDef *);}
static void *cast_QProximityFilter(void *sipCppV, const sipTypeDef *targetType)
{
     ::QProximityFilter *sipCpp = reinterpret_cast< ::QProximityFilter *>(sipCppV);

    if (targetType == sipType_QSensorFilter)
        return static_cast< ::QSensorFilter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QProximityFilter(void *, int);}
static void release_QProximityFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQProximityFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::QProximityFilter *>(sipCppV);
}


extern "C" {static void dealloc_QProximityFilter(sipSimpleWrapper *);}
static void dealloc_QProximityFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQProximityFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QProximityFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QProximityFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QProximityFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQProximityFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQProximityFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QProximityFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QProximityFilter, &a0))
        {
            sipCpp = new sipQProximityFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QProximityFilter[] = {{59, 255, 1}};


static PyMethodDef methods_QProximityFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QProximityFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QProximityFilter_filter)}
};

PyDoc_STRVAR(doc_QProximityFilter, "\1QProximityFilter()\n"
"QProximityFilter(QProximityFilter)");


static pyqt5ClassPluginDef plugin_QProximityFilter = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QProximityFilter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QProximityFilter,
        {0},
        &plugin_QProximityFilter
    },
    {
        sipNameNr_QProximityFilter,
        {0, 0, 1},
        1, methods_QProximityFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QProximityFilter,
    -1,
    -1,
    supers_QProximityFilter,
    0,
    init_type_QProximityFilter,
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
    dealloc_QProximityFilter,
    0,
    0,
    0,
    release_QProximityFilter,
    cast_QProximityFilter,
    0,
    0,
    0,
    0,
    0,
    0
};
