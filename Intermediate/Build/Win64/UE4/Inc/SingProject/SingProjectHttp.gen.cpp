// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/SingProjectHttp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingProjectHttp() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ASingProjectHttp_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ASingProjectHttp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASingProjectHttp::StaticRegisterNativesASingProjectHttp()
	{
	}
	UClass* Z_Construct_UClass_ASingProjectHttp_NoRegister()
	{
		return ASingProjectHttp::StaticClass();
	}
	struct Z_Construct_UClass_ASingProjectHttp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CallingClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingProjectHttp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectHttp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingProjectHttp.h" },
		{ "ModuleRelativePath", "SingProjectHttp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_CallingClass_MetaData[] = {
		{ "Category", "SingProjectHttp" },
		{ "ModuleRelativePath", "SingProjectHttp.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_CallingClass = { "CallingClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectHttp, CallingClass), METADATA_PARAMS(Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_CallingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_CallingClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_actorToUse_MetaData[] = {
		{ "Category", "SingProjectHttp" },
		{ "Comment", "// UPROPERTY(EditAnywhere)\n// class AJackpotMain* jackpotMain;\x09\n" },
		{ "ModuleRelativePath", "SingProjectHttp.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nclass AJackpotMain* jackpotMain;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_actorToUse = { "actorToUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectHttp, actorToUse), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_actorToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_actorToUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingProjectHttp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_CallingClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectHttp_Statics::NewProp_actorToUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingProjectHttp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingProjectHttp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingProjectHttp_Statics::ClassParams = {
		&ASingProjectHttp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingProjectHttp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectHttp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingProjectHttp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectHttp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingProjectHttp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingProjectHttp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingProjectHttp, 4192699343);
	template<> SINGPROJECT_API UClass* StaticClass<ASingProjectHttp>()
	{
		return ASingProjectHttp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingProjectHttp(Z_Construct_UClass_ASingProjectHttp, &ASingProjectHttp::StaticClass, TEXT("/Script/SingProject"), TEXT("ASingProjectHttp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingProjectHttp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
