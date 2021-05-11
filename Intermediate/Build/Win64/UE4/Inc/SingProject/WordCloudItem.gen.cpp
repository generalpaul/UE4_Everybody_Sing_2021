// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/WordCloud/WordCloudItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordCloudItem() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudItem_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudContainer_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWordCloudItem::execSetupAttachmentWordProp)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ParentRoot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachmentWordProp(Z_Param_ParentRoot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execPassTimelineStartWordItemCorrectPlace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineStartWordItemCorrectPlace(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execPassTimelineStartWordItemShow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineStartWordItemShow(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execSetUnderlinePosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_GET_PROPERTY(FFloatProperty,Z_Param_left);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnderlinePosition(Z_Param_top,Z_Param_left);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execSetParamsTo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_GET_PROPERTY(FFloatProperty,Z_Param_left);
		P_GET_PROPERTY(FFloatProperty,Z_Param_width);
		P_GET_PROPERTY(FFloatProperty,Z_Param_height);
		P_GET_PROPERTY(FStrProperty,Z_Param_strWord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParamsTo(Z_Param_top,Z_Param_left,Z_Param_width,Z_Param_height,Z_Param_strWord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudItem::execSetParamsFrom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_GET_PROPERTY(FFloatProperty,Z_Param_left);
		P_GET_PROPERTY(FFloatProperty,Z_Param_width);
		P_GET_PROPERTY(FFloatProperty,Z_Param_height);
		P_GET_PROPERTY(FStrProperty,Z_Param_strWord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParamsFrom(Z_Param_top,Z_Param_left,Z_Param_width,Z_Param_height,Z_Param_strWord);
		P_NATIVE_END;
	}
	static FName NAME_AWordCloudItem_StartAnimateLine = FName(TEXT("StartAnimateLine"));
	void AWordCloudItem::StartAnimateLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudItem_StartAnimateLine),NULL);
	}
	static FName NAME_AWordCloudItem_StartAnimateOutSelection = FName(TEXT("StartAnimateOutSelection"));
	void AWordCloudItem::StartAnimateOutSelection()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudItem_StartAnimateOutSelection),NULL);
	}
	static FName NAME_AWordCloudItem_StartWordItemCorrectPlace = FName(TEXT("StartWordItemCorrectPlace"));
	void AWordCloudItem::StartWordItemCorrectPlace()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudItem_StartWordItemCorrectPlace),NULL);
	}
	static FName NAME_AWordCloudItem_StartWordItemShow = FName(TEXT("StartWordItemShow"));
	void AWordCloudItem::StartWordItemShow()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWordCloudItem_StartWordItemShow),NULL);
	}
	void AWordCloudItem::StaticRegisterNativesAWordCloudItem()
	{
		UClass* Class = AWordCloudItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassTimelineStartWordItemCorrectPlace", &AWordCloudItem::execPassTimelineStartWordItemCorrectPlace },
			{ "PassTimelineStartWordItemShow", &AWordCloudItem::execPassTimelineStartWordItemShow },
			{ "ResetAll", &AWordCloudItem::execResetAll },
			{ "SetParamsFrom", &AWordCloudItem::execSetParamsFrom },
			{ "SetParamsTo", &AWordCloudItem::execSetParamsTo },
			{ "SetUnderlinePosition", &AWordCloudItem::execSetUnderlinePosition },
			{ "SetupAttachmentWordProp", &AWordCloudItem::execSetupAttachmentWordProp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics
	{
		struct WordCloudItem_eventPassTimelineStartWordItemCorrectPlace_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventPassTimelineStartWordItemCorrectPlace_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//timeline passed parameters animated position\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "timeline passed parameters animated position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "PassTimelineStartWordItemCorrectPlace", nullptr, nullptr, sizeof(WordCloudItem_eventPassTimelineStartWordItemCorrectPlace_Parms), Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics
	{
		struct WordCloudItem_eventPassTimelineStartWordItemShow_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventPassTimelineStartWordItemShow_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//timeline passed parameters\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "timeline passed parameters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "PassTimelineStartWordItemShow", nullptr, nullptr, sizeof(WordCloudItem_eventPassTimelineStartWordItemShow_Parms), Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics
	{
		struct WordCloudItem_eventSetParamsFrom_Parms
		{
			float top;
			float left;
			float width;
			float height;
			FString strWord;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_left;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strWord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsFrom_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsFrom_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsFrom_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsFrom_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_strWord = { "strWord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsFrom_Parms, strWord), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::NewProp_strWord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//original position\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "original position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "SetParamsFrom", nullptr, nullptr, sizeof(WordCloudItem_eventSetParamsFrom_Parms), Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_SetParamsFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_SetParamsFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics
	{
		struct WordCloudItem_eventSetParamsTo_Parms
		{
			float top;
			float left;
			float width;
			float height;
			FString strWord;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_left;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strWord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsTo_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsTo_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsTo_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsTo_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_strWord = { "strWord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetParamsTo_Parms, strWord), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::NewProp_strWord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//animated position\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "animated position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "SetParamsTo", nullptr, nullptr, sizeof(WordCloudItem_eventSetParamsTo_Parms), Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_SetParamsTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_SetParamsTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics
	{
		struct WordCloudItem_eventSetUnderlinePosition_Parms
		{
			float top;
			float left;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetUnderlinePosition_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetUnderlinePosition_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::NewProp_top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::NewProp_left,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//underline position\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "underline position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "SetUnderlinePosition", nullptr, nullptr, sizeof(WordCloudItem_eventSetUnderlinePosition_Parms), Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics
	{
		struct WordCloudItem_eventSetupAttachmentWordProp_Parms
		{
			USceneComponent* ParentRoot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::NewProp_ParentRoot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::NewProp_ParentRoot = { "ParentRoot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudItem_eventSetupAttachmentWordProp_Parms, ParentRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::NewProp_ParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::NewProp_ParentRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::NewProp_ParentRoot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//set parent root\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "set parent root" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "SetupAttachmentWordProp", nullptr, nullptr, sizeof(WordCloudItem_eventSetupAttachmentWordProp_Parms), Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//start show item line\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "start show item line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "StartAnimateLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_StartAnimateLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_StartAnimateLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "StartAnimateOutSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//start show item animate\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "start show item animate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "StartWordItemCorrectPlace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "//start show item\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "start show item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudItem, nullptr, "StartWordItemShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudItem_StartWordItemShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudItem_StartWordItemShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWordCloudItem_NoRegister()
	{
		return AWordCloudItem::StaticClass();
	}
	struct Z_Construct_UClass_AWordCloudItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vectorToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vectorToMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WWord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WWord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WUnderline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WUnderline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWordCloudItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWordCloudItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemCorrectPlace, "PassTimelineStartWordItemCorrectPlace" }, // 3720351779
		{ &Z_Construct_UFunction_AWordCloudItem_PassTimelineStartWordItemShow, "PassTimelineStartWordItemShow" }, // 428377530
		{ &Z_Construct_UFunction_AWordCloudItem_ResetAll, "ResetAll" }, // 2544837349
		{ &Z_Construct_UFunction_AWordCloudItem_SetParamsFrom, "SetParamsFrom" }, // 3054402636
		{ &Z_Construct_UFunction_AWordCloudItem_SetParamsTo, "SetParamsTo" }, // 2154028288
		{ &Z_Construct_UFunction_AWordCloudItem_SetUnderlinePosition, "SetUnderlinePosition" }, // 3578511863
		{ &Z_Construct_UFunction_AWordCloudItem_SetupAttachmentWordProp, "SetupAttachmentWordProp" }, // 3991788643
		{ &Z_Construct_UFunction_AWordCloudItem_StartAnimateLine, "StartAnimateLine" }, // 981313008
		{ &Z_Construct_UFunction_AWordCloudItem_StartAnimateOutSelection, "StartAnimateOutSelection" }, // 2133251025
		{ &Z_Construct_UFunction_AWordCloudItem_StartWordItemCorrectPlace, "StartWordItemCorrectPlace" }, // 4189200520
		{ &Z_Construct_UFunction_AWordCloudItem_StartWordItemShow, "StartWordItemShow" }, // 3874778621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WordCloud/WordCloudItem.h" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::NewProp_vectorToMove_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWordCloudItem_Statics::NewProp_vectorToMove = { "vectorToMove", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudItem, vectorToMove), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_vectorToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_vectorToMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudItem_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudItem, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudItem_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudItem, OwningGrid), Z_Construct_UClass_AWordCloudContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WWord_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WordCloudItem" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WWord = { "WWord", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudItem, WWord), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WWord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WWord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WUnderline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WordCloudItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WUnderline = { "WUnderline", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudItem, WUnderline), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WUnderline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WUnderline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWordCloudItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudItem_Statics::NewProp_vectorToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudItem_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudItem_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WWord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudItem_Statics::NewProp_WUnderline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWordCloudItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWordCloudItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWordCloudItem_Statics::ClassParams = {
		&AWordCloudItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWordCloudItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWordCloudItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWordCloudItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWordCloudItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWordCloudItem, 466780283);
	template<> SINGPROJECT_API UClass* StaticClass<AWordCloudItem>()
	{
		return AWordCloudItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWordCloudItem(Z_Construct_UClass_AWordCloudItem, &AWordCloudItem::StaticClass, TEXT("/Script/SingProject"), TEXT("AWordCloudItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWordCloudItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
