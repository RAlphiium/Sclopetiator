// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/VS_RandomItemDrop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVS_RandomItemDrop() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_BaseItem();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_BaseItem_NoRegister();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_RandomItemDrop();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_RandomItemDrop_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin Class AVS_RandomItemDrop
void AVS_RandomItemDrop::StaticRegisterNativesAVS_RandomItemDrop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVS_RandomItemDrop);
UClass* Z_Construct_UClass_AVS_RandomItemDrop_NoRegister()
{
	return AVS_RandomItemDrop::StaticClass();
}
struct Z_Construct_UClass_AVS_RandomItemDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VS_RandomItemDrop.h" },
		{ "ModuleRelativePath", "VS_RandomItemDrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatPoint_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ItemDrop" },
		{ "ModuleRelativePath", "VS_RandomItemDrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shotgun_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ItemDrop" },
		{ "ModuleRelativePath", "VS_RandomItemDrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rifle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ItemDrop" },
		{ "ModuleRelativePath", "VS_RandomItemDrop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Shotgun;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Rifle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVS_RandomItemDrop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_StatPoint = { "StatPoint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVS_RandomItemDrop, StatPoint), Z_Construct_UClass_UClass, Z_Construct_UClass_AVS_BaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatPoint_MetaData), NewProp_StatPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_Shotgun = { "Shotgun", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVS_RandomItemDrop, Shotgun), Z_Construct_UClass_UClass, Z_Construct_UClass_AVS_BaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shotgun_MetaData), NewProp_Shotgun_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_Rifle = { "Rifle", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVS_RandomItemDrop, Rifle), Z_Construct_UClass_UClass, Z_Construct_UClass_AVS_BaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rifle_MetaData), NewProp_Rifle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVS_RandomItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_StatPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_Shotgun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVS_RandomItemDrop_Statics::NewProp_Rifle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_RandomItemDrop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVS_RandomItemDrop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVS_BaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_RandomItemDrop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVS_RandomItemDrop_Statics::ClassParams = {
	&AVS_RandomItemDrop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVS_RandomItemDrop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVS_RandomItemDrop_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_RandomItemDrop_Statics::Class_MetaDataParams), Z_Construct_UClass_AVS_RandomItemDrop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVS_RandomItemDrop()
{
	if (!Z_Registration_Info_UClass_AVS_RandomItemDrop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVS_RandomItemDrop.OuterSingleton, Z_Construct_UClass_AVS_RandomItemDrop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVS_RandomItemDrop.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<AVS_RandomItemDrop>()
{
	return AVS_RandomItemDrop::StaticClass();
}
AVS_RandomItemDrop::AVS_RandomItemDrop() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVS_RandomItemDrop);
AVS_RandomItemDrop::~AVS_RandomItemDrop() {}
// End Class AVS_RandomItemDrop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_RandomItemDrop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVS_RandomItemDrop, AVS_RandomItemDrop::StaticClass, TEXT("AVS_RandomItemDrop"), &Z_Registration_Info_UClass_AVS_RandomItemDrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVS_RandomItemDrop), 1877327604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_RandomItemDrop_h_3328125239(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_RandomItemDrop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_Downloads_Sclopetiator_main_Sclopetiator_main_Sclopetiator_Source_Sclopetiator_VS_RandomItemDrop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
