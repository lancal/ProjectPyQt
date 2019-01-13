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

#ifndef _QtWebChannelAPI_H
#define _QtWebChannelAPI_H

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
#define sipNameNr_QWebChannelAbstractTransport 0
#define sipName_QWebChannelAbstractTransport &sipStrings_QtWebChannel[0]
#define sipNameNr_29 29
#define sipName_29 &sipStrings_QtWebChannel[29]
#define sipNameNr_blockUpdatesChanged 53
#define sipName_blockUpdatesChanged &sipStrings_QtWebChannel[53]
#define sipNameNr_PyQt5_QtWebChannel 73
#define sipName_PyQt5_QtWebChannel &sipStrings_QtWebChannel[73]
#define sipNameNr_registeredObjects 92
#define sipName_registeredObjects &sipStrings_QtWebChannel[92]
#define sipNameNr_deregisterObject 110
#define sipName_deregisterObject &sipStrings_QtWebChannel[110]
#define sipNameNr_disconnectNotify 127
#define sipName_disconnectNotify &sipStrings_QtWebChannel[127]
#define sipNameNr_messageReceived 144
#define sipName_messageReceived &sipStrings_QtWebChannel[144]
#define sipNameNr_setBlockUpdates 160
#define sipName_setBlockUpdates &sipStrings_QtWebChannel[160]
#define sipNameNr_registerObjects 176
#define sipName_registerObjects &sipStrings_QtWebChannel[176]
#define sipNameNr_disconnectFrom 192
#define sipName_disconnectFrom &sipStrings_QtWebChannel[192]
#define sipNameNr_registerObject 112
#define sipName_registerObject &sipStrings_QtWebChannel[112]
#define sipNameNr_connectNotify 130
#define sipName_connectNotify &sipStrings_QtWebChannel[130]
#define sipNameNr_blockUpdates 207
#define sipName_blockUpdates &sipStrings_QtWebChannel[207]
#define sipNameNr_sendMessage 220
#define sipName_sendMessage &sipStrings_QtWebChannel[220]
#define sipNameNr_QWebChannel 232
#define sipName_QWebChannel &sipStrings_QtWebChannel[232]
#define sipNameNr_customEvent 244
#define sipName_customEvent &sipStrings_QtWebChannel[244]
#define sipNameNr_eventFilter 256
#define sipName_eventFilter &sipStrings_QtWebChannel[256]
#define sipNameNr_childEvent 268
#define sipName_childEvent &sipStrings_QtWebChannel[268]
#define sipNameNr_timerEvent 279
#define sipName_timerEvent &sipStrings_QtWebChannel[279]
#define sipNameNr_connectTo 290
#define sipName_connectTo &sipStrings_QtWebChannel[290]
#define sipNameNr_directory 300
#define sipName_directory &sipStrings_QtWebChannel[300]
#define sipNameNr_precision 310
#define sipName_precision &sipStrings_QtWebChannel[310]
#define sipNameNr_nameType 320
#define sipName_nameType &sipStrings_QtWebChannel[320]
#define sipNameNr_filters 329
#define sipName_filters &sipStrings_QtWebChannel[329]
#define sipNameNr_options 337
#define sipName_options &sipStrings_QtWebChannel[337]
#define sipNameNr_proper 345
#define sipName_proper &sipStrings_QtWebChannel[345]
#define sipNameNr_value9 352
#define sipName_value9 &sipStrings_QtWebChannel[352]
#define sipNameNr_value8 359
#define sipName_value8 &sipStrings_QtWebChannel[359]
#define sipNameNr_value7 366
#define sipName_value7 &sipStrings_QtWebChannel[366]
#define sipNameNr_value6 373
#define sipName_value6 &sipStrings_QtWebChannel[373]
#define sipNameNr_value5 380
#define sipName_value5 &sipStrings_QtWebChannel[380]
#define sipNameNr_value4 387
#define sipName_value4 &sipStrings_QtWebChannel[387]
#define sipNameNr_value3 394
#define sipName_value3 &sipStrings_QtWebChannel[394]
#define sipNameNr_value2 401
#define sipName_value2 &sipStrings_QtWebChannel[401]
#define sipNameNr_value1 408
#define sipName_value1 &sipStrings_QtWebChannel[408]
#define sipNameNr_value0 415
#define sipName_value0 &sipStrings_QtWebChannel[415]
#define sipNameNr_symbol 422
#define sipName_symbol &sipStrings_QtWebChannel[422]
#define sipNameNr_suffix 429
#define sipName_suffix &sipStrings_QtWebChannel[429]
#define sipNameNr_prefix 436
#define sipName_prefix &sipStrings_QtWebChannel[436]
#define sipNameNr_locale 443
#define sipName_locale &sipStrings_QtWebChannel[443]
#define sipNameNr_format 450
#define sipName_format &sipStrings_QtWebChannel[450]
#define sipNameNr_parent 457
#define sipName_parent &sipStrings_QtWebChannel[457]
#define sipNameNr_event 464
#define sipName_event &sipStrings_QtWebChannel[464]
#define sipNameNr_msecs 470
#define sipName_msecs &sipStrings_QtWebChannel[470]
#define sipNameNr_mode 476
#define sipName_mode &sipStrings_QtWebChannel[476]
#define sipNameNr_name 481
#define sipName_name &sipStrings_QtWebChannel[481]
#define sipNameNr_base 486
#define sipName_base &sipStrings_QtWebChannel[486]
#define sipNameNr_from 491
#define sipName_from &sipStrings_QtWebChannel[491]
#define sipNameNr_sort 496
#define sipName_sort &sipStrings_QtWebChannel[496]
#define sipNameNr_pid 501
#define sipName_pid &sipStrings_QtWebChannel[501]

#define sipMalloc                   sipAPI_QtWebChannel->api_malloc
#define sipFree                     sipAPI_QtWebChannel->api_free
#define sipBuildResult              sipAPI_QtWebChannel->api_build_result
#define sipCallMethod               sipAPI_QtWebChannel->api_call_method
#define sipCallProcedureMethod      sipAPI_QtWebChannel->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtWebChannel->api_call_error_handler
#define sipParseResultEx            sipAPI_QtWebChannel->api_parse_result_ex
#define sipParseResult              sipAPI_QtWebChannel->api_parse_result
#define sipParseArgs                sipAPI_QtWebChannel->api_parse_args
#define sipParseKwdArgs             sipAPI_QtWebChannel->api_parse_kwd_args
#define sipParsePair                sipAPI_QtWebChannel->api_parse_pair
#define sipInstanceDestroyed        sipAPI_QtWebChannel->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_QtWebChannel->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_QtWebChannel->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI_QtWebChannel->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI_QtWebChannel->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtWebChannel->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtWebChannel->api_add_exception
#define sipNoFunction               sipAPI_QtWebChannel->api_no_function
#define sipNoMethod                 sipAPI_QtWebChannel->api_no_method
#define sipAbstractMethod           sipAPI_QtWebChannel->api_abstract_method
#define sipBadClass                 sipAPI_QtWebChannel->api_bad_class
#define sipBadCatcherResult         sipAPI_QtWebChannel->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtWebChannel->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtWebChannel->api_bad_operator_arg
#define sipTrace                    sipAPI_QtWebChannel->api_trace
#define sipTransferBack             sipAPI_QtWebChannel->api_transfer_back
#define sipTransferTo               sipAPI_QtWebChannel->api_transfer_to
#define sipTransferBreak            sipAPI_QtWebChannel->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtWebChannel->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtWebChannel->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtWebChannel->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtWebChannel->api_voidptr_type
#define sipGetPyObject              sipAPI_QtWebChannel->api_get_pyobject
#define sipGetAddress               sipAPI_QtWebChannel->api_get_address
#define sipGetMixinAddress          sipAPI_QtWebChannel->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtWebChannel->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtWebChannel->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtWebChannel->api_is_py_method
#define sipCallHook                 sipAPI_QtWebChannel->api_call_hook
#define sipEndThread                sipAPI_QtWebChannel->api_end_thread
#define sipConnectRx                sipAPI_QtWebChannel->api_connect_rx
#define sipDisconnectRx             sipAPI_QtWebChannel->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtWebChannel->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtWebChannel->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtWebChannel->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtWebChannel->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtWebChannel->api_free_sipslot
#define sipSameSlot                 sipAPI_QtWebChannel->api_same_slot
#define sipPySlotExtend             sipAPI_QtWebChannel->api_pyslot_extend
#define sipConvertRx                sipAPI_QtWebChannel->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtWebChannel->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtWebChannel->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtWebChannel->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtWebChannel->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtWebChannel->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_QtWebChannel->api_convert_to_enum
#define sipConvertToBool            sipAPI_QtWebChannel->api_convert_to_bool
#define sipReleaseType              sipAPI_QtWebChannel->api_release_type
#define sipConvertFromType          sipAPI_QtWebChannel->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtWebChannel->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtWebChannel->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtWebChannel->api_convert_from_enum
#define sipGetState                 sipAPI_QtWebChannel->api_get_state
#define sipExportSymbol             sipAPI_QtWebChannel->api_export_symbol
#define sipImportSymbol             sipAPI_QtWebChannel->api_import_symbol
#define sipFindType                 sipAPI_QtWebChannel->api_find_type
#define sipFindNamedEnum            sipAPI_QtWebChannel->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtWebChannel->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtWebChannel->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtWebChannel->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtWebChannel->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtWebChannel->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtWebChannel->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtWebChannel->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtWebChannel->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtWebChannel->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtWebChannel->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtWebChannel->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtWebChannel->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtWebChannel->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtWebChannel->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtWebChannel->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtWebChannel->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtWebChannel->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtWebChannel->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_QtWebChannel->api_deprecated
#define sipGetReference             sipAPI_QtWebChannel->api_get_reference
#define sipKeepReference            sipAPI_QtWebChannel->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtWebChannel->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtWebChannel->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtWebChannel->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtWebChannel->api_type_scope
#define sipResolveTypedef           sipAPI_QtWebChannel->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtWebChannel->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtWebChannel->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtWebChannel->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtWebChannel->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_QtWebChannel->api_enable_overflow_checking
#define sipInitMixin                sipAPI_QtWebChannel->api_init_mixin
#define sipExportModule             sipAPI_QtWebChannel->api_export_module
#define sipInitModule               sipAPI_QtWebChannel->api_init_module
#define sipGetInterpreter           sipAPI_QtWebChannel->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtWebChannel->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtWebChannel->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtWebChannel->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtWebChannel->api_py_type_dict
#define sipPyTypeName               sipAPI_QtWebChannel->api_py_type_name
#define sipGetCFunction             sipAPI_QtWebChannel->api_get_c_function
#define sipGetMethod                sipAPI_QtWebChannel->api_get_method
#define sipFromMethod               sipAPI_QtWebChannel->api_from_method
#define sipGetDate                  sipAPI_QtWebChannel->api_get_date
#define sipFromDate                 sipAPI_QtWebChannel->api_from_date
#define sipGetDateTime              sipAPI_QtWebChannel->api_get_datetime
#define sipFromDateTime             sipAPI_QtWebChannel->api_from_datetime
#define sipGetTime                  sipAPI_QtWebChannel->api_get_time
#define sipFromTime                 sipAPI_QtWebChannel->api_from_time
#define sipIsUserType               sipAPI_QtWebChannel->api_is_user_type
#define sipGetFrame                 sipAPI_QtWebChannel->api_get_frame
#define sipCheckPluginForType       sipAPI_QtWebChannel->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtWebChannel->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtWebChannel->api_unicode_write
#define sipUnicodeData              sipAPI_QtWebChannel->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtWebChannel->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtWebChannel->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtWebChannel->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtWebChannel->api_is_derived_class
#define sipGetUserObject            sipAPI_QtWebChannel->api_get_user_object
#define sipSetUserObject            sipAPI_QtWebChannel->api_set_user_object
#define sipRegisterEventHandler     sipAPI_QtWebChannel->api_register_event_handler
#define sipLong_AsChar              sipAPI_QtWebChannel->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_QtWebChannel->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_QtWebChannel->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_QtWebChannel->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_QtWebChannel->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_QtWebChannel->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_QtWebChannel->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_QtWebChannel->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_QtWebChannel->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_QtWebChannel->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_QtWebChannel->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtWebChannel->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtWebChannel->api_map_int_to_class
#define sipFindClass                sipAPI_QtWebChannel->api_find_class
#define sipFindMappedType           sipAPI_QtWebChannel->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtWebChannel->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtWebChannel->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_QtWebChannel->api_enable_gc
#define sipPrintObject              sipAPI_QtWebChannel->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtWebChannel->api_wrapper_type)
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
extern const char sipStrings_QtWebChannel[];

#define sipType_QWebChannel sipExportedTypes_QtWebChannel[1]
#define sipClass_QWebChannel sipExportedTypes_QtWebChannel[1]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtWebChannel_QWebChannel;

#define sipType_QWebChannelAbstractTransport sipExportedTypes_QtWebChannel[2]
#define sipClass_QWebChannelAbstractTransport sipExportedTypes_QtWebChannel[2]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtWebChannel_QWebChannelAbstractTransport;

#define sipType_QHash_0100QString_0101QObject sipExportedTypes_QtWebChannel[0]

extern sipMappedTypeDef sipTypeDef_QtWebChannel_QHash_0100QString_0101QObject;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtWebChannel;
extern sipExportedModuleDef sipModuleAPI_QtWebChannel;
extern sipTypeDef *sipExportedTypes_QtWebChannel[];

#define sipType_QObject sipImportedTypes_QtWebChannel_QtCore[4].it_td
#define sipClass_QObject sipImportedTypes_QtWebChannel_QtCore[4].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_QtWebChannel_QtCore[1].it_td
#define sipClass_QEvent sipImportedTypes_QtWebChannel_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_QtWebChannel_QtCore[6].it_td
#define sipClass_QTimerEvent sipImportedTypes_QtWebChannel_QtCore[6].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_QtWebChannel_QtCore[0].it_td
#define sipClass_QChildEvent sipImportedTypes_QtWebChannel_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QMetaMethod sipImportedTypes_QtWebChannel_QtCore[3].it_td
#define sipClass_QMetaMethod sipImportedTypes_QtWebChannel_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QJsonObject sipImportedTypes_QtWebChannel_QtCore[2].it_td

#define sipType_QString sipImportedTypes_QtWebChannel_QtCore[5].it_td
extern sipImportedTypeDef sipImportedTypes_QtWebChannel_QtCore[];
extern sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_QtWebChannel_QtCore[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtWebChannel_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtWebChannel_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_QtWebChannel_qt_metacast;

#endif
