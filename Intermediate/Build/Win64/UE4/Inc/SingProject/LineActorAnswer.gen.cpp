// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/LineActorAnswer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineActorAnswer() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineActorAnswer_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineActorAnswer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ASingProjectBlockGrid_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALineActorAnswer::execwrong)
	{
		P_GET_OBJECT(UMaterial,Z_Param_RedMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_YellowMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_OrangeMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlankMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_GlowMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->wrong(Z_Param_RedMaterial,Z_Param_YellowMaterial,Z_Param_OrangeMaterial,Z_Param_BlankMaterial,Z_Param_GlowMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execright)
	{
		P_GET_OBJECT(UMaterial,Z_Param_GreenMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_YellowMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_OrangeMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlankMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_GlowMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->right(Z_Param_GreenMaterial,Z_Param_YellowMaterial,Z_Param_OrangeMaterial,Z_Param_BlankMaterial,Z_Param_GlowMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execInit)
	{
		P_GET_OBJECT(UMaterial,Z_Param_BaseMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_GreenMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_YellowMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_OrangeMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlankMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_RedMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlurGlowMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BaseBlurMaterial);
		P_GET_PROPERTY(FIntProperty,Z_Param_notes);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_BaseMaterial,Z_Param_GreenMaterial,Z_Param_YellowMaterial,Z_Param_OrangeMaterial,Z_Param_BlankMaterial,Z_Param_RedMaterial,Z_Param_BlurGlowMaterial,Z_Param_BaseBlurMaterial,Z_Param_notes,Z_Param_gameType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execMoveDown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDown(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strQuestion1);
		P_GET_PROPERTY(FStrProperty,Z_Param_strAnswer1);
		P_GET_PROPERTY(FStrProperty,Z_Param_strAnswerH1);
		P_GET_PROPERTY(FStrProperty,Z_Param_strUnderline1);
		P_GET_PROPERTY(FStrProperty,Z_Param_strQuestion2);
		P_GET_PROPERTY(FStrProperty,Z_Param_strAnswer2);
		P_GET_PROPERTY(FStrProperty,Z_Param_strAnswerH2);
		P_GET_PROPERTY(FStrProperty,Z_Param_strUnderline2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_answerPosition1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_blankPosition1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_answerPosition2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_blankPosition2);
		P_GET_PROPERTY(FIntProperty,Z_Param_notes);
		P_GET_OBJECT(UFont,Z_Param_font);
		P_GET_OBJECT(UMaterial,Z_Param_BaseMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BaseMaterialGlow);
		P_GET_OBJECT(UMaterial,Z_Param_YellowMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_OrangeMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlueMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlueBevelMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_BlueExtrudeMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_ESMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_ESBevelMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_ESExtrudeMaterial);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameType);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_strQuestion1,Z_Param_strAnswer1,Z_Param_strAnswerH1,Z_Param_strUnderline1,Z_Param_strQuestion2,Z_Param_strAnswer2,Z_Param_strAnswerH2,Z_Param_strUnderline2,Z_Param_answerPosition1,Z_Param_blankPosition1,Z_Param_answerPosition2,Z_Param_blankPosition2,Z_Param_notes,Z_Param_font,Z_Param_BaseMaterial,Z_Param_BaseMaterialGlow,Z_Param_YellowMaterial,Z_Param_OrangeMaterial,Z_Param_BlueMaterial,Z_Param_BlueBevelMaterial,Z_Param_BlueExtrudeMaterial,Z_Param_ESMaterial,Z_Param_ESBevelMaterial,Z_Param_ESExtrudeMaterial,Z_Param_gameType,Z_Param_eventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execSetVerticalTop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalTop(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execShowWord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowWord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execUpdateVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IsNotes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVisibility(Z_Param_IsNotes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execStartAnimateOutFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateOutFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execPassTimelineOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineOut(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execStartAnimateFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineActorAnswer::execPassTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimeline(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_ALineActorAnswer_StartAnimate = FName(TEXT("StartAnimate"));
	void ALineActorAnswer::StartAnimate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineActorAnswer_StartAnimate),NULL);
	}
	static FName NAME_ALineActorAnswer_StartAnimateOut = FName(TEXT("StartAnimateOut"));
	void ALineActorAnswer::StartAnimateOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineActorAnswer_StartAnimateOut),NULL);
	}
	static FName NAME_ALineActorAnswer_StartAnimateRotate = FName(TEXT("StartAnimateRotate"));
	void ALineActorAnswer::StartAnimateRotate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineActorAnswer_StartAnimateRotate),NULL);
	}
	void ALineActorAnswer::StaticRegisterNativesALineActorAnswer()
	{
		UClass* Class = ALineActorAnswer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &ALineActorAnswer::execInit },
			{ "MoveDown", &ALineActorAnswer::execMoveDown },
			{ "MoveUp", &ALineActorAnswer::execMoveUp },
			{ "PassTimeline", &ALineActorAnswer::execPassTimeline },
			{ "PassTimelineOut", &ALineActorAnswer::execPassTimelineOut },
			{ "ResetAll", &ALineActorAnswer::execResetAll },
			{ "right", &ALineActorAnswer::execright },
			{ "SetValue", &ALineActorAnswer::execSetValue },
			{ "SetVerticalTop", &ALineActorAnswer::execSetVerticalTop },
			{ "ShowWord", &ALineActorAnswer::execShowWord },
			{ "StartAnimateFinish", &ALineActorAnswer::execStartAnimateFinish },
			{ "StartAnimateOutFinish", &ALineActorAnswer::execStartAnimateOutFinish },
			{ "UpdateVisibility", &ALineActorAnswer::execUpdateVisibility },
			{ "wrong", &ALineActorAnswer::execwrong },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALineActorAnswer_Init_Statics
	{
		struct LineActorAnswer_eventInit_Parms
		{
			UMaterial* BaseMaterial;
			UMaterial* GreenMaterial;
			UMaterial* YellowMaterial;
			UMaterial* OrangeMaterial;
			UMaterial* BlankMaterial;
			UMaterial* RedMaterial;
			UMaterial* BlurGlowMaterial;
			UMaterial* BaseBlurMaterial;
			int32 notes;
			FString gameType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlankMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlurGlowMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseBlurMaterial;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_notes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_YellowMaterial = { "YellowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, YellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BlankMaterial = { "BlankMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, BlankMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BlurGlowMaterial = { "BlurGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, BlurGlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BaseBlurMaterial = { "BaseBlurMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, BaseBlurMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_notes = { "notes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, notes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_gameType = { "gameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventInit_Parms, gameType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_YellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BlankMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BlurGlowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_BaseBlurMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_Init_Statics::NewProp_gameType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "Init", nullptr, nullptr, sizeof(LineActorAnswer_eventInit_Parms), Z_Construct_UFunction_ALineActorAnswer_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics
	{
		struct LineActorAnswer_eventMoveDown_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventMoveDown_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "MoveDown", nullptr, nullptr, sizeof(LineActorAnswer_eventMoveDown_Parms), Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_MoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_MoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics
	{
		struct LineActorAnswer_eventMoveUp_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventMoveUp_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "MoveUp", nullptr, nullptr, sizeof(LineActorAnswer_eventMoveUp_Parms), Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics
	{
		struct LineActorAnswer_eventPassTimeline_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventPassTimeline_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimeline" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "PassTimeline", nullptr, nullptr, sizeof(LineActorAnswer_eventPassTimeline_Parms), Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_PassTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_PassTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics
	{
		struct LineActorAnswer_eventPassTimelineOut_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventPassTimelineOut_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineOut" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "PassTimelineOut", nullptr, nullptr, sizeof(LineActorAnswer_eventPassTimelineOut_Parms), Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "ResetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_right_Statics
	{
		struct LineActorAnswer_eventright_Parms
		{
			UMaterial* GreenMaterial;
			UMaterial* YellowMaterial;
			UMaterial* OrangeMaterial;
			UMaterial* BlankMaterial;
			UMaterial* GlowMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlankMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlowMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventright_Parms, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_YellowMaterial = { "YellowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventright_Parms, YellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventright_Parms, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_BlankMaterial = { "BlankMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventright_Parms, BlankMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventright_Parms, GlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_YellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_BlankMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_right_Statics::NewProp_GlowMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// void hide();\n// void show();\n" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "void hide();\nvoid show();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "right", nullptr, nullptr, sizeof(LineActorAnswer_eventright_Parms), Z_Construct_UFunction_ALineActorAnswer_right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics
	{
		struct LineActorAnswer_eventSetValue_Parms
		{
			FString strQuestion1;
			FString strAnswer1;
			FString strAnswerH1;
			FString strUnderline1;
			FString strQuestion2;
			FString strAnswer2;
			FString strAnswerH2;
			FString strUnderline2;
			float answerPosition1;
			float blankPosition1;
			float answerPosition2;
			float blankPosition2;
			int32 notes;
			UFont* font;
			UMaterial* BaseMaterial;
			UMaterial* BaseMaterialGlow;
			UMaterial* YellowMaterial;
			UMaterial* OrangeMaterial;
			UMaterial* BlueMaterial;
			UMaterial* BlueBevelMaterial;
			UMaterial* BlueExtrudeMaterial;
			UMaterial* ESMaterial;
			UMaterial* ESBevelMaterial;
			UMaterial* ESExtrudeMaterial;
			FString gameType;
			FString eventName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strQuestion1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strAnswer1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strAnswerH1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strUnderline1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strQuestion2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strAnswer2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strAnswerH2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strUnderline2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_answerPosition1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blankPosition1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_answerPosition2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_blankPosition2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_notes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_font;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialGlow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueBevelMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueExtrudeMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESBevelMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ESExtrudeMaterial;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strQuestion1 = { "strQuestion1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strQuestion1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswer1 = { "strAnswer1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strAnswer1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswerH1 = { "strAnswerH1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strAnswerH1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strUnderline1 = { "strUnderline1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strUnderline1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strQuestion2 = { "strQuestion2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strQuestion2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswer2 = { "strAnswer2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strAnswer2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswerH2 = { "strAnswerH2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strAnswerH2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strUnderline2 = { "strUnderline2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, strUnderline2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_answerPosition1 = { "answerPosition1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, answerPosition1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_blankPosition1 = { "blankPosition1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, blankPosition1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_answerPosition2 = { "answerPosition2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, answerPosition2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_blankPosition2 = { "blankPosition2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, blankPosition2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_notes = { "notes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, notes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_font = { "font", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BaseMaterialGlow = { "BaseMaterialGlow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, BaseMaterialGlow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_YellowMaterial = { "YellowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, YellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, BlueMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueBevelMaterial = { "BlueBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, BlueBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueExtrudeMaterial = { "BlueExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, BlueExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESMaterial = { "ESMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, ESMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESBevelMaterial = { "ESBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, ESBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESExtrudeMaterial = { "ESExtrudeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, ESExtrudeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_gameType = { "gameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, gameType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetValue_Parms, eventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strQuestion1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswer1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswerH1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strUnderline1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strQuestion2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswer2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strAnswerH2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_strUnderline2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_answerPosition1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_blankPosition1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_answerPosition2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_blankPosition2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BaseMaterialGlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_YellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_BlueExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_ESExtrudeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_gameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::NewProp_eventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "Comment", "// UFUNCTION(Category = Grid)\n// void SetVerticalTopFinal(float position, UMaterial *blank, UMaterial *defaultRed, UMaterial *defaultBlue);\n//   float blurleft1,\n//   float blurleft2, float blurwidth1, float blurwidth2,\n" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "UFUNCTION(Category = Grid)\nvoid SetVerticalTopFinal(float position, UMaterial *blank, UMaterial *defaultRed, UMaterial *defaultBlue);\n  float blurleft1,\n  float blurleft2, float blurwidth1, float blurwidth2," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "SetValue", nullptr, nullptr, sizeof(LineActorAnswer_eventSetValue_Parms), Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics
	{
		struct LineActorAnswer_eventSetVerticalTop_Parms
		{
			float position;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventSetVerticalTop_Parms, position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "SetVerticalTop", nullptr, nullptr, sizeof(LineActorAnswer_eventSetVerticalTop_Parms), Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "ShowWord", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_ShowWord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_ShowWord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimate" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "StartAnimate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_StartAnimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_StartAnimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinish" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "StartAnimateFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOut" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "StartAnimateOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOutFinish" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "StartAnimateOutFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateRotate" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "StartAnimateRotate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics
	{
		struct LineActorAnswer_eventUpdateVisibility_Parms
		{
			int32 IsNotes;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IsNotes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::NewProp_IsNotes = { "IsNotes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventUpdateVisibility_Parms, IsNotes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::NewProp_IsNotes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpdateVisibility" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = ShowBlur)\n// void HideBlur();\n" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = ShowBlur)\nvoid HideBlur();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "UpdateVisibility", nullptr, nullptr, sizeof(LineActorAnswer_eventUpdateVisibility_Parms), Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineActorAnswer_wrong_Statics
	{
		struct LineActorAnswer_eventwrong_Parms
		{
			UMaterial* RedMaterial;
			UMaterial* YellowMaterial;
			UMaterial* OrangeMaterial;
			UMaterial* BlankMaterial;
			UMaterial* GlowMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlankMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlowMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventwrong_Parms, RedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_YellowMaterial = { "YellowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventwrong_Parms, YellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventwrong_Parms, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_BlankMaterial = { "BlankMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventwrong_Parms, BlankMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineActorAnswer_eventwrong_Parms, GlowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_YellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_BlankMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::NewProp_GlowMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineActorAnswer, nullptr, "wrong", nullptr, nullptr, sizeof(LineActorAnswer_eventwrong_Parms), Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineActorAnswer_wrong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineActorAnswer_wrong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALineActorAnswer_NoRegister()
	{
		return ALineActorAnswer::StaticClass();
	}
	struct Z_Construct_UClass_ALineActorAnswer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestion1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestion1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerH1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerH1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextUnderline1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextUnderline1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestion2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestion2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswerH2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswerH2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextUnderline2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextUnderline2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer1NoteSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer1NoteSymbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer2NoteSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer2NoteSymbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineActorAnswer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALineActorAnswer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALineActorAnswer_Init, "Init" }, // 318238351
		{ &Z_Construct_UFunction_ALineActorAnswer_MoveDown, "MoveDown" }, // 2952885275
		{ &Z_Construct_UFunction_ALineActorAnswer_MoveUp, "MoveUp" }, // 637590261
		{ &Z_Construct_UFunction_ALineActorAnswer_PassTimeline, "PassTimeline" }, // 327054756
		{ &Z_Construct_UFunction_ALineActorAnswer_PassTimelineOut, "PassTimelineOut" }, // 873072288
		{ &Z_Construct_UFunction_ALineActorAnswer_ResetAll, "ResetAll" }, // 4270172797
		{ &Z_Construct_UFunction_ALineActorAnswer_right, "right" }, // 232094729
		{ &Z_Construct_UFunction_ALineActorAnswer_SetValue, "SetValue" }, // 407386215
		{ &Z_Construct_UFunction_ALineActorAnswer_SetVerticalTop, "SetVerticalTop" }, // 2644451812
		{ &Z_Construct_UFunction_ALineActorAnswer_ShowWord, "ShowWord" }, // 3430482388
		{ &Z_Construct_UFunction_ALineActorAnswer_StartAnimate, "StartAnimate" }, // 2500871364
		{ &Z_Construct_UFunction_ALineActorAnswer_StartAnimateFinish, "StartAnimateFinish" }, // 616135255
		{ &Z_Construct_UFunction_ALineActorAnswer_StartAnimateOut, "StartAnimateOut" }, // 1746941596
		{ &Z_Construct_UFunction_ALineActorAnswer_StartAnimateOutFinish, "StartAnimateOutFinish" }, // 3719608661
		{ &Z_Construct_UFunction_ALineActorAnswer_StartAnimateRotate, "StartAnimateRotate" }, // 1003475655
		{ &Z_Construct_UFunction_ALineActorAnswer_UpdateVisibility, "UpdateVisibility" }, // 1387776731
		{ &Z_Construct_UFunction_ALineActorAnswer_wrong, "wrong" }, // 2108490768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineActorAnswer.h" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion1 = { "TextQuestion1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextQuestion1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1 = { "TextAnswer1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswer1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH1 = { "TextAnswerH1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswerH1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline1 = { "TextUnderline1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextUnderline1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion2 = { "TextQuestion2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextQuestion2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2 = { "TextAnswer2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswer2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH2 = { "TextAnswerH2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswerH2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline2 = { "TextUnderline2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextUnderline2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1NoteSymbol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "Comment", "// UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = \"true\"))\n// class UStaticMeshComponent *PlaneBlur2;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = \"true\"))\nclass UStaticMeshComponent *PlaneBlur2;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1NoteSymbol = { "TextAnswer1NoteSymbol", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswer1NoteSymbol), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1NoteSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1NoteSymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2NoteSymbol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineActorAnswer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2NoteSymbol = { "TextAnswer2NoteSymbol", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, TextAnswer2NoteSymbol), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2NoteSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2NoteSymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "Comment", "/** Grid that owns us */" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "Grid that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, OwningGrid), Z_Construct_UClass_ASingProjectBlockGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// UPROPERTY()\n// class UMaterial* RedMaterial;\n" },
		{ "ModuleRelativePath", "LineActorAnswer.h" },
		{ "ToolTip", "UPROPERTY()\nclass UMaterial* RedMaterial;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineActorAnswer, Multiplier), METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_Multiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineActorAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextQuestion2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswerH2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextUnderline2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer1NoteSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_TextAnswer2NoteSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineActorAnswer_Statics::NewProp_Multiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineActorAnswer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineActorAnswer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineActorAnswer_Statics::ClassParams = {
		&ALineActorAnswer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALineActorAnswer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineActorAnswer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineActorAnswer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineActorAnswer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineActorAnswer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineActorAnswer, 1140423958);
	template<> SINGPROJECT_API UClass* StaticClass<ALineActorAnswer>()
	{
		return ALineActorAnswer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineActorAnswer(Z_Construct_UClass_ALineActorAnswer, &ALineActorAnswer::StaticClass, TEXT("/Script/SingProject"), TEXT("ALineActorAnswer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineActorAnswer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
