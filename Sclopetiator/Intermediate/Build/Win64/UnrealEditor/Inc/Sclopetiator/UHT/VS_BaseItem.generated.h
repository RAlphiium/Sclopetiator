// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VS_BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SCLOPETIATOR_VS_BaseItem_generated_h
#error "VS_BaseItem.generated.h already included, missing '#pragma once' in VS_BaseItem.h"
#endif
#define SCLOPETIATOR_VS_BaseItem_generated_h

#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPickup);


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVS_BaseItem(); \
	friend struct Z_Construct_UClass_AVS_BaseItem_Statics; \
public: \
	DECLARE_CLASS(AVS_BaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sclopetiator"), NO_API) \
	DECLARE_SERIALIZER(AVS_BaseItem)


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVS_BaseItem(AVS_BaseItem&&); \
	AVS_BaseItem(const AVS_BaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVS_BaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVS_BaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVS_BaseItem) \
	NO_API virtual ~AVS_BaseItem();


#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_12_PROLOG
#define FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCLOPETIATOR_API UClass* StaticClass<class AVS_BaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
