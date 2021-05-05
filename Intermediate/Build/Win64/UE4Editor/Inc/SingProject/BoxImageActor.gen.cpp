// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/BoxImageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxImageActor() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageActor_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxImageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SINGPROJECT_API UClass* Z_Construct_UClass_ABoxGridActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxImageActor::execSetAnswer)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnswer(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execTimelineShowImageAnswer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineShowImageAnswer(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execHideBorders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBorders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execStartRotateImageFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRotateImageFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execStartPlayFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlayFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execPassRotationTimelineOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassRotationTimelineOut(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execPassTimelineOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineOut(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execPassRotationTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassRotationTimeline(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execPassTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimeline(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execPassTimelineRotateImage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PassTimelineRotateImage(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execSetDuplicateImage)
	{
		P_GET_UBOOL(Z_Param_hideCurrentImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDuplicateImage(Z_Param_hideCurrentImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execSetImageLinePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IntImageLine);
		P_GET_PROPERTY(FFloatProperty,Z_Param_floatImageLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImageLinePosition(Z_Param_IntImageLine,Z_Param_floatImageLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execSetURLVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURLVideo(Z_Param__url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execSetURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURL(Z_Param__url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxImageActor::execSetScaleWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleWidth(Z_Param_scale);
		P_NATIVE_END;
	}
	static FName NAME_ABoxImageActor_ShowImageAnswer = FName(TEXT("ShowImageAnswer"));
	void ABoxImageActor::ShowImageAnswer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_ShowImageAnswer),NULL);
	}
	static FName NAME_ABoxImageActor_StartDownload = FName(TEXT("StartDownload"));
	void ABoxImageActor::StartDownload()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartDownload),NULL);
	}
	static FName NAME_ABoxImageActor_StartDownloadOut = FName(TEXT("StartDownloadOut"));
	void ABoxImageActor::StartDownloadOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartDownloadOut),NULL);
	}
	static FName NAME_ABoxImageActor_StartPlay = FName(TEXT("StartPlay"));
	void ABoxImageActor::StartPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartPlay),NULL);
	}
	static FName NAME_ABoxImageActor_StartPlayOut = FName(TEXT("StartPlayOut"));
	void ABoxImageActor::StartPlayOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartPlayOut),NULL);
	}
	static FName NAME_ABoxImageActor_StartPlayRotation = FName(TEXT("StartPlayRotation"));
	void ABoxImageActor::StartPlayRotation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartPlayRotation),NULL);
	}
	static FName NAME_ABoxImageActor_StartPlayRotationOut = FName(TEXT("StartPlayRotationOut"));
	void ABoxImageActor::StartPlayRotationOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartPlayRotationOut),NULL);
	}
	static FName NAME_ABoxImageActor_StartRotateImage = FName(TEXT("StartRotateImage"));
	void ABoxImageActor::StartRotateImage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxImageActor_StartRotateImage),NULL);
	}
	void ABoxImageActor::StaticRegisterNativesABoxImageActor()
	{
		UClass* Class = ABoxImageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideBorders", &ABoxImageActor::execHideBorders },
			{ "PassRotationTimeline", &ABoxImageActor::execPassRotationTimeline },
			{ "PassRotationTimelineOut", &ABoxImageActor::execPassRotationTimelineOut },
			{ "PassTimeline", &ABoxImageActor::execPassTimeline },
			{ "PassTimelineOut", &ABoxImageActor::execPassTimelineOut },
			{ "PassTimelineRotateImage", &ABoxImageActor::execPassTimelineRotateImage },
			{ "SetAnswer", &ABoxImageActor::execSetAnswer },
			{ "SetDuplicateImage", &ABoxImageActor::execSetDuplicateImage },
			{ "SetImageLinePosition", &ABoxImageActor::execSetImageLinePosition },
			{ "SetScaleWidth", &ABoxImageActor::execSetScaleWidth },
			{ "SetURL", &ABoxImageActor::execSetURL },
			{ "SetURLVideo", &ABoxImageActor::execSetURLVideo },
			{ "StartPlayFinish", &ABoxImageActor::execStartPlayFinish },
			{ "StartRotateImageFinish", &ABoxImageActor::execStartRotateImageFinish },
			{ "TimelineShowImageAnswer", &ABoxImageActor::execTimelineShowImageAnswer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartRotateImageFinish" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "HideBorders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_HideBorders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_HideBorders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics
	{
		struct BoxImageActor_eventPassRotationTimeline_Parms
		{
			float x;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventPassRotationTimeline_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassRotationTimeline" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "PassRotationTimeline", nullptr, nullptr, sizeof(BoxImageActor_eventPassRotationTimeline_Parms), Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics
	{
		struct BoxImageActor_eventPassRotationTimelineOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventPassRotationTimelineOut_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassRotationTimelineOut" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "PassRotationTimelineOut", nullptr, nullptr, sizeof(BoxImageActor_eventPassRotationTimelineOut_Parms), Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics
	{
		struct BoxImageActor_eventPassTimeline_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventPassTimeline_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimeline" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "PassTimeline", nullptr, nullptr, sizeof(BoxImageActor_eventPassTimeline_Parms), Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_PassTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_PassTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics
	{
		struct BoxImageActor_eventPassTimelineOut_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventPassTimelineOut_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineOut" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "PassTimelineOut", nullptr, nullptr, sizeof(BoxImageActor_eventPassTimelineOut_Parms), Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_PassTimelineOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_PassTimelineOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics
	{
		struct BoxImageActor_eventPassTimelineRotateImage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventPassTimelineRotateImage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PassTimelineRotateImage" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "PassTimelineRotateImage", nullptr, nullptr, sizeof(BoxImageActor_eventPassTimelineRotateImage_Parms), Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics
	{
		struct BoxImageActor_eventSetAnswer_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BoxImageActor_eventSetAnswer_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxImageActor_eventSetAnswer_Parms), &Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetAnswer" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetAnswer", nullptr, nullptr, sizeof(BoxImageActor_eventSetAnswer_Parms), Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics
	{
		struct BoxImageActor_eventSetDuplicateImage_Parms
		{
			bool hideCurrentImage;
		};
		static void NewProp_hideCurrentImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hideCurrentImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::NewProp_hideCurrentImage_SetBit(void* Obj)
	{
		((BoxImageActor_eventSetDuplicateImage_Parms*)Obj)->hideCurrentImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::NewProp_hideCurrentImage = { "hideCurrentImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxImageActor_eventSetDuplicateImage_Parms), &Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::NewProp_hideCurrentImage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::NewProp_hideCurrentImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineTimeline" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetDuplicateImage", nullptr, nullptr, sizeof(BoxImageActor_eventSetDuplicateImage_Parms), Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics
	{
		struct BoxImageActor_eventSetImageLinePosition_Parms
		{
			int32 IntImageLine;
			float floatImageLeft;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntImageLine;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_floatImageLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::NewProp_IntImageLine = { "IntImageLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventSetImageLinePosition_Parms, IntImageLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::NewProp_floatImageLeft = { "floatImageLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventSetImageLinePosition_Parms, floatImageLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::NewProp_IntImageLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::NewProp_floatImageLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetImageLinePosition" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetImageLinePosition", nullptr, nullptr, sizeof(BoxImageActor_eventSetImageLinePosition_Parms), Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics
	{
		struct BoxImageActor_eventSetScaleWidth_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventSetScaleWidth_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetScaleWidth" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetScaleWidth", nullptr, nullptr, sizeof(BoxImageActor_eventSetScaleWidth_Parms), Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetScaleWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetScaleWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetURL_Statics
	{
		struct BoxImageActor_eventSetURL_Parms
		{
			FString _url;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::NewProp__url = { "_url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventSetURL_Parms, _url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::NewProp__url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetURL" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetURL", nullptr, nullptr, sizeof(BoxImageActor_eventSetURL_Parms), Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics
	{
		struct BoxImageActor_eventSetURLVideo_Parms
		{
			FString _url;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::NewProp__url = { "_url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventSetURLVideo_Parms, _url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::NewProp__url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetURL" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "SetURLVideo", nullptr, nullptr, sizeof(BoxImageActor_eventSetURLVideo_Parms), Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_SetURLVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_SetURLVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShowImageAnswer" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = PositionOutObject)\n// void PositionOutObject();\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = PositionOutObject)\nvoid PositionOutObject();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "ShowImageAnswer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartDownload" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartDownload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartDownloadOut" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartDownloadOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartDownloadOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartDownloadOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartPlay" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartPlayFinish" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartPlayFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartPlayFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartPlayFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartPlayOut" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartPlayOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartPlayOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartPlayOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartPlayRotation" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartPlayRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartPlayRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartPlayRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartPlayRotation" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartPlayRotationOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartRotateImage" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartRotateImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartRotateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartRotateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartRotateImageFinish" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "StartRotateImageFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics
	{
		struct BoxImageActor_eventTimelineShowImageAnswer_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxImageActor_eventTimelineShowImageAnswer_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimelineShowImageAnswer" },
		{ "Comment", "//BlueprintCallable\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "BlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxImageActor, nullptr, "TimelineShowImageAnswer", nullptr, nullptr, sizeof(BoxImageActor_eventTimelineShowImageAnswer_Parms), Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxImageActor_NoRegister()
	{
		return ABoxImageActor::StaticClass();
	}
	struct Z_Construct_UClass_ABoxImageActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootMeshIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootMeshIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRootMeshOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRootMeshOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockOutMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockOutMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initialPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endingPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endingPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endingPositionForMovingOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endingPositionForMovingOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_urlVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_urlVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxImageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxImageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxImageActor_HideBorders, "HideBorders" }, // 327876802
		{ &Z_Construct_UFunction_ABoxImageActor_PassRotationTimeline, "PassRotationTimeline" }, // 1052110064
		{ &Z_Construct_UFunction_ABoxImageActor_PassRotationTimelineOut, "PassRotationTimelineOut" }, // 1933563175
		{ &Z_Construct_UFunction_ABoxImageActor_PassTimeline, "PassTimeline" }, // 4125616519
		{ &Z_Construct_UFunction_ABoxImageActor_PassTimelineOut, "PassTimelineOut" }, // 2714494772
		{ &Z_Construct_UFunction_ABoxImageActor_PassTimelineRotateImage, "PassTimelineRotateImage" }, // 3897126566
		{ &Z_Construct_UFunction_ABoxImageActor_SetAnswer, "SetAnswer" }, // 2072840262
		{ &Z_Construct_UFunction_ABoxImageActor_SetDuplicateImage, "SetDuplicateImage" }, // 4036489553
		{ &Z_Construct_UFunction_ABoxImageActor_SetImageLinePosition, "SetImageLinePosition" }, // 2116254778
		{ &Z_Construct_UFunction_ABoxImageActor_SetScaleWidth, "SetScaleWidth" }, // 3055258221
		{ &Z_Construct_UFunction_ABoxImageActor_SetURL, "SetURL" }, // 2771096445
		{ &Z_Construct_UFunction_ABoxImageActor_SetURLVideo, "SetURLVideo" }, // 1862530355
		{ &Z_Construct_UFunction_ABoxImageActor_ShowImageAnswer, "ShowImageAnswer" }, // 1746121062
		{ &Z_Construct_UFunction_ABoxImageActor_StartDownload, "StartDownload" }, // 2886171392
		{ &Z_Construct_UFunction_ABoxImageActor_StartDownloadOut, "StartDownloadOut" }, // 1135629458
		{ &Z_Construct_UFunction_ABoxImageActor_StartPlay, "StartPlay" }, // 405048872
		{ &Z_Construct_UFunction_ABoxImageActor_StartPlayFinish, "StartPlayFinish" }, // 2740797188
		{ &Z_Construct_UFunction_ABoxImageActor_StartPlayOut, "StartPlayOut" }, // 4064792847
		{ &Z_Construct_UFunction_ABoxImageActor_StartPlayRotation, "StartPlayRotation" }, // 1732986084
		{ &Z_Construct_UFunction_ABoxImageActor_StartPlayRotationOut, "StartPlayRotationOut" }, // 3709331438
		{ &Z_Construct_UFunction_ABoxImageActor_StartRotateImage, "StartRotateImage" }, // 1558477545
		{ &Z_Construct_UFunction_ABoxImageActor_StartRotateImageFinish, "StartRotateImageFinish" }, // 703084557
		{ &Z_Construct_UFunction_ABoxImageActor_TimelineShowImageAnswer, "TimelineShowImageAnswer" }, // 2052176233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoxImageActor.h" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshIn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshIn = { "DummyRootMeshIn", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, DummyRootMeshIn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshOut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshOut = { "DummyRootMeshOut", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, DummyRootMeshOut), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x00400000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockOutMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockOutMesh = { "BlockOutMesh", nullptr, (EPropertyFlags)0x00400000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, BlockOutMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockOutMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockOutMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneRed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneRed = { "PlaneRed", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, PlaneRed), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneGreen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneGreen = { "PlaneGreen", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, PlaneGreen), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneVideo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxImageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneVideo = { "PlaneVideo", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, PlaneVideo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_IIndex_MetaData[] = {
		{ "Category", "Index" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_IIndex = { "IIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, IIndex), METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_IIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_IIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_initialPosition_MetaData[] = {
		{ "Category", "initialPosition" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_initialPosition = { "initialPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, initialPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_initialPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_initialPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPosition_MetaData[] = {
		{ "Category", "endingPosition" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPosition = { "endingPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, endingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_outPosition_MetaData[] = {
		{ "Category", "outPosition" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_outPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_outPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPositionForMovingOut_MetaData[] = {
		{ "Category", "endingPositionForMovingOut" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPositionForMovingOut = { "endingPositionForMovingOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, endingPositionForMovingOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPositionForMovingOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPositionForMovingOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_url_MetaData[] = {
		{ "Category", "URLFrom" },
		{ "Comment", "// UFUNCTION(Category=MoveToInitialPosition, BlueprintCallable)\n// void MoveToInitialPosition();\n" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
		{ "ToolTip", "UFUNCTION(Category=MoveToInitialPosition, BlueprintCallable)\nvoid MoveToInitialPosition();" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, url), METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_urlVideo_MetaData[] = {
		{ "Category", "URLFrom" },
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_urlVideo = { "urlVideo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, urlVideo), METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_urlVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_urlVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxImageActor_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "BoxImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxImageActor_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxImageActor, OwningGrid), Z_Construct_UClass_ABoxGridActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxImageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_DummyRootMeshOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_BlockOutMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_PlaneVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_IIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_initialPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_outPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_endingPositionForMovingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_urlVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxImageActor_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxImageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxImageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxImageActor_Statics::ClassParams = {
		&ABoxImageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxImageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxImageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxImageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxImageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxImageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxImageActor, 1444908591);
	template<> SINGPROJECT_API UClass* StaticClass<ABoxImageActor>()
	{
		return ABoxImageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxImageActor(Z_Construct_UClass_ABoxImageActor, &ABoxImageActor::StaticClass, TEXT("/Script/SingProject"), TEXT("ABoxImageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxImageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
