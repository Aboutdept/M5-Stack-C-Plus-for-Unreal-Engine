// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZT_QuaternionRotation/Public/ZT_QuaternionRotationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZT_QuaternionRotationBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZT_QuaternionRotation();
	ZT_QUATERNIONROTATION_API UClass* Z_Construct_UClass_UZT_QuaternionRotationBPLibrary();
	ZT_QUATERNIONROTATION_API UClass* Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execAddActorLocalRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::AddActorLocalRotationQuat(Z_Param_Actor,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execSetActorRelativeRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::SetActorRelativeRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execSetActorWorldRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::SetActorWorldRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execAddLocalRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::AddLocalRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execSetRelativeRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::SetRelativeRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execSetWorldRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZT_QuaternionRotationBPLibrary::SetWorldRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execEuler_To_Quaternion)
	{
		P_GET_STRUCT(FRotator,Z_Param_Current_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UZT_QuaternionRotationBPLibrary::Euler_To_Quaternion(Z_Param_Current_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZT_QuaternionRotationBPLibrary::execZT_QuaternionRotationSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UZT_QuaternionRotationBPLibrary::ZT_QuaternionRotationSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UZT_QuaternionRotationBPLibrary::StaticRegisterNativesUZT_QuaternionRotationBPLibrary()
	{
		UClass* Class = UZT_QuaternionRotationBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorLocalRotationQuat", &UZT_QuaternionRotationBPLibrary::execAddActorLocalRotationQuat },
			{ "AddLocalRotationQuat", &UZT_QuaternionRotationBPLibrary::execAddLocalRotationQuat },
			{ "Euler_To_Quaternion", &UZT_QuaternionRotationBPLibrary::execEuler_To_Quaternion },
			{ "SetActorRelativeRotationQuat", &UZT_QuaternionRotationBPLibrary::execSetActorRelativeRotationQuat },
			{ "SetActorWorldRotationQuat", &UZT_QuaternionRotationBPLibrary::execSetActorWorldRotationQuat },
			{ "SetRelativeRotationQuat", &UZT_QuaternionRotationBPLibrary::execSetRelativeRotationQuat },
			{ "SetWorldRotationQuat", &UZT_QuaternionRotationBPLibrary::execSetWorldRotationQuat },
			{ "ZT_QuaternionRotationSampleFunction", &UZT_QuaternionRotationBPLibrary::execZT_QuaternionRotationSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventAddActorLocalRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Delta_Rotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventAddActorLocalRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventAddActorLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of Actor\n" },
		{ "DisplayName", "Add Actor Local Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "AddActorLocalRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventAddActorLocalRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventAddLocalRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Delta_Rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventAddLocalRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventAddLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of scene component\n" },
		{ "DisplayName", "Add Local Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of scene component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "AddLocalRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventAddLocalRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventEuler_To_Quaternion_Parms
		{
			FRotator Current_Rotation;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::NewProp_Current_Rotation = { "Current_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventEuler_To_Quaternion_Parms, Current_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventEuler_To_Quaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::NewProp_Current_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Convert Euler Rotations To Quaternions\n" },
		{ "DisplayName", "Euler To Quaternion" },
		{ "Keywords", "rotation, quaterion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Convert Euler Rotations To Quaternions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "Euler_To_Quaternion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::ZT_QuaternionRotationBPLibrary_eventEuler_To_Quaternion_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventSetActorRelativeRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetActorRelativeRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetActorRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to set relative rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor Relative Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to set relative rotation of Actor to input quaternion rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "SetActorRelativeRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventSetActorRelativeRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventSetActorWorldRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetActorWorldRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetActorWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to set world rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor World Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to set world rotation of Actor to input quaternion rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "SetActorWorldRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventSetActorWorldRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventSetRelativeRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetRelativeRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to set relative rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set Relative Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to set relative rotation of scene component to input quaternion rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "SetRelativeRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventSetRelativeRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventSetWorldRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetWorldRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventSetWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "Comment", "// Function to set world rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set World Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "Function to set world rotation of scene component to input quaternion rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "SetWorldRotationQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::ZT_QuaternionRotationBPLibrary_eventSetWorldRotationQuat_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics
	{
		struct ZT_QuaternionRotationBPLibrary_eventZT_QuaternionRotationSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventZT_QuaternionRotationSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZT_QuaternionRotationBPLibrary_eventZT_QuaternionRotationSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZT_QuaternionRotation" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "ZT_QuaternionRotation sample test testing" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, nullptr, "ZT_QuaternionRotationSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::ZT_QuaternionRotationBPLibrary_eventZT_QuaternionRotationSampleFunction_Parms), Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZT_QuaternionRotationBPLibrary);
	UClass* Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_NoRegister()
	{
		return UZT_QuaternionRotationBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ZT_QuaternionRotation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddActorLocalRotationQuat, "AddActorLocalRotationQuat" }, // 777361902
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_AddLocalRotationQuat, "AddLocalRotationQuat" }, // 3439352131
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_Euler_To_Quaternion, "Euler_To_Quaternion" }, // 1547191077
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorRelativeRotationQuat, "SetActorRelativeRotationQuat" }, // 3151810613
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetActorWorldRotationQuat, "SetActorWorldRotationQuat" }, // 3286152744
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetRelativeRotationQuat, "SetRelativeRotationQuat" }, // 1684748334
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_SetWorldRotationQuat, "SetWorldRotationQuat" }, // 2439605427
		{ &Z_Construct_UFunction_UZT_QuaternionRotationBPLibrary_ZT_QuaternionRotationSampleFunction, "ZT_QuaternionRotationSampleFunction" }, // 3295298854
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ZT_QuaternionRotationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ZT_QuaternionRotationBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZT_QuaternionRotationBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::ClassParams = {
		&UZT_QuaternionRotationBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZT_QuaternionRotationBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UZT_QuaternionRotationBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZT_QuaternionRotationBPLibrary.OuterSingleton, Z_Construct_UClass_UZT_QuaternionRotationBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZT_QuaternionRotationBPLibrary.OuterSingleton;
	}
	template<> ZT_QUATERNIONROTATION_API UClass* StaticClass<UZT_QuaternionRotationBPLibrary>()
	{
		return UZT_QuaternionRotationBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZT_QuaternionRotationBPLibrary);
	UZT_QuaternionRotationBPLibrary::~UZT_QuaternionRotationBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZT_QuaternionRotationBPLibrary, UZT_QuaternionRotationBPLibrary::StaticClass, TEXT("UZT_QuaternionRotationBPLibrary"), &Z_Registration_Info_UClass_UZT_QuaternionRotationBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZT_QuaternionRotationBPLibrary), 1222737866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_2362709412(TEXT("/Script/ZT_QuaternionRotation"),
		Z_CompiledInDeferFile_FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Z_TRACKER_V4_Plugins_PluginPackaged_HostProject_Plugins_ZT_QuaternionRotation_Source_ZT_QuaternionRotation_Public_ZT_QuaternionRotationBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
