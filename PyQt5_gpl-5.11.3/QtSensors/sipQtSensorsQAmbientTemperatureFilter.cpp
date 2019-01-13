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

#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qambienttemperaturesensor.sip"
#include <qambienttemperaturesensor.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQAmbientTemperatureFilter.cpp"

#line 28 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtSensors/qambienttemperaturesensor.sip"
#include <qambienttemperaturesensor.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtSensors/sipQtSensorsQAmbientTemperatureFilter.cpp"


class sipQAmbientTemperatureFilter : public  ::QAmbientTemperatureFilter
{
public:
    sipQAmbientTemperatureFilter();
    sipQAmbientTemperatureFilter(const  ::QAmbientTemperatureFilter&);
    virtual ~sipQAmbientTemperatureFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter( ::QAmbientTemperatureReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAmbientTemperatureFilter(const sipQAmbientTemperatureFilter &);
    sipQAmbientTemperatureFilter &operator = (const sipQAmbientTemperatureFilter &);

    char sipPyMethods[1];
};

sipQAmbientTemperatureFilter::sipQAmbientTemperatureFilter():  ::QAmbientTemperatureFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAmbientTemperatureFilter::sipQAmbientTemperatureFilter(const  ::QAmbientTemperatureFilter& a0):  ::QAmbientTemperatureFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAmbientTemperatureFilter::~sipQAmbientTemperatureFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQAmbientTemperatureFilter::filter( ::QAmbientTemperatureReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAmbientTemperatureFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QAmbientTemperatureReading*);

    return sipVH_QtSensors_10(sipGILState, sipImportedVirtErrorHandlers_QtSensors_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAmbientTemperatureFilter_filter, "filter(self, QAmbientTemperatureReading) -> bool");

extern "C" {static PyObject *meth_QAmbientTemperatureFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QAmbientTemperatureFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QAmbientTemperatureReading* a0;
         ::QAmbientTemperatureFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAmbientTemperatureFilter, &sipCpp, sipType_QAmbientTemperatureReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAmbientTemperatureFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAmbientTemperatureFilter, sipName_filter, doc_QAmbientTemperatureFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QAmbientTemperatureFilter(void *, const sipTypeDef *);}
static void *cast_QAmbientTemperatureFilter(void *sipCppV, const sipTypeDef *targetType)
{
     ::QAmbientTemperatureFilter *sipCpp = reinterpret_cast< ::QAmbientTemperatureFilter *>(sipCppV);

    if (targetType == sipType_QSensorFilter)
        return static_cast< ::QSensorFilter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAmbientTemperatureFilter(void *, int);}
static void release_QAmbientTemperatureFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAmbientTemperatureFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::QAmbientTemperatureFilter *>(sipCppV);
}


extern "C" {static void dealloc_QAmbientTemperatureFilter(sipSimpleWrapper *);}
static void dealloc_QAmbientTemperatureFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAmbientTemperatureFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAmbientTemperatureFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAmbientTemperatureFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAmbientTemperatureFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAmbientTemperatureFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQAmbientTemperatureFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QAmbientTemperatureFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAmbientTemperatureFilter, &a0))
        {
            sipCpp = new sipQAmbientTemperatureFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAmbientTemperatureFilter[] = {{59, 255, 1}};


static PyMethodDef methods_QAmbientTemperatureFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QAmbientTemperatureFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QAmbientTemperatureFilter_filter)}
};

PyDoc_STRVAR(doc_QAmbientTemperatureFilter, "\1QAmbientTemperatureFilter()\n"
"QAmbientTemperatureFilter(QAmbientTemperatureFilter)");


static pyqt5ClassPluginDef plugin_QAmbientTemperatureFilter = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSensors_QAmbientTemperatureFilter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QAmbientTemperatureFilter,
        {0},
        &plugin_QAmbientTemperatureFilter
    },
    {
        sipNameNr_QAmbientTemperatureFilter,
        {0, 0, 1},
        1, methods_QAmbientTemperatureFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAmbientTemperatureFilter,
    -1,
    -1,
    supers_QAmbientTemperatureFilter,
    0,
    init_type_QAmbientTemperatureFilter,
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
    dealloc_QAmbientTemperatureFilter,
    0,
    0,
    0,
    release_QAmbientTemperatureFilter,
    cast_QAmbientTemperatureFilter,
    0,
    0,
    0,
    0,
    0,
    0
};