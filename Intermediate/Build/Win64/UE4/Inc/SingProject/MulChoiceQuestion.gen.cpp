// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/MC/MulChoiceQuestion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulChoiceQuestion() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceQuestion_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceQuestion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceMain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMulChoiceQuestion::execSetMaterialColorText)
	{
		P_GET_UBOOL(Z_Param_isEverbodySing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialColorText(Z_Param_isEverbodySing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execStartAnimateOutLineFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateOutLineFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execStartAnimateLineFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateLineFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execSetToGlowMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToGlowMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execSetToBaseMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToBaseMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execPassTimelineMCToTop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineMCToTop(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execPassTimelineCenterToMC)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineCenterToMC(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execPassTimelineCenterToTop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineCenterToTop(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceQuestion::execPassTimelineDownToCenter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineDownToCenter(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_AMulChoiceQuestion_StartAnimateLine = FName(TEXT("StartAnimateLine"));
	void AMulChoiceQuestion::StartAnimateLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceQuestion_StartAnimateLine),NULL);
	}
	static FName NAME_AMulChoiceQuestion_StartAnimateMCPosition = FName(TEXT("StartAnimateMCPosition"));
	void AMulChoiceQuestion::StartAnimateMCPosition()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceQuestion_StartAnimateMCPosition),NULL);
	}
	static FName NAME_AMulChoiceQuestion_StartAnimateMCPositionOut = FName(TEXT("StartAnimateMCPositionOut"));
	void AMulChoiceQuestion::StartAnimateMCPositionOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceQuestion_StartAnimateMCPositionOut),NULL);
	}
	static FName NAME_AMulChoiceQuestion_StartAnimateOutLine = FName(TEXT("StartAnimateOutLine"));
	void AMulChoiceQuestion::StartAnimateOutLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceQuestion_StartAnimateOutLine),NULL);
	}
	void AMulChoiceQuestion::StaticRegisterNativesAMulChoiceQuestion()
	{
		UClass* Class = AMulChoiceQuestion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassTimelineCenterToMC", &AMulChoiceQuestion::execPassTimelineCenterToMC },
			{ "PassTimelineCenterToTop", &AMulChoiceQuestion::execPassTimelineCenterToTop },
			{ "PassTimelineDownToCenter", &AMulChoiceQuestion::execPassTimelineDownToCenter },
			{ "PassTimelineMCToTop", &AMulChoiceQuestion::execPassTimelineMCToTop },
			{ "SetMaterialColorText", &AMulChoiceQuestion::execSetMaterialColorText },
			{ "SetToBaseMaterial", &AMulChoiceQuestion::execSetToBaseMaterial },
			{ "SetToGlowMaterial", &AMulChoiceQuestion::execSetToGlowMaterial },
			{ "StartAnimateLineFinish", &AMulChoiceQuestion::execStartAnimateLineFinish },
			{ "StartAnimateOutLineFinish", &AMulChoiceQuestion::execStartAnimateOutLineFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics
	{
		struct MulChoiceQuestion_eventPassTimelineCenterToMC_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceQuestion_eventPassTimelineCenterToMC_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "PassTimelineCenterToMC", nullptr, nullptr, sizeof(MulChoiceQuestion_eventPassTimelineCenterToMC_Parms), Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics
	{
		struct MulChoiceQuestion_eventPassTimelineCenterToTop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceQuestion_eventPassTimelineCenterToTop_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "PassTimelineCenterToTop", nullptr, nullptr, sizeof(MulChoiceQuestion_eventPassTimelineCenterToTop_Parms), Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics
	{
		struct MulChoiceQuestion_eventPassTimelineDownToCenter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceQuestion_eventPassTimelineDownToCenter_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "PassTimelineDownToCenter", nullptr, nullptr, sizeof(MulChoiceQuestion_eventPassTimelineDownToCenter_Parms), Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics
	{
		struct MulChoiceQuestion_eventPassTimelineMCToTop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceQuestion_eventPassTimelineMCToTop_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "PassTimelineMCToTop", nullptr, nullptr, sizeof(MulChoiceQuestion_eventPassTimelineMCToTop_Parms), Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics
	{
		struct MulChoiceQuestion_eventSetMaterialColorText_Parms
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
	void Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing_SetBit(void* Obj)
	{
		((MulChoiceQuestion_eventSetMaterialColorText_Parms*)Obj)->isEverbodySing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing = { "isEverbodySing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MulChoiceQuestion_eventSetMaterialColorText_Parms), &Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::NewProp_isEverbodySing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "SetMaterialColorText", nullptr, nullptr, sizeof(MulChoiceQuestion_eventSetMaterialColorText_Parms), Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "SetToBaseMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "SetToGlowMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)\n// void SetValueLineOut();\n" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)\nvoid SetValueLineOut();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateLineFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateMCPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateMCPositionOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateOutLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceQuestion, nullptr, "StartAnimateOutLineFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMulChoiceQuestion_NoRegister()
	{
		return AMulChoiceQuestion::StaticClass();
	}
	struct Z_Construct_UClass_AMulChoiceQuestion_Statics
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
	UObject* (*const Z_Construct_UClass_AMulChoiceQuestion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMulChoiceQuestion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToMC, "PassTimelineCenterToMC" }, // 2661706675
		{ &Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineCenterToTop, "PassTimelineCenterToTop" }, // 2114761090
		{ &Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineDownToCenter, "PassTimelineDownToCenter" }, // 24176235
		{ &Z_Construct_UFunction_AMulChoiceQuestion_PassTimelineMCToTop, "PassTimelineMCToTop" }, // 3183669274
		{ &Z_Construct_UFunction_AMulChoiceQuestion_SetMaterialColorText, "SetMaterialColorText" }, // 2144423115
		{ &Z_Construct_UFunction_AMulChoiceQuestion_SetToBaseMaterial, "SetToBaseMaterial" }, // 4078711258
		{ &Z_Construct_UFunction_AMulChoiceQuestion_SetToGlowMaterial, "SetToGlowMaterial" }, // 2361828209
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLine, "StartAnimateLine" }, // 1940479802
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateLineFinish, "StartAnimateLineFinish" }, // 2377976156
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPosition, "StartAnimateMCPosition" }, // 2234514098
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateMCPositionOut, "StartAnimateMCPositionOut" }, // 3983304271
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLine, "StartAnimateOutLine" }, // 3458328986
		{ &Z_Construct_UFunction_AMulChoiceQuestion_StartAnimateOutLineFinish, "StartAnimateOutLineFinish" }, // 1226328951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MC/MulChoiceQuestion.h" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceQuestion" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine1 = { "TextLine1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, TextLine1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceQuestion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine2 = { "TextLine2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, TextLine2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "Comment", "// UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))\n// class UText3DComponent* TextLine2Out;\n" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
		{ "ToolTip", "UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))\nclass UText3DComponent* TextLine2Out;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, OwningGrid), Z_Construct_UClass_AMulChoiceMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterial_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterial = { "BevelMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, BevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterial_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterial = { "ExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, ExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterialES_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterialES = { "BaseMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, BaseMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterialES_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterialES = { "BevelMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, BevelMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterialES = { "ExtrudeMaterialES", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, ExtrudeMaterialES), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterialES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_GlowMaterial_MetaData[] = {
		{ "Category", "MulChoiceQuestion" },
		{ "ModuleRelativePath", "MC/MulChoiceQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceQuestion, GlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_GlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_GlowMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulChoiceQuestion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_TextLine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BaseMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_BevelMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_ExtrudeMaterialES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceQuestion_Statics::NewProp_GlowMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMulChoiceQuestion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulChoiceQuestion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMulChoiceQuestion_Statics::ClassParams = {
		&AMulChoiceQuestion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMulChoiceQuestion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMulChoiceQuestion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceQuestion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMulChoiceQuestion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMulChoiceQuestion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMulChoiceQuestion, 4038330346);
	template<> SINGPROJECT_API UClass* StaticClass<AMulChoiceQuestion>()
	{
		return AMulChoiceQuestion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMulChoiceQuestion(Z_Construct_UClass_AMulChoiceQuestion, &AMulChoiceQuestion::StaticClass, TEXT("/Script/SingProject"), TEXT("AMulChoiceQuestion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMulChoiceQuestion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
