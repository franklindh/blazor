#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
177,
182,
183,
184,
185,
186,
187,
188,
189,
190,
193,
194,
294,
295,
297,
325,
326,
327,
347,
348,
349,
350,
351,
442,
443,
444,
447,
484,
485,
487,
489,
491,
493,
498,
506,
507,
508,
509,
510,
511,
512,
513,
514,
515,
645,
646,
653,
656,
658,
663,
664,
666,
667,
671,
672,
673,
674,
676,
677,
678,
681,
682,
685,
686,
687,
755,
756,
758,
766,
767,
768,
769,
770,
774,
775,
776,
777,
778,
779,
781,
782,
783,
785,
786,
787,
791,
792,
793,
1061,
1236,
1237,
5945,
5946,
5948,
5949,
5950,
5951,
5952,
5954,
5956,
5958,
5959,
5967,
5969,
5973,
5974,
5976,
5978,
5980,
5992,
6001,
6002,
6004,
6005,
6006,
6007,
6008,
6010,
6012,
6930,
6934,
6936,
6937,
6938,
6939,
6983,
6984,
6985,
7002,
7003,
7004,
7005,
7037,
7080,
7083,
7092,
7093,
7094,
7349,
7351,
7352,
7377,
7378,
7379,
7394,
7400,
7407,
7417,
7421,
7492,
7498,
7499,
7500,
7501,
7507,
7520,
7540,
7541,
7549,
7551,
7558,
7559,
7562,
7564,
7569,
7575,
7576,
7583,
7585,
7595,
7598,
7599,
7600,
7610,
7621,
7627,
7628,
7629,
7631,
7632,
7642,
7660,
7673,
7692,
7722,
7723,
8079,
8215,
8452,
8453,
8460,
8461,
8462,
8467,
8527,
8686,
8687,
9820,
9839,
9846,
9847,
9849,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 177,
ves_icall_System_Array_InternalCreate,
// token 182,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 183,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 184,
ves_icall_System_Array_CanChangePrimitive,
// token 185,
ves_icall_System_Array_FastCopy_raw,
// token 186,
ves_icall_System_Array_GetLength_raw,
// token 187,
ves_icall_System_Array_GetLowerBound_raw,
// token 188,
ves_icall_System_Array_GetGenericValue_icall,
// token 189,
ves_icall_System_Array_GetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetGenericValue_icall,
// token 193,
ves_icall_System_Array_SetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 294,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 295,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 297,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 325,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 326,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 327,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 347,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 348,
ves_icall_System_Enum_ToObject_raw,
// token 349,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 350,
ves_icall_System_Enum_get_underlying_type_raw,
// token 351,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 442,
ves_icall_System_Environment_get_ProcessorCount,
// token 443,
ves_icall_System_Environment_get_TickCount,
// token 444,
ves_icall_System_Environment_get_TickCount64,
// token 447,
ves_icall_System_Environment_FailFast_raw,
// token 484,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 485,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 487,
ves_icall_System_GC_SuppressFinalize_raw,
// token 489,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 491,
ves_icall_System_GC_GetGCMemoryInfo,
// token 493,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 498,
ves_icall_System_Object_MemberwiseClone_raw,
// token 506,
ves_icall_System_Math_Abs_double,
// token 507,
ves_icall_System_Math_Ceiling,
// token 508,
ves_icall_System_Math_Cos,
// token 509,
ves_icall_System_Math_Floor,
// token 510,
ves_icall_System_Math_Log10,
// token 511,
ves_icall_System_Math_Pow,
// token 512,
ves_icall_System_Math_Sin,
// token 513,
ves_icall_System_Math_Sqrt,
// token 514,
ves_icall_System_Math_Tan,
// token 515,
ves_icall_System_Math_ModF,
// token 645,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 646,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 653,
ves_icall_RuntimeType_make_array_type_raw,
// token 656,
ves_icall_RuntimeType_make_byref_type_raw,
// token 658,
ves_icall_RuntimeType_MakePointerType_raw,
// token 663,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 664,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 666,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 667,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 671,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 672,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 673,
ves_icall_System_RuntimeType_getFullName_raw,
// token 674,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 676,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 677,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 678,
ves_icall_RuntimeType_GetFields_native_raw,
// token 681,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 682,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 685,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 686,
ves_icall_RuntimeType_get_Name_raw,
// token 687,
ves_icall_RuntimeType_get_Namespace_raw,
// token 755,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 756,
ves_icall_reflection_get_token_raw,
// token 758,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 766,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 767,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 768,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 769,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 770,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 774,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 775,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 776,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 777,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 778,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 779,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 781,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 782,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 783,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 785,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 786,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 787,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 791,
ves_icall_System_String_FastAllocateString_raw,
// token 792,
ves_icall_System_String_InternalIsInterned_raw,
// token 793,
ves_icall_System_String_InternalIntern_raw,
// token 1061,
ves_icall_System_Type_internal_from_handle_raw,
// token 1236,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1237,
ves_icall_System_ValueType_Equals_raw,
// token 5945,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5946,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5948,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5949,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5950,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5951,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5952,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5954,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5956,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5958,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5959,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5967,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5969,
mono_monitor_exit_icall_raw,
// token 5973,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5974,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5976,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5978,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5980,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5992,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 6001,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6002,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6004,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6005,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6006,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6007,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6008,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6010,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6012,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6930,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6934,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6936,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6937,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6938,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6939,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6983,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6984,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6985,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7002,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7003,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7004,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7005,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 7037,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7080,
mono_object_hash_icall_raw,
// token 7083,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7092,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7093,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7094,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7349,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7351,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7352,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7377,
mono_digest_get_public_token,
// token 7378,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7379,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7394,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7400,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7407,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7417,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7421,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7492,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7498,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7499,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7500,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7501,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7507,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7520,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7540,
ves_icall_reflection_get_token_raw,
// token 7541,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7549,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7551,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7558,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7559,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7562,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7564,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7569,
ves_icall_reflection_get_token_raw,
// token 7575,
ves_icall_get_method_info_raw,
// token 7576,
ves_icall_get_method_attributes,
// token 7583,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7585,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7595,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7598,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7599,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7600,
ves_icall_reflection_get_token_raw,
// token 7610,
ves_icall_InternalInvoke_raw,
// token 7621,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7627,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7628,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7629,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7631,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7632,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7642,
ves_icall_InternalInvoke_raw,
// token 7660,
ves_icall_reflection_get_token_raw,
// token 7673,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7692,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7722,
ves_icall_reflection_get_token_raw,
// token 7723,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8079,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8215,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8452,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8453,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8460,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8461,
ves_icall_ModuleBuilder_getToken_raw,
// token 8462,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8467,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8527,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8686,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8687,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9820,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9839,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9846,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9847,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9849,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
