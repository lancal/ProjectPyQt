/*
 * Internal module API header file.
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

#ifndef _QtSerialPortAPI_H
#define _QtSerialPortAPI_H

#if !defined(Py_LIMITED_API)
#define Py_LIMITED_API
#endif

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_MacOSXOnly
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_Desktop_OpenGL
#define SIP_FEATURE_PyQt_OpenGL
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_Py_v3
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SSL
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_MACX


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_settingsRestoredOnCloseChanged 0
#define sipName_settingsRestoredOnCloseChanged &sipStrings_QtSerialPort[0]
#define sipNameNr_SecondaryTransmittedDataSignal 31
#define sipName_SecondaryTransmittedDataSignal &sipStrings_QtSerialPort[31]
#define sipNameNr_QSerialPort__SerialPortError 62
#define sipName_QSerialPort__SerialPortError &sipStrings_QtSerialPort[62]
#define sipNameNr_QSerialPort__DataErrorPolicy 91
#define sipName_QSerialPort__DataErrorPolicy &sipStrings_QtSerialPort[91]
#define sipNameNr_SecondaryReceivedDataSignal 120
#define sipName_SecondaryReceivedDataSignal &sipStrings_QtSerialPort[120]
#define sipNameNr_setSettingsRestoredOnClose 148
#define sipName_setSettingsRestoredOnClose &sipStrings_QtSerialPort[148]
#define sipNameNr_QSerialPort__PinoutSignals 175
#define sipName_QSerialPort__PinoutSignals &sipStrings_QtSerialPort[175]
#define sipNameNr_UnsupportedOperationError 202
#define sipName_UnsupportedOperationError &sipStrings_QtSerialPort[202]
#define sipNameNr_QSerialPort__PinoutSignal 228
#define sipName_QSerialPort__PinoutSignal &sipStrings_QtSerialPort[228]
#define sipNameNr_dataTerminalReadyChanged 254
#define sipName_dataTerminalReadyChanged &sipStrings_QtSerialPort[254]
#define sipNameNr_QSerialPort__FlowControl 279
#define sipName_QSerialPort__FlowControl &sipStrings_QtSerialPort[279]
#define sipNameNr_settingsRestoredOnClose 304
#define sipName_settingsRestoredOnClose &sipStrings_QtSerialPort[304]
#define sipNameNr_DataCarrierDetectSignal 328
#define sipName_DataCarrierDetectSignal &sipStrings_QtSerialPort[328]
#define sipNameNr_DataTerminalReadySignal 352
#define sipName_DataTerminalReadySignal &sipStrings_QtSerialPort[352]
#define sipNameNr_QSerialPort__Directions 376
#define sipName_QSerialPort__Directions &sipStrings_QtSerialPort[376]
#define sipNameNr_400 400
#define sipName_400 &sipStrings_QtSerialPort[400]
#define sipNameNr_dataErrorPolicyChanged 423
#define sipName_dataErrorPolicyChanged &sipStrings_QtSerialPort[423]
#define sipNameNr_QSerialPort__Direction 446
#define sipName_QSerialPort__Direction &sipStrings_QtSerialPort[446]
#define sipNameNr_TransmittedDataSignal 40
#define sipName_TransmittedDataSignal &sipStrings_QtSerialPort[40]
#define sipNameNr_QSerialPort__StopBits 469
#define sipName_QSerialPort__StopBits &sipStrings_QtSerialPort[469]
#define sipNameNr_QSerialPort__DataBits 491
#define sipName_QSerialPort__DataBits &sipStrings_QtSerialPort[491]
#define sipNameNr_QSerialPort__BaudRate 513
#define sipName_QSerialPort__BaudRate &sipStrings_QtSerialPort[513]
#define sipNameNr_hasProductIdentifier 535
#define sipName_hasProductIdentifier &sipStrings_QtSerialPort[535]
#define sipNameNr_requestToSendChanged 556
#define sipName_requestToSendChanged &sipStrings_QtSerialPort[556]
#define sipNameNr_setDataTerminalReady 577
#define sipName_setDataTerminalReady &sipStrings_QtSerialPort[577]
#define sipNameNr_hasVendorIdentifier 598
#define sipName_hasVendorIdentifier &sipStrings_QtSerialPort[598]
#define sipNameNr_breakEnabledChanged 618
#define sipName_breakEnabledChanged &sipStrings_QtSerialPort[618]
#define sipNameNr_isDataTerminalReady 638
#define sipName_isDataTerminalReady &sipStrings_QtSerialPort[638]
#define sipNameNr_BreakConditionError 658
#define sipName_BreakConditionError &sipStrings_QtSerialPort[658]
#define sipNameNr_DeviceNotFoundError 678
#define sipName_DeviceNotFoundError &sipStrings_QtSerialPort[678]
#define sipNameNr_StopReceivingPolicy 698
#define sipName_StopReceivingPolicy &sipStrings_QtSerialPort[698]
#define sipNameNr_RequestToSendSignal 718
#define sipName_RequestToSendSignal &sipStrings_QtSerialPort[718]
#define sipNameNr_RingIndicatorSignal 738
#define sipName_RingIndicatorSignal &sipStrings_QtSerialPort[738]
#define sipNameNr_QSerialPort__Parity 758
#define sipName_QSerialPort__Parity &sipStrings_QtSerialPort[758]
#define sipNameNr_waitForBytesWritten 778
#define sipName_waitForBytesWritten &sipStrings_QtSerialPort[778]
#define sipNameNr_flowControlChanged 798
#define sipName_flowControlChanged &sipStrings_QtSerialPort[798]
#define sipNameNr_setDataErrorPolicy 817
#define sipName_setDataErrorPolicy &sipStrings_QtSerialPort[817]
#define sipNameNr_DataSetReadySignal 836
#define sipName_DataSetReadySignal &sipStrings_QtSerialPort[836]
#define sipNameNr_ReceivedDataSignal 129
#define sipName_ReceivedDataSignal &sipStrings_QtSerialPort[129]
#define sipNameNr_UnknownFlowControl 855
#define sipName_UnknownFlowControl &sipStrings_QtSerialPort[855]
#define sipNameNr_PyQt5_QtSerialPort 874
#define sipName_PyQt5_QtSerialPort &sipStrings_QtSerialPort[874]
#define sipNameNr_standardBaudRates 893
#define sipName_standardBaudRates &sipStrings_QtSerialPort[893]
#define sipNameNr_productIdentifier 911
#define sipName_productIdentifier &sipStrings_QtSerialPort[911]
#define sipNameNr_setReadBufferSize 929
#define sipName_setReadBufferSize &sipStrings_QtSerialPort[929]
#define sipNameNr_ClearToSendSignal 947
#define sipName_ClearToSendSignal &sipStrings_QtSerialPort[947]
#define sipNameNr_sip_simplewrapper 965
#define sipName_sip_simplewrapper &sipStrings_QtSerialPort[965]
#define sipNameNr_vendorIdentifier 983
#define sipName_vendorIdentifier &sipStrings_QtSerialPort[983]
#define sipNameNr_setRequestToSend 1000
#define sipName_setRequestToSend &sipStrings_QtSerialPort[1000]
#define sipNameNr_waitForReadyRead 1017
#define sipName_waitForReadyRead &sipStrings_QtSerialPort[1017]
#define sipNameNr_disconnectNotify 1034
#define sipName_disconnectNotify &sipStrings_QtSerialPort[1034]
#define sipNameNr_QSerialPortInfo 1051
#define sipName_QSerialPortInfo &sipStrings_QtSerialPort[1051]
#define sipNameNr_stopBitsChanged 1067
#define sipName_stopBitsChanged &sipStrings_QtSerialPort[1067]
#define sipNameNr_dataBitsChanged 1083
#define sipName_dataBitsChanged &sipStrings_QtSerialPort[1083]
#define sipNameNr_baudRateChanged 1099
#define sipName_baudRateChanged &sipStrings_QtSerialPort[1099]
#define sipNameNr_setBreakEnabled 1115
#define sipName_setBreakEnabled &sipStrings_QtSerialPort[1115]
#define sipNameNr_dataErrorPolicy 1131
#define sipName_dataErrorPolicy &sipStrings_QtSerialPort[1131]
#define sipNameNr_isRequestToSend 1147
#define sipName_isRequestToSend &sipStrings_QtSerialPort[1147]
#define sipNameNr_SerialPortError 75
#define sipName_SerialPortError &sipStrings_QtSerialPort[75]
#define sipNameNr_DataErrorPolicy 104
#define sipName_DataErrorPolicy &sipStrings_QtSerialPort[104]
#define sipNameNr_SoftwareControl 1163
#define sipName_SoftwareControl &sipStrings_QtSerialPort[1163]
#define sipNameNr_HardwareControl 1179
#define sipName_HardwareControl &sipStrings_QtSerialPort[1179]
#define sipNameNr_UnknownStopBits 1195
#define sipName_UnknownStopBits &sipStrings_QtSerialPort[1195]
#define sipNameNr_UnknownDataBits 1211
#define sipName_UnknownDataBits &sipStrings_QtSerialPort[1211]
#define sipNameNr_PermissionError 1227
#define sipName_PermissionError &sipStrings_QtSerialPort[1227]
#define sipNameNr_availablePorts 1243
#define sipName_availablePorts &sipStrings_QtSerialPort[1243]
#define sipNameNr_systemLocation 1258
#define sipName_systemLocation &sipStrings_QtSerialPort[1258]
#define sipNameNr_isBreakEnabled 1273
#define sipName_isBreakEnabled &sipStrings_QtSerialPort[1273]
#define sipNameNr_readBufferSize 1288
#define sipName_readBufferSize &sipStrings_QtSerialPort[1288]
#define sipNameNr_setFlowControl 1303
#define sipName_setFlowControl &sipStrings_QtSerialPort[1303]
#define sipNameNr_PassZeroPolicy 1318
#define sipName_PassZeroPolicy &sipStrings_QtSerialPort[1318]
#define sipNameNr_OneAndHalfStop 1333
#define sipName_OneAndHalfStop &sipStrings_QtSerialPort[1333]
#define sipNameNr_bytesAvailable 1348
#define sipName_bytesAvailable &sipStrings_QtSerialPort[1348]
#define sipNameNr_parityChanged 1363
#define sipName_parityChanged &sipStrings_QtSerialPort[1363]
#define sipNameNr_pinoutSignals 1377
#define sipName_pinoutSignals &sipStrings_QtSerialPort[1377]
#define sipNameNr_UnknownPolicy 1391
#define sipName_UnknownPolicy &sipStrings_QtSerialPort[1391]
#define sipNameNr_PinoutSignals 188
#define sipName_PinoutSignals &sipStrings_QtSerialPort[188]
#define sipNameNr_NoFlowControl 1405
#define sipName_NoFlowControl &sipStrings_QtSerialPort[1405]
#define sipNameNr_UnknownParity 1419
#define sipName_UnknownParity &sipStrings_QtSerialPort[1419]
#define sipNameNr_AllDirections 1433
#define sipName_AllDirections &sipStrings_QtSerialPort[1433]
#define sipNameNr_errorOccurred 1447
#define sipName_errorOccurred &sipStrings_QtSerialPort[1447]
#define sipNameNr_ResourceError 1461
#define sipName_ResourceError &sipStrings_QtSerialPort[1461]
#define sipNameNr_connectNotify 1037
#define sipName_connectNotify &sipStrings_QtSerialPort[1037]
#define sipNameNr_serialNumber 1475
#define sipName_serialNumber &sipStrings_QtSerialPort[1475]
#define sipNameNr_manufacturer 1488
#define sipName_manufacturer &sipStrings_QtSerialPort[1488]
#define sipNameNr_NotOpenError 1501
#define sipName_NotOpenError &sipStrings_QtSerialPort[1501]
#define sipNameNr_TimeoutError 1514
#define sipName_TimeoutError &sipStrings_QtSerialPort[1514]
#define sipNameNr_FramingError 1527
#define sipName_FramingError &sipStrings_QtSerialPort[1527]
#define sipNameNr_IgnorePolicy 1540
#define sipName_IgnorePolicy &sipStrings_QtSerialPort[1540]
#define sipNameNr_PinoutSignal 241
#define sipName_PinoutSignal &sipStrings_QtSerialPort[241]
#define sipNameNr_UnknownError 1553
#define sipName_UnknownError &sipStrings_QtSerialPort[1553]
#define sipNameNr_bytesToWrite 1566
#define sipName_bytesToWrite &sipStrings_QtSerialPort[1566]
#define sipNameNr_readLineData 1579
#define sipName_readLineData &sipStrings_QtSerialPort[1579]
#define sipNameNr_isSequential 1592
#define sipName_isSequential &sipStrings_QtSerialPort[1592]
#define sipNameNr_flowControl 1605
#define sipName_flowControl &sipStrings_QtSerialPort[1605]
#define sipNameNr_setStopBits 1617
#define sipName_setStopBits &sipStrings_QtSerialPort[1617]
#define sipNameNr_setDataBits 1629
#define sipName_setDataBits &sipStrings_QtSerialPort[1629]
#define sipNameNr_setBaudRate 1641
#define sipName_setBaudRate &sipStrings_QtSerialPort[1641]
#define sipNameNr_setPortName 1653
#define sipName_setPortName &sipStrings_QtSerialPort[1653]
#define sipNameNr_ParityError 1665
#define sipName_ParityError &sipStrings_QtSerialPort[1665]
#define sipNameNr_FlowControl 292
#define sipName_FlowControl &sipStrings_QtSerialPort[292]
#define sipNameNr_SpaceParity 1677
#define sipName_SpaceParity &sipStrings_QtSerialPort[1677]
#define sipNameNr_UnknownBaud 1689
#define sipName_UnknownBaud &sipStrings_QtSerialPort[1689]
#define sipNameNr_QSerialPort 1701
#define sipName_QSerialPort &sipStrings_QtSerialPort[1701]
#define sipNameNr_customEvent 1713
#define sipName_customEvent &sipStrings_QtSerialPort[1713]
#define sipNameNr_eventFilter 1725
#define sipName_eventFilter &sipStrings_QtSerialPort[1725]
#define sipNameNr_description 1737
#define sipName_description &sipStrings_QtSerialPort[1737]
#define sipNameNr_canReadLine 1749
#define sipName_canReadLine &sipStrings_QtSerialPort[1749]
#define sipNameNr_SkipPolicy 1761
#define sipName_SkipPolicy &sipStrings_QtSerialPort[1761]
#define sipNameNr_MarkParity 1772
#define sipName_MarkParity &sipStrings_QtSerialPort[1772]
#define sipNameNr_EvenParity 1783
#define sipName_EvenParity &sipStrings_QtSerialPort[1783]
#define sipNameNr_Baud115200 1794
#define sipName_Baud115200 &sipStrings_QtSerialPort[1794]
#define sipNameNr_Directions 389
#define sipName_Directions &sipStrings_QtSerialPort[389]
#define sipNameNr_clearError 1805
#define sipName_clearError &sipStrings_QtSerialPort[1805]
#define sipNameNr_childEvent 1816
#define sipName_childEvent &sipStrings_QtSerialPort[1816]
#define sipNameNr_timerEvent 1827
#define sipName_timerEvent &sipStrings_QtSerialPort[1827]
#define sipNameNr_WriteError 1838
#define sipName_WriteError &sipStrings_QtSerialPort[1838]
#define sipNameNr___invert__ 1849
#define sipName___invert__ &sipStrings_QtSerialPort[1849]
#define sipNameNr_sendBreak 1860
#define sipName_sendBreak &sipStrings_QtSerialPort[1860]
#define sipNameNr_setParity 1870
#define sipName_setParity &sipStrings_QtSerialPort[1870]
#define sipNameNr_OddParity 1880
#define sipName_OddParity &sipStrings_QtSerialPort[1880]
#define sipNameNr_Baud57600 1890
#define sipName_Baud57600 &sipStrings_QtSerialPort[1890]
#define sipNameNr_Baud38400 1900
#define sipName_Baud38400 &sipStrings_QtSerialPort[1900]
#define sipNameNr_Baud19200 1910
#define sipName_Baud19200 &sipStrings_QtSerialPort[1910]
#define sipNameNr_directory 1920
#define sipName_directory &sipStrings_QtSerialPort[1920]
#define sipNameNr_OpenError 1504
#define sipName_OpenError &sipStrings_QtSerialPort[1504]
#define sipNameNr_ReadError 1930
#define sipName_ReadError &sipStrings_QtSerialPort[1930]
#define sipNameNr_precision 1940
#define sipName_precision &sipStrings_QtSerialPort[1940]
#define sipNameNr_writeData 1950
#define sipName_writeData &sipStrings_QtSerialPort[1950]
#define sipNameNr_Direction 459
#define sipName_Direction &sipStrings_QtSerialPort[459]
#define sipNameNr_stopBits 1960
#define sipName_stopBits &sipStrings_QtSerialPort[1960]
#define sipNameNr_dataBits 1969
#define sipName_dataBits &sipStrings_QtSerialPort[1969]
#define sipNameNr_baudRate 1978
#define sipName_baudRate &sipStrings_QtSerialPort[1978]
#define sipNameNr_portName 1987
#define sipName_portName &sipStrings_QtSerialPort[1987]
#define sipNameNr_NoSignal 1996
#define sipName_NoSignal &sipStrings_QtSerialPort[1996]
#define sipNameNr_StopBits 482
#define sipName_StopBits &sipStrings_QtSerialPort[482]
#define sipNameNr_NoParity 2005
#define sipName_NoParity &sipStrings_QtSerialPort[2005]
#define sipNameNr_DataBits 504
#define sipName_DataBits &sipStrings_QtSerialPort[504]
#define sipNameNr_Baud9600 2014
#define sipName_Baud9600 &sipStrings_QtSerialPort[2014]
#define sipNameNr_Baud4800 2023
#define sipName_Baud4800 &sipStrings_QtSerialPort[2023]
#define sipNameNr_Baud2400 2032
#define sipName_Baud2400 &sipStrings_QtSerialPort[2032]
#define sipNameNr_Baud1200 2041
#define sipName_Baud1200 &sipStrings_QtSerialPort[2041]
#define sipNameNr_BaudRate 526
#define sipName_BaudRate &sipStrings_QtSerialPort[526]
#define sipNameNr_nameType 2050
#define sipName_nameType &sipStrings_QtSerialPort[2050]
#define sipNameNr_readData 2059
#define sipName_readData &sipStrings_QtSerialPort[2059]
#define sipNameNr_duration 2068
#define sipName_duration &sipStrings_QtSerialPort[2068]
#define sipNameNr___hash__ 2077
#define sipName___hash__ &sipStrings_QtSerialPort[2077]
#define sipNameNr___bool__ 2086
#define sipName___bool__ &sipStrings_QtSerialPort[2086]
#define sipNameNr___ixor__ 2095
#define sipName___ixor__ &sipStrings_QtSerialPort[2095]
#define sipNameNr___iand__ 2104
#define sipName___iand__ &sipStrings_QtSerialPort[2104]
#define sipNameNr_TwoStop 2113
#define sipName_TwoStop &sipStrings_QtSerialPort[2113]
#define sipNameNr_OneStop 2121
#define sipName_OneStop &sipStrings_QtSerialPort[2121]
#define sipNameNr_setPort 2129
#define sipName_setPort &sipStrings_QtSerialPort[2129]
#define sipNameNr_NoError 2137
#define sipName_NoError &sipStrings_QtSerialPort[2137]
#define sipNameNr_filters 2145
#define sipName_filters &sipStrings_QtSerialPort[2145]
#define sipNameNr_enabled 2153
#define sipName_enabled &sipStrings_QtSerialPort[2153]
#define sipNameNr_options 2161
#define sipName_options &sipStrings_QtSerialPort[2161]
#define sipNameNr_isValid 2169
#define sipName_isValid &sipStrings_QtSerialPort[2169]
#define sipNameNr___xor__ 2177
#define sipName___xor__ &sipStrings_QtSerialPort[2177]
#define sipNameNr___ior__ 2185
#define sipName___ior__ &sipStrings_QtSerialPort[2185]
#define sipNameNr___and__ 2193
#define sipName___and__ &sipStrings_QtSerialPort[2193]
#define sipNameNr___int__ 2201
#define sipName___int__ &sipStrings_QtSerialPort[2201]
#define sipNameNr_isBusy 2209
#define sipName_isBusy &sipStrings_QtSerialPort[2209]
#define sipNameNr_parity 2216
#define sipName_parity &sipStrings_QtSerialPort[2216]
#define sipNameNr_Parity 771
#define sipName_Parity &sipStrings_QtSerialPort[771]
#define sipNameNr_Output 2223
#define sipName_Output &sipStrings_QtSerialPort[2223]
#define sipNameNr_proper 2230
#define sipName_proper &sipStrings_QtSerialPort[2230]
#define sipNameNr_value9 2237
#define sipName_value9 &sipStrings_QtSerialPort[2237]
#define sipNameNr_value8 2244
#define sipName_value8 &sipStrings_QtSerialPort[2244]
#define sipNameNr_value7 2251
#define sipName_value7 &sipStrings_QtSerialPort[2251]
#define sipNameNr_value6 2258
#define sipName_value6 &sipStrings_QtSerialPort[2258]
#define sipNameNr_value5 2265
#define sipName_value5 &sipStrings_QtSerialPort[2265]
#define sipNameNr_value4 2272
#define sipName_value4 &sipStrings_QtSerialPort[2272]
#define sipNameNr_value3 2279
#define sipName_value3 &sipStrings_QtSerialPort[2279]
#define sipNameNr_value2 2286
#define sipName_value2 &sipStrings_QtSerialPort[2286]
#define sipNameNr_value1 2293
#define sipName_value1 &sipStrings_QtSerialPort[2293]
#define sipNameNr_value0 2300
#define sipName_value0 &sipStrings_QtSerialPort[2300]
#define sipNameNr_symbol 2307
#define sipName_symbol &sipStrings_QtSerialPort[2307]
#define sipNameNr_suffix 2314
#define sipName_suffix &sipStrings_QtSerialPort[2314]
#define sipNameNr_handle 2321
#define sipName_handle &sipStrings_QtSerialPort[2321]
#define sipNameNr_prefix 2328
#define sipName_prefix &sipStrings_QtSerialPort[2328]
#define sipNameNr_locale 2335
#define sipName_locale &sipStrings_QtSerialPort[2335]
#define sipNameNr_format 2342
#define sipName_format &sipStrings_QtSerialPort[2342]
#define sipNameNr_isNull 2349
#define sipName_isNull &sipStrings_QtSerialPort[2349]
#define sipNameNr_policy 2356
#define sipName_policy &sipStrings_QtSerialPort[2356]
#define sipNameNr_parent 2363
#define sipName_parent &sipStrings_QtSerialPort[2363]
#define sipNameNr___ne__ 2370
#define sipName___ne__ &sipStrings_QtSerialPort[2370]
#define sipNameNr___eq__ 2377
#define sipName___eq__ &sipStrings_QtSerialPort[2377]
#define sipNameNr___or__ 2384
#define sipName___or__ &sipStrings_QtSerialPort[2384]
#define sipNameNr_Data8 2391
#define sipName_Data8 &sipStrings_QtSerialPort[2391]
#define sipNameNr_Data7 2397
#define sipName_Data7 &sipStrings_QtSerialPort[2397]
#define sipNameNr_Data6 2403
#define sipName_Data6 &sipStrings_QtSerialPort[2403]
#define sipNameNr_Data5 2409
#define sipName_Data5 &sipStrings_QtSerialPort[2409]
#define sipNameNr_Input 2415
#define sipName_Input &sipStrings_QtSerialPort[2415]
#define sipNameNr_error 2421
#define sipName_error &sipStrings_QtSerialPort[2421]
#define sipNameNr_reset 2427
#define sipName_reset &sipStrings_QtSerialPort[2427]
#define sipNameNr_atEnd 2433
#define sipName_atEnd &sipStrings_QtSerialPort[2433]
#define sipNameNr_close 2439
#define sipName_close &sipStrings_QtSerialPort[2439]
#define sipNameNr_clear 2445
#define sipName_clear &sipStrings_QtSerialPort[2445]
#define sipNameNr_flush 2451
#define sipName_flush &sipStrings_QtSerialPort[2451]
#define sipNameNr_event 2457
#define sipName_event &sipStrings_QtSerialPort[2457]
#define sipNameNr_msecs 2463
#define sipName_msecs &sipStrings_QtSerialPort[2463]
#define sipNameNr_mode 2469
#define sipName_mode &sipStrings_QtSerialPort[2469]
#define sipNameNr_name 2474
#define sipName_name &sipStrings_QtSerialPort[2474]
#define sipNameNr_base 2479
#define sipName_base &sipStrings_QtSerialPort[2479]
#define sipNameNr_seek 2484
#define sipName_seek &sipStrings_QtSerialPort[2484]
#define sipNameNr_open 2489
#define sipName_open &sipStrings_QtSerialPort[2489]
#define sipNameNr_size 2494
#define sipName_size &sipStrings_QtSerialPort[2494]
#define sipNameNr_from 2499
#define sipName_from &sipStrings_QtSerialPort[2499]
#define sipNameNr_sort 2504
#define sipName_sort &sipStrings_QtSerialPort[2504]
#define sipNameNr_swap 2509
#define sipName_swap &sipStrings_QtSerialPort[2509]
#define sipNameNr_pid 2514
#define sipName_pid &sipStrings_QtSerialPort[2514]
#define sipNameNr_dir 2518
#define sipName_dir &sipStrings_QtSerialPort[2518]
#define sipNameNr_pos 2522
#define sipName_pos &sipStrings_QtSerialPort[2522]

#define sipMalloc                   sipAPI_QtSerialPort->api_malloc
#define sipFree                     sipAPI_QtSerialPort->api_free
#define sipBuildResult              sipAPI_QtSerialPort->api_build_result
#define sipCallMethod               sipAPI_QtSerialPort->api_call_method
#define sipCallProcedureMethod      sipAPI_QtSerialPort->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtSerialPort->api_call_error_handler
#define sipParseResultEx            sipAPI_QtSerialPort->api_parse_result_ex
#define sipParseResult              sipAPI_QtSerialPort->api_parse_result
#define sipParseArgs                sipAPI_QtSerialPort->api_parse_args
#define sipParseKwdArgs             sipAPI_QtSerialPort->api_parse_kwd_args
#define sipParsePair                sipAPI_QtSerialPort->api_parse_pair
#define sipInstanceDestroyed        sipAPI_QtSerialPort->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_QtSerialPort->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_QtSerialPort->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI_QtSerialPort->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI_QtSerialPort->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtSerialPort->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtSerialPort->api_add_exception
#define sipNoFunction               sipAPI_QtSerialPort->api_no_function
#define sipNoMethod                 sipAPI_QtSerialPort->api_no_method
#define sipAbstractMethod           sipAPI_QtSerialPort->api_abstract_method
#define sipBadClass                 sipAPI_QtSerialPort->api_bad_class
#define sipBadCatcherResult         sipAPI_QtSerialPort->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtSerialPort->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtSerialPort->api_bad_operator_arg
#define sipTrace                    sipAPI_QtSerialPort->api_trace
#define sipTransferBack             sipAPI_QtSerialPort->api_transfer_back
#define sipTransferTo               sipAPI_QtSerialPort->api_transfer_to
#define sipTransferBreak            sipAPI_QtSerialPort->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtSerialPort->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtSerialPort->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtSerialPort->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtSerialPort->api_voidptr_type
#define sipGetPyObject              sipAPI_QtSerialPort->api_get_pyobject
#define sipGetAddress               sipAPI_QtSerialPort->api_get_address
#define sipGetMixinAddress          sipAPI_QtSerialPort->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtSerialPort->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtSerialPort->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtSerialPort->api_is_py_method
#define sipCallHook                 sipAPI_QtSerialPort->api_call_hook
#define sipEndThread                sipAPI_QtSerialPort->api_end_thread
#define sipConnectRx                sipAPI_QtSerialPort->api_connect_rx
#define sipDisconnectRx             sipAPI_QtSerialPort->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtSerialPort->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtSerialPort->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtSerialPort->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtSerialPort->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtSerialPort->api_free_sipslot
#define sipSameSlot                 sipAPI_QtSerialPort->api_same_slot
#define sipPySlotExtend             sipAPI_QtSerialPort->api_pyslot_extend
#define sipConvertRx                sipAPI_QtSerialPort->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtSerialPort->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtSerialPort->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtSerialPort->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtSerialPort->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtSerialPort->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_QtSerialPort->api_convert_to_enum
#define sipConvertToBool            sipAPI_QtSerialPort->api_convert_to_bool
#define sipReleaseType              sipAPI_QtSerialPort->api_release_type
#define sipConvertFromType          sipAPI_QtSerialPort->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtSerialPort->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtSerialPort->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtSerialPort->api_convert_from_enum
#define sipGetState                 sipAPI_QtSerialPort->api_get_state
#define sipExportSymbol             sipAPI_QtSerialPort->api_export_symbol
#define sipImportSymbol             sipAPI_QtSerialPort->api_import_symbol
#define sipFindType                 sipAPI_QtSerialPort->api_find_type
#define sipFindNamedEnum            sipAPI_QtSerialPort->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtSerialPort->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtSerialPort->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtSerialPort->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtSerialPort->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtSerialPort->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtSerialPort->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtSerialPort->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtSerialPort->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtSerialPort->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtSerialPort->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtSerialPort->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtSerialPort->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtSerialPort->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtSerialPort->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtSerialPort->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtSerialPort->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtSerialPort->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtSerialPort->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_QtSerialPort->api_deprecated
#define sipGetReference             sipAPI_QtSerialPort->api_get_reference
#define sipKeepReference            sipAPI_QtSerialPort->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtSerialPort->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtSerialPort->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtSerialPort->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtSerialPort->api_type_scope
#define sipResolveTypedef           sipAPI_QtSerialPort->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtSerialPort->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtSerialPort->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtSerialPort->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtSerialPort->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_QtSerialPort->api_enable_overflow_checking
#define sipInitMixin                sipAPI_QtSerialPort->api_init_mixin
#define sipExportModule             sipAPI_QtSerialPort->api_export_module
#define sipInitModule               sipAPI_QtSerialPort->api_init_module
#define sipGetInterpreter           sipAPI_QtSerialPort->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtSerialPort->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtSerialPort->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtSerialPort->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtSerialPort->api_py_type_dict
#define sipPyTypeName               sipAPI_QtSerialPort->api_py_type_name
#define sipGetCFunction             sipAPI_QtSerialPort->api_get_c_function
#define sipGetMethod                sipAPI_QtSerialPort->api_get_method
#define sipFromMethod               sipAPI_QtSerialPort->api_from_method
#define sipGetDate                  sipAPI_QtSerialPort->api_get_date
#define sipFromDate                 sipAPI_QtSerialPort->api_from_date
#define sipGetDateTime              sipAPI_QtSerialPort->api_get_datetime
#define sipFromDateTime             sipAPI_QtSerialPort->api_from_datetime
#define sipGetTime                  sipAPI_QtSerialPort->api_get_time
#define sipFromTime                 sipAPI_QtSerialPort->api_from_time
#define sipIsUserType               sipAPI_QtSerialPort->api_is_user_type
#define sipGetFrame                 sipAPI_QtSerialPort->api_get_frame
#define sipCheckPluginForType       sipAPI_QtSerialPort->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtSerialPort->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtSerialPort->api_unicode_write
#define sipUnicodeData              sipAPI_QtSerialPort->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtSerialPort->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtSerialPort->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtSerialPort->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtSerialPort->api_is_derived_class
#define sipGetUserObject            sipAPI_QtSerialPort->api_get_user_object
#define sipSetUserObject            sipAPI_QtSerialPort->api_set_user_object
#define sipRegisterEventHandler     sipAPI_QtSerialPort->api_register_event_handler
#define sipLong_AsChar              sipAPI_QtSerialPort->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_QtSerialPort->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_QtSerialPort->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_QtSerialPort->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_QtSerialPort->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_QtSerialPort->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_QtSerialPort->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_QtSerialPort->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_QtSerialPort->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_QtSerialPort->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_QtSerialPort->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtSerialPort->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtSerialPort->api_map_int_to_class
#define sipFindClass                sipAPI_QtSerialPort->api_find_class
#define sipFindMappedType           sipAPI_QtSerialPort->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtSerialPort->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtSerialPort->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_QtSerialPort->api_enable_gc
#define sipPrintObject              sipAPI_QtSerialPort->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtSerialPort->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_QtSerialPort[];

#define sipType_QSerialPort sipExportedTypes_QtSerialPort[1]
#define sipClass_QSerialPort sipExportedTypes_QtSerialPort[1]->u.td_wrapper_type

#define sipType_QSerialPort_SerialPortError sipExportedTypes_QtSerialPort[11]
#define sipEnum_QSerialPort_SerialPortError sipExportedTypes_QtSerialPort[11]->u.td_py_type

#define sipType_QSerialPort_DataErrorPolicy sipExportedTypes_QtSerialPort[4]
#define sipEnum_QSerialPort_DataErrorPolicy sipExportedTypes_QtSerialPort[4]->u.td_py_type

#define sipType_QSerialPort_PinoutSignal sipExportedTypes_QtSerialPort[9]
#define sipEnum_QSerialPort_PinoutSignal sipExportedTypes_QtSerialPort[9]->u.td_py_type

#define sipType_QSerialPort_FlowControl sipExportedTypes_QtSerialPort[7]
#define sipEnum_QSerialPort_FlowControl sipExportedTypes_QtSerialPort[7]->u.td_py_type

#define sipType_QSerialPort_StopBits sipExportedTypes_QtSerialPort[12]
#define sipEnum_QSerialPort_StopBits sipExportedTypes_QtSerialPort[12]->u.td_py_type

#define sipType_QSerialPort_Parity sipExportedTypes_QtSerialPort[8]
#define sipEnum_QSerialPort_Parity sipExportedTypes_QtSerialPort[8]->u.td_py_type

#define sipType_QSerialPort_DataBits sipExportedTypes_QtSerialPort[3]
#define sipEnum_QSerialPort_DataBits sipExportedTypes_QtSerialPort[3]->u.td_py_type

#define sipType_QSerialPort_BaudRate sipExportedTypes_QtSerialPort[2]
#define sipEnum_QSerialPort_BaudRate sipExportedTypes_QtSerialPort[2]->u.td_py_type

#define sipType_QSerialPort_Direction sipExportedTypes_QtSerialPort[5]
#define sipEnum_QSerialPort_Direction sipExportedTypes_QtSerialPort[5]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtSerialPort_QSerialPort;

#define sipType_QSerialPort_Directions sipExportedTypes_QtSerialPort[6]
#define sipClass_QSerialPort_Directions sipExportedTypes_QtSerialPort[6]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtSerialPort_QSerialPort_Directions;

#define sipType_QSerialPort_PinoutSignals sipExportedTypes_QtSerialPort[10]
#define sipClass_QSerialPort_PinoutSignals sipExportedTypes_QtSerialPort[10]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtSerialPort_QSerialPort_PinoutSignals;

#define sipType_QSerialPortInfo sipExportedTypes_QtSerialPort[13]
#define sipClass_QSerialPortInfo sipExportedTypes_QtSerialPort[13]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtSerialPort_QSerialPortInfo;

#define sipType_QList_0100QSerialPortInfo sipExportedTypes_QtSerialPort[0]

extern sipMappedTypeDef sipTypeDef_QtSerialPort_QList_0100QSerialPortInfo;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtSerialPort;
extern sipExportedModuleDef sipModuleAPI_QtSerialPort;
extern sipTypeDef *sipExportedTypes_QtSerialPort[];

#define sipType_QObject sipImportedTypes_QtSerialPort_QtCore[6].it_td
#define sipClass_QObject sipImportedTypes_QtSerialPort_QtCore[6].it_td->u.td_wrapper_type

#define sipType_QIODevice sipImportedTypes_QtSerialPort_QtCore[2].it_td
#define sipClass_QIODevice sipImportedTypes_QtSerialPort_QtCore[2].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_QtSerialPort_QtCore[1].it_td
#define sipClass_QEvent sipImportedTypes_QtSerialPort_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_QtSerialPort_QtCore[8].it_td
#define sipClass_QTimerEvent sipImportedTypes_QtSerialPort_QtCore[8].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_QtSerialPort_QtCore[0].it_td
#define sipClass_QChildEvent sipImportedTypes_QtSerialPort_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QIODevice_OpenMode sipImportedTypes_QtSerialPort_QtCore[3].it_td
#define sipClass_QIODevice_OpenMode sipImportedTypes_QtSerialPort_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QMetaMethod sipImportedTypes_QtSerialPort_QtCore[5].it_td
#define sipClass_QMetaMethod sipImportedTypes_QtSerialPort_QtCore[5].it_td->u.td_wrapper_type

#define sipType_QList_1800 sipImportedTypes_QtSerialPort_QtCore[4].it_td

#define sipType_QString sipImportedTypes_QtSerialPort_QtCore[7].it_td
extern sipImportedTypeDef sipImportedTypes_QtSerialPort_QtCore[];
extern sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_QtSerialPort_QtCore[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtSerialPort_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtSerialPort_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_QtSerialPort_qt_metacast;

#endif