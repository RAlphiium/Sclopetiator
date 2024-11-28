// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/VS_SclopetiatorGI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVS_SclopetiatorGI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SCLOPETIATOR_API UClass* Z_Construct_UClass_UVS_SclopetiatorGI();
SCLOPETIATOR_API UClass* Z_Construct_UClass_UVS_SclopetiatorGI_NoRegister();
SCLOPETIATOR_API UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature();
SCLOPETIATOR_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
SCLOPETIATOR_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmStats();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin ScriptStruct FCharacterStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStats;
class UScriptStruct* FCharacterStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, (UObject*)Z_Construct_UPackage__Script_Sclopetiator(), TEXT("CharacterStats"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton;
}
template<> SCLOPETIATOR_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prefix for Structures are denoted with the letter: F\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefix for Structures are denoted with the letter: F" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Luck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
	nullptr,
	&NewStructOps,
	"CharacterStats",
	Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
	sizeof(FCharacterStats),
	alignof(FCharacterStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton;
}
// End ScriptStruct FCharacterStats

// Begin ScriptStruct FFirearmStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FirearmStats;
class UScriptStruct* FFirearmStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FirearmStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FirearmStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirearmStats, (UObject*)Z_Construct_UPackage__Script_Sclopetiator(), TEXT("FirearmStats"));
	}
	return Z_Registration_Info_UScriptStruct_FirearmStats.OuterSingleton;
}
template<> SCLOPETIATOR_API UScriptStruct* StaticStruct<FFirearmStats>()
{
	return FFirearmStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFirearmStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prefix for Structures are denoted with the letter: F\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefix for Structures are denoted with the letter: F" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DMG_MetaData[] = {
		{ "Category", "FirearmStats" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "FirearmStats" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DMG;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirearmStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirearmStats_Statics::NewProp_DMG = { "DMG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFirearmStats, DMG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DMG_MetaData), NewProp_DMG_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmStats_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFirearmStats, ReloadSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSpeed_MetaData), NewProp_ReloadSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirearmStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStats_Statics::NewProp_DMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStats_Statics::NewProp_ReloadSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirearmStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
	nullptr,
	&NewStructOps,
	"FirearmStats",
	Z_Construct_UScriptStruct_FFirearmStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStats_Statics::PropPointers),
	sizeof(FFirearmStats),
	alignof(FFirearmStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFirearmStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFirearmStats()
{
	if (!Z_Registration_Info_UScriptStruct_FirearmStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FirearmStats.InnerSingleton, Z_Construct_UScriptStruct_FFirearmStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FirearmStats.InnerSingleton;
}
// End ScriptStruct FFirearmStats

// Begin Delegate FOnScorePointsModified
struct Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics
{
	struct _Script_Sclopetiator_eventOnScorePointsModified_Parms
	{
		int32 NewScorePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScorePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::NewProp_NewScorePoints = { "NewScorePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Sclopetiator_eventOnScorePointsModified_Parms, NewScorePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::NewProp_NewScorePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Sclopetiator, nullptr, "OnScorePointsModified__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::_Script_Sclopetiator_eventOnScorePointsModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::_Script_Sclopetiator_eventOnScorePointsModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScorePointsModified_DelegateWrapper(const FMulticastScriptDelegate& OnScorePointsModified, int32 NewScorePoints)
{
	struct _Script_Sclopetiator_eventOnScorePointsModified_Parms
	{
		int32 NewScorePoints;
	};
	_Script_Sclopetiator_eventOnScorePointsModified_Parms Parms;
	Parms.NewScorePoints=NewScorePoints;
	OnScorePointsModified.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScorePointsModified

// Begin Class UVS_SclopetiatorGI Function DecreasePlayerLuck
static FName NAME_UVS_SclopetiatorGI_DecreasePlayerLuck = FName(TEXT("DecreasePlayerLuck"));
void UVS_SclopetiatorGI::DecreasePlayerLuck()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_DecreasePlayerLuck),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "DecreasePlayerLuck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execDecreasePlayerLuck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreasePlayerLuck_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function DecreasePlayerLuck

// Begin Class UVS_SclopetiatorGI Function DecreasePlayerMovement
static FName NAME_UVS_SclopetiatorGI_DecreasePlayerMovement = FName(TEXT("DecreasePlayerMovement"));
void UVS_SclopetiatorGI::DecreasePlayerMovement()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_DecreasePlayerMovement),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "DecreasePlayerMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execDecreasePlayerMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreasePlayerMovement_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function DecreasePlayerMovement

// Begin Class UVS_SclopetiatorGI Function DecrementPlayerHealth
static FName NAME_UVS_SclopetiatorGI_DecrementPlayerHealth = FName(TEXT("DecrementPlayerHealth"));
void UVS_SclopetiatorGI::DecrementPlayerHealth()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_DecrementPlayerHealth),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "DecrementPlayerHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execDecrementPlayerHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecrementPlayerHealth_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function DecrementPlayerHealth

// Begin Class UVS_SclopetiatorGI Function DecrementStatPoints
static FName NAME_UVS_SclopetiatorGI_DecrementStatPoints = FName(TEXT("DecrementStatPoints"));
void UVS_SclopetiatorGI::DecrementStatPoints()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_DecrementStatPoints),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "DecrementStatPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execDecrementStatPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecrementStatPoints_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function DecrementStatPoints

// Begin Class UVS_SclopetiatorGI Function IncreasePlayerLuck
static FName NAME_UVS_SclopetiatorGI_IncreasePlayerLuck = FName(TEXT("IncreasePlayerLuck"));
void UVS_SclopetiatorGI::IncreasePlayerLuck()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_IncreasePlayerLuck),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PlayerLuck Functions\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerLuck Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "IncreasePlayerLuck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execIncreasePlayerLuck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerLuck_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function IncreasePlayerLuck

// Begin Class UVS_SclopetiatorGI Function IncreasePlayerMovement
static FName NAME_UVS_SclopetiatorGI_IncreasePlayerMovement = FName(TEXT("IncreasePlayerMovement"));
void UVS_SclopetiatorGI::IncreasePlayerMovement()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_IncreasePlayerMovement),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PlayerMovement Functions\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerMovement Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "IncreasePlayerMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execIncreasePlayerMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerMovement_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function IncreasePlayerMovement

// Begin Class UVS_SclopetiatorGI Function IncrementPlayerHealth
static FName NAME_UVS_SclopetiatorGI_IncrementPlayerHealth = FName(TEXT("IncrementPlayerHealth"));
void UVS_SclopetiatorGI::IncrementPlayerHealth()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_IncrementPlayerHealth),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PlayerHealth Functions\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerHealth Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "IncrementPlayerHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execIncrementPlayerHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementPlayerHealth_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function IncrementPlayerHealth

// Begin Class UVS_SclopetiatorGI Function IncrementStatPoints
static FName NAME_UVS_SclopetiatorGI_IncrementStatPoints = FName(TEXT("IncrementStatPoints"));
void UVS_SclopetiatorGI::IncrementStatPoints()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_IncrementStatPoints),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//StatPoints Functions\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StatPoints Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "IncrementStatPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execIncrementStatPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementStatPoints_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function IncrementStatPoints

// Begin Class UVS_SclopetiatorGI Function RefreshPlayerHealth
static FName NAME_UVS_SclopetiatorGI_RefreshPlayerHealth = FName(TEXT("RefreshPlayerHealth"));
void UVS_SclopetiatorGI::RefreshPlayerHealth()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_RefreshPlayerHealth),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Refresh Player Health;\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refresh Player Health;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "RefreshPlayerHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execRefreshPlayerHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshPlayerHealth_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function RefreshPlayerHealth

// Begin Class UVS_SclopetiatorGI Function RewriteStats
static FName NAME_UVS_SclopetiatorGI_RewriteStats = FName(TEXT("RewriteStats"));
void UVS_SclopetiatorGI::RewriteStats()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_RewriteStats),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Rewrite Stats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewrite Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "RewriteStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execRewriteStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RewriteStats_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function RewriteStats

// Begin Class UVS_SclopetiatorGI Function UpdatePlayer
static FName NAME_UVS_SclopetiatorGI_UpdatePlayer = FName(TEXT("UpdatePlayer"));
void UVS_SclopetiatorGI::UpdatePlayer()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_UpdatePlayer),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Player Stats;\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Player Stats;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "UpdatePlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execUpdatePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayer_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function UpdatePlayer

// Begin Class UVS_SclopetiatorGI Function UpdateVariables
static FName NAME_UVS_SclopetiatorGI_UpdateVariables = FName(TEXT("UpdateVariables"));
void UVS_SclopetiatorGI::UpdateVariables()
{
	ProcessEvent(FindFunctionChecked(NAME_UVS_SclopetiatorGI_UpdateVariables),NULL);
}
struct Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Variable Stats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Variable Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVS_SclopetiatorGI, nullptr, "UpdateVariables", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVS_SclopetiatorGI::execUpdateVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVariables_Implementation();
	P_NATIVE_END;
}
// End Class UVS_SclopetiatorGI Function UpdateVariables

// Begin Class UVS_SclopetiatorGI
void UVS_SclopetiatorGI::StaticRegisterNativesUVS_SclopetiatorGI()
{
	UClass* Class = UVS_SclopetiatorGI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreasePlayerLuck", &UVS_SclopetiatorGI::execDecreasePlayerLuck },
		{ "DecreasePlayerMovement", &UVS_SclopetiatorGI::execDecreasePlayerMovement },
		{ "DecrementPlayerHealth", &UVS_SclopetiatorGI::execDecrementPlayerHealth },
		{ "DecrementStatPoints", &UVS_SclopetiatorGI::execDecrementStatPoints },
		{ "IncreasePlayerLuck", &UVS_SclopetiatorGI::execIncreasePlayerLuck },
		{ "IncreasePlayerMovement", &UVS_SclopetiatorGI::execIncreasePlayerMovement },
		{ "IncrementPlayerHealth", &UVS_SclopetiatorGI::execIncrementPlayerHealth },
		{ "IncrementStatPoints", &UVS_SclopetiatorGI::execIncrementStatPoints },
		{ "RefreshPlayerHealth", &UVS_SclopetiatorGI::execRefreshPlayerHealth },
		{ "RewriteStats", &UVS_SclopetiatorGI::execRewriteStats },
		{ "UpdatePlayer", &UVS_SclopetiatorGI::execUpdatePlayer },
		{ "UpdateVariables", &UVS_SclopetiatorGI::execUpdateVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVS_SclopetiatorGI);
UClass* Z_Construct_UClass_UVS_SclopetiatorGI_NoRegister()
{
	return UVS_SclopetiatorGI::StaticClass();
}
struct Z_Construct_UClass_UVS_SclopetiatorGI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VS_SclopetiatorGI.h" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScorePointsModified_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attributes:\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveCount_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WaveCount\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaveCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScorePoints_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ScorePoints\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ScorePoints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatPoints_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//StatPoints\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StatPoints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODStatPoints_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PlayerStats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerStats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODPlayerStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PistolStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PistolStats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PistolStats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODPistolStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ShotgunStats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShotgunStats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODShotgunStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//RifleStats\n" },
#endif
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RifleStats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODRifleStats_MetaData[] = {
		{ "Category", "VS_SclopetiatorGI" },
		{ "ModuleRelativePath", "VS_SclopetiatorGI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScorePointsModified;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaveCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScorePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MODStatPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MODPlayerStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PistolStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MODPistolStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotgunStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MODShotgunStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RifleStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MODRifleStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerLuck, "DecreasePlayerLuck" }, // 2683311545
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_DecreasePlayerMovement, "DecreasePlayerMovement" }, // 1174659643
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementPlayerHealth, "DecrementPlayerHealth" }, // 1243008120
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_DecrementStatPoints, "DecrementStatPoints" }, // 249188751
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerLuck, "IncreasePlayerLuck" }, // 3927393832
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_IncreasePlayerMovement, "IncreasePlayerMovement" }, // 644459040
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementPlayerHealth, "IncrementPlayerHealth" }, // 128978268
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_IncrementStatPoints, "IncrementStatPoints" }, // 478417504
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_RefreshPlayerHealth, "RefreshPlayerHealth" }, // 3001482739
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_RewriteStats, "RewriteStats" }, // 3172200059
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_UpdatePlayer, "UpdatePlayer" }, // 1989418654
		{ &Z_Construct_UFunction_UVS_SclopetiatorGI_UpdateVariables, "UpdateVariables" }, // 4255997404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVS_SclopetiatorGI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_OnScorePointsModified = { "OnScorePointsModified", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, OnScorePointsModified), Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScorePointsModified_MetaData), NewProp_OnScorePointsModified_MetaData) }; // 876353370
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_WaveCount = { "WaveCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, WaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveCount_MetaData), NewProp_WaveCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_ScorePoints = { "ScorePoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, ScorePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScorePoints_MetaData), NewProp_ScorePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_StatPoints = { "StatPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, StatPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatPoints_MetaData), NewProp_StatPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODStatPoints = { "MODStatPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, MODStatPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODStatPoints_MetaData), NewProp_MODStatPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, PlayerStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStats_MetaData), NewProp_PlayerStats_MetaData) }; // 3266699264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODPlayerStats = { "MODPlayerStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, MODPlayerStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODPlayerStats_MetaData), NewProp_MODPlayerStats_MetaData) }; // 3266699264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_PistolStats = { "PistolStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, PistolStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolStats_MetaData), NewProp_PistolStats_MetaData) }; // 1704484502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODPistolStats = { "MODPistolStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, MODPistolStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODPistolStats_MetaData), NewProp_MODPistolStats_MetaData) }; // 1704484502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_ShotgunStats = { "ShotgunStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, ShotgunStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunStats_MetaData), NewProp_ShotgunStats_MetaData) }; // 1704484502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODShotgunStats = { "MODShotgunStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, MODShotgunStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODShotgunStats_MetaData), NewProp_MODShotgunStats_MetaData) }; // 1704484502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_RifleStats = { "RifleStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, RifleStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleStats_MetaData), NewProp_RifleStats_MetaData) }; // 1704484502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODRifleStats = { "MODRifleStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVS_SclopetiatorGI, MODRifleStats), Z_Construct_UScriptStruct_FFirearmStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODRifleStats_MetaData), NewProp_MODRifleStats_MetaData) }; // 1704484502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVS_SclopetiatorGI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_OnScorePointsModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_WaveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_ScorePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_StatPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODStatPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_PlayerStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODPlayerStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_PistolStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODPistolStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_ShotgunStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODShotgunStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_RifleStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVS_SclopetiatorGI_Statics::NewProp_MODRifleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVS_SclopetiatorGI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVS_SclopetiatorGI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVS_SclopetiatorGI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVS_SclopetiatorGI_Statics::ClassParams = {
	&UVS_SclopetiatorGI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVS_SclopetiatorGI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVS_SclopetiatorGI_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVS_SclopetiatorGI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVS_SclopetiatorGI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVS_SclopetiatorGI()
{
	if (!Z_Registration_Info_UClass_UVS_SclopetiatorGI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVS_SclopetiatorGI.OuterSingleton, Z_Construct_UClass_UVS_SclopetiatorGI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVS_SclopetiatorGI.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<UVS_SclopetiatorGI>()
{
	return UVS_SclopetiatorGI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVS_SclopetiatorGI);
UVS_SclopetiatorGI::~UVS_SclopetiatorGI() {}
// End Class UVS_SclopetiatorGI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterStats::StaticStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps, TEXT("CharacterStats"), &Z_Registration_Info_UScriptStruct_CharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStats), 3266699264U) },
		{ FFirearmStats::StaticStruct, Z_Construct_UScriptStruct_FFirearmStats_Statics::NewStructOps, TEXT("FirearmStats"), &Z_Registration_Info_UScriptStruct_FirearmStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFirearmStats), 1704484502U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVS_SclopetiatorGI, UVS_SclopetiatorGI::StaticClass, TEXT("UVS_SclopetiatorGI"), &Z_Registration_Info_UClass_UVS_SclopetiatorGI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVS_SclopetiatorGI), 2311805558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_230765775(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_SclopetiatorGI_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
