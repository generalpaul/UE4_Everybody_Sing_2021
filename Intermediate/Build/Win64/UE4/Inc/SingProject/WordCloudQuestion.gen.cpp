// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/WordCloud/WordCloudQuestion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordCloudQuestion() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudQuestion_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudQuestion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudMain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWordCloudQuestion::execSetMaterialColorText)
	{
		P_GET_UBOOL(Z_Param_isEverbodySing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialColorText(Z_Param_isEverbodySing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execStartAnimateOutLineFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateOutLineFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execStartAnimateLineFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateLineFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execSetToGlowMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToGlowMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execSetToBaseMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToBaseMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execPassTimelineCenterToTop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineCenterToTop(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudQuestion::execPassTimelineDownToCenter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineDownToCenter(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_AWordCloudQuestion_StartAnimateLine = FName(TEXT("StartAnimateLine"));
	void AWordCloudQuestion::StartAnimateLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudQuestion_StartAnimateLine),NULL);
	}
	static FName NAME_AWordCloudQuestion_StartAnimateOutLine = FName(TEXT("StartAnimateOutLine"));
	void AWordCloudQuestion::StartAnimateOutLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudQuestion_StartAnimateOutLine),NULL);
	}
	static FName NAME_AWordCloudQuestion_StartAnimateWCPosition = FName(TEXT("StartAnimateWCPosition"));
	void AWordCloudQuestion::StartAnimateWCPosition()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudQuestion_StartAnimateWCPosition),NULL);
	}
	static FName NAME_AWordCloudQuestion_StartAnimateWCPositionOut = FName(TEXT("StartAnimateWCPositionOut"));
	void AWordCloudQuestion::StartAnimateWCPositionOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudQuestion_StartAnimateWCPositionOut),NULL);
	}
	void AWordCloudQuestion::StaticRegisterNativesAWordCloudQuestion()
	{
		UClass* Class = AWordCloudQuestion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassTimelineCenterToTop", &AWordCloudQuestion::execPassTimelineCenterToTop },
			{ "PassTimelineDownToCenter", &AWordCloudQuestion::execPassTimelineDownToCenter },
			{ "ResetAll", &AWordCloudQuestion::execResetAll },
			{ "SetMaterialColorText", &AWordCloudQuestion::execSetMaterialColorText },
			{ "SetToBaseMaterial", &AWordCloudQuestion::execSetToBaseMaterial },
			{ "SetToGlowMaterial", &AWordCloudQuestion::execSetToGlowMaterial },
			{ "StartAnimateLineFinish", &AWordCloudQuestion::execStartAnimateLineFinish },
			{ "StartAnimateOutLineFinish", &AWordCloudQuestion::execStartAnimateOutLineFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics
	{
		struct WordCloudQuestion_eventPassTimelineCenterToTop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudQuestion_eventPassTimelineCenterToTop_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "PassTimelineCenterToTop", nullptr, nullptr, sizeof(WordCloudQuestion_eventPassTimelineCenterToTop_Parms), Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics
	{
		struct WordCloudQuestion_eventPassTimelineDownToCenter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudQuestion_eventPassTimelineDownToCenter_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "PassTimelineDownToCenter", nullptr, nullptr, sizeof(WordCloudQuestion_eventPassTimelineDownToCenter_Parms), Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics
	{
		struct WordCloudQuestion_eventSetMaterialColorText_Parms
		{
			bool isEverbodySing;
		};
		static void NewProp_isEverbodySing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEverbodySing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing_SetBit(void* Obj)
	{
		((WordCloudQuestion_eventSetMaterialColorText_Parms*)Obj)->isEverbodySing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing = { "isEverbodySing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WordCloudQuestion_eventSetMaterialColorText_Parms), &Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "SetMaterialColorText", nullptr, nullptr, sizeof(WordCloudQuestion_eventSetMaterialColorText_Parms), Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "SetToBaseMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "SetToGlowMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)\n// void SetValueLineOut();\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)\nvoid SetValueLineOut();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateLineFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateOutLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateOutLineFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateWCPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudQuestion, nullptr, "StartAnimateWCPositionOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWordCloudQuestion_NoRegister()
	{
		return AWordCloudQuestion::StaticClass();
	}
	struct Z_Construct_UClass_AWordCloudQuestion_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BevelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtrudeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialES_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelMaterialES_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BevelMaterialES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeMaterialES_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtrudeMaterialES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlowMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWordCloudQuestion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWordCloudQuestion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWordCloudQuestion_PassTimelineCenterToTop, "PassTimelineCenterToTop" }, // 3348245671
		{ &Z_Construct_UFunction_AWordCloudQuestion_PassTimelineDownToCenter, "PassTimelineDownToCenter" }, // 2725112357
		{ &Z_Construct_UFunction_AWordCloudQuestion_ResetAll, "ResetAll" }, // 2521516366
		{ &Z_Construct_UFunction_AWordCloudQuestion_SetMaterialColorText, "SetMaterialColorText" }, // 2593784618
		{ &Z_Construct_UFunction_AWordCloudQuestion_SetToBaseMaterial, "SetToBaseMaterial" }, // 860055983
		{ &Z_Construct_UFunction_AWordCloudQuestion_SetToGlowMaterial, "SetToGlowMaterial" }, // 1582308620
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLine, "StartAnimateLine" }, // 4249045902
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateLineFinish, "StartAnimateLineFinish" }, // 3565481874
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLine, "StartAnimateOutLine" }, // 2820608486
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateOutLineFinish, "StartAnimateOutLineFinish" }, // 2144603100
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPosition, "StartAnimateWCPosition" }, // 2819636696
		{ &Z_Construct_UFunction_AWordCloudQuestion_StartAnimateWCPositionOut, "StartAnimateWCPositionOut" }, // 76048202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WordCloud/WordCloudQuestion.h" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WordCloudQuestion" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine1 = { "TextLine1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, TextLine1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WordCloudQuestion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine2 = { "TextLine2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, TextLine2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, OwningGrid), Z_Construct_UClass_AWordCloudMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterial_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterial = { "BevelMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, BevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterial_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterial = { "ExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, ExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterialES_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterialES = { "BaseMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, BaseMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterialES_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterialES = { "BevelMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, BevelMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterialES = { "ExtrudeMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, ExtrudeMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_GlowMaterial_MetaData[] = {
		{ "Category", "WordCloudQuestion" },
		{ "ModuleRelativePath", "WordCloud/WordCloudQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudQuestion, GlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_GlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_GlowMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWordCloudQuestion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_TextLine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BaseMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_BevelMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_ExtrudeMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudQuestion_Statics::NewProp_GlowMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWordCloudQuestion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWordCloudQuestion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWordCloudQuestion_Statics::ClassParams = {
		&AWordCloudQuestion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWordCloudQuestion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWordCloudQuestion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudQuestion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWordCloudQuestion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWordCloudQuestion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWordCloudQuestion, 2088698649);
	template<> SINGPROJECT_API UClass* StaticClass<AWordCloudQuestion>()
	{
		return AWordCloudQuestion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWordCloudQuestion(Z_Construct_UClass_AWordCloudQuestion, &AWordCloudQuestion::StaticClass, TEXT("/Script/SingProject"), TEXT("AWordCloudQuestion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWordCloudQuestion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
