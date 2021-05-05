// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SINGPROJECT_BoxImageActor_generated_h
#error "BoxImageActor.generated.h already included, missing '#pragma once' in BoxImageActor.h"
#endif
#define SINGPROJECT_BoxImageActor_generated_h

#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_SPARSE_DATA
#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAnswer); \
	DECLARE_FUNCTION(execTimelineShowImageAnswer); \
	DECLARE_FUNCTION(execHideBorders); \
	DECLARE_FUNCTION(execStartRotateImageFinish); \
	DECLARE_FUNCTION(execStartPlayFinish); \
	DECLARE_FUNCTION(execPassRotationTimelineOut); \
	DECLARE_FUNCTION(execPassTimelineOut); \
	DECLARE_FUNCTION(execPassRotationTimeline); \
	DECLARE_FUNCTION(execPassTimeline); \
	DECLARE_FUNCTION(execPassTimelineRotateImage); \
	DECLARE_FUNCTION(execSetDuplicateImage); \
	DECLARE_FUNCTION(execSetImageLinePosition); \
	DECLARE_FUNCTION(execSetURLVideo); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execSetScaleWidth);


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnswer); \
	DECLARE_FUNCTION(execTimelineShowImageAnswer); \
	DECLARE_FUNCTION(execHideBorders); \
	DECLARE_FUNCTION(execStartRotateImageFinish); \
	DECLARE_FUNCTION(execStartPlayFinish); \
	DECLARE_FUNCTION(execPassRotationTimelineOut); \
	DECLARE_FUNCTION(execPassTimelineOut); \
	DECLARE_FUNCTION(execPassRotationTimeline); \
	DECLARE_FUNCTION(execPassTimeline); \
	DECLARE_FUNCTION(execPassTimelineRotateImage); \
	DECLARE_FUNCTION(execSetDuplicateImage); \
	DECLARE_FUNCTION(execSetImageLinePosition); \
	DECLARE_FUNCTION(execSetURLVideo); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execSetScaleWidth);


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_EVENT_PARMS
#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_CALLBACK_WRAPPERS
#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxImageActor(); \
	friend struct Z_Construct_UClass_ABoxImageActor_Statics; \
public: \
	DECLARE_CLASS(ABoxImageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxImageActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABoxImageActor(); \
	friend struct Z_Construct_UClass_ABoxImageActor_Statics; \
public: \
	DECLARE_CLASS(ABoxImageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxImageActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxImageActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxImageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxImageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxImageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxImageActor(ABoxImageActor&&); \
	NO_API ABoxImageActor(const ABoxImageActor&); \
public:


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxImageActor(ABoxImageActor&&); \
	NO_API ABoxImageActor(const ABoxImageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxImageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxImageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxImageActor)


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ABoxImageActor, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__DummyRootMeshIn() { return STRUCT_OFFSET(ABoxImageActor, DummyRootMeshIn); } \
	FORCEINLINE static uint32 __PPO__DummyRootMeshOut() { return STRUCT_OFFSET(ABoxImageActor, DummyRootMeshOut); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ABoxImageActor, BlockMesh); } \
	FORCEINLINE static uint32 __PPO__BlockOutMesh() { return STRUCT_OFFSET(ABoxImageActor, BlockOutMesh); } \
	FORCEINLINE static uint32 __PPO__PlaneRed() { return STRUCT_OFFSET(ABoxImageActor, PlaneRed); } \
	FORCEINLINE static uint32 __PPO__PlaneGreen() { return STRUCT_OFFSET(ABoxImageActor, PlaneGreen); } \
	FORCEINLINE static uint32 __PPO__PlaneVideo() { return STRUCT_OFFSET(ABoxImageActor, PlaneVideo); }


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_11_PROLOG \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_EVENT_PARMS


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_RPC_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_CALLBACK_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_INCLASS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_SPARSE_DATA \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_CALLBACK_WRAPPERS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_INCLASS_NO_PURE_DECLS \
	UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGPROJECT_API UClass* StaticClass<class ABoxImageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Everybody_Sing_2021_Source_SingProject_BoxImageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
