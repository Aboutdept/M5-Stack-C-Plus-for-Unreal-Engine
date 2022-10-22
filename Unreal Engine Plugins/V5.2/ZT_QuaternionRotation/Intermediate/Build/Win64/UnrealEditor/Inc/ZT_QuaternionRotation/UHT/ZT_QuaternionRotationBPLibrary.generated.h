// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZT_QuaternionRotationBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef ZT_QUATERNIONROTATION_ZT_QuaternionRotationBPLibrary_generated_h
#error "ZT_QuaternionRotationBPLibrary.generated.h already included, missing '#pragma once' in ZT_QuaternionRotationBPLibrary.h"
#endif
#define ZT_QUATERNIONROTATION_ZT_QuaternionRotationBPLibrary_generated_h

#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_SPARSE_DATA
#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion); \
	DECLARE_FUNCTION(execZT_QuaternionRotationSampleFunction);


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion); \
	DECLARE_FUNCTION(execZT_QuaternionRotationSampleFunction);


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_ACCESSORS
#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZT_QuaternionRotationBPLibrary(); \
	friend struct Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UZT_QuaternionRotationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZT_QuaternionRotation"), NO_API) \
	DECLARE_SERIALIZER(UZT_QuaternionRotationBPLibrary)


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUZT_QuaternionRotationBPLibrary(); \
	friend struct Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UZT_QuaternionRotationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZT_QuaternionRotation"), NO_API) \
	DECLARE_SERIALIZER(UZT_QuaternionRotationBPLibrary)


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZT_QuaternionRotationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZT_QuaternionRotationBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZT_QuaternionRotationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZT_QuaternionRotationBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZT_QuaternionRotationBPLibrary(UZT_QuaternionRotationBPLibrary&&); \
	NO_API UZT_QuaternionRotationBPLibrary(const UZT_QuaternionRotationBPLibrary&); \
public: \
	NO_API virtual ~UZT_QuaternionRotationBPLibrary();


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZT_QuaternionRotationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZT_QuaternionRotationBPLibrary(UZT_QuaternionRotationBPLibrary&&); \
	NO_API UZT_QuaternionRotationBPLibrary(const UZT_QuaternionRotationBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZT_QuaternionRotationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZT_QuaternionRotationBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZT_QuaternionRotationBPLibrary) \
	NO_API virtual ~UZT_QuaternionRotationBPLibrary();


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_25_PROLOG
#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_SPARSE_DATA \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_RPC_WRAPPERS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_ACCESSORS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_INCLASS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_SPARSE_DATA \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_ACCESSORS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ZT_QuaternionRotationBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZT_QUATERNIONROTATION_API UClass* StaticClass<class UZT_QuaternionRotationBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
