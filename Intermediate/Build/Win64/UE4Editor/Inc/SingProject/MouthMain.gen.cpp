// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/Mouth/MouthMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouthMain() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AMouthMain_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AMouthMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
// End Cross Module References
	void AMouthMain::StaticRegisterNativesAMouthMain()
	{
	}
	UClass* Z_Construct_UClass_AMouthMain_NoRegister()
	{
		return AMouthMain::StaticClass();
	}
	struct Z_Construct_UClass_AMouthMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMouthMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMouthMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mouth/MouthMain.h" },
		{ "ModuleRelativePath", "Mouth/MouthMain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMouthMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMouthMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMouthMain_Statics::ClassParams = {
		&AMouthMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMouthMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMouthMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMouthMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMouthMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMouthMain, 3117608980);
	template<> SINGPROJECT_API UClass* StaticClass<AMouthMain>()
	{
		return AMouthMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMouthMain(Z_Construct_UClass_AMouthMain, &AMouthMain::StaticClass, TEXT("/Script/SingProject"), TEXT("AMouthMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMouthMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
