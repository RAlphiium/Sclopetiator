// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/SclopetiatorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSclopetiatorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SCLOPETIATOR_API UClass* Z_Construct_UClass_ASclopetiatorGameMode();
SCLOPETIATOR_API UClass* Z_Construct_UClass_ASclopetiatorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin Class ASclopetiatorGameMode
void ASclopetiatorGameMode::StaticRegisterNativesASclopetiatorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASclopetiatorGameMode);
UClass* Z_Construct_UClass_ASclopetiatorGameMode_NoRegister()
{
	return ASclopetiatorGameMode::StaticClass();
}
struct Z_Construct_UClass_ASclopetiatorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SclopetiatorGameMode.h" },
		{ "ModuleRelativePath", "SclopetiatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASclopetiatorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASclopetiatorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASclopetiatorGameMode_Statics::ClassParams = {
	&ASclopetiatorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASclopetiatorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASclopetiatorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASclopetiatorGameMode()
{
	if (!Z_Registration_Info_UClass_ASclopetiatorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASclopetiatorGameMode.OuterSingleton, Z_Construct_UClass_ASclopetiatorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASclopetiatorGameMode.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<ASclopetiatorGameMode>()
{
	return ASclopetiatorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASclopetiatorGameMode);
ASclopetiatorGameMode::~ASclopetiatorGameMode() {}
// End Class ASclopetiatorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASclopetiatorGameMode, ASclopetiatorGameMode::StaticClass, TEXT("ASclopetiatorGameMode"), &Z_Registration_Info_UClass_ASclopetiatorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASclopetiatorGameMode), 4115899301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorGameMode_h_612140851(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_SclopetiatorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
