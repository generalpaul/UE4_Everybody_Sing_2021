// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/BoxImageQuestion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxImageQuestion() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageQuestion_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageQuestion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxGridActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxImageQuestion::execPassRotationTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassRotationTimeline(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execStartAnimateOutFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateOutFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execPassTimelineOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineOut(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execStartAnimateFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execPassTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimeline(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execSetValueLineOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueLineOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execPassTimelineOutLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineOutLine(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execStartAnimateFinishLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnimateFinishLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageQuestion::execPassTimelineLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineLine(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_ABoxImageQuestion_StartAnimate = FName(TEXT("StartAnimate"));
	void ABoxImageQuestion::StartAnimate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageQuestion_StartAnimate),NULL);
	}
	static FName NAME_ABoxImageQuestion_StartAnimateLine = FName(TEXT("StartAnimateLine"));
	void ABoxImageQuestion::StartAnimateLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageQuestion_StartAnimateLine),NULL);
	}
	static FName NAME_ABoxImageQuestion_StartAnimateOut = FName(TEXT("StartAnimateOut"));
	void ABoxImageQuestion::StartAnimateOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageQuestion_StartAnimateOut),NULL);
	}
	static FName NAME_ABoxImageQuestion_StartAnimateOutLine = FName(TEXT("StartAnimateOutLine"));
	void ABoxImageQuestion::StartAnimateOutLine()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageQuestion_StartAnimateOutLine),NULL);
	}
	static FName NAME_ABoxImageQuestion_StartAnimateRotate = FName(TEXT("StartAnimateRotate"));
	void ABoxImageQuestion::StartAnimateRotate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageQuestion_StartAnimateRotate),NULL);
	}
	void ABoxImageQuestion::StaticRegisterNativesABoxImageQuestion()
	{
		UClass* Class = ABoxImageQuestion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PassRotationTimeline", &ABoxImageQuestion::execPassRotationTimeline },
			{ "PassTimeline", &ABoxImageQuestion::execPassTimeline },
			{ "PassTimelineLine", &ABoxImageQuestion::execPassTimelineLine },
			{ "PassTimelineOut", &ABoxImageQuestion::execPassTimelineOut },
			{ "PassTimelineOutLine", &ABoxImageQuestion::execPassTimelineOutLine },
			{ "SetValueLineOut", &ABoxImageQuestion::execSetValueLineOut },
			{ "StartAnimateFinish", &ABoxImageQuestion::execStartAnimateFinish },
			{ "StartAnimateFinishLine", &ABoxImageQuestion::execStartAnimateFinishLine },
			{ "StartAnimateOutFinish", &ABoxImageQuestion::execStartAnimateOutFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics
	{
		struct BoxImageQuestion_eventPassRotationTimeline_Parms
		{
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageQuestion_eventPassRotationTimeline_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassRotationTimeline" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "PassRotationTimeline", nullptr, nullptr, sizeof(BoxImageQuestion_eventPassRotationTimeline_Parms), Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics
	{
		struct BoxImageQuestion_eventPassTimeline_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageQuestion_eventPassTimeline_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimeline" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "PassTimeline", nullptr, nullptr, sizeof(BoxImageQuestion_eventPassTimeline_Parms), Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_PassTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_PassTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics
	{
		struct BoxImageQuestion_eventPassTimelineLine_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageQuestion_eventPassTimelineLine_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineLine" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "PassTimelineLine", nullptr, nullptr, sizeof(BoxImageQuestion_eventPassTimelineLine_Parms), Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics
	{
		struct BoxImageQuestion_eventPassTimelineOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageQuestion_eventPassTimelineOut_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineOut" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "PassTimelineOut", nullptr, nullptr, sizeof(BoxImageQuestion_eventPassTimelineOut_Parms), Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics
	{
		struct BoxImageQuestion_eventPassTimelineOutLine_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageQuestion_eventPassTimelineOutLine_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineOutLine" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "PassTimelineOutLine", nullptr, nullptr, sizeof(BoxImageQuestion_eventPassTimelineOutLine_Parms), Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineOutLine" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "SetValueLineOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimate" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinish" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateFinishLine" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateFinishLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimate" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOut" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOutFinish" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateOutFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateOut" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateOutLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartAnimateRotate" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageQuestion, nullptr, "StartAnimateRotate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxImageQuestion_NoRegister()
	{
		return ABoxImageQuestion::StaticClass();
	}
	struct Z_Construct_UClass_ABoxImageQuestion_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestion2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestion2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine1Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine1Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLine2Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextLine2Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxImageQuestion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxImageQuestion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxImageQuestion_PassRotationTimeline, "PassRotationTimeline" }, // 870803688
		{ &Z_Construct_UFunction_ABoxImageQuestion_PassTimeline, "PassTimeline" }, // 2233628228
		{ &Z_Construct_UFunction_ABoxImageQuestion_PassTimelineLine, "PassTimelineLine" }, // 454059660
		{ &Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOut, "PassTimelineOut" }, // 973280429
		{ &Z_Construct_UFunction_ABoxImageQuestion_PassTimelineOutLine, "PassTimelineOutLine" }, // 1478672385
		{ &Z_Construct_UFunction_ABoxImageQuestion_SetValueLineOut, "SetValueLineOut" }, // 3274955909
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimate, "StartAnimate" }, // 2985761084
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinish, "StartAnimateFinish" }, // 3830370653
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateFinishLine, "StartAnimateFinishLine" }, // 2527735252
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateLine, "StartAnimateLine" }, // 2006925998
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOut, "StartAnimateOut" }, // 1104503045
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutFinish, "StartAnimateOutFinish" }, // 3871917526
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateOutLine, "StartAnimateOutLine" }, // 601192214
		{ &Z_Construct_UFunction_ABoxImageQuestion_StartAnimateRotate, "StartAnimateRotate" }, // 2915314433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoxImageQuestion.h" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion1 = { "TextQuestion1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextQuestion1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion2 = { "TextQuestion2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextQuestion2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1 = { "TextLine1", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextLine1), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2 = { "TextLine2", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextLine2), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1Out_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1Out = { "TextLine1Out", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextLine1Out), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2Out_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageQuestion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2Out = { "TextLine2Out", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, TextLine2Out), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "Comment", "/** Grid that owns us */" },
		{ "ModuleRelativePath", "BoxImageQuestion.h" },
		{ "ToolTip", "Grid that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageQuestion, OwningGrid), Z_Construct_UClass_ABoxGridActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxImageQuestion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextQuestion2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine1Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_TextLine2Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageQuestion_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxImageQuestion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxImageQuestion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxImageQuestion_Statics::ClassParams = {
		&ABoxImageQuestion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxImageQuestion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxImageQuestion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageQuestion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxImageQuestion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxImageQuestion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxImageQuestion, 154336113);
	template<> SINGPROJECT_API UClass* StaticClass<ABoxImageQuestion>()
	{
		return ABoxImageQuestion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxImageQuestion(Z_Construct_UClass_ABoxImageQuestion, &ABoxImageQuestion::StaticClass, TEXT("/Script/SingProject"), TEXT("ABoxImageQuestion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxImageQuestion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
