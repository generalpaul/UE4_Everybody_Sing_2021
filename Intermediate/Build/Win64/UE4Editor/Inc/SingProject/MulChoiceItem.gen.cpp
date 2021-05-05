// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/MC/MulChoiceItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulChoiceItem() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceItem_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceMain_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMulChoiceItem::execSetAnswerAndProcess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_answer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnswerAndProcess(Z_Param_answer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execHighlight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Highlight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execRemoveHighlight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHighlight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execSelectedItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strLetter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedItem(Z_Param_strLetter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execPassTimelineAnimateBoxQuestion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineAnimateBoxQuestion(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execPassTimelineCenterToTop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineCenterToTop(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceItem::execPassTimelineDownToCenter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineDownToCenter(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_AMulChoiceItem_AnimateBoxQuestion = FName(TEXT("AnimateBoxQuestion"));
	void AMulChoiceItem::AnimateBoxQuestion()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceItem_AnimateBoxQuestion),NULL);
	}
	static FName NAME_AMulChoiceItem_StartAnimateOutSelection = FName(TEXT("StartAnimateOutSelection"));
	void AMulChoiceItem::StartAnimateOutSelection()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceItem_StartAnimateOutSelection),NULL);
	}
	static FName NAME_AMulChoiceItem_StartAnimateSelection = FName(TEXT("StartAnimateSelection"));
	void AMulChoiceItem::StartAnimateSelection()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMulChoiceItem_StartAnimateSelection),NULL);
	}
	void AMulChoiceItem::StaticRegisterNativesAMulChoiceItem()
	{
		UClass* Class = AMulChoiceItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Highlight", &AMulChoiceItem::execHighlight },
			{ "PassTimelineAnimateBoxQuestion", &AMulChoiceItem::execPassTimelineAnimateBoxQuestion },
			{ "PassTimelineCenterToTop", &AMulChoiceItem::execPassTimelineCenterToTop },
			{ "PassTimelineDownToCenter", &AMulChoiceItem::execPassTimelineDownToCenter },
			{ "RemoveHighlight", &AMulChoiceItem::execRemoveHighlight },
			{ "ResetAll", &AMulChoiceItem::execResetAll },
			{ "SelectedItem", &AMulChoiceItem::execSelectedItem },
			{ "SetAnswerAndProcess", &AMulChoiceItem::execSetAnswerAndProcess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "AnimateBoxQuestion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "Highlight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_Highlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_Highlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics
	{
		struct MulChoiceItem_eventPassTimelineAnimateBoxQuestion_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceItem_eventPassTimelineAnimateBoxQuestion_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "PassTimelineAnimateBoxQuestion", nullptr, nullptr, sizeof(MulChoiceItem_eventPassTimelineAnimateBoxQuestion_Parms), Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics
	{
		struct MulChoiceItem_eventPassTimelineCenterToTop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceItem_eventPassTimelineCenterToTop_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "PassTimelineCenterToTop", nullptr, nullptr, sizeof(MulChoiceItem_eventPassTimelineCenterToTop_Parms), Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics
	{
		struct MulChoiceItem_eventPassTimelineDownToCenter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceItem_eventPassTimelineDownToCenter_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "PassTimelineDownToCenter", nullptr, nullptr, sizeof(MulChoiceItem_eventPassTimelineDownToCenter_Parms), Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "RemoveHighlight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics
	{
		struct MulChoiceItem_eventSelectedItem_Parms
		{
			FString strLetter;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strLetter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::NewProp_strLetter = { "strLetter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceItem_eventSelectedItem_Parms, strLetter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::NewProp_strLetter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "SelectedItem", nullptr, nullptr, sizeof(MulChoiceItem_eventSelectedItem_Parms), Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_SelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_SelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics
	{
		struct MulChoiceItem_eventSetAnswerAndProcess_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::NewProp_answer = { "answer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceItem_eventSetAnswerAndProcess_Parms, answer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::NewProp_answer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "SetAnswerAndProcess", nullptr, nullptr, sizeof(MulChoiceItem_eventSetAnswerAndProcess_Parms), Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "StartAnimateOutSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceItem, nullptr, "StartAnimateSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMulChoiceItem_NoRegister()
	{
		return AMulChoiceItem::StaticClass();
	}
	struct Z_Construct_UClass_AMulChoiceItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurpleGlowMaterialPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurpleGlowMaterialPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YellowGlowMaterialPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowGlowMaterialPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenGlowMaterialPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenGlowMaterialPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedGlowMaterialPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedGlowMaterialPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueGlowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueGlowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenGlowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenGlowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedGlowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedGlowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurpleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurpleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBevelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseBevelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseExtrudeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseExtrudeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrectAnswerBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorrectAnswerBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextUnderline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextUnderline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFirstToSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineFirstToSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineSecondToFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineSecondToFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneShade1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneShade1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneShade2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneShade2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice1Bracket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice1Bracket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice2Bracket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice2Bracket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice1Letter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice1Letter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice2Letter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice2Letter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice1Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice1Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLineChoice2Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLineChoice2Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMulChoiceItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMulChoiceItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulChoiceItem_AnimateBoxQuestion, "AnimateBoxQuestion" }, // 594451690
		{ &Z_Construct_UFunction_AMulChoiceItem_Highlight, "Highlight" }, // 111299059
		{ &Z_Construct_UFunction_AMulChoiceItem_PassTimelineAnimateBoxQuestion, "PassTimelineAnimateBoxQuestion" }, // 994913686
		{ &Z_Construct_UFunction_AMulChoiceItem_PassTimelineCenterToTop, "PassTimelineCenterToTop" }, // 4077342923
		{ &Z_Construct_UFunction_AMulChoiceItem_PassTimelineDownToCenter, "PassTimelineDownToCenter" }, // 1826495939
		{ &Z_Construct_UFunction_AMulChoiceItem_RemoveHighlight, "RemoveHighlight" }, // 3762171009
		{ &Z_Construct_UFunction_AMulChoiceItem_ResetAll, "ResetAll" }, // 948522053
		{ &Z_Construct_UFunction_AMulChoiceItem_SelectedItem, "SelectedItem" }, // 4128317330
		{ &Z_Construct_UFunction_AMulChoiceItem_SetAnswerAndProcess, "SetAnswerAndProcess" }, // 3902347669
		{ &Z_Construct_UFunction_AMulChoiceItem_StartAnimateOutSelection, "StartAnimateOutSelection" }, // 3660989338
		{ &Z_Construct_UFunction_AMulChoiceItem_StartAnimateSelection, "StartAnimateSelection" }, // 1928094985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MC/MulChoiceItem.h" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootA_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootA = { "DummyRootA", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, DummyRootA), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootB_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootB = { "DummyRootB", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, DummyRootB), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleGlowMaterialPlane_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleGlowMaterialPlane = { "PurpleGlowMaterialPlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, PurpleGlowMaterialPlane), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleGlowMaterialPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleGlowMaterialPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_YellowGlowMaterialPlane_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_YellowGlowMaterialPlane = { "YellowGlowMaterialPlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, YellowGlowMaterialPlane), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_YellowGlowMaterialPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_YellowGlowMaterialPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterialPlane_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterialPlane = { "GreenGlowMaterialPlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, GreenGlowMaterialPlane), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterialPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterialPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterialPlane_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterialPlane = { "RedGlowMaterialPlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, RedGlowMaterialPlane), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterialPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterialPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueGlowMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueGlowMaterial = { "BlueGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BlueGlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueGlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueGlowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterial = { "GreenGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, GreenGlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterial = { "RedGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, RedGlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BlueMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleMaterial = { "PurpleMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, PurpleMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterialGlow_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterialGlow = { "BaseMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BaseMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseBevelMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseBevelMaterial = { "BaseBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BaseBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseBevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseBevelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseExtrudeMaterial_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseExtrudeMaterial = { "BaseExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BaseExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_CorrectAnswerBack_MetaData[] = {
		{ "Category", "MulChoiceItem" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_CorrectAnswerBack = { "CorrectAnswerBack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, CorrectAnswerBack), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_CorrectAnswerBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_CorrectAnswerBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextUnderline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextUnderline = { "TextUnderline", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextUnderline), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextUnderline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextUnderline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineFirstToSecond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineFirstToSecond = { "SplineFirstToSecond", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, SplineFirstToSecond), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineFirstToSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineFirstToSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineSecondToFirst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineSecondToFirst = { "SplineSecondToFirst", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, SplineSecondToFirst), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineSecondToFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineSecondToFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlockQuestion_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlockQuestion = { "BlockQuestion", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, BlockQuestion), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlockQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlockQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade1 = { "PlaneShade1", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, PlaneShade1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade2 = { "PlaneShade2", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, PlaneShade2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1 = { "TextLineChoice1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2 = { "TextLineChoice2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Bracket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Bracket = { "TextLineChoice1Bracket", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice1Bracket), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Bracket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Bracket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Bracket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Bracket = { "TextLineChoice2Bracket", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice2Bracket), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Bracket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Bracket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Letter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Letter = { "TextLineChoice1Letter", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice1Letter), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Letter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Letter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Letter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Letter = { "TextLineChoice2Letter", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice2Letter), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Letter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Letter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Out_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Out = { "TextLineChoice1Out", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice1Out), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Out_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MulChoiceItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Out = { "TextLineChoice2Out", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, TextLineChoice2Out), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "MC/MulChoiceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceItem, OwningGrid), Z_Construct_UClass_AMulChoiceMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulChoiceItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_DummyRootB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleGlowMaterialPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_YellowGlowMaterialPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterialPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterialPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueGlowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenGlowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedGlowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PurpleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BaseExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_CorrectAnswerBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextUnderline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineFirstToSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_SplineSecondToFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_BlockQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_PlaneShade2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Bracket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Bracket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Letter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Letter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice1Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_TextLineChoice2Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceItem_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMulChoiceItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulChoiceItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMulChoiceItem_Statics::ClassParams = {
		&AMulChoiceItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMulChoiceItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMulChoiceItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMulChoiceItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMulChoiceItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMulChoiceItem, 1108364047);
	template<> SINGPROJECT_API UClass* StaticClass<AMulChoiceItem>()
	{
		return AMulChoiceItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMulChoiceItem(Z_Construct_UClass_AMulChoiceItem, &AMulChoiceItem::StaticClass, TEXT("/Script/SingProject"), TEXT("AMulChoiceItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMulChoiceItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
