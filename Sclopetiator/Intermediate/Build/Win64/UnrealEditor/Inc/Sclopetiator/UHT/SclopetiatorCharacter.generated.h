// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SclopetiatorCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCLOPETIATOR_SclopetiatorCharacter_generated_h
#error "SclopetiatorCharacter.generated.h already included, missing '#pragma once' in SclopetiatorCharacter.h"
#endif
#define SCLOPETIATOR_SclopetiatorCharacter_generated_h

#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_21_DELEGATE \
SCLOPETIATOR_API void FOnHealthUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdatedSignature, int32 newHealth);


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HealthModified_Implementation(int32 DMG); \
	virtual void UpdateLuck_Implementation(float NewLuck); \
	virtual void UpdateMovement_Implementation(float NewSpeed); \
	virtual void UpdateHealth_Implementation(int32 NewHealth); \
	virtual void ScorePointsModified_Implementation(int32 IncomingScorePoints); \
	DECLARE_FUNCTION(execHealthModified); \
	DECLARE_FUNCTION(execUpdateLuck); \
	DECLARE_FUNCTION(execUpdateMovement); \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execScorePointsModified);


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_CALLBACK_WRAPPERS
#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASclopetiatorCharacter(); \
	friend struct Z_Construct_UClass_ASclopetiatorCharacter_Statics; \
public: \
	DECLARE_CLASS(ASclopetiatorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sclopetiator"), NO_API) \
	DECLARE_SERIALIZER(ASclopetiatorCharacter)


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASclopetiatorCharacter(ASclopetiatorCharacter&&); \
	ASclopetiatorCharacter(const ASclopetiatorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASclopetiatorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASclopetiatorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASclopetiatorCharacter) \
	NO_API virtual ~ASclopetiatorCharacter();


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_25_PROLOG
#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_CALLBACK_WRAPPERS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCLOPETIATOR_API UClass* StaticClass<class ASclopetiatorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
