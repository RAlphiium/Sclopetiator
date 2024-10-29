// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sclopetiator/VS_BaseItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVS_BaseItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SCLOPETIATOR_API UClass* Z_Construct_UClass_ASclopetiatorCharacter_NoRegister();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_BaseItem();
SCLOPETIATOR_API UClass* Z_Construct_UClass_AVS_BaseItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sclopetiator();
// End Cross Module References

// Begin Class AVS_BaseItem Function OnPickup
struct Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics
{
	struct VS_BaseItem_eventOnPickup_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VS_BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VS_BaseItem_eventOnPickup_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VS_BaseItem_eventOnPickup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VS_BaseItem_eventOnPickup_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VS_BaseItem_eventOnPickup_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((VS_BaseItem_eventOnPickup_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VS_BaseItem_eventOnPickup_Parms), &Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VS_BaseItem_eventOnPickup_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVS_BaseItem, nullptr, "OnPickup", nullptr, nullptr, Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::VS_BaseItem_eventOnPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::VS_BaseItem_eventOnPickup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVS_BaseItem_OnPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVS_BaseItem_OnPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVS_BaseItem::execOnPickup)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickup(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AVS_BaseItem Function OnPickup

// Begin Class AVS_BaseItem
void AVS_BaseItem::StaticRegisterNativesAVS_BaseItem()
{
	UClass* Class = AVS_BaseItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPickup", &AVS_BaseItem::execOnPickup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVS_BaseItem);
UClass* Z_Construct_UClass_AVS_BaseItem_NoRegister()
{
	return AVS_BaseItem::StaticClass();
}
struct Z_Construct_UClass_AVS_BaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VS_BaseItem.h" },
		{ "ModuleRelativePath", "VS_BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "VS_BaseItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VS_BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "VS_BaseItem" },
		{ "ModuleRelativePath", "VS_BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVS_BaseItem_OnPickup, "OnPickup" }, // 2626620675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVS_BaseItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVS_BaseItem_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVS_BaseItem, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVS_BaseItem_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVS_BaseItem, Player), Z_Construct_UClass_ASclopetiatorCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVS_BaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVS_BaseItem_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVS_BaseItem_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_BaseItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVS_BaseItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Sclopetiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_BaseItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVS_BaseItem_Statics::ClassParams = {
	&AVS_BaseItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVS_BaseItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVS_BaseItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVS_BaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AVS_BaseItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVS_BaseItem()
{
	if (!Z_Registration_Info_UClass_AVS_BaseItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVS_BaseItem.OuterSingleton, Z_Construct_UClass_AVS_BaseItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVS_BaseItem.OuterSingleton;
}
template<> SCLOPETIATOR_API UClass* StaticClass<AVS_BaseItem>()
{
	return AVS_BaseItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVS_BaseItem);
AVS_BaseItem::~AVS_BaseItem() {}
// End Class AVS_BaseItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_itsno_OneDrive_Desktop_Unreal_Engine_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVS_BaseItem, AVS_BaseItem::StaticClass, TEXT("AVS_BaseItem"), &Z_Registration_Info_UClass_AVS_BaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVS_BaseItem), 817654155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_itsno_OneDrive_Desktop_Unreal_Engine_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_1061395728(TEXT("/Script/Sclopetiator"),
	Z_CompiledInDeferFile_FID_Users_itsno_OneDrive_Desktop_Unreal_Engine_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_itsno_OneDrive_Desktop_Unreal_Engine_Sclopetiator_Source_Sclopetiator_VS_BaseItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
