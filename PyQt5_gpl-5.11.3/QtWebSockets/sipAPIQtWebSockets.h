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

#ifndef _QtWebSocketsAPI_H
#define _QtWebSocketsAPI_H

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
#define sipNameNr_0 0
#define sipName_0 &sipStrings_QtWebSockets[0]
#define sipNameNr_preSharedKeyAuthenticationRequired 35
#define sipName_preSharedKeyAuthenticationRequired &sipStrings_QtWebSockets[35]
#define sipNameNr_CloseCodeAbnormalDisconnection 70
#define sipName_CloseCodeAbnormalDisconnection &sipStrings_QtWebSockets[70]
#define sipNameNr_CloseCodeDatatypeNotSupported 101
#define sipName_CloseCodeDatatypeNotSupported &sipStrings_QtWebSockets[101]
#define sipNameNr_QWebSocketProtocol__CloseCode 131
#define sipName_QWebSocketProtocol__CloseCode &sipStrings_QtWebSockets[131]
#define sipNameNr_originAuthenticationRequired 161
#define sipName_originAuthenticationRequired &sipStrings_QtWebSockets[161]
#define sipNameNr_CloseCodeTlsHandshakeFailed 190
#define sipName_CloseCodeTlsHandshakeFailed &sipStrings_QtWebSockets[190]
#define sipNameNr_QWebSocketProtocol__Version 218
#define sipName_QWebSocketProtocol__Version &sipStrings_QtWebSockets[218]
#define sipNameNr_QWebSocketCorsAuthenticator 246
#define sipName_QWebSocketCorsAuthenticator &sipStrings_QtWebSockets[246]
#define sipNameNr_proxyAuthenticationRequired 274
#define sipName_proxyAuthenticationRequired &sipStrings_QtWebSockets[274]
#define sipNameNr_CloseCodeMissingStatusCode 302
#define sipName_CloseCodeMissingStatusCode &sipStrings_QtWebSockets[302]
#define sipNameNr_QWebSocketServer__SslMode 329
#define sipName_QWebSocketServer__SslMode &sipStrings_QtWebSockets[329]
#define sipNameNr_CloseCodeMissingExtension 355
#define sipName_CloseCodeMissingExtension &sipStrings_QtWebSockets[355]
#define sipNameNr_setMaxPendingConnections 381
#define sipName_setMaxPendingConnections &sipStrings_QtWebSockets[381]
#define sipNameNr_CloseCodePolicyViolated 406
#define sipName_CloseCodePolicyViolated &sipStrings_QtWebSockets[406]
#define sipNameNr_CloseCodeWrongDatatype 430
#define sipName_CloseCodeWrongDatatype &sipStrings_QtWebSockets[430]
#define sipNameNr_CloseCodeProtocolError 453
#define sipName_CloseCodeProtocolError &sipStrings_QtWebSockets[453]
#define sipNameNr_CloseCodeBadOperation 476
#define sipName_CloseCodeBadOperation &sipStrings_QtWebSockets[476]
#define sipNameNr_CloseCodeReserved1004 498
#define sipName_CloseCodeReserved1004 &sipStrings_QtWebSockets[498]
#define sipNameNr_binaryMessageReceived 520
#define sipName_binaryMessageReceived &sipStrings_QtWebSockets[520]
#define sipNameNr_nextPendingConnection 542
#define sipName_nextPendingConnection &sipStrings_QtWebSockets[542]
#define sipNameNr_maxPendingConnections 564
#define sipName_maxPendingConnections &sipStrings_QtWebSockets[564]
#define sipNameNr_hasPendingConnections 586
#define sipName_hasPendingConnections &sipStrings_QtWebSockets[586]
#define sipNameNr_CloseCodeTooMuchData 608
#define sipName_CloseCodeTooMuchData &sipStrings_QtWebSockets[608]
#define sipNameNr_textMessageReceived 629
#define sipName_textMessageReceived &sipStrings_QtWebSockets[629]
#define sipNameNr_binaryFrameReceived 649
#define sipName_binaryFrameReceived &sipStrings_QtWebSockets[649]
#define sipNameNr_setSslConfiguration 669
#define sipName_setSslConfiguration &sipStrings_QtWebSockets[669]
#define sipNameNr_setSocketDescriptor 689
#define sipName_setSocketDescriptor &sipStrings_QtWebSockets[689]
#define sipNameNr_readChannelFinished 709
#define sipName_readChannelFinished &sipStrings_QtWebSockets[709]
#define sipNameNr_CloseCodeGoingAway 729
#define sipName_CloseCodeGoingAway &sipStrings_QtWebSockets[729]
#define sipNameNr_QWebSocketProtocol 748
#define sipName_QWebSocketProtocol &sipStrings_QtWebSockets[748]
#define sipNameNr_PyQt5_QtWebSockets 767
#define sipName_PyQt5_QtWebSockets &sipStrings_QtWebSockets[767]
#define sipNameNr_supportedVersions 786
#define sipName_supportedVersions &sipStrings_QtWebSockets[786]
#define sipNameNr_textFrameReceived 804
#define sipName_textFrameReceived &sipStrings_QtWebSockets[804]
#define sipNameNr_sendBinaryMessage 822
#define sipName_sendBinaryMessage &sipStrings_QtWebSockets[822]
#define sipNameNr_setReadBufferSize 840
#define sipName_setReadBufferSize &sipStrings_QtWebSockets[840]
#define sipNameNr_sip_simplewrapper 858
#define sipName_sip_simplewrapper &sipStrings_QtWebSockets[858]
#define sipNameNr_handleConnection 876
#define sipName_handleConnection &sipStrings_QtWebSockets[876]
#define sipNameNr_QWebSocketServer 893
#define sipName_QWebSocketServer &sipStrings_QtWebSockets[893]
#define sipNameNr_setMaskGenerator 910
#define sipName_setMaskGenerator &sipStrings_QtWebSockets[910]
#define sipNameNr_sslConfiguration 927
#define sipName_sslConfiguration &sipStrings_QtWebSockets[927]
#define sipNameNr_socketDescriptor 944
#define sipName_socketDescriptor &sipStrings_QtWebSockets[944]
#define sipNameNr_disconnectNotify 961
#define sipName_disconnectNotify &sipStrings_QtWebSockets[961]
#define sipNameNr_CloseCodeNormal 978
#define sipName_CloseCodeNormal &sipStrings_QtWebSockets[978]
#define sipNameNr_sendTextMessage 994
#define sipName_sendTextMessage &sipStrings_QtWebSockets[994]
#define sipNameNr_resumeAccepting 1010
#define sipName_resumeAccepting &sipStrings_QtWebSockets[1010]
#define sipNameNr_peerVerifyError 1026
#define sipName_peerVerifyError &sipStrings_QtWebSockets[1026]
#define sipNameNr_ignoreSslErrors 1042
#define sipName_ignoreSslErrors &sipStrings_QtWebSockets[1042]
#define sipNameNr_VersionUnknown 1058
#define sipName_VersionUnknown &sipStrings_QtWebSockets[1058]
#define sipNameNr_QMaskGenerator 1073
#define sipName_QMaskGenerator &sipStrings_QtWebSockets[1073]
#define sipNameNr_pauseAccepting 1088
#define sipName_pauseAccepting &sipStrings_QtWebSockets[1088]
#define sipNameNr_readBufferSize 1103
#define sipName_readBufferSize &sipStrings_QtWebSockets[1103]
#define sipNameNr_NonSecureMode 1118
#define sipName_NonSecureMode &sipStrings_QtWebSockets[1118]
#define sipNameNr_VersionLatest 1132
#define sipName_VersionLatest &sipStrings_QtWebSockets[1132]
#define sipNameNr_maskGenerator 1146
#define sipName_maskGenerator &sipStrings_QtWebSockets[1146]
#define sipNameNr_serverAddress 1160
#define sipName_serverAddress &sipStrings_QtWebSockets[1160]
#define sipNameNr_setServerName 1174
#define sipName_setServerName &sipStrings_QtWebSockets[1174]
#define sipNameNr_newConnection 1188
#define sipName_newConnection &sipStrings_QtWebSockets[1188]
#define sipNameNr_connectNotify 964
#define sipName_connectNotify &sipStrings_QtWebSockets[964]
#define sipNameNr_resourceName 1202
#define sipName_resourceName &sipStrings_QtWebSockets[1202]
#define sipNameNr_setPauseMode 1215
#define sipName_setPauseMode &sipStrings_QtWebSockets[1215]
#define sipNameNr_disconnected 1228
#define sipName_disconnected &sipStrings_QtWebSockets[1228]
#define sipNameNr_localAddress 1241
#define sipName_localAddress &sipStrings_QtWebSockets[1241]
#define sipNameNr_aboutToClose 1254
#define sipName_aboutToClose &sipStrings_QtWebSockets[1254]
#define sipNameNr_bytesWritten 1267
#define sipName_bytesWritten &sipStrings_QtWebSockets[1267]
#define sipNameNr_stateChanged 1280
#define sipName_stateChanged &sipStrings_QtWebSockets[1280]
#define sipNameNr_closeReason 1293
#define sipName_closeReason &sipStrings_QtWebSockets[1293]
#define sipNameNr_acceptError 1305
#define sipName_acceptError &sipStrings_QtWebSockets[1305]
#define sipNameNr_serverError 1317
#define sipName_serverError &sipStrings_QtWebSockets[1317]
#define sipNameNr_isListening 1329
#define sipName_isListening &sipStrings_QtWebSockets[1329]
#define sipNameNr_peerAddress 1341
#define sipName_peerAddress &sipStrings_QtWebSockets[1341]
#define sipNameNr_customEvent 1353
#define sipName_customEvent &sipStrings_QtWebSockets[1353]
#define sipNameNr_eventFilter 1365
#define sipName_eventFilter &sipStrings_QtWebSockets[1365]
#define sipNameNr_errorString 1377
#define sipName_errorString &sipStrings_QtWebSockets[1377]
#define sipNameNr_secureMode 1389
#define sipName_secureMode &sipStrings_QtWebSockets[1389]
#define sipNameNr_SecureMode 1121
#define sipName_SecureMode &sipStrings_QtWebSockets[1121]
#define sipNameNr_setAllowed 1400
#define sipName_setAllowed &sipStrings_QtWebSockets[1400]
#define sipNameNr_QWebSocket 1411
#define sipName_QWebSocket &sipStrings_QtWebSockets[1411]
#define sipNameNr_serverPort 1422
#define sipName_serverPort &sipStrings_QtWebSockets[1422]
#define sipNameNr_requestUrl 1433
#define sipName_requestUrl &sipStrings_QtWebSockets[1433]
#define sipNameNr_serverName 1444
#define sipName_serverName &sipStrings_QtWebSockets[1444]
#define sipNameNr_childEvent 1455
#define sipName_childEvent &sipStrings_QtWebSockets[1455]
#define sipNameNr_timerEvent 1466
#define sipName_timerEvent &sipStrings_QtWebSockets[1466]
#define sipNameNr_serverUrl 1477
#define sipName_serverUrl &sipStrings_QtWebSockets[1477]
#define sipNameNr_CloseCode 151
#define sipName_CloseCode &sipStrings_QtWebSockets[151]
#define sipNameNr_Version13 1487
#define sipName_Version13 &sipStrings_QtWebSockets[1487]
#define sipNameNr_closeCode 1497
#define sipName_closeCode &sipStrings_QtWebSockets[1497]
#define sipNameNr_sslErrors 1507
#define sipName_sslErrors &sipStrings_QtWebSockets[1507]
#define sipNameNr_pauseMode 1517
#define sipName_pauseMode &sipStrings_QtWebSockets[1517]
#define sipNameNr_connected 1231
#define sipName_connected &sipStrings_QtWebSockets[1231]
#define sipNameNr_localPort 1527
#define sipName_localPort &sipStrings_QtWebSockets[1527]
#define sipNameNr_directory 1537
#define sipName_directory &sipStrings_QtWebSockets[1537]
#define sipNameNr_precision 1547
#define sipName_precision &sipStrings_QtWebSockets[1547]
#define sipNameNr_Version8 1557
#define sipName_Version8 &sipStrings_QtWebSockets[1557]
#define sipNameNr_Version7 1566
#define sipName_Version7 &sipStrings_QtWebSockets[1566]
#define sipNameNr_Version6 1575
#define sipName_Version6 &sipStrings_QtWebSockets[1575]
#define sipNameNr_Version5 1584
#define sipName_Version5 &sipStrings_QtWebSockets[1584]
#define sipNameNr_Version4 1593
#define sipName_Version4 &sipStrings_QtWebSockets[1593]
#define sipNameNr_Version0 1602
#define sipName_Version0 &sipStrings_QtWebSockets[1602]
#define sipNameNr_nextMask 1611
#define sipName_nextMask &sipStrings_QtWebSockets[1611]
#define sipNameNr_encoding 1620
#define sipName_encoding &sipStrings_QtWebSockets[1620]
#define sipNameNr_setProxy 1629
#define sipName_setProxy &sipStrings_QtWebSockets[1629]
#define sipNameNr_peerName 1638
#define sipName_peerName &sipStrings_QtWebSockets[1638]
#define sipNameNr_peerPort 1647
#define sipName_peerPort &sipStrings_QtWebSockets[1647]
#define sipNameNr_protocol 1656
#define sipName_protocol &sipStrings_QtWebSockets[1656]
#define sipNameNr_nameType 1665
#define sipName_nameType &sipStrings_QtWebSockets[1665]
#define sipNameNr_allowed 1674
#define sipName_allowed &sipStrings_QtWebSockets[1674]
#define sipNameNr_SslMode 347
#define sipName_SslMode &sipStrings_QtWebSockets[347]
#define sipNameNr_payload 1682
#define sipName_payload &sipStrings_QtWebSockets[1682]
#define sipNameNr_request 1690
#define sipName_request &sipStrings_QtWebSockets[1690]
#define sipNameNr_address 1698
#define sipName_address &sipStrings_QtWebSockets[1698]
#define sipNameNr_filters 1706
#define sipName_filters &sipStrings_QtWebSockets[1706]
#define sipNameNr_Version 238
#define sipName_Version &sipStrings_QtWebSockets[238]
#define sipNameNr_version 1714
#define sipName_version &sipStrings_QtWebSockets[1714]
#define sipNameNr_options 1722
#define sipName_options &sipStrings_QtWebSockets[1722]
#define sipNameNr_isValid 1730
#define sipName_isValid &sipStrings_QtWebSockets[1730]
#define sipNameNr_reason 1738
#define sipName_reason &sipStrings_QtWebSockets[1738]
#define sipNameNr_origin 1745
#define sipName_origin &sipStrings_QtWebSockets[1745]
#define sipNameNr_closed 1752
#define sipName_closed &sipStrings_QtWebSockets[1752]
#define sipNameNr_listen 1759
#define sipName_listen &sipStrings_QtWebSockets[1759]
#define sipNameNr_proper 1766
#define sipName_proper &sipStrings_QtWebSockets[1766]
#define sipNameNr_value9 1773
#define sipName_value9 &sipStrings_QtWebSockets[1773]
#define sipNameNr_value8 1780
#define sipName_value8 &sipStrings_QtWebSockets[1780]
#define sipNameNr_value7 1787
#define sipName_value7 &sipStrings_QtWebSockets[1787]
#define sipNameNr_value6 1794
#define sipName_value6 &sipStrings_QtWebSockets[1794]
#define sipNameNr_value5 1801
#define sipName_value5 &sipStrings_QtWebSockets[1801]
#define sipNameNr_value4 1808
#define sipName_value4 &sipStrings_QtWebSockets[1808]
#define sipNameNr_value3 1815
#define sipName_value3 &sipStrings_QtWebSockets[1815]
#define sipNameNr_value2 1822
#define sipName_value2 &sipStrings_QtWebSockets[1822]
#define sipNameNr_value1 1829
#define sipName_value1 &sipStrings_QtWebSockets[1829]
#define sipNameNr_value0 1836
#define sipName_value0 &sipStrings_QtWebSockets[1836]
#define sipNameNr_symbol 1843
#define sipName_symbol &sipStrings_QtWebSockets[1843]
#define sipNameNr_suffix 1850
#define sipName_suffix &sipStrings_QtWebSockets[1850]
#define sipNameNr_prefix 1857
#define sipName_prefix &sipStrings_QtWebSockets[1857]
#define sipNameNr_locale 1864
#define sipName_locale &sipStrings_QtWebSockets[1864]
#define sipNameNr_format 1871
#define sipName_format &sipStrings_QtWebSockets[1871]
#define sipNameNr_resume 1878
#define sipName_resume &sipStrings_QtWebSockets[1878]
#define sipNameNr_parent 1885
#define sipName_parent &sipStrings_QtWebSockets[1885]
#define sipNameNr_proxy 1892
#define sipName_proxy &sipStrings_QtWebSockets[1892]
#define sipNameNr_abort 1898
#define sipName_abort &sipStrings_QtWebSockets[1898]
#define sipNameNr_error 1904
#define sipName_error &sipStrings_QtWebSockets[1904]
#define sipNameNr_close 1910
#define sipName_close &sipStrings_QtWebSockets[1910]
#define sipNameNr_flush 1916
#define sipName_flush &sipStrings_QtWebSockets[1916]
#define sipNameNr_event 1922
#define sipName_event &sipStrings_QtWebSockets[1922]
#define sipNameNr_msecs 1928
#define sipName_msecs &sipStrings_QtWebSockets[1928]
#define sipNameNr_state 1934
#define sipName_state &sipStrings_QtWebSockets[1934]
#define sipNameNr_pong 1940
#define sipName_pong &sipStrings_QtWebSockets[1940]
#define sipNameNr_ping 1945
#define sipName_ping &sipStrings_QtWebSockets[1945]
#define sipNameNr_port 1950
#define sipName_port &sipStrings_QtWebSockets[1950]
#define sipNameNr_mode 1955
#define sipName_mode &sipStrings_QtWebSockets[1955]
#define sipNameNr_name 1960
#define sipName_name &sipStrings_QtWebSockets[1960]
#define sipNameNr_base 1965
#define sipName_base &sipStrings_QtWebSockets[1965]
#define sipNameNr_open 1970
#define sipName_open &sipStrings_QtWebSockets[1970]
#define sipNameNr_from 1975
#define sipName_from &sipStrings_QtWebSockets[1975]
#define sipNameNr_sort 1980
#define sipName_sort &sipStrings_QtWebSockets[1980]
#define sipNameNr_swap 1985
#define sipName_swap &sipStrings_QtWebSockets[1985]
#define sipNameNr_seed 1990
#define sipName_seed &sipStrings_QtWebSockets[1990]
#define sipNameNr_pid 1995
#define sipName_pid &sipStrings_QtWebSockets[1995]

#define sipMalloc                   sipAPI_QtWebSockets->api_malloc
#define sipFree                     sipAPI_QtWebSockets->api_free
#define sipBuildResult              sipAPI_QtWebSockets->api_build_result
#define sipCallMethod               sipAPI_QtWebSockets->api_call_method
#define sipCallProcedureMethod      sipAPI_QtWebSockets->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtWebSockets->api_call_error_handler
#define sipParseResultEx            sipAPI_QtWebSockets->api_parse_result_ex
#define sipParseResult              sipAPI_QtWebSockets->api_parse_result
#define sipParseArgs                sipAPI_QtWebSockets->api_parse_args
#define sipParseKwdArgs             sipAPI_QtWebSockets->api_parse_kwd_args
#define sipParsePair                sipAPI_QtWebSockets->api_parse_pair
#define sipInstanceDestroyed        sipAPI_QtWebSockets->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_QtWebSockets->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_QtWebSockets->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI_QtWebSockets->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI_QtWebSockets->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtWebSockets->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtWebSockets->api_add_exception
#define sipNoFunction               sipAPI_QtWebSockets->api_no_function
#define sipNoMethod                 sipAPI_QtWebSockets->api_no_method
#define sipAbstractMethod           sipAPI_QtWebSockets->api_abstract_method
#define sipBadClass                 sipAPI_QtWebSockets->api_bad_class
#define sipBadCatcherResult         sipAPI_QtWebSockets->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtWebSockets->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtWebSockets->api_bad_operator_arg
#define sipTrace                    sipAPI_QtWebSockets->api_trace
#define sipTransferBack             sipAPI_QtWebSockets->api_transfer_back
#define sipTransferTo               sipAPI_QtWebSockets->api_transfer_to
#define sipTransferBreak            sipAPI_QtWebSockets->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtWebSockets->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtWebSockets->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtWebSockets->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtWebSockets->api_voidptr_type
#define sipGetPyObject              sipAPI_QtWebSockets->api_get_pyobject
#define sipGetAddress               sipAPI_QtWebSockets->api_get_address
#define sipGetMixinAddress          sipAPI_QtWebSockets->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtWebSockets->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtWebSockets->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtWebSockets->api_is_py_method
#define sipCallHook                 sipAPI_QtWebSockets->api_call_hook
#define sipEndThread                sipAPI_QtWebSockets->api_end_thread
#define sipConnectRx                sipAPI_QtWebSockets->api_connect_rx
#define sipDisconnectRx             sipAPI_QtWebSockets->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtWebSockets->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtWebSockets->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtWebSockets->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtWebSockets->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtWebSockets->api_free_sipslot
#define sipSameSlot                 sipAPI_QtWebSockets->api_same_slot
#define sipPySlotExtend             sipAPI_QtWebSockets->api_pyslot_extend
#define sipConvertRx                sipAPI_QtWebSockets->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtWebSockets->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtWebSockets->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtWebSockets->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtWebSockets->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtWebSockets->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_QtWebSockets->api_convert_to_enum
#define sipConvertToBool            sipAPI_QtWebSockets->api_convert_to_bool
#define sipReleaseType              sipAPI_QtWebSockets->api_release_type
#define sipConvertFromType          sipAPI_QtWebSockets->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtWebSockets->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtWebSockets->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtWebSockets->api_convert_from_enum
#define sipGetState                 sipAPI_QtWebSockets->api_get_state
#define sipExportSymbol             sipAPI_QtWebSockets->api_export_symbol
#define sipImportSymbol             sipAPI_QtWebSockets->api_import_symbol
#define sipFindType                 sipAPI_QtWebSockets->api_find_type
#define sipFindNamedEnum            sipAPI_QtWebSockets->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtWebSockets->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtWebSockets->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtWebSockets->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtWebSockets->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtWebSockets->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtWebSockets->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtWebSockets->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtWebSockets->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtWebSockets->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtWebSockets->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtWebSockets->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtWebSockets->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtWebSockets->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtWebSockets->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtWebSockets->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtWebSockets->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtWebSockets->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtWebSockets->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_QtWebSockets->api_deprecated
#define sipGetReference             sipAPI_QtWebSockets->api_get_reference
#define sipKeepReference            sipAPI_QtWebSockets->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtWebSockets->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtWebSockets->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtWebSockets->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtWebSockets->api_type_scope
#define sipResolveTypedef           sipAPI_QtWebSockets->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtWebSockets->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtWebSockets->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtWebSockets->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtWebSockets->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_QtWebSockets->api_enable_overflow_checking
#define sipInitMixin                sipAPI_QtWebSockets->api_init_mixin
#define sipExportModule             sipAPI_QtWebSockets->api_export_module
#define sipInitModule               sipAPI_QtWebSockets->api_init_module
#define sipGetInterpreter           sipAPI_QtWebSockets->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtWebSockets->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtWebSockets->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtWebSockets->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtWebSockets->api_py_type_dict
#define sipPyTypeName               sipAPI_QtWebSockets->api_py_type_name
#define sipGetCFunction             sipAPI_QtWebSockets->api_get_c_function
#define sipGetMethod                sipAPI_QtWebSockets->api_get_method
#define sipFromMethod               sipAPI_QtWebSockets->api_from_method
#define sipGetDate                  sipAPI_QtWebSockets->api_get_date
#define sipFromDate                 sipAPI_QtWebSockets->api_from_date
#define sipGetDateTime              sipAPI_QtWebSockets->api_get_datetime
#define sipFromDateTime             sipAPI_QtWebSockets->api_from_datetime
#define sipGetTime                  sipAPI_QtWebSockets->api_get_time
#define sipFromTime                 sipAPI_QtWebSockets->api_from_time
#define sipIsUserType               sipAPI_QtWebSockets->api_is_user_type
#define sipGetFrame                 sipAPI_QtWebSockets->api_get_frame
#define sipCheckPluginForType       sipAPI_QtWebSockets->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtWebSockets->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtWebSockets->api_unicode_write
#define sipUnicodeData              sipAPI_QtWebSockets->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtWebSockets->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtWebSockets->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtWebSockets->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtWebSockets->api_is_derived_class
#define sipGetUserObject            sipAPI_QtWebSockets->api_get_user_object
#define sipSetUserObject            sipAPI_QtWebSockets->api_set_user_object
#define sipRegisterEventHandler     sipAPI_QtWebSockets->api_register_event_handler
#define sipLong_AsChar              sipAPI_QtWebSockets->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_QtWebSockets->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_QtWebSockets->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_QtWebSockets->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_QtWebSockets->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_QtWebSockets->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_QtWebSockets->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_QtWebSockets->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_QtWebSockets->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_QtWebSockets->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_QtWebSockets->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtWebSockets->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtWebSockets->api_map_int_to_class
#define sipFindClass                sipAPI_QtWebSockets->api_find_class
#define sipFindMappedType           sipAPI_QtWebSockets->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtWebSockets->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtWebSockets->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_QtWebSockets->api_enable_gc
#define sipPrintObject              sipAPI_QtWebSockets->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtWebSockets->api_wrapper_type)
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
extern const char sipStrings_QtWebSockets[];

#define sipType_QMaskGenerator sipExportedTypes_QtWebSockets[1]
#define sipClass_QMaskGenerator sipExportedTypes_QtWebSockets[1]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtWebSockets_QMaskGenerator;

#define sipType_QWebSocket sipExportedTypes_QtWebSockets[2]
#define sipClass_QWebSocket sipExportedTypes_QtWebSockets[2]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtWebSockets_QWebSocket;

#define sipType_QWebSocketCorsAuthenticator sipExportedTypes_QtWebSockets[3]
#define sipClass_QWebSocketCorsAuthenticator sipExportedTypes_QtWebSockets[3]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtWebSockets_QWebSocketCorsAuthenticator;

#define sipType_QWebSocketProtocol sipExportedTypes_QtWebSockets[4]
#define sipClass_QWebSocketProtocol sipExportedTypes_QtWebSockets[4]->u.td_wrapper_type

#define sipType_QWebSocketProtocol_CloseCode sipExportedTypes_QtWebSockets[5]
#define sipEnum_QWebSocketProtocol_CloseCode sipExportedTypes_QtWebSockets[5]->u.td_py_type

#define sipType_QWebSocketProtocol_Version sipExportedTypes_QtWebSockets[6]
#define sipEnum_QWebSocketProtocol_Version sipExportedTypes_QtWebSockets[6]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtWebSockets_QWebSocketProtocol;

#define sipType_QWebSocketServer sipExportedTypes_QtWebSockets[7]
#define sipClass_QWebSocketServer sipExportedTypes_QtWebSockets[7]->u.td_wrapper_type

#define sipType_QWebSocketServer_SslMode sipExportedTypes_QtWebSockets[8]
#define sipEnum_QWebSocketServer_SslMode sipExportedTypes_QtWebSockets[8]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtWebSockets_QWebSocketServer;

#define sipType_QList_0100QWebSocketProtocol_Version sipExportedTypes_QtWebSockets[0]

extern sipMappedTypeDef sipTypeDef_QtWebSockets_QList_0100QWebSocketProtocol_Version;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtWebSockets;
extern sipExportedModuleDef sipModuleAPI_QtWebSockets;
extern sipTypeDef *sipExportedTypes_QtWebSockets[];

#define sipType_QObject sipImportedTypes_QtWebSockets_QtCore[4].it_td
#define sipClass_QObject sipImportedTypes_QtWebSockets_QtCore[4].it_td->u.td_wrapper_type

#define sipType_QByteArray sipImportedTypes_QtWebSockets_QtCore[0].it_td
#define sipClass_QByteArray sipImportedTypes_QtWebSockets_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_QtWebSockets_QtCore[2].it_td
#define sipClass_QEvent sipImportedTypes_QtWebSockets_QtCore[2].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_QtWebSockets_QtCore[6].it_td
#define sipClass_QTimerEvent sipImportedTypes_QtWebSockets_QtCore[6].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_QtWebSockets_QtCore[1].it_td
#define sipClass_QChildEvent sipImportedTypes_QtWebSockets_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QMetaMethod sipImportedTypes_QtWebSockets_QtCore[3].it_td
#define sipClass_QMetaMethod sipImportedTypes_QtWebSockets_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QUrl sipImportedTypes_QtWebSockets_QtCore[7].it_td
#define sipClass_QUrl sipImportedTypes_QtWebSockets_QtCore[7].it_td->u.td_wrapper_type

#define sipType_QString sipImportedTypes_QtWebSockets_QtCore[5].it_td
extern sipImportedTypeDef sipImportedTypes_QtWebSockets_QtCore[];
extern sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_QtWebSockets_QtCore[];

#define sipType_QAbstractSocket_SocketState sipImportedTypes_QtWebSockets_QtNetwork[2].it_td
#define sipEnum_QAbstractSocket_SocketState sipImportedTypes_QtWebSockets_QtNetwork[2].it_td->u.td_py_type

#define sipType_QAbstractSocket_SocketError sipImportedTypes_QtWebSockets_QtNetwork[1].it_td
#define sipEnum_QAbstractSocket_SocketError sipImportedTypes_QtWebSockets_QtNetwork[1].it_td->u.td_py_type

#define sipType_QAbstractSocket_PauseModes sipImportedTypes_QtWebSockets_QtNetwork[0].it_td
#define sipClass_QAbstractSocket_PauseModes sipImportedTypes_QtWebSockets_QtNetwork[0].it_td->u.td_wrapper_type

#define sipType_QAuthenticator sipImportedTypes_QtWebSockets_QtNetwork[3].it_td
#define sipClass_QAuthenticator sipImportedTypes_QtWebSockets_QtNetwork[3].it_td->u.td_wrapper_type

#define sipType_QHostAddress sipImportedTypes_QtWebSockets_QtNetwork[4].it_td
#define sipClass_QHostAddress sipImportedTypes_QtWebSockets_QtNetwork[4].it_td->u.td_wrapper_type

#define sipType_QNetworkProxy sipImportedTypes_QtWebSockets_QtNetwork[6].it_td
#define sipClass_QNetworkProxy sipImportedTypes_QtWebSockets_QtNetwork[6].it_td->u.td_wrapper_type

#define sipType_QNetworkRequest sipImportedTypes_QtWebSockets_QtNetwork[7].it_td
#define sipClass_QNetworkRequest sipImportedTypes_QtWebSockets_QtNetwork[7].it_td->u.td_wrapper_type

#define sipType_QSslConfiguration sipImportedTypes_QtWebSockets_QtNetwork[8].it_td
#define sipClass_QSslConfiguration sipImportedTypes_QtWebSockets_QtNetwork[8].it_td->u.td_wrapper_type

#define sipType_QSslError sipImportedTypes_QtWebSockets_QtNetwork[9].it_td
#define sipClass_QSslError sipImportedTypes_QtWebSockets_QtNetwork[9].it_td->u.td_wrapper_type

#define sipType_QSslPreSharedKeyAuthenticator sipImportedTypes_QtWebSockets_QtNetwork[10].it_td
#define sipClass_QSslPreSharedKeyAuthenticator sipImportedTypes_QtWebSockets_QtNetwork[10].it_td->u.td_wrapper_type

#define sipType_QTcpSocket sipImportedTypes_QtWebSockets_QtNetwork[11].it_td
#define sipClass_QTcpSocket sipImportedTypes_QtWebSockets_QtNetwork[11].it_td->u.td_wrapper_type

#define sipType_QList_0100QSslError sipImportedTypes_QtWebSockets_QtNetwork[5].it_td
extern sipImportedTypeDef sipImportedTypes_QtWebSockets_QtNetwork[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtWebSockets_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtWebSockets_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_QtWebSockets_qt_metacast;

#endif
