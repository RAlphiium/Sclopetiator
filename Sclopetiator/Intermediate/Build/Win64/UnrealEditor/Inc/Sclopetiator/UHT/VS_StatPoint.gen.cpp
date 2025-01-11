// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/VS_StatPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVS_StatPoint() {}

// Begin Cross Module References
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_BaseItem();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_StatPoint();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_StatPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin Class AVS_StatPoint Function IncrementStatPoints
static FName NAME_AVS_StatPoint_IncrementStatPoints = FName(TEXT("IncrementStatPoints"));
void AVS_StatPoint::IncrementStatPoints()
{
	ProcessEvent(FindFunctionChecked(NAME_AVS_StatPoint_IncrementStatPoints),NULL);
}
struct Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_StatPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVS_StatPoint, nullptr, "IncrementStatPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVS_StatPoint::execIncrementStatPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementStatPoints_Implementation();
	P_NATIVE_END;
}
// End Class AVS_StatPoint Function IncrementStatPoints

// Begin Class AVS_StatPoint
void AVS_StatPoint::StaticRegisterNativesAVS_StatPoint()
{
	UClass* Class = AVS_StatPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IncrementStatPoints", &AVS_StatPoint::execIncrementStatPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVS_StatPoint);
UClass* Z_Construct_UClass_AVS_StatPoint_NoRegister()
{
	return AVS_StatPoint::StaticClass();
}
struct Z_Construct_UClass_AVS_StatPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VS_StatPoint.h" },
		{ "ModuleRelativePath", "VS_StatPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVS_StatPoint_IncrementStatPoints, "IncrementStatPoints" }, // 3978303742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVS_StatPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVS_StatPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVS_BaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_StatPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVS_StatPoint_Statics::ClassParams = {
	&AVS_StatPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_StatPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AVS_StatPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVS_StatPoint()
{
	if (!Z_Registration_Info_UClass_AVS_StatPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVS_StatPoint.OuterSingleton, Z_Construct_UClass_AVS_StatPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVS_StatPoint.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<AVS_StatPoint>()
{
	return AVS_StatPoint::StaticClass();
}
AVS_StatPoint::AVS_StatPoint() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVS_StatPoint);
AVS_StatPoint::~AVS_StatPoint() {}
// End Class AVS_StatPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVS_StatPoint, AVS_StatPoint::StaticClass, TEXT("AVS_StatPoint"), &Z_Registration_Info_UClass_AVS_StatPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVS_StatPoint), 3443969403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_3071131904(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_source_repos_Sclopetiator_Sclopetiator_Source_Sclopetiator_VS_StatPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
