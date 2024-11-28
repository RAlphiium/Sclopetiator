// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSclopetiator_init() {}
	SCLOPETIATOR_API UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature();
	SCLOPETIATOR_API UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnPickUp__DelegateSignature();
	SCLOPETIATOR_API UFunction* Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Sclopetiator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Sclopetiator()
	{
		if (!Z_Registration_Info_UPackage__Script_Sclopetiator.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Sclopetiator_OnHealthUpdatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Sclopetiator_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Sclopetiator_OnScorePointsModified__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Sclopetiator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01B6F9FB,
				0x8B48EA2E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Sclopetiator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Sclopetiator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Sclopetiator(Z_Construct_UPackage__Script_Sclopetiator, TEXT("/Script/Sclopetiator"), Z_Registration_Info_UPackage__Script_Sclopetiator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01B6F9FB, 0x8B48EA2E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
