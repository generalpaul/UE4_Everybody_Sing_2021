// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/WordCloud/WordCloudMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordCloudMain() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudMain_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudQuestion_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AWordCloudContainer_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
// End Cross Module References
	DEFINE_FUNCTION(AWordCloudMain::execFinishLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWordCloudMain::execControlZoomOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlZoomOut(Z_Param_Value);
		P_NATIVE_END;
	}
	void AWordCloudMain::StaticRegisterNativesAWordCloudMain()
	{
		UClass* Class = AWordCloudMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlZoomOut", &AWordCloudMain::execControlZoomOut },
			{ "FinishLine", &AWordCloudMain::execFinishLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics
	{
		struct WordCloudMain_eventControlZoomOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WordCloudMain_eventControlZoomOut_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudMain, nullptr, "ControlZoomOut", nullptr, nullptr, sizeof(WordCloudMain_eventControlZoomOut_Parms), Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudMain_ControlZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudMain_ControlZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWordCloudMain, nullptr, "FinishLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWordCloudMain_FinishLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWordCloudMain_FinishLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWordCloudMain_NoRegister()
	{
		return AWordCloudMain::StaticClass();
	}
	struct Z_Construct_UClass_AWordCloudMain_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineDownToCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineDownToCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WCQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WCQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WCQuestionOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WCQuestionOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WCContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WCContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WContainerOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WContainerOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSingerUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleSingerUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOnTimelineFloatOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_FOnTimelineFloatOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCurveOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomCurveOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomTimelineOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomTimelineOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWordCloudMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWordCloudMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWordCloudMain_ControlZoomOut, "ControlZoomOut" }, // 991167274
		{ &Z_Construct_UFunction_AWordCloudMain_FinishLine, "FinishLine" }, // 3913596420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WordCloud/WordCloudMain.h" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineDownToCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "//** Text component for the score */\n// UPROPERTY(Category = Grid , EditAnywhere)\n// TSubclassOf<class AWordCloudItem> objSpawnClass;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
		{ "ToolTip", "/ Text component for the score\n UPROPERTY(Category = Grid , EditAnywhere)\n TSubclassOf<class AWordCloudItem> objSpawnClass;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineDownToCenter = { "SplineDownToCenter", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, SplineDownToCenter), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineDownToCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineDownToCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineCenterToUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineCenterToUp = { "SplineCenterToUp", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, SplineCenterToUp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineCenterToUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineCenterToUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestion_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere)\n// class AWordCloudItem* WCItem;\x09\n" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere)\nclass AWordCloudItem* WCItem;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestion = { "WCQuestion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, WCQuestion), Z_Construct_UClass_AWordCloudQuestion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestionOut_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestionOut = { "WCQuestionOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, WCQuestionOut), Z_Construct_UClass_AWordCloudQuestion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestionOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestionOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCContainer_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCContainer = { "WCContainer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, WCContainer), Z_Construct_UClass_AWordCloudContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WContainerOut_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WContainerOut = { "WContainerOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, WContainerOut), Z_Construct_UClass_AWordCloudContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WContainerOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WContainerOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SingerName_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SingerName = { "SingerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, SingerName), Z_Construct_UClass_ALineSingerName_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SingerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_TitleSingerUse_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_TitleSingerUse = { "TitleSingerUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, TitleSingerUse), Z_Construct_UClass_ALineTitleSinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_TitleSingerUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_TitleSingerUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_FOnTimelineFloatOut_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_FOnTimelineFloatOut = { "FOnTimelineFloatOut", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, FOnTimelineFloatOut), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_FOnTimelineFloatOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_FOnTimelineFloatOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomCurveOut_MetaData[] = {
		{ "Category", "WordCloudMain" },
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomCurveOut = { "ZoomCurveOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, ZoomCurveOut), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomCurveOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomCurveOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomTimelineOut_MetaData[] = {
		{ "ModuleRelativePath", "WordCloud/WordCloudMain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomTimelineOut = { "ZoomTimelineOut", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWordCloudMain, ZoomTimelineOut), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomTimelineOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomTimelineOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWordCloudMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineDownToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SplineCenterToUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCQuestionOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WCContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_WContainerOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_SingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_TitleSingerUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_FOnTimelineFloatOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomCurveOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWordCloudMain_Statics::NewProp_ZoomTimelineOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWordCloudMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWordCloudMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWordCloudMain_Statics::ClassParams = {
		&AWordCloudMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWordCloudMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWordCloudMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWordCloudMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWordCloudMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWordCloudMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWordCloudMain, 359453911);
	template<> SINGPROJECT_API UClass* StaticClass<AWordCloudMain>()
	{
		return AWordCloudMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWordCloudMain(Z_Construct_UClass_AWordCloudMain, &AWordCloudMain::StaticClass, TEXT("/Script/SingProject"), TEXT("AWordCloudMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWordCloudMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
