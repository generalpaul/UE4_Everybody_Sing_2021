// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/LineFinish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineFinish() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineFinish_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineFinish();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineUseForFinish_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALineFinish::execPassTimelineDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineDepth(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execPassTimelineUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineUp(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execSetSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execSetTopAndSizeAndSpacing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_GET_PROPERTY(FFloatProperty,Z_Param_size);
		P_GET_PROPERTY(FFloatProperty,Z_Param_spacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTopAndSizeAndSpacing(Z_Param_top,Z_Param_size,Z_Param_spacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execShowLines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execHideLines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideLines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execfnSetFinishLine)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FQuestion);
		P_GET_PROPERTY(FStrProperty,Z_Param_FAnswer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->fnSetFinishLine(Z_Param_FQuestion,Z_Param_FAnswer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execSetPositionsUsingImages)
	{
		P_GET_TARRAY(bool,Z_Param_arrIfImages);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionsUsingImages(Z_Param_arrIfImages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execfnSetGuideImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FQuestion);
		P_GET_PROPERTY(FStrProperty,Z_Param_FUrl);
		P_GET_UBOOL(Z_Param_isRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_intIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->fnSetGuideImage(Z_Param_FQuestion,Z_Param_FUrl,Z_Param_isRight,Z_Param_intIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineFinish::execfnSetGuide)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FQuestion);
		P_GET_PROPERTY(FStrProperty,Z_Param_FAnswer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FAnswerLeft);
		P_GET_UBOOL(Z_Param_isRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_intIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->fnSetGuide(Z_Param_FQuestion,Z_Param_FAnswer,Z_Param_FAnswerLeft,Z_Param_isRight,Z_Param_intIndex);
		P_NATIVE_END;
	}
	static FName NAME_ALineFinish_StartAnimateFinishResult = FName(TEXT("StartAnimateFinishResult"));
	void ALineFinish::StartAnimateFinishResult()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineFinish_StartAnimateFinishResult),NULL);
	}
	void ALineFinish::StaticRegisterNativesALineFinish()
	{
		UClass* Class = ALineFinish::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "fnSetFinishLine", &ALineFinish::execfnSetFinishLine },
			{ "fnSetGuide", &ALineFinish::execfnSetGuide },
			{ "fnSetGuideImage", &ALineFinish::execfnSetGuideImage },
			{ "HideLines", &ALineFinish::execHideLines },
			{ "PassTimelineDepth", &ALineFinish::execPassTimelineDepth },
			{ "PassTimelineUp", &ALineFinish::execPassTimelineUp },
			{ "SetPositionsUsingImages", &ALineFinish::execSetPositionsUsingImages },
			{ "SetSize", &ALineFinish::execSetSize },
			{ "SetTopAndSizeAndSpacing", &ALineFinish::execSetTopAndSizeAndSpacing },
			{ "ShowLines", &ALineFinish::execShowLines },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics
	{
		struct LineFinish_eventfnSetFinishLine_Parms
		{
			FString FQuestion;
			FString FAnswer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FQuestion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FAnswer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::NewProp_FQuestion = { "FQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetFinishLine_Parms, FQuestion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::NewProp_FAnswer = { "FAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetFinishLine_Parms, FAnswer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::NewProp_FQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::NewProp_FAnswer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "fnSetFinishLine", nullptr, nullptr, sizeof(LineFinish_eventfnSetFinishLine_Parms), Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_fnSetFinishLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_fnSetFinishLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics
	{
		struct LineFinish_eventfnSetGuide_Parms
		{
			FString FQuestion;
			FString FAnswer;
			float FAnswerLeft;
			bool isRight;
			int32 intIndex;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FQuestion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FAnswer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FAnswerLeft;
		static void NewProp_isRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FQuestion = { "FQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuide_Parms, FQuestion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FAnswer = { "FAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuide_Parms, FAnswer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FAnswerLeft = { "FAnswerLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuide_Parms, FAnswerLeft), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_isRight_SetBit(void* Obj)
	{
		((LineFinish_eventfnSetGuide_Parms*)Obj)->isRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_isRight = { "isRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LineFinish_eventfnSetGuide_Parms), &Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_isRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_intIndex = { "intIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuide_Parms, intIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_FAnswerLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_isRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::NewProp_intIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "fnSetGuide", nullptr, nullptr, sizeof(LineFinish_eventfnSetGuide_Parms), Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_fnSetGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_fnSetGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics
	{
		struct LineFinish_eventfnSetGuideImage_Parms
		{
			FString FQuestion;
			FString FUrl;
			bool isRight;
			int32 intIndex;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FQuestion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FUrl;
		static void NewProp_isRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_FQuestion = { "FQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuideImage_Parms, FQuestion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_FUrl = { "FUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuideImage_Parms, FUrl), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_isRight_SetBit(void* Obj)
	{
		((LineFinish_eventfnSetGuideImage_Parms*)Obj)->isRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_isRight = { "isRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LineFinish_eventfnSetGuideImage_Parms), &Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_isRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_intIndex = { "intIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventfnSetGuideImage_Parms, intIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_FQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_FUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_isRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::NewProp_intIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "fnSetGuideImage", nullptr, nullptr, sizeof(LineFinish_eventfnSetGuideImage_Parms), Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_fnSetGuideImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_fnSetGuideImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_HideLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_HideLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_HideLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "HideLines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_HideLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_HideLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_HideLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_HideLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics
	{
		struct LineFinish_eventPassTimelineDepth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventPassTimelineDepth_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineDepth" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "PassTimelineDepth", nullptr, nullptr, sizeof(LineFinish_eventPassTimelineDepth_Parms), Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_PassTimelineDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_PassTimelineDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics
	{
		struct LineFinish_eventPassTimelineUp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventPassTimelineUp_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineUp" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "PassTimelineUp", nullptr, nullptr, sizeof(LineFinish_eventPassTimelineUp_Parms), Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_PassTimelineUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_PassTimelineUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics
	{
		struct LineFinish_eventSetPositionsUsingImages_Parms
		{
			TArray<bool> arrIfImages;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_arrIfImages_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrIfImages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::NewProp_arrIfImages_Inner = { "arrIfImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::NewProp_arrIfImages = { "arrIfImages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventSetPositionsUsingImages_Parms, arrIfImages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::NewProp_arrIfImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::NewProp_arrIfImages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "SetPositionsUsingImages", nullptr, nullptr, sizeof(LineFinish_eventSetPositionsUsingImages_Parms), Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_SetSize_Statics
	{
		struct LineFinish_eventSetSize_Parms
		{
			float Size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_SetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventSetSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_SetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "SetSize", nullptr, nullptr, sizeof(LineFinish_eventSetSize_Parms), Z_Construct_UFunction_ALineFinish_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics
	{
		struct LineFinish_eventSetTopAndSizeAndSpacing_Parms
		{
			float top;
			float size;
			float spacing;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventSetTopAndSizeAndSpacing_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventSetTopAndSizeAndSpacing_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_spacing = { "spacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineFinish_eventSetTopAndSizeAndSpacing_Parms, spacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::NewProp_spacing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "SetTopAndSizeAndSpacing", nullptr, nullptr, sizeof(LineFinish_eventSetTopAndSizeAndSpacing_Parms), Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_ShowLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_ShowLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_ShowLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "ShowLines", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_ShowLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_ShowLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_ShowLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_ShowLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinishResult" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere)\n// class UMaterial* OrangeMaterial;\n" },
		{ "ModuleRelativePath", "LineFinish.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere)\nclass UMaterial* OrangeMaterial;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineFinish, nullptr, "StartAnimateFinishResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALineFinish_NoRegister()
	{
		return ALineFinish::StaticClass();
	}
	struct Z_Construct_UClass_ALineFinish_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_objSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSinger_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TitleSinger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenImageMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenImageMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedImageMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedImageMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineFinish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALineFinish_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALineFinish_fnSetFinishLine, "fnSetFinishLine" }, // 3989430619
		{ &Z_Construct_UFunction_ALineFinish_fnSetGuide, "fnSetGuide" }, // 1558431997
		{ &Z_Construct_UFunction_ALineFinish_fnSetGuideImage, "fnSetGuideImage" }, // 346879076
		{ &Z_Construct_UFunction_ALineFinish_HideLines, "HideLines" }, // 2249191256
		{ &Z_Construct_UFunction_ALineFinish_PassTimelineDepth, "PassTimelineDepth" }, // 2154277882
		{ &Z_Construct_UFunction_ALineFinish_PassTimelineUp, "PassTimelineUp" }, // 3603878356
		{ &Z_Construct_UFunction_ALineFinish_SetPositionsUsingImages, "SetPositionsUsingImages" }, // 2543375664
		{ &Z_Construct_UFunction_ALineFinish_SetSize, "SetSize" }, // 1199179649
		{ &Z_Construct_UFunction_ALineFinish_SetTopAndSizeAndSpacing, "SetTopAndSizeAndSpacing" }, // 691748918
		{ &Z_Construct_UFunction_ALineFinish_ShowLines, "ShowLines" }, // 1508839711
		{ &Z_Construct_UFunction_ALineFinish_StartAnimateFinishResult, "StartAnimateFinishResult" }, // 1462927880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineFinish.h" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_objSpawn_MetaData[] = {
		{ "Category", "BPMakeCallable" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "ModuleRelativePath", "LineFinish.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_objSpawn = { "objSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, objSpawn), Z_Construct_UClass_ALineUseForFinish_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_objSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_objSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_TitleSinger_MetaData[] = {
		{ "Category", "BPMakeCallable" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_TitleSinger = { "TitleSinger", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, TitleSinger), Z_Construct_UClass_ALineTitleSinger_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_TitleSinger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_TitleSinger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterialGlow_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterialGlow = { "GreenMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, GreenMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterialGlow_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterialGlow = { "RedMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, RedMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenImageMaterial_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenImageMaterial = { "GreenImageMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, GreenImageMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenImageMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenImageMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineFinish_Statics::NewProp_RedImageMaterial_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineFinish_Statics::NewProp_RedImageMaterial = { "RedImageMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineFinish, RedImageMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedImageMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::NewProp_RedImageMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_objSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_TitleSinger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_RedMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_GreenImageMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineFinish_Statics::NewProp_RedImageMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineFinish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineFinish>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineFinish_Statics::ClassParams = {
		&ALineFinish::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALineFinish_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineFinish_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineFinish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineFinish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineFinish_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineFinish, 342713593);
	template<> SINGPROJECT_API UClass* StaticClass<ALineFinish>()
	{
		return ALineFinish::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineFinish(Z_Construct_UClass_ALineFinish, &ALineFinish::StaticClass, TEXT("/Script/SingProject"), TEXT("ALineFinish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineFinish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
