// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/BoxGridActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxGridActor() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxGridActor_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxGridActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageActor_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageQuestion_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxGridActor::execStartAnimateFinishMainLine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinishMainLine(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execStartAnimateFinishMain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinishMain(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLineBoxLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLineBoxLocation(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLineLocationOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLineLocationOut(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLocationOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocationOut(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLocationBottomToUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocationBottomToUp(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLocationTopToLowCenter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocationTopToLowCenter(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineLocationTopToLow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocationTopToLow(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execGetSplineBoxLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineBoxLocation(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxGridActor::execVaRestResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VaRestValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VaRestResponse(Z_Param_VaRestValue);
		P_NATIVE_END;
	}
	void ABoxGridActor::StaticRegisterNativesABoxGridActor()
	{
		UClass* Class = ABoxGridActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineBoxLocation", &ABoxGridActor::execGetSplineBoxLocation },
			{ "GetSplineLineBoxLocation", &ABoxGridActor::execGetSplineLineBoxLocation },
			{ "GetSplineLineLocationOut", &ABoxGridActor::execGetSplineLineLocationOut },
			{ "GetSplineLocationBottomToUp", &ABoxGridActor::execGetSplineLocationBottomToUp },
			{ "GetSplineLocationOut", &ABoxGridActor::execGetSplineLocationOut },
			{ "GetSplineLocationTopToLow", &ABoxGridActor::execGetSplineLocationTopToLow },
			{ "GetSplineLocationTopToLowCenter", &ABoxGridActor::execGetSplineLocationTopToLowCenter },
			{ "StartAnimateFinishMain", &ABoxGridActor::execStartAnimateFinishMain },
			{ "StartAnimateFinishMainLine", &ABoxGridActor::execStartAnimateFinishMainLine },
			{ "VaRestResponse", &ABoxGridActor::execVaRestResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics
	{
		struct BoxGridActor_eventGetSplineBoxLocation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineBoxLocation_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineBoxLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineBoxLocation", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineBoxLocation_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics
	{
		struct BoxGridActor_eventGetSplineLineBoxLocation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLineBoxLocation_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLineBoxLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLineBoxLocation", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLineBoxLocation_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics
	{
		struct BoxGridActor_eventGetSplineLineLocationOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLineLocationOut_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLineLocationOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLineLocationOut", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLineLocationOut_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics
	{
		struct BoxGridActor_eventGetSplineLocationBottomToUp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationBottomToUp_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationBottomToUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLocationBottomToUp", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLocationBottomToUp_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics
	{
		struct BoxGridActor_eventGetSplineLocationOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationOut_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLocationOut", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLocationOut_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics
	{
		struct BoxGridActor_eventGetSplineLocationTopToLow_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationTopToLow_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationTopToLow_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLocationTopToLow", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLocationTopToLow_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics
	{
		struct BoxGridActor_eventGetSplineLocationTopToLowCenter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationTopToLowCenter_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventGetSplineLocationTopToLowCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "GetSplineLocationTopToLowCenter", nullptr, nullptr, sizeof(BoxGridActor_eventGetSplineLocationTopToLowCenter_Parms), Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics
	{
		struct BoxGridActor_eventStartAnimateFinishMain_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventStartAnimateFinishMain_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinishMain" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "StartAnimateFinishMain", nullptr, nullptr, sizeof(BoxGridActor_eventStartAnimateFinishMain_Parms), Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics
	{
		struct BoxGridActor_eventStartAnimateFinishMainLine_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventStartAnimateFinishMainLine_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinishMainLine" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "StartAnimateFinishMainLine", nullptr, nullptr, sizeof(BoxGridActor_eventStartAnimateFinishMainLine_Parms), Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics
	{
		struct BoxGridActor_eventVaRestResponse_Parms
		{
			FString VaRestValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VaRestValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::NewProp_VaRestValue = { "VaRestValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxGridActor_eventVaRestResponse_Parms, VaRestValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::NewProp_VaRestValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRestResponse" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxGridActor, nullptr, "VaRestResponse", nullptr, nullptr, sizeof(BoxGridActor_eventVaRestResponse_Parms), Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxGridActor_VaRestResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxGridActor_VaRestResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxGridActor_NoRegister()
	{
		return ABoxGridActor::StaticClass();
	}
	struct Z_Construct_UClass_ABoxGridActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTopToLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineTopToLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTopToLowCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineTopToLowCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineBottomToUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineBottomToUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineRightToCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineRightToCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineLineRightToCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineLineRightToCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineLineCenterToOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineLineCenterToOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tmr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSingerUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleSingerUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxGridActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineBoxLocation, "GetSplineBoxLocation" }, // 1539515605
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLineBoxLocation, "GetSplineLineBoxLocation" }, // 1456666311
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLineLocationOut, "GetSplineLineLocationOut" }, // 3347225082
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLocationBottomToUp, "GetSplineLocationBottomToUp" }, // 3323257636
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLocationOut, "GetSplineLocationOut" }, // 185639609
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLow, "GetSplineLocationTopToLow" }, // 2830307601
		{ &Z_Construct_UFunction_ABoxGridActor_GetSplineLocationTopToLowCenter, "GetSplineLocationTopToLowCenter" }, // 1266291881
		{ &Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMain, "StartAnimateFinishMain" }, // 1590459674
		{ &Z_Construct_UFunction_ABoxGridActor_StartAnimateFinishMainLine, "StartAnimateFinishMainLine" }, // 2679811696
		{ &Z_Construct_UFunction_ABoxGridActor_VaRestResponse, "VaRestResponse" }, // 120574934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoxGridActor.h" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLow = { "SplineTopToLow", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineTopToLow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLowCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLowCenter = { "SplineTopToLowCenter", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineTopToLowCenter), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLowCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLowCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineBottomToUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineBottomToUp = { "SplineBottomToUp", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineBottomToUp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineBottomToUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineBottomToUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineRightToCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineRightToCenter = { "SplineRightToCenter", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineRightToCenter), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineRightToCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineRightToCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineCenterToOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineCenterToOut = { "SplineCenterToOut", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineCenterToOut), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineCenterToOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineCenterToOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineRightToCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineRightToCenter = { "SplineLineRightToCenter", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineLineRightToCenter), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineRightToCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineRightToCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineCenterToOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineCenterToOut = { "SplineLineCenterToOut", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SplineLineCenterToOut), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineCenterToOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineCenterToOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxImage_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxImage = { "BoxImage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, BoxImage), Z_Construct_UClass_ABoxImageActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxQuestion_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxQuestion = { "BoxQuestion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, BoxQuestion), Z_Construct_UClass_ABoxImageQuestion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_tmr_MetaData[] = {
		{ "Comment", "//TSharedRef<IHttpRequest>\n" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
		{ "ToolTip", "TSharedRef<IHttpRequest>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_tmr = { "tmr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, tmr), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_tmr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_tmr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SingerName_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SingerName = { "SingerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, SingerName), Z_Construct_UClass_ALineSingerName_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SingerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxGridActor_Statics::NewProp_TitleSingerUse_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere)\n// class ALineFinish* LineFinishParent;\n" },
		{ "ModuleRelativePath", "BoxGridActor.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere)\nclass ALineFinish* LineFinishParent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxGridActor_Statics::NewProp_TitleSingerUse = { "TitleSingerUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxGridActor, TitleSingerUse), Z_Construct_UClass_ALineTitleSinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_TitleSingerUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::NewProp_TitleSingerUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxGridActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineTopToLowCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineBottomToUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineRightToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineCenterToOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineRightToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SplineLineCenterToOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_BoxQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_tmr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_SingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxGridActor_Statics::NewProp_TitleSingerUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxGridActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxGridActor_Statics::ClassParams = {
		&ABoxGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxGridActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxGridActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxGridActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxGridActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxGridActor, 2652157993);
	template<> SINGPROJECT_API UClass* StaticClass<ABoxGridActor>()
	{
		return ABoxGridActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxGridActor(Z_Construct_UClass_ABoxGridActor, &ABoxGridActor::StaticClass, TEXT("/Script/SingProject"), TEXT("ABoxGridActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxGridActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
