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

#include "sipAPIQtMultimedia.h"

#line 26 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/sip/QtMultimedia/qmultimedia.sip"
#include <qmultimedia.h>
#line 29 "/Users/alan/PycharmProjects/ProjectPyQt/PyQt5_gpl-5.11.3/QtMultimedia/sipQtMultimediaQMultimedia.cpp"


static sipEnumMemberDef enummembers_QMultimedia[] = {
    {sipName_Available, static_cast<int>( ::QMultimedia::Available), 95},
    {sipName_AverageBitRateEncoding, static_cast<int>( ::QMultimedia::AverageBitRateEncoding), 96},
    {sipName_Busy, static_cast<int>( ::QMultimedia::Busy), 95},
    {sipName_ConstantBitRateEncoding, static_cast<int>( ::QMultimedia::ConstantBitRateEncoding), 96},
    {sipName_ConstantQualityEncoding, static_cast<int>( ::QMultimedia::ConstantQualityEncoding), 96},
    {sipName_HighQuality, static_cast<int>( ::QMultimedia::HighQuality), 97},
    {sipName_LowQuality, static_cast<int>( ::QMultimedia::LowQuality), 97},
    {sipName_MaybeSupported, static_cast<int>( ::QMultimedia::MaybeSupported), 98},
    {sipName_NormalQuality, static_cast<int>( ::QMultimedia::NormalQuality), 97},
    {sipName_NotSupported, static_cast<int>( ::QMultimedia::NotSupported), 98},
    {sipName_PreferredService, static_cast<int>( ::QMultimedia::PreferredService), 98},
    {sipName_ProbablySupported, static_cast<int>( ::QMultimedia::ProbablySupported), 98},
    {sipName_ResourceError, static_cast<int>( ::QMultimedia::ResourceError), 95},
    {sipName_ServiceMissing, static_cast<int>( ::QMultimedia::ServiceMissing), 95},
    {sipName_TwoPassEncoding, static_cast<int>( ::QMultimedia::TwoPassEncoding), 96},
    {sipName_VeryHighQuality, static_cast<int>( ::QMultimedia::VeryHighQuality), 97},
    {sipName_VeryLowQuality, static_cast<int>( ::QMultimedia::VeryLowQuality), 97},
};


static pyqt5ClassPluginDef plugin_QMultimedia = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtMultimedia_QMultimedia = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_NAMESPACE,
        sipNameNr_QMultimedia,
        {0},
        &plugin_QMultimedia
    },
    {
        sipNameNr_QMultimedia,
        {0, 0, 1},
        0, 0,
        17, enummembers_QMultimedia,
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
