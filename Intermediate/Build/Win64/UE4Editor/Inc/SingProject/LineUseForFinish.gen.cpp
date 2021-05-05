// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingProject/LineUseForFinish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineUseForFinish() {}
// Cross Module References
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineUseForFinish_NoRegister();
	SINGPROJECT_API UClass* Z_Construct_UClass_ALineUseForFinish();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SingProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALineUseForFinish::execSetFloatScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatScale(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetupAttachmentProp)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ParentRoot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachmentProp(Z_Param_ParentRoot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetFloatingStartLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatingStartLine(Z_Param_top);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetItemPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_newPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemPosition(Z_Param_newPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetLyricsLineResultImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FQuestion);
		P_GET_PROPERTY(FStrProperty,Z_Param_FUrl);
		P_GET_UBOOL(Z_Param_isRight);
		P_GET_OBJECT(UMaterial,Z_Param_answerMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLyricsLineResultImage(Z_Param_FQuestion,Z_Param_FUrl,Z_Param_isRight,Z_Param_answerMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetLyricsLineResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fQuestion);
		P_GET_PROPERTY(FStrProperty,Z_Param_fAnswer);
		P_GET_OBJECT(UMaterial,Z_Param_pFrontMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_pBevelMaterial);
		P_GET_OBJECT(UMaterial,Z_Param_pExtruedMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAnswerLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLyricsLineResult(Z_Param_fQuestion,Z_Param_fAnswer,Z_Param_pFrontMaterial,Z_Param_pBevelMaterial,Z_Param_pExtruedMaterial,Z_Param_fAnswerLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALineUseForFinish::execSetURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURL(Z_Param__url);
		P_NATIVE_END;
	}
	static FName NAME_ALineUseForFinish_StartDownload = FName(TEXT("StartDownload"));
	void ALineUseForFinish::StartDownload()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALineUseForFinish_StartDownload),NULL);
	}
	void ALineUseForFinish::StaticRegisterNativesALineUseForFinish()
	{
		UClass* Class = ALineUseForFinish::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &ALineUseForFinish::execReset },
			{ "SetFloatingStartLine", &ALineUseForFinish::execSetFloatingStartLine },
			{ "SetFloatScale", &ALineUseForFinish::execSetFloatScale },
			{ "SetItemPosition", &ALineUseForFinish::execSetItemPosition },
			{ "SetLyricsLineResult", &ALineUseForFinish::execSetLyricsLineResult },
			{ "SetLyricsLineResultImage", &ALineUseForFinish::execSetLyricsLineResultImage },
			{ "SetupAttachmentProp", &ALineUseForFinish::execSetupAttachmentProp },
			{ "SetURL", &ALineUseForFinish::execSetURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALineUseForFinish_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reset" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics
	{
		struct LineUseForFinish_eventSetFloatingStartLine_Parms
		{
			float top;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetFloatingStartLine_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::NewProp_top,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetFloatingStartLine" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetFloatingStartLine", nullptr, nullptr, sizeof(LineUseForFinish_eventSetFloatingStartLine_Parms), Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics
	{
		struct LineUseForFinish_eventSetFloatScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetFloatScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetFloatScale" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetFloatScale", nullptr, nullptr, sizeof(LineUseForFinish_eventSetFloatScale_Parms), Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetFloatScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetFloatScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics
	{
		struct LineUseForFinish_eventSetItemPosition_Parms
		{
			FVector newPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::NewProp_newPosition = { "newPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetItemPosition_Parms, newPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::NewProp_newPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetItemPosition" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetItemPosition", nullptr, nullptr, sizeof(LineUseForFinish_eventSetItemPosition_Parms), Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetItemPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetItemPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics
	{
		struct LineUseForFinish_eventSetLyricsLineResult_Parms
		{
			FString fQuestion;
			FString fAnswer;
			UMaterial* pFrontMaterial;
			UMaterial* pBevelMaterial;
			UMaterial* pExtruedMaterial;
			float fAnswerLeft;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fQuestion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fAnswer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pFrontMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pBevelMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pExtruedMaterial;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAnswerLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fQuestion = { "fQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, fQuestion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fAnswer = { "fAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, fAnswer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pFrontMaterial = { "pFrontMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, pFrontMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pBevelMaterial = { "pBevelMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, pBevelMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pExtruedMaterial = { "pExtruedMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, pExtruedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fAnswerLeft = { "fAnswerLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResult_Parms, fAnswerLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pFrontMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pBevelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_pExtruedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::NewProp_fAnswerLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetLyricsLineResult" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetLyricsLineResult", nullptr, nullptr, sizeof(LineUseForFinish_eventSetLyricsLineResult_Parms), Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics
	{
		struct LineUseForFinish_eventSetLyricsLineResultImage_Parms
		{
			FString FQuestion;
			FString FUrl;
			bool isRight;
			UMaterial* answerMaterial;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FQuestion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FUrl;
		static void NewProp_isRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_answerMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_FQuestion = { "FQuestion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResultImage_Parms, FQuestion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_FUrl = { "FUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResultImage_Parms, FUrl), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_isRight_SetBit(void* Obj)
	{
		((LineUseForFinish_eventSetLyricsLineResultImage_Parms*)Obj)->isRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_isRight = { "isRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LineUseForFinish_eventSetLyricsLineResultImage_Parms), &Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_isRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_answerMaterial = { "answerMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetLyricsLineResultImage_Parms, answerMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_FQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_FUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_isRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::NewProp_answerMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetLyricsLineResultImage" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetLyricsLineResultImage", nullptr, nullptr, sizeof(LineUseForFinish_eventSetLyricsLineResultImage_Parms), Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics
	{
		struct LineUseForFinish_eventSetupAttachmentProp_Parms
		{
			USceneComponent* ParentRoot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::NewProp_ParentRoot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::NewProp_ParentRoot = { "ParentRoot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetupAttachmentProp_Parms, ParentRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::NewProp_ParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::NewProp_ParentRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::NewProp_ParentRoot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetupAttachmentProp" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetupAttachmentProp", nullptr, nullptr, sizeof(LineUseForFinish_eventSetupAttachmentProp_Parms), Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics
	{
		struct LineUseForFinish_eventSetURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::NewProp__url = { "_url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LineUseForFinish_eventSetURL_Parms, _url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::NewProp__url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetURL" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "SetURL", nullptr, nullptr, sizeof(LineUseForFinish_eventSetURL_Parms), Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_SetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_SetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "StartDownload" },
		{ "Comment", "// UFUNCTION(Category=SetURL, BlueprintCallable)\n// void SetImageVisibility(bool value);\n//BlueprintCallable\n" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
		{ "ToolTip", "UFUNCTION(Category=SetURL, BlueprintCallable)\nvoid SetImageVisibility(bool value);\nBlueprintCallable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALineUseForFinish, nullptr, "StartDownload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALineUseForFinish_StartDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALineUseForFinish_StartDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALineUseForFinish_NoRegister()
	{
		return ALineUseForFinish::StaticClass();
	}
	struct Z_Construct_UClass_ALineUseForFinish_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextQuestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextQuestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneAnswer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineUseForFinish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALineUseForFinish_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALineUseForFinish_Reset, "Reset" }, // 3124286091
		{ &Z_Construct_UFunction_ALineUseForFinish_SetFloatingStartLine, "SetFloatingStartLine" }, // 2008023037
		{ &Z_Construct_UFunction_ALineUseForFinish_SetFloatScale, "SetFloatScale" }, // 863256795
		{ &Z_Construct_UFunction_ALineUseForFinish_SetItemPosition, "SetItemPosition" }, // 3205784708
		{ &Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResult, "SetLyricsLineResult" }, // 3157358023
		{ &Z_Construct_UFunction_ALineUseForFinish_SetLyricsLineResultImage, "SetLyricsLineResultImage" }, // 3269904128
		{ &Z_Construct_UFunction_ALineUseForFinish_SetupAttachmentProp, "SetupAttachmentProp" }, // 561617868
		{ &Z_Construct_UFunction_ALineUseForFinish_SetURL, "SetURL" }, // 4034243902
		{ &Z_Construct_UFunction_ALineUseForFinish_StartDownload, "StartDownload" }, // 2066842115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineUseForFinish.h" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextQuestion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineUseForFinish" },
		{ "Comment", "//** Text component for the score */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
		{ "ToolTip", "/ Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextQuestion = { "TextQuestion", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, TextQuestion), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextQuestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextQuestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextAnswer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LineUseForFinish" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextAnswer = { "TextAnswer", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, TextAnswer), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_BlockAnswer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_BlockAnswer = { "BlockAnswer", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, BlockAnswer), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_BlockAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_BlockAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_PlaneAnswer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_PlaneAnswer = { "PlaneAnswer", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, PlaneAnswer), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_PlaneAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_PlaneAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_url_MetaData[] = {
		{ "Category", "URLFrom" },
		{ "ModuleRelativePath", "LineUseForFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALineUseForFinish, url), METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineUseForFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextQuestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_TextAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_BlockAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_PlaneAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineUseForFinish_Statics::NewProp_url,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineUseForFinish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineUseForFinish>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineUseForFinish_Statics::ClassParams = {
		&ALineUseForFinish::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALineUseForFinish_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineUseForFinish_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineUseForFinish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineUseForFinish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineUseForFinish_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineUseForFinish, 3655011313);
	template<> SINGPROJECT_API UClass* StaticClass<ALineUseForFinish>()
	{
		return ALineUseForFinish::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineUseForFinish(Z_Construct_UClass_ALineUseForFinish, &ALineUseForFinish::StaticClass, TEXT("/Script/SingProject"), TEXT("ALineUseForFinish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineUseForFinish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
