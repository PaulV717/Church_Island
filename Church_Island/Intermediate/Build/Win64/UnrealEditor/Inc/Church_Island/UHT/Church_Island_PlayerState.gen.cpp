// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Church_Island/Church_Island_PlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChurch_Island_PlayerState() {}
// Cross Module References
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_PlayerState();
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_PlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Church_Island();
// End Cross Module References
	void AChurch_Island_PlayerState::StaticRegisterNativesAChurch_Island_PlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChurch_Island_PlayerState);
	UClass* Z_Construct_UClass_AChurch_Island_PlayerState_NoRegister()
	{
		return AChurch_Island_PlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AChurch_Island_PlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChurch_Island_PlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Church_Island,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_PlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChurch_Island_PlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Church_Island_PlayerState.h" },
		{ "ModuleRelativePath", "Church_Island_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChurch_Island_PlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChurch_Island_PlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChurch_Island_PlayerState_Statics::ClassParams = {
		&AChurch_Island_PlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AChurch_Island_PlayerState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChurch_Island_PlayerState()
	{
		if (!Z_Registration_Info_UClass_AChurch_Island_PlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChurch_Island_PlayerState.OuterSingleton, Z_Construct_UClass_AChurch_Island_PlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChurch_Island_PlayerState.OuterSingleton;
	}
	template<> CHURCH_ISLAND_API UClass* StaticClass<AChurch_Island_PlayerState>()
	{
		return AChurch_Island_PlayerState::StaticClass();
	}
	AChurch_Island_PlayerState::AChurch_Island_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChurch_Island_PlayerState);
	AChurch_Island_PlayerState::~AChurch_Island_PlayerState() {}
	struct Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChurch_Island_PlayerState, AChurch_Island_PlayerState::StaticClass, TEXT("AChurch_Island_PlayerState"), &Z_Registration_Info_UClass_AChurch_Island_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChurch_Island_PlayerState), 228654721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerState_h_3882054072(TEXT("/Script/Church_Island"),
		Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
