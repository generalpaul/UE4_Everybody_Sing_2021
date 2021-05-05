// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/LineTitleSinger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineTitleSinger() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALineTitleSinger::execGetSplineTimeArtistOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineTimeArtistOut(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineTitleSinger::execGetSplineTimeArtistIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineTimeArtistIn(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineTitleSinger::execPassTimelineTitleArtistOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineTitleArtistOut(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineTitleSinger::execPassTimelineTitleArtistIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineTitleArtistIn(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineTitleSinger::execHideTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineTitleSinger::execSetLyricsTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fSong);
		P_GET_PROPERTY(FStrProperty,Z_Param_fSinger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLyricsTitle(Z_Param_fSong,Z_Param_fSinger);
		P_NATIVE_END;
	}
	static FName NAME_ALineTitleSinger_StartTitleArtistAnimate = FName(TEXT("StartTitleArtistAnimate"));
	void ALineTitleSinger::StartTitleArtistAnimate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineTitleSinger_StartTitleArtistAnimate),NULL);
	}
	static FName NAME_ALineTitleSinger_StartTitleArtistAnimateOut = FName(TEXT("StartTitleArtistAnimateOut"));
	void ALineTitleSinger::StartTitleArtistAnimateOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineTitleSinger_StartTitleArtistAnimateOut),NULL);
	}
	void ALineTitleSinger::StaticRegisterNativesALineTitleSinger()
	{
		UClass* Class = ALineTitleSinger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineTimeArtistIn", &ALineTitleSinger::execGetSplineTimeArtistIn },
			{ "GetSplineTimeArtistOut", &ALineTitleSinger::execGetSplineTimeArtistOut },
			{ "HideTitle", &ALineTitleSinger::execHideTitle },
			{ "PassTimelineTitleArtistIn", &ALineTitleSinger::execPassTimelineTitleArtistIn },
			{ "PassTimelineTitleArtistOut", &ALineTitleSinger::execPassTimelineTitleArtistOut },
			{ "SetLyricsTitle", &ALineTitleSinger::execSetLyricsTitle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics
	{
		struct LineTitleSinger_eventGetSplineTimeArtistIn_Parms
		{
			float time;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventGetSplineTimeArtistIn_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventGetSplineTimeArtistIn_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSplineTimeArtistIn" },
		{ "Comment", "// UPROPERTY()\n// class ASingProjectBlockGrid* OwningGrid;\n" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
		{ "ToolTip", "UPROPERTY()\nclass ASingProjectBlockGrid* OwningGrid;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "GetSplineTimeArtistIn", nullptr, nullptr, sizeof(LineTitleSinger_eventGetSplineTimeArtistIn_Parms), Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics
	{
		struct LineTitleSinger_eventGetSplineTimeArtistOut_Parms
		{
			float time;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventGetSplineTimeArtistOut_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventGetSplineTimeArtistOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSplineTimeArtistOut" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "GetSplineTimeArtistOut", nullptr, nullptr, sizeof(LineTitleSinger_eventGetSplineTimeArtistOut_Parms), Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "HideTitle" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "HideTitle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_HideTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_HideTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics
	{
		struct LineTitleSinger_eventPassTimelineTitleArtistIn_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventPassTimelineTitleArtistIn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineTitleArtistIn" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "PassTimelineTitleArtistIn", nullptr, nullptr, sizeof(LineTitleSinger_eventPassTimelineTitleArtistIn_Parms), Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics
	{
		struct LineTitleSinger_eventPassTimelineTitleArtistOut_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventPassTimelineTitleArtistOut_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineTitleArtistOut" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "PassTimelineTitleArtistOut", nullptr, nullptr, sizeof(LineTitleSinger_eventPassTimelineTitleArtistOut_Parms), Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics
	{
		struct LineTitleSinger_eventSetLyricsTitle_Parms
		{
			FString fSong;
			FString fSinger;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fSong;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fSinger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::NewProp_fSong = { "fSong", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventSetLyricsTitle_Parms, fSong), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::NewProp_fSinger = { "fSinger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineTitleSinger_eventSetLyricsTitle_Parms, fSinger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::NewProp_fSong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::NewProp_fSinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetLyricsTitle" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "SetLyricsTitle", nullptr, nullptr, sizeof(LineTitleSinger_eventSetLyricsTitle_Parms), Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartTitleArtistAnimate" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "StartTitleArtistAnimate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartTitleArtistAnimateOut" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineTitleSinger, nullptr, "StartTitleArtistAnimateOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister()
	{
		return ALineTitleSinger::StaticClass();
	}
	struct Z_Construct_UClass_ALineTitleSinger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTitleIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineTitleIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTitleOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineTitleOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineMiddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineMiddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineSinger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineSinger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineTitleSinger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALineTitleSinger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistIn, "GetSplineTimeArtistIn" }, // 418167323
		{ &Z_Construct_UFunction_ALineTitleSinger_GetSplineTimeArtistOut, "GetSplineTimeArtistOut" }, // 4188351638
		{ &Z_Construct_UFunction_ALineTitleSinger_HideTitle, "HideTitle" }, // 972551318
		{ &Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistIn, "PassTimelineTitleArtistIn" }, // 2319608129
		{ &Z_Construct_UFunction_ALineTitleSinger_PassTimelineTitleArtistOut, "PassTimelineTitleArtistOut" }, // 1756505384
		{ &Z_Construct_UFunction_ALineTitleSinger_SetLyricsTitle, "SetLyricsTitle" }, // 1923876616
		{ &Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimate, "StartTitleArtistAnimate" }, // 1523095655
		{ &Z_Construct_UFunction_ALineTitleSinger_StartTitleArtistAnimateOut, "StartTitleArtistAnimateOut" }, // 379226379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineTitleSinger.h" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRootPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRootPosition = { "DummyRootPosition", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, DummyRootPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRootPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRootPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleIn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleIn = { "SplineTitleIn", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, SplineTitleIn), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleOut = { "SplineTitleOut", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, SplineTitleOut), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineTitle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineTitleSinger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineTitle = { "LineTitle", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, LineTitle), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineMiddle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineTitleSinger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineMiddle = { "LineMiddle", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, LineMiddle), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineMiddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineSinger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineTitleSinger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineTitleSinger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineSinger = { "LineSinger", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineTitleSinger, LineSinger), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineSinger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineSinger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineTitleSinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_DummyRootPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_SplineTitleOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTitleSinger_Statics::NewProp_LineSinger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineTitleSinger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineTitleSinger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineTitleSinger_Statics::ClassParams = {
		&ALineTitleSinger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALineTitleSinger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineTitleSinger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTitleSinger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineTitleSinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineTitleSinger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineTitleSinger, 3789710264);
	template<> SINGPROJECT_API UClass* StaticClass<ALineTitleSinger>()
	{
		return ALineTitleSinger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineTitleSinger(Z_Construct_UClass_ALineTitleSinger, &ALineTitleSinger::StaticClass, TEXT("/Script/SingProject"), TEXT("ALineTitleSinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineTitleSinger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
