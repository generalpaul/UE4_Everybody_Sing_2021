// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SINGPROJECT_SingProjectBlockGrid_generated_h
#error "SingProjectBlockGrid.generated.h already included, missing '#pragma once' in SingProjectBlockGrid.h"
#endif
#define SINGPROJECT_SingProjectBlockGrid_generated_h

#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_SPARSE_DATA
#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartAnimateOutFinishMain); \
	DECLARE_FUNCTION(execStartAnimateFinishMain); \
	DECLARE_FUNCTION(execGetSplineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocation);


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartAnimateOutFinishMain); \
	DECLARE_FUNCTION(execStartAnimateFinishMain); \
	DECLARE_FUNCTION(execGetSplineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocation);


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingProjectBlockGrid(); \
	friend struct Z_Construct_UClass_ASingProjectBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ASingProjectBlockGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), SINGPROJECT_API) \
	DECLARE_SERIALIZER(ASingProjectBlockGrid)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASingProjectBlockGrid(); \
	friend struct Z_Construct_UClass_ASingProjectBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ASingProjectBlockGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), SINGPROJECT_API) \
	DECLARE_SERIALIZER(ASingProjectBlockGrid)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SINGPROJECT_API ASingProjectBlockGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingProjectBlockGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SINGPROJECT_API, ASingProjectBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingProjectBlockGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SINGPROJECT_API ASingProjectBlockGrid(ASingProjectBlockGrid&&); \
	SINGPROJECT_API ASingProjectBlockGrid(const ASingProjectBlockGrid&); \
public:


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SINGPROJECT_API ASingProjectBlockGrid(ASingProjectBlockGrid&&); \
	SINGPROJECT_API ASingProjectBlockGrid(const ASingProjectBlockGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SINGPROJECT_API, ASingProjectBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingProjectBlockGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingProjectBlockGrid)


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ASingProjectBlockGrid, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(ASingProjectBlockGrid, ScoreText); } \
	FORCEINLINE static uint32 __PPO__SplineRightToLeft() { return STRUCT_OFFSET(ASingProjectBlockGrid, SplineRightToLeft); } \
	FORCEINLINE static uint32 __PPO__SplineCenterToOut() { return STRUCT_OFFSET(ASingProjectBlockGrid, SplineCenterToOut); } \
	FORCEINLINE static uint32 __PPO__SplineStraightRightToLeft() { return STRUCT_OFFSET(ASingProjectBlockGrid, SplineStraightRightToLeft); } \
	FORCEINLINE static uint32 __PPO__SplineStraightCenterToOut() { return STRUCT_OFFSET(ASingProjectBlockGrid, SplineStraightCenterToOut); }


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_22_PROLOG
#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_RPC_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_INCLASS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_INCLASS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGPROJECT_API UClass* StaticClass<class ASingProjectBlockGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Everybody_Sing_2021_Source_SingProject_SingProjectBlockGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
