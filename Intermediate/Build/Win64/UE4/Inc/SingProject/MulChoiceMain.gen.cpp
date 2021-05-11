// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/MC/MulChoiceMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulChoiceMain() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceMain_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceItem_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMulChoiceQuestion_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMulChoiceMain::execFinishLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceMain::execFinishLineOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishLineOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulChoiceMain::execVaRestResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VaRestValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VaRestResponse(Z_Param_VaRestValue);
		P_NATIVE_END;
	}
	void AMulChoiceMain::StaticRegisterNativesAMulChoiceMain()
	{
		UClass* Class = AMulChoiceMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishLine", &AMulChoiceMain::execFinishLine },
			{ "FinishLineOut", &AMulChoiceMain::execFinishLineOut },
			{ "VaRestResponse", &AMulChoiceMain::execVaRestResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceMain, nullptr, "FinishLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceMain_FinishLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceMain_FinishLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceMain, nullptr, "FinishLineOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceMain_FinishLineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceMain_FinishLineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics
	{
		struct MulChoiceMain_eventVaRestResponse_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::NewProp_VaRestValue = { "VaRestValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MulChoiceMain_eventVaRestResponse_Parms, VaRestValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::NewProp_VaRestValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRestResponse" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulChoiceMain, nullptr, "VaRestResponse", nullptr, nullptr, sizeof(MulChoiceMain_eventVaRestResponse_Parms), Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMulChoiceMain_VaRestResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMulChoiceMain_VaRestResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMulChoiceMain_NoRegister()
	{
		return AMulChoiceMain::StaticClass();
	}
	struct Z_Construct_UClass_AMulChoiceMain_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChoiceItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChoiceQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceQuestionOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChoiceQuestionOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineDownToCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineDownToCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineDownToCenterSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineDownToCenterSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToUpSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToUpSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToMCPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToMCPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMCPositionToUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMCPositionToUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSingerUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleSingerUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMulChoiceMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMulChoiceMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulChoiceMain_FinishLine, "FinishLine" }, // 4100996032
		{ &Z_Construct_UFunction_AMulChoiceMain_FinishLineOut, "FinishLineOut" }, // 248467828
		{ &Z_Construct_UFunction_AMulChoiceMain_VaRestResponse, "VaRestResponse" }, // 3359833381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MC/MulChoiceMain.h" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceItem_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceItem = { "ChoiceItem", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, ChoiceItem), Z_Construct_UClass_AMulChoiceItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestion_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestion = { "ChoiceQuestion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, ChoiceQuestion), Z_Construct_UClass_AMulChoiceQuestion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestionOut_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestionOut = { "ChoiceQuestionOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, ChoiceQuestionOut), Z_Construct_UClass_AMulChoiceQuestion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestionOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestionOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SingerName_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SingerName = { "SingerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SingerName), Z_Construct_UClass_ALineSingerName_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SingerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenter = { "SplineDownToCenter", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineDownToCenter), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUp = { "SplineCenterToUp", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineCenterToUp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenterSelection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenterSelection = { "SplineDownToCenterSelection", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineDownToCenterSelection), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenterSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenterSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUpSelection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUpSelection = { "SplineCenterToUpSelection", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineCenterToUpSelection), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUpSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUpSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToMCPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToMCPosition = { "SplineCenterToMCPosition", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineCenterToMCPosition), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToMCPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToMCPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineMCPositionToUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineMCPositionToUp = { "SplineMCPositionToUp", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, SplineMCPositionToUp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineMCPositionToUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineMCPositionToUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_TitleSingerUse_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MC/MulChoiceMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_TitleSingerUse = { "TitleSingerUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMulChoiceMain, TitleSingerUse), Z_Construct_UClass_ALineTitleSinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_TitleSingerUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_TitleSingerUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulChoiceMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_ChoiceQuestionOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineDownToCenterSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToUpSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineCenterToMCPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_SplineMCPositionToUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulChoiceMain_Statics::NewProp_TitleSingerUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMulChoiceMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulChoiceMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMulChoiceMain_Statics::ClassParams = {
		&AMulChoiceMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMulChoiceMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMulChoiceMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMulChoiceMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMulChoiceMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMulChoiceMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMulChoiceMain, 2602094824);
	template<> SINGPROJECT_API UClass* StaticClass<AMulChoiceMain>()
	{
		return AMulChoiceMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMulChoiceMain(Z_Construct_UClass_AMulChoiceMain, &AMulChoiceMain::StaticClass, TEXT("/Script/SingProject"), TEXT("AMulChoiceMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMulChoiceMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
