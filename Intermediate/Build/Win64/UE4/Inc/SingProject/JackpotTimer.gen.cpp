// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/Jackpot/JackpotTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJackpotTimer() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotTimer_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotTimer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJackpotTimer::execPassValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassValue(Z_Param_value);
		P_NATIVE_END;
	}
	void AJackpotTimer::StaticRegisterNativesAJackpotTimer()
	{
		UClass* Class = AJackpotTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassValue", &AJackpotTimer::execPassValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJackpotTimer_PassValue_Statics
	{
		struct JackpotTimer_eventPassValue_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JackpotTimer_eventPassValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotTimer, nullptr, "PassValue", nullptr, nullptr, sizeof(JackpotTimer_eventPassValue_Parms), Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotTimer_PassValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotTimer_PassValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJackpotTimer_NoRegister()
	{
		return AJackpotTimer::StaticClass();
	}
	struct Z_Construct_UClass_AJackpotTimer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CylinderObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJackpotTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJackpotTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJackpotTimer_PassValue, "PassValue" }, // 2558989731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotTimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jackpot/JackpotTimer.h" },
		{ "ModuleRelativePath", "Jackpot/JackpotTimer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotTimer_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotTimer_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotTimer, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotTimer_Statics::NewProp_TextTimer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotTimer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotTimer_Statics::NewProp_TextTimer = { "TextTimer", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotTimer, TextTimer), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_TextTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_TextTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotTimer_Statics::NewProp_CylinderObj_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotTimer_Statics::NewProp_CylinderObj = { "CylinderObj", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotTimer, CylinderObj), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_CylinderObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotTimer_Statics::NewProp_CylinderObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJackpotTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotTimer_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotTimer_Statics::NewProp_TextTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotTimer_Statics::NewProp_CylinderObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJackpotTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJackpotTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJackpotTimer_Statics::ClassParams = {
		&AJackpotTimer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJackpotTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotTimer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJackpotTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJackpotTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJackpotTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJackpotTimer, 581858850);
	template<> SINGPROJECT_API UClass* StaticClass<AJackpotTimer>()
	{
		return AJackpotTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJackpotTimer(Z_Construct_UClass_AJackpotTimer, &AJackpotTimer::StaticClass, TEXT("/Script/SingProject"), TEXT("AJackpotTimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJackpotTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
