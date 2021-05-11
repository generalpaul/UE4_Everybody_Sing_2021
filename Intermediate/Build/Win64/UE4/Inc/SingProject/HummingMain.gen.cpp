// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/Humming/HummingMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHummingMain() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_AHummingMain_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_AHummingMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHummingMain::execPassMaterial)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_value);
		P_GET_OBJECT(UMaterial,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassMaterial(Z_Param_value,Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHummingMain::execPassMaterialText)
	{
		P_GET_OBJECT(UText3DComponent,Z_Param_value);
		P_GET_OBJECT(UMaterial,Z_Param_front);
		P_GET_OBJECT(UMaterial,Z_Param_bevel);
		P_GET_OBJECT(UMaterial,Z_Param_extrude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassMaterialText(Z_Param_value,Z_Param_front,Z_Param_bevel,Z_Param_extrude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHummingMain::execvoidReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->voidReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHummingMain::execPassValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassValue(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_AHummingMain_StartAnimateLine = FName(TEXT("StartAnimateLine"));
	void AHummingMain::StartAnimateLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHummingMain_StartAnimateLine),NULL);
	}
	static FName NAME_AHummingMain_StartReset = FName(TEXT("StartReset"));
	void AHummingMain::StartReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHummingMain_StartReset),NULL);
	}
	static FName NAME_AHummingMain_StartZoom = FName(TEXT("StartZoom"));
	void AHummingMain::StartZoom()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHummingMain_StartZoom),NULL);
	}
	void AHummingMain::StaticRegisterNativesAHummingMain()
	{
		UClass* Class = AHummingMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassMaterial", &AHummingMain::execPassMaterial },
			{ "PassMaterialText", &AHummingMain::execPassMaterialText },
			{ "PassValue", &AHummingMain::execPassValue },
			{ "voidReset", &AHummingMain::execvoidReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHummingMain_PassMaterial_Statics
	{
		struct HummingMain_eventPassMaterial_Parms
		{
			UStaticMeshComponent* value;
			UMaterial* material;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterial_Parms, value), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterial_Parms, material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "PassMaterial", nullptr, nullptr, sizeof(HummingMain_eventPassMaterial_Parms), Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_PassMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_PassMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics
	{
		struct HummingMain_eventPassMaterialText_Parms
		{
			UText3DComponent* value;
			UMaterial* front;
			UMaterial* bevel;
			UMaterial* extrude;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_front;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_extrude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterialText_Parms, value), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_front = { "front", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterialText_Parms, front), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_bevel = { "bevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterialText_Parms, bevel), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_extrude = { "extrude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassMaterialText_Parms, extrude), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_bevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::NewProp_extrude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "PassMaterialText", nullptr, nullptr, sizeof(HummingMain_eventPassMaterialText_Parms), Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_PassMaterialText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_PassMaterialText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_PassValue_Statics
	{
		struct HummingMain_eventPassValue_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHummingMain_PassValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HummingMain_eventPassValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHummingMain_PassValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHummingMain_PassValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_PassValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_PassValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "PassValue", nullptr, nullptr, sizeof(HummingMain_eventPassValue_Parms), Z_Construct_UFunction_AHummingMain_PassValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_PassValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_PassValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_PassValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_PassValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "StartAnimateLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_StartAnimateLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_StartAnimateLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_StartReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_StartReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UFUNCTION(BlueprintImplementableEvent, Category = Grid)\n// void StartRotate();\n" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, Category = Grid)\nvoid StartRotate();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_StartReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "StartReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_StartReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_StartReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_StartReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_StartReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_StartZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_StartZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_StartZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "StartZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_StartZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_StartZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_StartZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_StartZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHummingMain_voidReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHummingMain_voidReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHummingMain_voidReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHummingMain, nullptr, "voidReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHummingMain_voidReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHummingMain_voidReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHummingMain_voidReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHummingMain_voidReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHummingMain_NoRegister()
	{
		return AHummingMain::StaticClass();
	}
	struct Z_Construct_UClass_AHummingMain_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cylinder1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cylinder1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cylinder2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cylinder2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cylinder3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cylinder3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Block;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Block2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Block2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockInfo2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockInfo2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTitle1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTitle1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTitle2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTitle2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfo1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfo1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfo2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfo2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfo3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfo3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfo4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfo4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfoFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfoFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfoArtist1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfoArtist1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfoArtist2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInfoArtist2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurpleGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurpleGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterialMed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterialMed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterialMed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterialMed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHummingMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHummingMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHummingMain_PassMaterial, "PassMaterial" }, // 810561002
		{ &Z_Construct_UFunction_AHummingMain_PassMaterialText, "PassMaterialText" }, // 1900769467
		{ &Z_Construct_UFunction_AHummingMain_PassValue, "PassValue" }, // 1410119801
		{ &Z_Construct_UFunction_AHummingMain_StartAnimateLine, "StartAnimateLine" }, // 2277085045
		{ &Z_Construct_UFunction_AHummingMain_StartReset, "StartReset" }, // 1404042361
		{ &Z_Construct_UFunction_AHummingMain_StartZoom, "StartZoom" }, // 2896862734
		{ &Z_Construct_UFunction_AHummingMain_voidReset, "voidReset" }, // 954605107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Humming/HummingMain.h" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootInfo = { "DummyRootInfo", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, DummyRootInfo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootRotator_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootRotator = { "DummyRootRotator", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, DummyRootRotator), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder1_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder1 = { "Cylinder1", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, Cylinder1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder2_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder2 = { "Cylinder2", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, Cylinder2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder3_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder3 = { "Cylinder3", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, Cylinder3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_Block_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, Block), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_Block_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_Block_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_Block2_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_Block2 = { "Block2", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, Block2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_Block2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_Block2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo = { "BlockInfo", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, BlockInfo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo2_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo2 = { "BlockInfo2", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, BlockInfo2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextQuestion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextQuestion = { "TextQuestion", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextQuestion), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle1 = { "TextTitle1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextTitle1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle2 = { "TextTitle2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextTitle2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer = { "TextAnswer", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextAnswer), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer1 = { "TextAnswer1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextAnswer1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer2 = { "TextAnswer2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextAnswer2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo1 = { "TextInfo1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfo1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo2 = { "TextInfo2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfo2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo3 = { "TextInfo3", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfo3), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo4_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo4 = { "TextInfo4", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfo4), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoFrame = { "TextInfoFrame", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfoFrame), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist1 = { "TextInfoArtist1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfoArtist1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HummingMain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist2 = { "TextInfoArtist2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, TextInfoArtist2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_SingerName_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_SingerName = { "SingerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, SingerName), Z_Construct_UClass_ALineSingerName_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_SingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_SingerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_OrangeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_PurpleGlow_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_PurpleGlow = { "PurpleGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, PurpleGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_PurpleGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_PurpleGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenGlow_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenGlow = { "GreenGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, GreenGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_RedGlow_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_RedGlow = { "RedGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, RedGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterialMed_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterialMed = { "GreenMaterialMed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, GreenMaterialMed), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterialMed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterialMed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterialMed_MetaData[] = {
		{ "Category", "HummingMain" },
		{ "ModuleRelativePath", "Humming/HummingMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterialMed = { "RedMaterialMed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHummingMain, RedMaterialMed), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterialMed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterialMed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHummingMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_DummyRootRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_Cylinder3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_Block,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_Block2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_BlockInfo2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextTitle2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextAnswer2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfo4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_TextInfoArtist2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_SingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_PurpleGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_RedGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_GreenMaterialMed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHummingMain_Statics::NewProp_RedMaterialMed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHummingMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHummingMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHummingMain_Statics::ClassParams = {
		&AHummingMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHummingMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHummingMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHummingMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHummingMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHummingMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHummingMain, 471454835);
	template<> SINGPROJECT_API UClass* StaticClass<AHummingMain>()
	{
		return AHummingMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHummingMain(Z_Construct_UClass_AHummingMain, &AHummingMain::StaticClass, TEXT("/Script/SingProject"), TEXT("AHummingMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHummingMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
