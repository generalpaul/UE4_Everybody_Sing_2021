// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SINGPROJECT_BoxGridActor_generated_h
#error "BoxGridActor.generated.h already included, missing '#pragma once' in BoxGridActor.h"
#endif
#define SINGPROJECT_BoxGridActor_generated_h

#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_SPARSE_DATA
#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartAnimateFinishMainLine); \
	DECLARE_FUNCTION(execStartAnimateFinishMain); \
	DECLARE_FUNCTION(execGetSplineLineBoxLocation); \
	DECLARE_FUNCTION(execGetSplineLineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocationBottomToUp); \
	DECLARE_FUNCTION(execGetSplineLocationTopToLowCenter); \
	DECLARE_FUNCTION(execGetSplineLocationTopToLow); \
	DECLARE_FUNCTION(execGetSplineBoxLocation); \
	DECLARE_FUNCTION(execVaRestResponse);


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartAnimateFinishMainLine); \
	DECLARE_FUNCTION(execStartAnimateFinishMain); \
	DECLARE_FUNCTION(execGetSplineLineBoxLocation); \
	DECLARE_FUNCTION(execGetSplineLineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocationOut); \
	DECLARE_FUNCTION(execGetSplineLocationBottomToUp); \
	DECLARE_FUNCTION(execGetSplineLocationTopToLowCenter); \
	DECLARE_FUNCTION(execGetSplineLocationTopToLow); \
	DECLARE_FUNCTION(execGetSplineBoxLocation); \
	DECLARE_FUNCTION(execVaRestResponse);


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxGridActor(); \
	friend struct Z_Construct_UClass_ABoxGridActor_Statics; \
public: \
	DECLARE_CLASS(ABoxGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxGridActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABoxGridActor(); \
	friend struct Z_Construct_UClass_ABoxGridActor_Statics; \
public: \
	DECLARE_CLASS(ABoxGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxGridActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxGridActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxGridActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxGridActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxGridActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxGridActor(ABoxGridActor&&); \
	NO_API ABoxGridActor(const ABoxGridActor&); \
public:


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxGridActor(ABoxGridActor&&); \
	NO_API ABoxGridActor(const ABoxGridActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxGridActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxGridActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxGridActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ABoxGridActor, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__SplineTopToLow() { return STRUCT_OFFSET(ABoxGridActor, SplineTopToLow); } \
	FORCEINLINE static uint32 __PPO__SplineTopToLowCenter() { return STRUCT_OFFSET(ABoxGridActor, SplineTopToLowCenter); } \
	FORCEINLINE static uint32 __PPO__SplineBottomToUp() { return STRUCT_OFFSET(ABoxGridActor, SplineBottomToUp); } \
	FORCEINLINE static uint32 __PPO__SplineRightToCenter() { return STRUCT_OFFSET(ABoxGridActor, SplineRightToCenter); } \
	FORCEINLINE static uint32 __PPO__SplineCenterToOut() { return STRUCT_OFFSET(ABoxGridActor, SplineCenterToOut); } \
	FORCEINLINE static uint32 __PPO__SplineLineRightToCenter() { return STRUCT_OFFSET(ABoxGridActor, SplineLineRightToCenter); } \
	FORCEINLINE static uint32 __PPO__SplineLineCenterToOut() { return STRUCT_OFFSET(ABoxGridActor, SplineLineCenterToOut); }


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_15_PROLOG
#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_RPC_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_INCLASS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_INCLASS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGPROJECT_API UClass* StaticClass<class ABoxGridActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Everybody_Sing_2021_Source_SingProject_BoxGridActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
