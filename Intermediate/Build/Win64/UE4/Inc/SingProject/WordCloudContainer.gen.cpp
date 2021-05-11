// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/WordCloud/WordCloudContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordCloudContainer() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudContainer_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWordCloudContainer::execShowWordsEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowWordsEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execControlZoomShow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlZoomShow(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execControlZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlZoom(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execShowAnswerUnderline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_answer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAnswerUnderline(Z_Param_answer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execShowAnswer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_answer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAnswer(Z_Param_answer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudContainer::execsetValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_values);
		P_GET_PROPERTY(FStrProperty,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setValues(Z_Param_values,Z_Param_type);
		P_NATIVE_END;
	}
	void AWordCloudContainer::StaticRegisterNativesAWordCloudContainer()
	{
		UClass* Class = AWordCloudContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlZoom", &AWordCloudContainer::execControlZoom },
			{ "ControlZoomShow", &AWordCloudContainer::execControlZoomShow },
			{ "ResetAll", &AWordCloudContainer::execResetAll },
			{ "setValues", &AWordCloudContainer::execsetValues },
			{ "ShowAnswer", &AWordCloudContainer::execShowAnswer },
			{ "ShowAnswerUnderline", &AWordCloudContainer::execShowAnswerUnderline },
			{ "ShowWordsEnd", &AWordCloudContainer::execShowWordsEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics
	{
		struct WordCloudContainer_eventControlZoom_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventControlZoom_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ControlZoom", nullptr, nullptr, sizeof(WordCloudContainer_eventControlZoom_Parms), Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ControlZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ControlZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics
	{
		struct WordCloudContainer_eventControlZoomShow_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventControlZoomShow_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ControlZoomShow", nullptr, nullptr, sizeof(WordCloudContainer_eventControlZoomShow_Parms), Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_setValues_Statics
	{
		struct WordCloudContainer_eventsetValues_Parms
		{
			FString values;
			FString type;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventsetValues_Parms, values), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventsetValues_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "setValues", nullptr, nullptr, sizeof(WordCloudContainer_eventsetValues_Parms), Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_setValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_setValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics
	{
		struct WordCloudContainer_eventShowAnswer_Parms
		{
			FString answer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_answer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::NewProp_answer = { "answer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventShowAnswer_Parms, answer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::NewProp_answer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ShowAnswer", nullptr, nullptr, sizeof(WordCloudContainer_eventShowAnswer_Parms), Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ShowAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ShowAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics
	{
		struct WordCloudContainer_eventShowAnswerUnderline_Parms
		{
			FString answer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_answer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::NewProp_answer = { "answer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudContainer_eventShowAnswerUnderline_Parms, answer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::NewProp_answer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ShowAnswerUnderline", nullptr, nullptr, sizeof(WordCloudContainer_eventShowAnswerUnderline_Parms), Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudContainer, nullptr, "ShowWordsEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWordCloudContainer_NoRegister()
	{
		return AWordCloudContainer::StaticClass();
	}
	struct Z_Construct_UClass_AWordCloudContainer_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrWordCloudItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrWordCloudItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrWordCloudItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i8_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_i8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TimelineCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ShowTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCurveShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomCurveShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomTimelineShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomTimelineShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BevelDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtrudeDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelGreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BevelGreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontGreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontGreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeGreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtrudeGreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelRedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BevelRedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontRedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontRedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeRedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtrudeRedMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWordCloudContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWordCloudContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWordCloudContainer_ControlZoom, "ControlZoom" }, // 595611414
		{ &Z_Construct_UFunction_AWordCloudContainer_ControlZoomShow, "ControlZoomShow" }, // 599928882
		{ &Z_Construct_UFunction_AWordCloudContainer_ResetAll, "ResetAll" }, // 3575721988
		{ &Z_Construct_UFunction_AWordCloudContainer_setValues, "setValues" }, // 1488501732
		{ &Z_Construct_UFunction_AWordCloudContainer_ShowAnswer, "ShowAnswer" }, // 574617294
		{ &Z_Construct_UFunction_AWordCloudContainer_ShowAnswerUnderline, "ShowAnswerUnderline" }, // 1800292765
		{ &Z_Construct_UFunction_AWordCloudContainer_ShowWordsEnd, "ShowWordsEnd" }, // 4229484744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WordCloud/WordCloudContainer.h" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_DummyRoot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems_Inner = { "arrWordCloudItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems = { "arrWordCloudItems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, arrWordCloudItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i1_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i1 = { "i1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i1), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i2_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i2 = { "i2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i2), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i3_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i3 = { "i3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i3), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i4_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i4 = { "i4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i4), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i5_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i5 = { "i5", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i5), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i6_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i6 = { "i6", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i6), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i7_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i7 = { "i7", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i7), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i8_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i8 = { "i8", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, i8), Z_Construct_UClass_AWordCloudItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurve_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurve = { "ZoomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ZoomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimeline_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimeline = { "ZoomTimeline", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ZoomTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_TimelineCallback_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_TimelineCallback = { "TimelineCallback", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, TimelineCallback), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_TimelineCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_TimelineCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ShowTimeline_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ShowTimeline = { "ShowTimeline", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ShowTimeline), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ShowTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ShowTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurveShow_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurveShow = { "ZoomCurveShow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ZoomCurveShow), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurveShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurveShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimelineShow_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimelineShow = { "ZoomTimelineShow", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ZoomTimelineShow), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimelineShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimelineShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelDefaultMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelDefaultMaterial = { "BevelDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, BevelDefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelDefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontDefaultMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontDefaultMaterial = { "FrontDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, FrontDefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontDefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeDefaultMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeDefaultMaterial = { "ExtrudeDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ExtrudeDefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeDefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelGreenMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelGreenMaterial = { "BevelGreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, BevelGreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelGreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelGreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontGreenMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontGreenMaterial = { "FrontGreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, FrontGreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontGreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontGreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeGreenMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeGreenMaterial = { "ExtrudeGreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ExtrudeGreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeGreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeGreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelRedMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelRedMaterial = { "BevelRedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, BevelRedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelRedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelRedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontRedMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontRedMaterial = { "FrontRedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, FrontRedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontRedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontRedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeRedMaterial_MetaData[] = {
		{ "Category", "WordCloudContainer" },
		{ "ModuleRelativePath", "WordCloud/WordCloudContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeRedMaterial = { "ExtrudeRedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudContainer, ExtrudeRedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeRedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeRedMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWordCloudContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_arrWordCloudItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_i8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_TimelineCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ShowTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomCurveShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ZoomTimelineShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelGreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontGreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeGreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_BevelRedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_FrontRedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudContainer_Statics::NewProp_ExtrudeRedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWordCloudContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWordCloudContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWordCloudContainer_Statics::ClassParams = {
		&AWordCloudContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWordCloudContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWordCloudContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWordCloudContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWordCloudContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWordCloudContainer, 716478450);
	template<> SINGPROJECT_API UClass* StaticClass<AWordCloudContainer>()
	{
		return AWordCloudContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWordCloudContainer(Z_Construct_UClass_AWordCloudContainer, &AWordCloudContainer::StaticClass, TEXT("/Script/SingProject"), TEXT("AWordCloudContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWordCloudContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
