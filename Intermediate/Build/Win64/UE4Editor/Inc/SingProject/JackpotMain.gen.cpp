// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/Jackpot/JackpotMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJackpotMain() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotMain_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotItem_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJackpotMain::execPassValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassValue(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJackpotMain::execIntroFinishMain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_intIndexPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntroFinishMain(Z_Param_intIndexPass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJackpotMain::execVaRestResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VaRestValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VaRestResponse(Z_Param_VaRestValue);
		P_NATIVE_END;
	}
	static FName NAME_AJackpotMain_StartWrongMain = FName(TEXT("StartWrongMain"));
	void AJackpotMain::StartWrongMain()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotMain_StartWrongMain),NULL);
	}
	void AJackpotMain::StaticRegisterNativesAJackpotMain()
	{
		UClass* Class = AJackpotMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntroFinishMain", &AJackpotMain::execIntroFinishMain },
			{ "PassValue", &AJackpotMain::execPassValue },
			{ "VaRestResponse", &AJackpotMain::execVaRestResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics
	{
		struct JackpotMain_eventIntroFinishMain_Parms
		{
			int32 intIndexPass;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intIndexPass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::NewProp_intIndexPass = { "intIndexPass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JackpotMain_eventIntroFinishMain_Parms, intIndexPass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::NewProp_intIndexPass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere)\n// class AJackpotTimer* timerObj;\n" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere)\nclass AJackpotTimer* timerObj;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotMain, nullptr, "IntroFinishMain", nullptr, nullptr, sizeof(JackpotMain_eventIntroFinishMain_Parms), Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotMain_IntroFinishMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotMain_IntroFinishMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotMain_PassValue_Statics
	{
		struct JackpotMain_eventPassValue_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AJackpotMain_PassValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JackpotMain_eventPassValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJackpotMain_PassValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJackpotMain_PassValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotMain_PassValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, BlueprintReadOnly)\n// class ASingProjectHttp* httpCaller;\n" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, BlueprintReadOnly)\nclass ASingProjectHttp* httpCaller;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotMain_PassValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotMain, nullptr, "PassValue", nullptr, nullptr, sizeof(JackpotMain_eventPassValue_Parms), Z_Construct_UFunction_AJackpotMain_PassValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_PassValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotMain_PassValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_PassValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotMain_PassValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotMain_PassValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// bool hasConnection=true;\n// FHttpRequestPtr Request; //TSharedRef<IHttpRequest>\n// FTimerHandle tmr;\n// FString strHttpContent;\n" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
		{ "ToolTip", "bool hasConnection=true;\nFHttpRequestPtr Request; TSharedRef<IHttpRequest>\nFTimerHandle tmr;\nFString strHttpContent;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotMain, nullptr, "StartWrongMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotMain_StartWrongMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotMain_StartWrongMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics
	{
		struct JackpotMain_eventVaRestResponse_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::NewProp_VaRestValue = { "VaRestValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JackpotMain_eventVaRestResponse_Parms, VaRestValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::NewProp_VaRestValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRestResponse" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotMain, nullptr, "VaRestResponse", nullptr, nullptr, sizeof(JackpotMain_eventVaRestResponse_Parms), Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotMain_VaRestResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotMain_VaRestResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJackpotMain_NoRegister()
	{
		return AJackpotMain::StaticClass();
	}
	struct Z_Construct_UClass_AJackpotMain_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j8_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j9_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_j10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_j10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJackpotMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJackpotMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJackpotMain_IntroFinishMain, "IntroFinishMain" }, // 2955672029
		{ &Z_Construct_UFunction_AJackpotMain_PassValue, "PassValue" }, // 1879101064
		{ &Z_Construct_UFunction_AJackpotMain_StartWrongMain, "StartWrongMain" }, // 2668580612
		{ &Z_Construct_UFunction_AJackpotMain_VaRestResponse, "VaRestResponse" }, // 3200456412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jackpot/JackpotMain.h" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j1_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j1 = { "j1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j1), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j2_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j2 = { "j2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j2), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j3_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j3 = { "j3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j3), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j4_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j4 = { "j4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j4), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j5_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j5 = { "j5", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j5), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j6_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j6 = { "j6", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j6), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j7_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j7 = { "j7", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j7), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j8_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j8 = { "j8", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j8), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j9_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j9 = { "j9", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j9), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_j10_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_j10 = { "j10", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, j10), Z_Construct_UClass_AJackpotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_j10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_TextAnswerX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_TextAnswerX = { "TextAnswerX", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, TextAnswerX), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_TextAnswerX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_TextAnswerX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotMain_Statics::NewProp_JackpotTitle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotMain_Statics::NewProp_JackpotTitle = { "JackpotTitle", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotMain, JackpotTitle), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::NewProp_JackpotTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::NewProp_JackpotTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJackpotMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_j10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_TextAnswerX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotMain_Statics::NewProp_JackpotTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJackpotMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJackpotMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJackpotMain_Statics::ClassParams = {
		&AJackpotMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJackpotMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJackpotMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJackpotMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJackpotMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJackpotMain, 2444007484);
	template<> SINGPROJECT_API UClass* StaticClass<AJackpotMain>()
	{
		return AJackpotMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJackpotMain(Z_Construct_UClass_AJackpotMain, &AJackpotMain::StaticClass, TEXT("/Script/SingProject"), TEXT("AJackpotMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJackpotMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
