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

#line 157 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtCore/sipQtCoreQGenericArgument.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QGenericArgument(void *, int);}
static void release_QGenericArgument(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGenericArgument *>(sipCppV);
}


extern "C" {static void dealloc_QGenericArgument(sipSimpleWrapper *);}
static void dealloc_QGenericArgument(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGenericArgument(sipGetAddress(sipSelf), 0);
    }
}


static pyqt5ClassPluginDef plugin_QGenericArgument = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QGenericArgument = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGenericArgument,
        {0},
        &plugin_QGenericArgument
    },
    {
        sipNameNr_QGenericArgument,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    sipNameNr_sip_simplewrapper,
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
    dealloc_QGenericArgument,
    0,
    0,
    0,
    release_QGenericArgument,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
