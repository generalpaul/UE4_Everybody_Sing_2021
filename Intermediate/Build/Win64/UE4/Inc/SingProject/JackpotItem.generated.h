// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SINGPROJECT_JackpotItem_generated_h
#error "JackpotItem.generated.h already included, missing '#pragma once' in JackpotItem.h"
#endif
#define SINGPROJECT_JackpotItem_generated_h

#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_SPARSE_DATA
#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAll); \
	DECLARE_FUNCTION(execIntroFinish);


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAll); \
	DECLARE_FUNCTION(execIntroFinish);


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_EVENT_PARMS
#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_CALLBACK_WRAPPERS
#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJackpotItem(); \
	friend struct Z_Construct_UClass_AJackpotItem_Statics; \
public: \
	DECLARE_CLASS(AJackpotItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(AJackpotItem)


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAJackpotItem(); \
	friend struct Z_Construct_UClass_AJackpotItem_Statics; \
public: \
	DECLARE_CLASS(AJackpotItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(AJackpotItem)


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJackpotItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJackpotItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJackpotItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJackpotItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJackpotItem(AJackpotItem&&); \
	NO_API AJackpotItem(const AJackpotItem&); \
public:


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJackpotItem(AJackpotItem&&); \
	NO_API AJackpotItem(const AJackpotItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJackpotItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJackpotItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJackpotItem)


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_PRIVATE_PROPERTY_OFFSET
#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_11_PROLOG \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_EVENT_PARMS


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_RPC_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_CALLBACK_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_INCLASS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_CALLBACK_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_INCLASS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGPROJECT_API UClass* StaticClass<class AJackpotItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Everybody_Sing_2021_Source_SingProject_Jackpot_JackpotItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
