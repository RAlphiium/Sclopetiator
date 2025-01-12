// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VS_SclopetiatorGI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCLOPETIATOR_VS_SclopetiatorGI_generated_h
#error "VS_SclopetiatorGI.generated.h already included, missing '#pragma once' in VS_SclopetiatorGI.h"
#endif
#define SCLOPETIATOR_VS_SclopetiatorGI_generated_h

#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterStats_Statics; \
	SCLOPETIATOR_API static class UScriptStruct* StaticStruct();


template<> SCLOPETIATOR_API UScriptStruct* StaticStruct<struct FCharacterStats>();

#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirearmStats_Statics; \
	SCLOPETIATOR_API static class UScriptStruct* StaticStruct();


template<> SCLOPETIATOR_API UScriptStruct* StaticStruct<struct FFirearmStats>();

#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_33_DELEGATE \
SCLOPETIATOR_API void FOnScorePointsModified_DelegateWrapper(const FMulticastScriptDelegate& OnScorePointsModified, int32 NewScorePoints);


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AnyFloatChanges_Implementation(float param1, float param2); \
	virtual bool AnyIntegerChanges_Implementation(int32 param1, int32 param2); \
	virtual bool IsScorePointsValid_Implementation(); \
	virtual bool IsStatPointsValid_Implementation(); \
	virtual bool IsHealthValid_Implementation(); \
	virtual bool CheckScorePoints_Implementation(); \
	virtual bool CheckStatPoints_Implementation(); \
	virtual void DecreaseRifleReloadSpeed_Implementation(); \
	virtual void IncreaseRifleReloadSpeed_Implementation(); \
	virtual void DecreaseRifleDMG_Implementation(); \
	virtual void IncreaseRifleDMG_Implementation(); \
	virtual void DecreaseShotgunReloadSpeed_Implementation(); \
	virtual void IncreaseShotgunReloadSpeed_Implementation(); \
	virtual void DecreaseShotgunDMG_Implementation(); \
	virtual void IncreaseShotgunDMG_Implementation(); \
	virtual void DecreasePistolReloadSpeed_Implementation(); \
	virtual void IncreasePistolReloadSpeed_Implementation(); \
	virtual void DecreasePistolDMG_Implementation(); \
	virtual void IncreasePistolDMG_Implementation(); \
	virtual void DecreasePlayerLuck_Implementation(); \
	virtual void IncreasePlayerLuck_Implementation(); \
	virtual void DecreasePlayerMovement_Implementation(); \
	virtual void IncreasePlayerMovement_Implementation(); \
	virtual void DecrementPlayerHealth_Implementation(); \
	virtual void IncrementPlayerHealth_Implementation(); \
	virtual void DecrementStatPoints_Implementation(); \
	virtual void IncrementStatPoints_Implementation(); \
	virtual void DecreaseScorePoints_Implementation(); \
	virtual void IncreaseScorePoints_Implementation(); \
	virtual void RefreshStatPoints_Implementation(); \
	virtual void RefreshPlayerHealth_Implementation(); \
	virtual void UpdatePlayer_Implementation(); \
	virtual void UpdateVariables_Implementation(); \
	virtual void RewriteStats_Implementation(); \
	DECLARE_FUNCTION(execAnyFloatChanges); \
	DECLARE_FUNCTION(execAnyIntegerChanges); \
	DECLARE_FUNCTION(execIsScorePointsValid); \
	DECLARE_FUNCTION(execIsStatPointsValid); \
	DECLARE_FUNCTION(execIsHealthValid); \
	DECLARE_FUNCTION(execCheckScorePoints); \
	DECLARE_FUNCTION(execCheckStatPoints); \
	DECLARE_FUNCTION(execDecreaseRifleReloadSpeed); \
	DECLARE_FUNCTION(execIncreaseRifleReloadSpeed); \
	DECLARE_FUNCTION(execDecreaseRifleDMG); \
	DECLARE_FUNCTION(execIncreaseRifleDMG); \
	DECLARE_FUNCTION(execDecreaseShotgunReloadSpeed); \
	DECLARE_FUNCTION(execIncreaseShotgunReloadSpeed); \
	DECLARE_FUNCTION(execDecreaseShotgunDMG); \
	DECLARE_FUNCTION(execIncreaseShotgunDMG); \
	DECLARE_FUNCTION(execDecreasePistolReloadSpeed); \
	DECLARE_FUNCTION(execIncreasePistolReloadSpeed); \
	DECLARE_FUNCTION(execDecreasePistolDMG); \
	DECLARE_FUNCTION(execIncreasePistolDMG); \
	DECLARE_FUNCTION(execDecreasePlayerLuck); \
	DECLARE_FUNCTION(execIncreasePlayerLuck); \
	DECLARE_FUNCTION(execDecreasePlayerMovement); \
	DECLARE_FUNCTION(execIncreasePlayerMovement); \
	DECLARE_FUNCTION(execDecrementPlayerHealth); \
	DECLARE_FUNCTION(execIncrementPlayerHealth); \
	DECLARE_FUNCTION(execDecrementStatPoints); \
	DECLARE_FUNCTION(execIncrementStatPoints); \
	DECLARE_FUNCTION(execDecreaseScorePoints); \
	DECLARE_FUNCTION(execIncreaseScorePoints); \
	DECLARE_FUNCTION(execRefreshStatPoints); \
	DECLARE_FUNCTION(execRefreshPlayerHealth); \
	DECLARE_FUNCTION(execUpdatePlayer); \
	DECLARE_FUNCTION(execUpdateVariables); \
	DECLARE_FUNCTION(execRewriteStats);


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_CALLBACK_WRAPPERS
#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVS_SclopetiatorGI(); \
	friend struct Z_Construct_UClass_UVS_SclopetiatorGI_Statics; \
public: \
	DECLARE_CLASS(UVS_SclopetiatorGI, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sclopetiator"), NO_API) \
	DECLARE_SERIALIZER(UVS_SclopetiatorGI)


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVS_SclopetiatorGI(UVS_SclopetiatorGI&&); \
	UVS_SclopetiatorGI(const UVS_SclopetiatorGI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVS_SclopetiatorGI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVS_SclopetiatorGI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVS_SclopetiatorGI) \
	NO_API virtual ~UVS_SclopetiatorGI();


#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_34_PROLOG
#define FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_CALLBACK_WRAPPERS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCLOPETIATOR_API UClass* StaticClass<class UVS_SclopetiatorGI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
