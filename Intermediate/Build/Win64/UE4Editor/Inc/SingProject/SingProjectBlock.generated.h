// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef SINGPROJECT_SingProjectBlock_generated_h
#error "SingProjectBlock.generated.h already included, missing '#pragma once' in SingProjectBlock.h"
#endif
#define SINGPROJECT_SingProjectBlock_generated_h

#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_SPARSE_DATA
#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingProjectBlock(); \
	friend struct Z_Construct_UClass_ASingProjectBlock_Statics; \
public: \
	DECLARE_CLASS(ASingProjectBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), SINGPROJECT_API) \
	DECLARE_SERIALIZER(ASingProjectBlock)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASingProjectBlock(); \
	friend struct Z_Construct_UClass_ASingProjectBlock_Statics; \
public: \
	DECLARE_CLASS(ASingProjectBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), SINGPROJECT_API) \
	DECLARE_SERIALIZER(ASingProjectBlock)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SINGPROJECT_API ASingProjectBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingProjectBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SINGPROJECT_API, ASingProjectBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingProjectBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SINGPROJECT_API ASingProjectBlock(ASingProjectBlock&&); \
	SINGPROJECT_API ASingProjectBlock(const ASingProjectBlock&); \
public:


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SINGPROJECT_API ASingProjectBlock(ASingProjectBlock&&); \
	SINGPROJECT_API ASingProjectBlock(const ASingProjectBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SINGPROJECT_API, ASingProjectBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingProjectBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingProjectBlock)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ASingProjectBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ASingProjectBlock, BlockMesh); }


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_10_PROLOG
#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_RPC_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_INCLASS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_INCLASS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGPROJECT_API UClass* StaticClass<class ASingProjectBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
