// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VS_StatPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCLOPETIATOR_VS_StatPoint_generated_h
#error "VS_StatPoint.generated.h already included, missing '#pragma once' in VS_StatPoint.h"
#endif
#define SCLOPETIATOR_VS_StatPoint_generated_h

#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void IncrementStatPoints_Implementation(); \
	DECLARE_FUNCTION(execIncrementStatPoints);


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_CALLBACK_WRAPPERS
#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVS_StatPoint(); \
	friend struct Z_Construct_UClass_AVS_StatPoint_Statics; \
public: \
	DECLARE_CLASS(AVS_StatPoint, AVS_BaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sclopetiator"), NO_API) \
	DECLARE_SERIALIZER(AVS_StatPoint)


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVS_StatPoint(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVS_StatPoint(AVS_StatPoint&&); \
	AVS_StatPoint(const AVS_StatPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVS_StatPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVS_StatPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVS_StatPoint) \
	NO_API virtual ~AVS_StatPoint();


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_12_PROLOG
#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_CALLBACK_WRAPPERS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCLOPETIATOR_API UClass* StaticClass<class AVS_StatPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
