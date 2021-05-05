// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/SingProjectBlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingProjectBlockGrid() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ASingProjectBlockGrid_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ASingProjectBlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineActorAnswer_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineTitleSinger_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineSingerName_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASingProjectBlockGrid::execStartAnimateOutFinishMain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateOutFinishMain(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASingProjectBlockGrid::execStartAnimateFinishMain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinishMain(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASingProjectBlockGrid::execGetSplineLocationOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_GET_UBOOL(Z_Param_hasQuestion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocationOut(Z_Param_time,Z_Param_hasQuestion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASingProjectBlockGrid::execGetSplineLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_GET_UBOOL(Z_Param_hasQuestion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineLocation(Z_Param_time,Z_Param_hasQuestion);
		P_NATIVE_END;
	}
	void ASingProjectBlockGrid::StaticRegisterNativesASingProjectBlockGrid()
	{
		UClass* Class = ASingProjectBlockGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineLocation", &ASingProjectBlockGrid::execGetSplineLocation },
			{ "GetSplineLocationOut", &ASingProjectBlockGrid::execGetSplineLocationOut },
			{ "StartAnimateFinishMain", &ASingProjectBlockGrid::execStartAnimateFinishMain },
			{ "StartAnimateOutFinishMain", &ASingProjectBlockGrid::execStartAnimateOutFinishMain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics
	{
		struct SingProjectBlockGrid_eventGetSplineLocation_Parms
		{
			float time;
			bool hasQuestion;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static void NewProp_hasQuestion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasQuestion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventGetSplineLocation_Parms, time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_hasQuestion_SetBit(void* Obj)
	{
		((SingProjectBlockGrid_eventGetSplineLocation_Parms*)Obj)->hasQuestion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_hasQuestion = { "hasQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SingProjectBlockGrid_eventGetSplineLocation_Parms), &Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_hasQuestion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventGetSplineLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_hasQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSplineRightToLeft" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingProjectBlockGrid, nullptr, "GetSplineLocation", nullptr, nullptr, sizeof(SingProjectBlockGrid_eventGetSplineLocation_Parms), Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics
	{
		struct SingProjectBlockGrid_eventGetSplineLocationOut_Parms
		{
			float time;
			bool hasQuestion;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static void NewProp_hasQuestion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasQuestion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventGetSplineLocationOut_Parms, time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_hasQuestion_SetBit(void* Obj)
	{
		((SingProjectBlockGrid_eventGetSplineLocationOut_Parms*)Obj)->hasQuestion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_hasQuestion = { "hasQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SingProjectBlockGrid_eventGetSplineLocationOut_Parms), &Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_hasQuestion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventGetSplineLocationOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_hasQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSplineLocationOut" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingProjectBlockGrid, nullptr, "GetSplineLocationOut", nullptr, nullptr, sizeof(SingProjectBlockGrid_eventGetSplineLocationOut_Parms), Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics
	{
		struct SingProjectBlockGrid_eventStartAnimateFinishMain_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventStartAnimateFinishMain_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinishMain" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingProjectBlockGrid, nullptr, "StartAnimateFinishMain", nullptr, nullptr, sizeof(SingProjectBlockGrid_eventStartAnimateFinishMain_Parms), Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics
	{
		struct SingProjectBlockGrid_eventStartAnimateOutFinishMain_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingProjectBlockGrid_eventStartAnimateOutFinishMain_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOutFinishMain" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingProjectBlockGrid, nullptr, "StartAnimateOutFinishMain", nullptr, nullptr, sizeof(SingProjectBlockGrid_eventStartAnimateOutFinishMain_Parms), Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASingProjectBlockGrid_NoRegister()
	{
		return ASingProjectBlockGrid::StaticClass();
	}
	struct Z_Construct_UClass_ASingProjectBlockGrid_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineRightToLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineRightToLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCenterToOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineCenterToOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineStraightRightToLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineStraightRightToLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineStraightCenterToOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineStraightCenterToOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrLineActor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrLineActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrLineActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tmr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmrUpDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tmrUpDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestionB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestionB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YellowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlankMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlankMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBlurMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseBlurMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurGlowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlurGlowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterialGlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterialGlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueBevelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueBevelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueExtrudeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueExtrudeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESBevelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESBevelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESExtrudeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESExtrudeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitFontMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitFontMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALineActorAnswerIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ALineActorAnswerIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALineActorAnswerOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ALineActorAnswerOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSingerUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleSingerUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingProjectBlockGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASingProjectBlockGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocation, "GetSplineLocation" }, // 4160349068
		{ &Z_Construct_UFunction_ASingProjectBlockGrid_GetSplineLocationOut, "GetSplineLocationOut" }, // 3194677093
		{ &Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateFinishMain, "StartAnimateFinishMain" }, // 689334671
		{ &Z_Construct_UFunction_ASingProjectBlockGrid_StartAnimateOutFinishMain, "StartAnimateOutFinishMain" }, // 2671838839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class used to spawn blocks and manage score */" },
		{ "IncludePath", "SingProjectBlockGrid.h" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "Class used to spawn blocks and manage score" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Dummy root component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ScoreText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Text component for the score */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineRightToLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineRightToLeft = { "SplineRightToLeft", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, SplineRightToLeft), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineRightToLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineRightToLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineCenterToOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineCenterToOut = { "SplineCenterToOut", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, SplineCenterToOut), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineCenterToOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineCenterToOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightRightToLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightRightToLeft = { "SplineStraightRightToLeft", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, SplineStraightRightToLeft), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightRightToLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightRightToLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightCenterToOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightCenterToOut = { "SplineStraightCenterToOut", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, SplineStraightCenterToOut), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightCenterToOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightCenterToOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Score_MetaData[] = {
		{ "Comment", "/** How many blocks have been clicked */" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "How many blocks have been clicked" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, Score), METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Number of blocks along each side of grid */" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "Number of blocks along each side of grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, Size), METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlockSpacing_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Spacing of blocks */" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "Spacing of blocks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlockSpacing = { "BlockSpacing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlockSpacing), METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlockSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlockSpacing_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor_Inner = { "arrLineActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALineActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor = { "arrLineActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, arrLineActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmr_MetaData[] = {
		{ "Comment", "//TSharedRef<IHttpRequest>\n" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "TSharedRef<IHttpRequest>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmr = { "tmr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, tmr), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmrUpDown_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmrUpDown = { "tmrUpDown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, tmrUpDown), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmrUpDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmrUpDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_notes_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_notes = { "notes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, notes), METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TextQuestionB_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SingProjectBlockGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TextQuestionB = { "TextQuestionB", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, TextQuestionB), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TextQuestionB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TextQuestionB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterialGlow_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterialGlow = { "BaseMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BaseMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_YellowMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_YellowMaterial = { "YellowMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, YellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_YellowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_YellowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_OrangeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlankMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlankMaterial = { "BlankMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlankMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlankMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlankMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseBlurMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseBlurMaterial = { "BaseBlurMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BaseBlurMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseBlurMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseBlurMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlurGlowMaterial_MetaData[] = {
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlurGlowMaterial = { "BlurGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlurGlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlurGlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlurGlowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterialGlow_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterialGlow = { "GreenMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, GreenMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterialGlow_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterialGlow = { "RedMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, RedMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterialGlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterialGlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlueMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueBevelMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueBevelMaterial = { "BlueBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlueBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueBevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueBevelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueExtrudeMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueExtrudeMaterial = { "BlueExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, BlueExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESMaterial = { "ESMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ESMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESBevelMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESBevelMaterial = { "ESBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ESBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESBevelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESBevelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESExtrudeMaterial_MetaData[] = {
		{ "Category", "SingProjectBlockGrid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESExtrudeMaterial = { "ESExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ESExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESExtrudeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESExtrudeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_InitFontMaterial_MetaData[] = {
		{ "Category", "FontSet" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_InitFontMaterial = { "InitFontMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, InitFontMaterial), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_InitFontMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_InitFontMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerIn_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerIn = { "ALineActorAnswerIn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ALineActorAnswerIn), Z_Construct_UClass_ALineActorAnswer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerOut_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerOut = { "ALineActorAnswerOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, ALineActorAnswerOut), Z_Construct_UClass_ALineActorAnswer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TitleSingerUse_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UPROPERTY(Category = Grid, EditAnywhere)\n// class ALineFinish* LineFinishParent;\n" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
		{ "ToolTip", "UPROPERTY(Category = Grid, EditAnywhere)\nclass ALineFinish* LineFinishParent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TitleSingerUse = { "TitleSingerUse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, TitleSingerUse), Z_Construct_UClass_ALineTitleSinger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TitleSingerUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TitleSingerUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SingerName_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "SingProjectBlockGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SingerName = { "SingerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingProjectBlockGrid, SingerName), Z_Construct_UClass_ALineSingerName_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SingerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SingerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingProjectBlockGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineRightToLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineCenterToOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightRightToLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SplineStraightCenterToOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlockSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_arrLineActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_tmrUpDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TextQuestionB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_YellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlankMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BaseBlurMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlurGlowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_GreenMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_RedMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_BlueExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ESExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_InitFontMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_ALineActorAnswerOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_TitleSingerUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingProjectBlockGrid_Statics::NewProp_SingerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingProjectBlockGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingProjectBlockGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingProjectBlockGrid_Statics::ClassParams = {
		&ASingProjectBlockGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASingProjectBlockGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingProjectBlockGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingProjectBlockGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingProjectBlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingProjectBlockGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingProjectBlockGrid, 3619351625);
	template<> SINGPROJECT_API UClass* StaticClass<ASingProjectBlockGrid>()
	{
		return ASingProjectBlockGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingProjectBlockGrid(Z_Construct_UClass_ASingProjectBlockGrid, &ASingProjectBlockGrid::StaticClass, TEXT("/Script/SingProject"), TEXT("ASingProjectBlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingProjectBlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
