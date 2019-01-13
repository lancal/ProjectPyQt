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

#include "sipAPIQtCore.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"

#line 27 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"
#line 183 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"
#line 152 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"


PyDoc_STRVAR(doc_QRegularExpression_patternOptions, "patternOptions(self) -> QRegularExpression.PatternOptions");

extern "C" {static PyObject *meth_QRegularExpression_patternOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_patternOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
             ::QRegularExpression::PatternOptions*sipRes;

            sipRes = new  ::QRegularExpression::PatternOptions(sipCpp->patternOptions());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_patternOptions, doc_QRegularExpression_patternOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_setPatternOptions, "setPatternOptions(self, Union[QRegularExpression.PatternOptions, QRegularExpression.PatternOption])");

extern "C" {static PyObject *meth_QRegularExpression_setPatternOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_setPatternOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;
         ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRegularExpression, &sipCpp, sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            sipCpp->setPatternOptions(*a0);
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_setPatternOptions, doc_QRegularExpression_setPatternOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_swap, "swap(self, QRegularExpression)");

extern "C" {static PyObject *meth_QRegularExpression_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegularExpression* a0;
         ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpression, &sipCpp, sipType_QRegularExpression, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_swap, doc_QRegularExpression_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_pattern, "pattern(self) -> str");

extern "C" {static PyObject *meth_QRegularExpression_pattern(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_pattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->pattern());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_pattern, doc_QRegularExpression_pattern);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_setPattern, "setPattern(self, str)");

extern "C" {static PyObject *meth_QRegularExpression_setPattern(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_setPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRegularExpression, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPattern(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_setPattern, doc_QRegularExpression_setPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpression_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_isValid, doc_QRegularExpression_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_patternErrorOffset, "patternErrorOffset(self) -> int");

extern "C" {static PyObject *meth_QRegularExpression_patternErrorOffset(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_patternErrorOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->patternErrorOffset();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_patternErrorOffset, doc_QRegularExpression_patternErrorOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QRegularExpression_errorString(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_errorString, doc_QRegularExpression_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_captureCount, "captureCount(self) -> int");

extern "C" {static PyObject *meth_QRegularExpression_captureCount(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_captureCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->captureCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_captureCount, doc_QRegularExpression_captureCount);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_match, "match(self, str, offset: int = 0, matchType: QRegularExpression.MatchType = QRegularExpression.NormalMatch, matchOptions: Union[QRegularExpression.MatchOptions, QRegularExpression.MatchOption] = QRegularExpression.NoMatchOption) -> QRegularExpressionMatch");

extern "C" {static PyObject *meth_QRegularExpression_match(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_match(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1 = 0;
         ::QRegularExpression::MatchType a2 = QRegularExpression::NormalMatch;
         ::QRegularExpression::MatchOptions a3def = QRegularExpression::NoMatchOption;
         ::QRegularExpression::MatchOptions* a3 = &a3def;
        int a3State = 0;
        const  ::QRegularExpression *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_offset,
            sipName_matchType,
            sipName_matchOptions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|iEJ1", &sipSelf, sipType_QRegularExpression, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QRegularExpression_MatchType, &a2, sipType_QRegularExpression_MatchOptions, &a3, &a3State))
        {
             ::QRegularExpressionMatch*sipRes;

            sipRes = new  ::QRegularExpressionMatch(sipCpp->match(*a0,a1,a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a3,sipType_QRegularExpression_MatchOptions,a3State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatch,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_match, doc_QRegularExpression_match);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_globalMatch, "globalMatch(self, str, offset: int = 0, matchType: QRegularExpression.MatchType = QRegularExpression.NormalMatch, matchOptions: Union[QRegularExpression.MatchOptions, QRegularExpression.MatchOption] = QRegularExpression.NoMatchOption) -> QRegularExpressionMatchIterator");

extern "C" {static PyObject *meth_QRegularExpression_globalMatch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_globalMatch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1 = 0;
         ::QRegularExpression::MatchType a2 = QRegularExpression::NormalMatch;
         ::QRegularExpression::MatchOptions a3def = QRegularExpression::NoMatchOption;
         ::QRegularExpression::MatchOptions* a3 = &a3def;
        int a3State = 0;
        const  ::QRegularExpression *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_offset,
            sipName_matchType,
            sipName_matchOptions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|iEJ1", &sipSelf, sipType_QRegularExpression, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QRegularExpression_MatchType, &a2, sipType_QRegularExpression_MatchOptions, &a3, &a3State))
        {
             ::QRegularExpressionMatchIterator*sipRes;

            sipRes = new  ::QRegularExpressionMatchIterator(sipCpp->globalMatch(*a0,a1,a2,*a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a3,sipType_QRegularExpression_MatchOptions,a3State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatchIterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_globalMatch, doc_QRegularExpression_globalMatch);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_escape, "escape(str) -> str");

extern "C" {static PyObject *meth_QRegularExpression_escape(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_escape(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QRegularExpression::escape(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_escape, doc_QRegularExpression_escape);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_namedCaptureGroups, "namedCaptureGroups(self) -> List[str]");

extern "C" {static PyObject *meth_QRegularExpression_namedCaptureGroups(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_namedCaptureGroups(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->namedCaptureGroups());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_namedCaptureGroups, doc_QRegularExpression_namedCaptureGroups);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpression_optimize, "optimize(self)");

extern "C" {static PyObject *meth_QRegularExpression_optimize(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpression_optimize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpression, &sipCpp))
        {
            sipCpp->optimize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpression, sipName_optimize, doc_QRegularExpression_optimize);

    return NULL;
}


extern "C" {static long slot_QRegularExpression___hash__(PyObject *);}
static long slot_QRegularExpression___hash__(PyObject *sipSelf)
{
     ::QRegularExpression *sipCpp = reinterpret_cast< ::QRegularExpression *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 138 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
        sipRes = qHash(*sipCpp);
#line 495 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegularExpression *sipCpp = reinterpret_cast< ::QRegularExpression *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegularExpression, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QRegularExpression::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QRegularExpression, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegularExpression *sipCpp = reinterpret_cast< ::QRegularExpression *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegularExpression* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegularExpression, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QRegularExpression::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QRegularExpression, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression___repr__(PyObject *);}
static PyObject *slot_QRegularExpression___repr__(PyObject *sipSelf)
{
     ::QRegularExpression *sipCpp = reinterpret_cast< ::QRegularExpression *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qregularexpression.sip"
        PyObject *uni = qpycore_PyObject_FromQString(sipCpp->pattern());
        
        if (uni)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QRegularExpression(%R", uni);
        
            if (sipCpp->patternOptions() != QRegularExpression::NoPatternOption)
            {
                qpycore_Unicode_ConcatAndDel(&sipRes,
                        PyUnicode_FromFormat(
                                ", PyQt5.QtCore.QRegularExpression.PatternOptions(%i)",
                                (int)sipCpp->patternOptions()));
            }
        
            qpycore_Unicode_ConcatAndDel(&sipRes, PyUnicode_FromString(")"));
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QRegularExpression(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(uni));
        
            if (sipCpp->patternOptions() != QRegularExpression::NoPatternOption)
            {
                PyString_ConcatAndDel(&sipRes,
                        PyString_FromFormat(
                                ", PyQt5.QtCore.QRegularExpression.PatternOptions(%i)",
                                (int)sipCpp->patternOptions()));
            }
        
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(uni);
        }
        else
        {
            sipRes = 0;
        }
#line 620 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQRegularExpression.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpression(void *, int);}
static void release_QRegularExpression(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRegularExpression *>(sipCppV);
}


extern "C" {static void assign_QRegularExpression(void *, SIP_SSIZE_T, void *);}
static void assign_QRegularExpression(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRegularExpression *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRegularExpression *>(sipSrc);
}


extern "C" {static void *array_QRegularExpression(SIP_SSIZE_T);}
static void *array_QRegularExpression(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRegularExpression[sipNrElem];
}


extern "C" {static void *copy_QRegularExpression(const void *, SIP_SSIZE_T);}
static void *copy_QRegularExpression(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRegularExpression(reinterpret_cast<const  ::QRegularExpression *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpression(sipSimpleWrapper *);}
static void dealloc_QRegularExpression(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRegularExpression(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRegularExpression(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpression(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRegularExpression *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QRegularExpression();

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QRegularExpression::PatternOptions a1def = QRegularExpression::NoPatternOption;
         ::QRegularExpression::PatternOptions* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_options,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QRegularExpression_PatternOptions, &a1, &a1State))
        {
            sipCpp = new  ::QRegularExpression(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QRegularExpression_PatternOptions,a1State);

            return sipCpp;
        }
    }

    {
        const  ::QRegularExpression* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegularExpression, &a0))
        {
            sipCpp = new  ::QRegularExpression(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegularExpression[] = {
    {(void *)slot_QRegularExpression___hash__, hash_slot},
    {(void *)slot_QRegularExpression___ne__, ne_slot},
    {(void *)slot_QRegularExpression___eq__, eq_slot},
    {(void *)slot_QRegularExpression___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRegularExpression[] = {
    {SIP_MLNAME_CAST(sipName_captureCount), meth_QRegularExpression_captureCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_captureCount)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QRegularExpression_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_errorString)},
    {SIP_MLNAME_CAST(sipName_escape), meth_QRegularExpression_escape, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_escape)},
    {SIP_MLNAME_CAST(sipName_globalMatch), (PyCFunction)meth_QRegularExpression_globalMatch, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpression_globalMatch)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QRegularExpression_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_isValid)},
    {SIP_MLNAME_CAST(sipName_match), (PyCFunction)meth_QRegularExpression_match, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpression_match)},
    {SIP_MLNAME_CAST(sipName_namedCaptureGroups), meth_QRegularExpression_namedCaptureGroups, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_namedCaptureGroups)},
    {SIP_MLNAME_CAST(sipName_optimize), meth_QRegularExpression_optimize, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_optimize)},
    {SIP_MLNAME_CAST(sipName_pattern), meth_QRegularExpression_pattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_pattern)},
    {SIP_MLNAME_CAST(sipName_patternErrorOffset), meth_QRegularExpression_patternErrorOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_patternErrorOffset)},
    {SIP_MLNAME_CAST(sipName_patternOptions), meth_QRegularExpression_patternOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_patternOptions)},
    {SIP_MLNAME_CAST(sipName_setPattern), meth_QRegularExpression_setPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_setPattern)},
    {SIP_MLNAME_CAST(sipName_setPatternOptions), meth_QRegularExpression_setPatternOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_setPatternOptions)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRegularExpression_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpression_swap)}
};

static sipEnumMemberDef enummembers_QRegularExpression[] = {
    {sipName_AnchoredMatchOption, static_cast<int>( ::QRegularExpression::AnchoredMatchOption), 204},
    {sipName_CaseInsensitiveOption, static_cast<int>( ::QRegularExpression::CaseInsensitiveOption), 207},
    {sipName_DontAutomaticallyOptimizeOption, static_cast<int>( ::QRegularExpression::DontAutomaticallyOptimizeOption), 207},
    {sipName_DontCaptureOption, static_cast<int>( ::QRegularExpression::DontCaptureOption), 207},
    {sipName_DontCheckSubjectStringMatchOption, static_cast<int>( ::QRegularExpression::DontCheckSubjectStringMatchOption), 204},
    {sipName_DotMatchesEverythingOption, static_cast<int>( ::QRegularExpression::DotMatchesEverythingOption), 207},
    {sipName_ExtendedPatternSyntaxOption, static_cast<int>( ::QRegularExpression::ExtendedPatternSyntaxOption), 207},
    {sipName_InvertedGreedinessOption, static_cast<int>( ::QRegularExpression::InvertedGreedinessOption), 207},
    {sipName_MultilineOption, static_cast<int>( ::QRegularExpression::MultilineOption), 207},
    {sipName_NoMatch, static_cast<int>( ::QRegularExpression::NoMatch), 206},
    {sipName_NoMatchOption, static_cast<int>( ::QRegularExpression::NoMatchOption), 204},
    {sipName_NoPatternOption, static_cast<int>( ::QRegularExpression::NoPatternOption), 207},
    {sipName_NormalMatch, static_cast<int>( ::QRegularExpression::NormalMatch), 206},
    {sipName_OptimizeOnFirstUsageOption, static_cast<int>( ::QRegularExpression::OptimizeOnFirstUsageOption), 207},
    {sipName_PartialPreferCompleteMatch, static_cast<int>( ::QRegularExpression::PartialPreferCompleteMatch), 206},
    {sipName_PartialPreferFirstMatch, static_cast<int>( ::QRegularExpression::PartialPreferFirstMatch), 206},
    {sipName_UseUnicodePropertiesOption, static_cast<int>( ::QRegularExpression::UseUnicodePropertiesOption), 207},
};

PyDoc_STRVAR(doc_QRegularExpression, "\1QRegularExpression()\n"
"QRegularExpression(str, options: Union[QRegularExpression.PatternOptions, QRegularExpression.PatternOption] = QRegularExpression.NoPatternOption)\n"
"QRegularExpression(QRegularExpression)");


static pyqt5ClassPluginDef plugin_QRegularExpression = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QRegularExpression = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpression,
        {0},
        &plugin_QRegularExpression
    },
    {
        sipNameNr_QRegularExpression,
        {0, 0, 1},
        14, methods_QRegularExpression,
        17, enummembers_QRegularExpression,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpression,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRegularExpression,
    init_type_QRegularExpression,
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
    dealloc_QRegularExpression,
    assign_QRegularExpression,
    array_QRegularExpression,
    copy_QRegularExpression,
    release_QRegularExpression,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
