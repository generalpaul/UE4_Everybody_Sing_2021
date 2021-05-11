// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/Jackpot/JackpotItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJackpotItem() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotItem_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AJackpotMain_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJackpotItem::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJackpotItem::execIntroFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntroFinish();
		P_NATIVE_END;
	}
	static FName NAME_AJackpotItem_StartIntro = FName(TEXT("StartIntro"));
	void AJackpotItem::StartIntro()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartIntro),NULL);
	}
	static FName NAME_AJackpotItem_StartReveal = FName(TEXT("StartReveal"));
	void AJackpotItem::StartReveal()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartReveal),NULL);
	}
	static FName NAME_AJackpotItem_StartRotate = FName(TEXT("StartRotate"));
	void AJackpotItem::StartRotate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartRotate),NULL);
	}
	static FName NAME_AJackpotItem_StartRotateReset = FName(TEXT("StartRotateReset"));
	void AJackpotItem::StartRotateReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartRotateReset),NULL);
	}
	static FName NAME_AJackpotItem_StartSelect = FName(TEXT("StartSelect"));
	void AJackpotItem::StartSelect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartSelect),NULL);
	}
	static FName NAME_AJackpotItem_StartUnSelect = FName(TEXT("StartUnSelect"));
	void AJackpotItem::StartUnSelect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartUnSelect),NULL);
	}
	static FName NAME_AJackpotItem_StartWrong = FName(TEXT("StartWrong"));
	void AJackpotItem::StartWrong()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJackpotItem_StartWrong),NULL);
	}
	void AJackpotItem::StaticRegisterNativesAJackpotItem()
	{
		UClass* Class = AJackpotItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntroFinish", &AJackpotItem::execIntroFinish },
			{ "ResetAll", &AJackpotItem::execResetAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "IntroFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_IntroFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_IntroFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartIntro_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartIntro_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartIntro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartIntro", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartIntro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartIntro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartIntro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartIntro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartReveal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartReveal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartReveal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartRotate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartRotate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartRotateReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartRotateReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartRotateReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartSelect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartSelect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartUnSelect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartUnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartUnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJackpotItem_StartWrong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJackpotItem_StartWrong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJackpotItem_StartWrong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJackpotItem, nullptr, "StartWrong", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJackpotItem_StartWrong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJackpotItem_StartWrong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJackpotItem_StartWrong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJackpotItem_StartWrong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJackpotItem_NoRegister()
	{
		return AJackpotItem::StaticClass();
	}
	struct Z_Construct_UClass_AJackpotItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerSingleLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerSingleLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerLine1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerLine1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerLine2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerLine2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockNumberCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockNumberCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNumberMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultNumberMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotBaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotBaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotGreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotGreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotBaseMaterialText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotBaseMaterialText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotGreenMaterialText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotGreenMaterialText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotRedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotRedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JackpotRedMaterialText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JackpotRedMaterialText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJackpotItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJackpotItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJackpotItem_IntroFinish, "IntroFinish" }, // 2786821964
		{ &Z_Construct_UFunction_AJackpotItem_ResetAll, "ResetAll" }, // 3123413702
		{ &Z_Construct_UFunction_AJackpotItem_StartIntro, "StartIntro" }, // 3303989129
		{ &Z_Construct_UFunction_AJackpotItem_StartReveal, "StartReveal" }, // 255205382
		{ &Z_Construct_UFunction_AJackpotItem_StartRotate, "StartRotate" }, // 3500094536
		{ &Z_Construct_UFunction_AJackpotItem_StartRotateReset, "StartRotateReset" }, // 1651586772
		{ &Z_Construct_UFunction_AJackpotItem_StartSelect, "StartSelect" }, // 574280393
		{ &Z_Construct_UFunction_AJackpotItem_StartUnSelect, "StartUnSelect" }, // 2671216134
		{ &Z_Construct_UFunction_AJackpotItem_StartWrong, "StartWrong" }, // 452024218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jackpot/JackpotItem.h" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyParent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyParent = { "DummyParent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, DummyParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootNumber_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootNumber = { "DummyRootNumber", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, DummyRootNumber), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootContent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootContent = { "DummyRootContent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, DummyRootContent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextNumber_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotItem" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextNumber = { "TextNumber", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, TextNumber), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerSingleLine_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerSingleLine = { "TextAnswerSingleLine", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, TextAnswerSingleLine), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerSingleLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerSingleLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine1 = { "TextAnswerLine1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, TextAnswerLine1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JackpotItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine2 = { "TextAnswerLine2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, TextAnswerLine2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockCover_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)\n// class UStaticMeshComponent* CylinderObj;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)\nclass UStaticMeshComponent* CylinderObj;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockCover = { "BlockCover", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, BlockCover), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockNumberCover_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockNumberCover = { "BlockNumberCover", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, BlockNumberCover), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockNumberCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockNumberCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_DefaultNumberMaterial_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_DefaultNumberMaterial = { "DefaultNumberMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, DefaultNumberMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DefaultNumberMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_DefaultNumberMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterial_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterial = { "JackpotBaseMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotBaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterial_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterial = { "JackpotGreenMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotGreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterialText_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterialText = { "JackpotBaseMaterialText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotBaseMaterialText), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterialText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterialText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterialText_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterialText = { "JackpotGreenMaterialText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotGreenMaterialText), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterialText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterialText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterial_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterial = { "JackpotRedMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotRedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterialText_MetaData[] = {
		{ "Category", "JackpotItem" },
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterialText = { "JackpotRedMaterialText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, JackpotRedMaterialText), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterialText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterialText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJackpotItem_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "Jackpot/JackpotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJackpotItem_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJackpotItem, OwningGrid), Z_Construct_UClass_AJackpotMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJackpotItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_DummyRootContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerSingleLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_TextAnswerLine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_BlockNumberCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_DefaultNumberMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotBaseMaterialText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotGreenMaterialText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_JackpotRedMaterialText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJackpotItem_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJackpotItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJackpotItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJackpotItem_Statics::ClassParams = {
		&AJackpotItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJackpotItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJackpotItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJackpotItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJackpotItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJackpotItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJackpotItem, 2630066459);
	template<> SINGPROJECT_API UClass* StaticClass<AJackpotItem>()
	{
		return AJackpotItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJackpotItem(Z_Construct_UClass_AJackpotItem, &AJackpotItem::StaticClass, TEXT("/Script/SingProject"), TEXT("AJackpotItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJackpotItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
