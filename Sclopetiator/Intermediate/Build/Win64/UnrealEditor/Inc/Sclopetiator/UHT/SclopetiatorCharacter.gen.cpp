// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/SclopetiatorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSclopetiatorCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
SCLOPETIATOR_API UClass* Z_Construct_UClass_ASclopetiatorCharacter();
SCLOPETIATOR_API UClass* Z_Construct_UClass_ASclopetiatorCharacter_NoRegister();
SCLOPETIATOR_API UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin Delegate FOnHealthUpdatedSignature
struct Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms
	{
		int32 newHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms, newHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::NewProp_newHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Sclopetiator, nullptr, "OnHealthUpdatedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::_Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::_Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdatedSignature, int32 newHealth)
{
	struct _Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms
	{
		int32 newHealth;
	};
	_Script_Sclopetiator_eventOnHealthUpdatedSignature_Parms Parms;
	Parms.newHealth=newHealth;
	OnHealthUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthUpdatedSignature

// Begin Class ASclopetiatorCharacter Function HealthModified
struct SclopetiatorCharacter_eventHealthModified_Parms
{
	int32 DMG;
};
static FName NAME_ASclopetiatorCharacter_HealthModified = FName(TEXT("HealthModified"));
void ASclopetiatorCharacter::HealthModified(int32 DMG)
{
	SclopetiatorCharacter_eventHealthModified_Parms Parms;
	Parms.DMG=DMG;
	ProcessEvent(FindFunctionChecked(NAME_ASclopetiatorCharacter_HealthModified),&Parms);
}
struct Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DMG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::NewProp_DMG = { "DMG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SclopetiatorCharacter_eventHealthModified_Parms, DMG), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::NewProp_DMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASclopetiatorCharacter, nullptr, "HealthModified", nullptr, nullptr, Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::PropPointers), sizeof(SclopetiatorCharacter_eventHealthModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::Function_MetaDataParams) };
static_assert(sizeof(SclopetiatorCharacter_eventHealthModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASclopetiatorCharacter::execHealthModified)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DMG);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealthModified_Implementation(Z_Param_DMG);
	P_NATIVE_END;
}
// End Class ASclopetiatorCharacter Function HealthModified

// Begin Class ASclopetiatorCharacter Function ScorePointsModified
struct SclopetiatorCharacter_eventScorePointsModified_Parms
{
	int32 IncomingScorePoints;
};
static FName NAME_ASclopetiatorCharacter_ScorePointsModified = FName(TEXT("ScorePointsModified"));
void ASclopetiatorCharacter::ScorePointsModified(int32 IncomingScorePoints)
{
	SclopetiatorCharacter_eventScorePointsModified_Parms Parms;
	Parms.IncomingScorePoints=IncomingScorePoints;
	ProcessEvent(FindFunctionChecked(NAME_ASclopetiatorCharacter_ScorePointsModified),&Parms);
}
struct Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Methods\n" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IncomingScorePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::NewProp_IncomingScorePoints = { "IncomingScorePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SclopetiatorCharacter_eventScorePointsModified_Parms, IncomingScorePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::NewProp_IncomingScorePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASclopetiatorCharacter, nullptr, "ScorePointsModified", nullptr, nullptr, Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::PropPointers), sizeof(SclopetiatorCharacter_eventScorePointsModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::Function_MetaDataParams) };
static_assert(sizeof(SclopetiatorCharacter_eventScorePointsModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASclopetiatorCharacter::execScorePointsModified)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IncomingScorePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScorePointsModified_Implementation(Z_Param_IncomingScorePoints);
	P_NATIVE_END;
}
// End Class ASclopetiatorCharacter Function ScorePointsModified

// Begin Class ASclopetiatorCharacter Function UpdateHealth
struct SclopetiatorCharacter_eventUpdateHealth_Parms
{
	int32 NewHealth;
};
static FName NAME_ASclopetiatorCharacter_UpdateHealth = FName(TEXT("UpdateHealth"));
void ASclopetiatorCharacter::UpdateHealth(int32 NewHealth)
{
	SclopetiatorCharacter_eventUpdateHealth_Parms Parms;
	Parms.NewHealth=NewHealth;
	ProcessEvent(FindFunctionChecked(NAME_ASclopetiatorCharacter_UpdateHealth),&Parms);
}
struct Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SclopetiatorCharacter_eventUpdateHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASclopetiatorCharacter, nullptr, "UpdateHealth", nullptr, nullptr, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::PropPointers), sizeof(SclopetiatorCharacter_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(SclopetiatorCharacter_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASclopetiatorCharacter::execUpdateHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealth_Implementation(Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class ASclopetiatorCharacter Function UpdateHealth

// Begin Class ASclopetiatorCharacter Function UpdateLuck
struct SclopetiatorCharacter_eventUpdateLuck_Parms
{
	float NewLuck;
};
static FName NAME_ASclopetiatorCharacter_UpdateLuck = FName(TEXT("UpdateLuck"));
void ASclopetiatorCharacter::UpdateLuck(float NewLuck)
{
	SclopetiatorCharacter_eventUpdateLuck_Parms Parms;
	Parms.NewLuck=NewLuck;
	ProcessEvent(FindFunctionChecked(NAME_ASclopetiatorCharacter_UpdateLuck),&Parms);
}
struct Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLuck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::NewProp_NewLuck = { "NewLuck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SclopetiatorCharacter_eventUpdateLuck_Parms, NewLuck), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::NewProp_NewLuck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASclopetiatorCharacter, nullptr, "UpdateLuck", nullptr, nullptr, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::PropPointers), sizeof(SclopetiatorCharacter_eventUpdateLuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::Function_MetaDataParams) };
static_assert(sizeof(SclopetiatorCharacter_eventUpdateLuck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASclopetiatorCharacter::execUpdateLuck)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLuck);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLuck_Implementation(Z_Param_NewLuck);
	P_NATIVE_END;
}
// End Class ASclopetiatorCharacter Function UpdateLuck

// Begin Class ASclopetiatorCharacter Function UpdateMovement
struct SclopetiatorCharacter_eventUpdateMovement_Parms
{
	float NewSpeed;
};
static FName NAME_ASclopetiatorCharacter_UpdateMovement = FName(TEXT("UpdateMovement"));
void ASclopetiatorCharacter::UpdateMovement(float NewSpeed)
{
	SclopetiatorCharacter_eventUpdateMovement_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	ProcessEvent(FindFunctionChecked(NAME_ASclopetiatorCharacter_UpdateMovement),&Parms);
}
struct Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SclopetiatorCharacter_eventUpdateMovement_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASclopetiatorCharacter, nullptr, "UpdateMovement", nullptr, nullptr, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::PropPointers), sizeof(SclopetiatorCharacter_eventUpdateMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(SclopetiatorCharacter_eventUpdateMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASclopetiatorCharacter::execUpdateMovement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovement_Implementation(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// End Class ASclopetiatorCharacter Function UpdateMovement

// Begin Class ASclopetiatorCharacter
void ASclopetiatorCharacter::StaticRegisterNativesASclopetiatorCharacter()
{
	UClass* Class = ASclopetiatorCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HealthModified", &ASclopetiatorCharacter::execHealthModified },
		{ "ScorePointsModified", &ASclopetiatorCharacter::execScorePointsModified },
		{ "UpdateHealth", &ASclopetiatorCharacter::execUpdateHealth },
		{ "UpdateLuck", &ASclopetiatorCharacter::execUpdateLuck },
		{ "UpdateMovement", &ASclopetiatorCharacter::execUpdateMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASclopetiatorCharacter);
UClass* Z_Construct_UClass_ASclopetiatorCharacter_NoRegister()
{
	return ASclopetiatorCharacter::StaticClass();
}
struct Z_Construct_UClass_ASclopetiatorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SclopetiatorCharacter.h" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attributes\n" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScorePoints_MetaData[] = {
		{ "Category", "SclopetiatorCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attributes\n" },
#endif
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "SclopetiatorCharacter" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "SclopetiatorCharacter" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "SclopetiatorCharacter" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAiming_MetaData[] = {
		{ "Category", "SclopetiatorCharacter" },
		{ "ModuleRelativePath", "SclopetiatorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScorePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Luck;
	static void NewProp_isAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASclopetiatorCharacter_HealthModified, "HealthModified" }, // 541433125
		{ &Z_Construct_UFunction_ASclopetiatorCharacter_ScorePointsModified, "ScorePointsModified" }, // 3572608506
		{ &Z_Construct_UFunction_ASclopetiatorCharacter_UpdateHealth, "UpdateHealth" }, // 3447261328
		{ &Z_Construct_UFunction_ASclopetiatorCharacter_UpdateLuck, "UpdateLuck" }, // 753631360
		{ &Z_Construct_UFunction_ASclopetiatorCharacter_UpdateMovement, "UpdateMovement" }, // 3394171012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASclopetiatorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_OnHealthUpdated = { "OnHealthUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, OnHealthUpdated), Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthUpdated_MetaData), NewProp_OnHealthUpdated_MetaData) }; // 3807085353
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_ScorePoints = { "ScorePoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, ScorePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScorePoints_MetaData), NewProp_ScorePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASclopetiatorCharacter, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
void Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_isAiming_SetBit(void* Obj)
{
	((ASclopetiatorCharacter*)Obj)->isAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_isAiming = { "isAiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASclopetiatorCharacter), &Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_isAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAiming_MetaData), NewProp_isAiming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASclopetiatorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_OnHealthUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_ScorePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_Luck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASclopetiatorCharacter_Statics::NewProp_isAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASclopetiatorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASclopetiatorCharacter_Statics::ClassParams = {
	&ASclopetiatorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASclopetiatorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASclopetiatorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASclopetiatorCharacter()
{
	if (!Z_Registration_Info_UClass_ASclopetiatorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASclopetiatorCharacter.OuterSingleton, Z_Construct_UClass_ASclopetiatorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASclopetiatorCharacter.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<ASclopetiatorCharacter>()
{
	return ASclopetiatorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASclopetiatorCharacter);
ASclopetiatorCharacter::~ASclopetiatorCharacter() {}
// End Class ASclopetiatorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASclopetiatorCharacter, ASclopetiatorCharacter::StaticClass, TEXT("ASclopetiatorCharacter"), &Z_Registration_Info_UClass_ASclopetiatorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASclopetiatorCharacter), 811965117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_2827766634(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
