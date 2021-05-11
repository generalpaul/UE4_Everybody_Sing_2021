// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/LineSingerName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineSingerName() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ALineSingerName_Blink = FName(TEXT("Blink"));
	void ALineSingerName::Blink()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineSingerName_Blink),NULL);
	}
	void ALineSingerName::StaticRegisterNativesALineSingerName()
	{
	}
	struct Z_Construct_UFunction_ALineSingerName_Blink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineSingerName_Blink_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartDownload" },
		{ "Comment", "// UFUNCTION()\n// void SetName(FString Name);\n//BlueprintCallable\n" },
		{ "ModuleRelativePath", "LineSingerName.h" },
		{ "ToolTip", "UFUNCTION()\nvoid SetName(FString Name);\nBlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineSingerName_Blink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineSingerName, nullptr, "Blink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineSingerName_Blink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineSingerName_Blink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineSingerName_Blink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineSingerName_Blink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALineSingerName_NoRegister()
	{
		return ALineSingerName::StaticClass();
	}
	struct Z_Construct_UClass_ALineSingerName_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextSingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextSingerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineSingerName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALineSingerName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALineSingerName_Blink, "Blink" }, // 2074090228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineSingerName_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineSingerName.h" },
		{ "ModuleRelativePath", "LineSingerName.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineSingerName_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineSingerName.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineSingerName_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineSingerName, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineSingerName_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineSingerName_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineSingerName_Statics::NewProp_TextSingerName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineSingerName" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineSingerName.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineSingerName_Statics::NewProp_TextSingerName = { "TextSingerName", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineSingerName, TextSingerName), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineSingerName_Statics::NewProp_TextSingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineSingerName_Statics::NewProp_TextSingerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineSingerName_Statics::NewProp_SingerBackground_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineSingerName" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineSingerName.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineSingerName_Statics::NewProp_SingerBackground = { "SingerBackground", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineSingerName, SingerBackground), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineSingerName_Statics::NewProp_SingerBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineSingerName_Statics::NewProp_SingerBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineSingerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineSingerName_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineSingerName_Statics::NewProp_TextSingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineSingerName_Statics::NewProp_SingerBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineSingerName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineSingerName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineSingerName_Statics::ClassParams = {
		&ALineSingerName::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALineSingerName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineSingerName_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineSingerName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineSingerName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineSingerName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineSingerName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineSingerName, 3972666457);
	template<> SINGPROJECT_API UClass* StaticClass<ALineSingerName>()
	{
		return ALineSingerName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineSingerName(Z_Construct_UClass_ALineSingerName, &ALineSingerName::StaticClass, TEXT("/Script/SingProject"), TEXT("ALineSingerName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineSingerName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
