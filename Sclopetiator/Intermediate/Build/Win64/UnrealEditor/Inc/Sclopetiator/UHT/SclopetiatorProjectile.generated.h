// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SclopetiatorProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SCLOPETIATOR_SclopetiatorProjectile_generated_h
#error "SclopetiatorProjectile.generated.h already included, missing '#pragma once' in SclopetiatorProjectile.h"
#endif
#define SCLOPETIATOR_SclopetiatorProjectile_generated_h

#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASclopetiatorProjectile(); \
	friend struct Z_Construct_UClass_ASclopetiatorProjectile_Statics; \
public: \
	DECLARE_CLASS(ASclopetiatorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sclopetiator"), NO_API) \
	DECLARE_SERIALIZER(ASclopetiatorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASclopetiatorProjectile(ASclopetiatorProjectile&&); \
	ASclopetiatorProjectile(const ASclopetiatorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASclopetiatorProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASclopetiatorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASclopetiatorProjectile) \
	NO_API virtual ~ASclopetiatorProjectile();


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_12_PROLOG
#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCLOPETIATOR_API UClass* StaticClass<class ASclopetiatorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
