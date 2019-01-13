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

#include "sipAPIQtWidgets.h"

#line 44 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qgraphicslayoutitem.sip"
#include <qgraphicslayoutitem.h>
#line 33 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 48 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 54 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"
#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 57 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtWidgets/sipQtWidgetsQGraphicsAnchorLayout.cpp"


class sipQGraphicsAnchorLayout : public  ::QGraphicsAnchorLayout
{
public:
    sipQGraphicsAnchorLayout( ::QGraphicsLayoutItem*);
    virtual ~sipQGraphicsAnchorLayout();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QSizeF sizeHint( ::Qt::SizeHint,const  ::QSizeF&) const;
    void updateGeometry();
    void getContentsMargins( ::qreal*, ::qreal*, ::qreal*, ::qreal*) const;
    void setGeometry(const  ::QRectF&);
    void invalidate();
    void widgetEvent( ::QEvent*);
    int count() const;
     ::QGraphicsLayoutItem* itemAt(int) const;
    void removeAt(int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsAnchorLayout(const sipQGraphicsAnchorLayout &);
    sipQGraphicsAnchorLayout &operator = (const sipQGraphicsAnchorLayout &);

    char sipPyMethods[9];
};

sipQGraphicsAnchorLayout::sipQGraphicsAnchorLayout( ::QGraphicsLayoutItem*a0):  ::QGraphicsAnchorLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsAnchorLayout::~sipQGraphicsAnchorLayout()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QSizeF sipQGraphicsAnchorLayout::sizeHint( ::Qt::SizeHint a0,const  ::QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_sizeHint);

    if (!sipMeth)
        return  ::QGraphicsAnchorLayout::sizeHint(a0,a1);

    extern  ::QSizeF sipVH_QtWidgets_140(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::Qt::SizeHint,const  ::QSizeF&);

    return sipVH_QtWidgets_140(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQGraphicsAnchorLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_updateGeometry);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::updateGeometry();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQGraphicsAnchorLayout::getContentsMargins( ::qreal*a0, ::qreal*a1, ::qreal*a2, ::qreal*a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtWidgets_139(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::qreal*, ::qreal*, ::qreal*, ::qreal*);

    sipVH_QtWidgets_139(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQGraphicsAnchorLayout::setGeometry(const  ::QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_setGeometry);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::setGeometry(a0);
        return;
    }

    extern void sipVH_QtWidgets_138(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QRectF&);

    sipVH_QtWidgets_138(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQGraphicsAnchorLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_invalidate);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::invalidate();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQGraphicsAnchorLayout::widgetEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_widgetEvent);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::widgetEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWidgets_1(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

int sipQGraphicsAnchorLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_count);

    if (!sipMeth)
        return  ::QGraphicsAnchorLayout::count();

    extern int sipVH_QtWidgets_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_8(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QGraphicsLayoutItem* sipQGraphicsAnchorLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_itemAt);

    if (!sipMeth)
        return  ::QGraphicsAnchorLayout::itemAt(a0);

    extern  ::QGraphicsLayoutItem* sipVH_QtWidgets_141(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_141(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQGraphicsAnchorLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_removeAt);

    if (!sipMeth)
    {
         ::QGraphicsAnchorLayout::removeAt(a0);
        return;
    }

    extern void sipVH_QtWidgets_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    sipVH_QtWidgets_59(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_addAnchor, "addAnchor(self, QGraphicsLayoutItem, Qt.AnchorPoint, QGraphicsLayoutItem, Qt.AnchorPoint) -> QGraphicsAnchor");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_addAnchor(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_addAnchor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
         ::Qt::AnchorPoint a1;
         ::QGraphicsLayoutItem* a2;
         ::Qt::AnchorPoint a3;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:EJ:E", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, sipType_Qt_AnchorPoint, &a1, sipType_QGraphicsLayoutItem, &a2, sipType_Qt_AnchorPoint, &a3))
        {
             ::QGraphicsAnchor*sipRes;

            sipRes = sipCpp->addAnchor(a0,a1,a2,a3);

            return sipConvertFromType(sipRes,sipType_QGraphicsAnchor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_addAnchor, doc_QGraphicsAnchorLayout_addAnchor);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_anchor, "anchor(self, QGraphicsLayoutItem, Qt.AnchorPoint, QGraphicsLayoutItem, Qt.AnchorPoint) -> QGraphicsAnchor");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_anchor(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_anchor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
         ::Qt::AnchorPoint a1;
         ::QGraphicsLayoutItem* a2;
         ::Qt::AnchorPoint a3;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8EJ8E", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, sipType_Qt_AnchorPoint, &a1, sipType_QGraphicsLayoutItem, &a2, sipType_Qt_AnchorPoint, &a3))
        {
             ::QGraphicsAnchor*sipRes;

            sipRes = sipCpp->anchor(a0,a1,a2,a3);

            return sipConvertFromType(sipRes,sipType_QGraphicsAnchor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_anchor, doc_QGraphicsAnchorLayout_anchor);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_addCornerAnchors, "addCornerAnchors(self, QGraphicsLayoutItem, Qt.Corner, QGraphicsLayoutItem, Qt.Corner)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_addCornerAnchors(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_addCornerAnchors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
         ::Qt::Corner a1;
         ::QGraphicsLayoutItem* a2;
         ::Qt::Corner a3;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:EJ:E", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, sipType_Qt_Corner, &a1, sipType_QGraphicsLayoutItem, &a2, sipType_Qt_Corner, &a3))
        {
            sipCpp->addCornerAnchors(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_addCornerAnchors, doc_QGraphicsAnchorLayout_addCornerAnchors);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_addAnchors, "addAnchors(self, QGraphicsLayoutItem, QGraphicsLayoutItem, orientations: Union[Qt.Orientations, Qt.Orientation] = Qt.Horizontal|Qt.Vertical)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_addAnchors(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_addAnchors(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
         ::QGraphicsLayoutItem* a1;
         ::Qt::Orientations a2def = Qt::Horizontal|Qt::Vertical;
         ::Qt::Orientations* a2 = &a2def;
        int a2State = 0;
         ::QGraphicsAnchorLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_orientations,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ:J:|J1", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, sipType_QGraphicsLayoutItem, &a1, sipType_Qt_Orientations, &a2, &a2State))
        {
            sipCpp->addAnchors(a0,a1,*a2);
            sipReleaseType(a2,sipType_Qt_Orientations,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_addAnchors, doc_QGraphicsAnchorLayout_addAnchors);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_setHorizontalSpacing, "setHorizontalSpacing(self, float)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_setHorizontalSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_setHorizontalSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, &a0))
        {
            sipCpp->setHorizontalSpacing(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_setHorizontalSpacing, doc_QGraphicsAnchorLayout_setHorizontalSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_setVerticalSpacing, "setVerticalSpacing(self, float)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_setVerticalSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_setVerticalSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, &a0))
        {
            sipCpp->setVerticalSpacing(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_setVerticalSpacing, doc_QGraphicsAnchorLayout_setVerticalSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_setSpacing, "setSpacing(self, float)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_setSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_setSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, &a0))
        {
            sipCpp->setSpacing(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_setSpacing, doc_QGraphicsAnchorLayout_setSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_horizontalSpacing, "horizontalSpacing(self) -> float");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_horizontalSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_horizontalSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->horizontalSpacing();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_horizontalSpacing, doc_QGraphicsAnchorLayout_horizontalSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_verticalSpacing, "verticalSpacing(self) -> float");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_verticalSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_verticalSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->verticalSpacing();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_verticalSpacing, doc_QGraphicsAnchorLayout_verticalSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_removeAt, "removeAt(self, int)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::removeAt(a0) : sipCpp->removeAt(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_removeAt, doc_QGraphicsAnchorLayout_removeAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_setGeometry, "setGeometry(self, QRectF)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QRectF* a0;
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_QRectF, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::setGeometry(*a0) : sipCpp->setGeometry(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_setGeometry, doc_QGraphicsAnchorLayout_setGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_count, "count(self) -> int");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::count() : sipCpp->count());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_count, doc_QGraphicsAnchorLayout_count);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_itemAt, "itemAt(self, int) -> QGraphicsLayoutItem");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, &a0))
        {
             ::QGraphicsLayoutItem*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::itemAt(a0) : sipCpp->itemAt(a0));

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_itemAt, doc_QGraphicsAnchorLayout_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_invalidate, "invalidate(self)");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGraphicsAnchorLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::invalidate() : sipCpp->invalidate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_invalidate, doc_QGraphicsAnchorLayout_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchorLayout_sizeHint, "sizeHint(self, Qt.SizeHint, constraint: QSizeF = QSizeF()) -> QSizeF");

extern "C" {static PyObject *meth_QGraphicsAnchorLayout_sizeHint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchorLayout_sizeHint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::Qt::SizeHint a0;
        const  ::QSizeF& a1def = QSizeF();
        const  ::QSizeF* a1 = &a1def;
        const  ::QGraphicsAnchorLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_constraint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "pE|J9", &sipSelf, sipType_QGraphicsAnchorLayout, &sipCpp, sipType_Qt_SizeHint, &a0, sipType_QSizeF, &a1))
        {
             ::QSizeF*sipRes;

            sipRes = new  ::QSizeF((sipSelfWasArg ? sipCpp-> ::QGraphicsAnchorLayout::sizeHint(a0,*a1) : sipCpp->sizeHint(a0,*a1)));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchorLayout, sipName_sizeHint, doc_QGraphicsAnchorLayout_sizeHint);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QGraphicsAnchorLayout(void *, const sipTypeDef *);}
static void *cast_QGraphicsAnchorLayout(void *sipCppV, const sipTypeDef *targetType)
{
     ::QGraphicsAnchorLayout *sipCpp = reinterpret_cast< ::QGraphicsAnchorLayout *>(sipCppV);

    if (targetType == sipType_QGraphicsLayout)
        return static_cast< ::QGraphicsLayout *>(sipCpp);

    if (targetType == sipType_QGraphicsLayoutItem)
        return static_cast< ::QGraphicsLayoutItem *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsAnchorLayout(void *, int);}
static void release_QGraphicsAnchorLayout(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsAnchorLayout *>(sipCppV);
    else
        delete reinterpret_cast< ::QGraphicsAnchorLayout *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsAnchorLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsAnchorLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQGraphicsAnchorLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsAnchorLayout(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QGraphicsAnchorLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsAnchorLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsAnchorLayout *sipCpp = 0;

    {
         ::QGraphicsLayoutItem* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            sipCpp = new sipQGraphicsAnchorLayout(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsAnchorLayout[] = {{129, 255, 1}};


static PyMethodDef methods_QGraphicsAnchorLayout[] = {
    {SIP_MLNAME_CAST(sipName_addAnchor), meth_QGraphicsAnchorLayout_addAnchor, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_addAnchor)},
    {SIP_MLNAME_CAST(sipName_addAnchors), (PyCFunction)meth_QGraphicsAnchorLayout_addAnchors, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_addAnchors)},
    {SIP_MLNAME_CAST(sipName_addCornerAnchors), meth_QGraphicsAnchorLayout_addCornerAnchors, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_addCornerAnchors)},
    {SIP_MLNAME_CAST(sipName_anchor), meth_QGraphicsAnchorLayout_anchor, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_anchor)},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsAnchorLayout_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_count)},
    {SIP_MLNAME_CAST(sipName_horizontalSpacing), meth_QGraphicsAnchorLayout_horizontalSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_horizontalSpacing)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsAnchorLayout_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_invalidate)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsAnchorLayout_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_itemAt)},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsAnchorLayout_removeAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_removeAt)},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QGraphicsAnchorLayout_setGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_setGeometry)},
    {SIP_MLNAME_CAST(sipName_setHorizontalSpacing), meth_QGraphicsAnchorLayout_setHorizontalSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_setHorizontalSpacing)},
    {SIP_MLNAME_CAST(sipName_setSpacing), meth_QGraphicsAnchorLayout_setSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_setSpacing)},
    {SIP_MLNAME_CAST(sipName_setVerticalSpacing), meth_QGraphicsAnchorLayout_setVerticalSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_setVerticalSpacing)},
    {SIP_MLNAME_CAST(sipName_sizeHint), (PyCFunction)meth_QGraphicsAnchorLayout_sizeHint, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_sizeHint)},
    {SIP_MLNAME_CAST(sipName_verticalSpacing), meth_QGraphicsAnchorLayout_verticalSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchorLayout_verticalSpacing)}
};

PyDoc_STRVAR(doc_QGraphicsAnchorLayout, "\1QGraphicsAnchorLayout(parent: QGraphicsLayoutItem = None)");


static pyqt5ClassPluginDef plugin_QGraphicsAnchorLayout = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsAnchorLayout = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsAnchorLayout,
        {0},
        &plugin_QGraphicsAnchorLayout
    },
    {
        sipNameNr_QGraphicsAnchorLayout,
        {0, 0, 1},
        15, methods_QGraphicsAnchorLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsAnchorLayout,
    -1,
    -1,
    supers_QGraphicsAnchorLayout,
    0,
    init_type_QGraphicsAnchorLayout,
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
    dealloc_QGraphicsAnchorLayout,
    0,
    0,
    0,
    release_QGraphicsAnchorLayout,
    cast_QGraphicsAnchorLayout,
    0,
    0,
    0,
    0,
    0,
    0
};
