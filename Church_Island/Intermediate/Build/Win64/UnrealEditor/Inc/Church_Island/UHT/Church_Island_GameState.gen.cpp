// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Church_Island/Church_Island_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChurch_Island_GameState() {}
// Cross Module References
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_GameState();
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_GameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_Church_Island();
// End Cross Module References
	void AChurch_Island_GameState::StaticRegisterNativesAChurch_Island_GameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChurch_Island_GameState);
	UClass* Z_Construct_UClass_AChurch_Island_GameState_NoRegister()
	{
		return AChurch_Island_GameState::StaticClass();
	}
	struct Z_Construct_UClass_AChurch_Island_GameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChurch_Island_GameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Church_Island,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_GameState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChurch_Island_GameState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Church_Island_GameState.h" },
		{ "ModuleRelativePath", "Church_Island_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChurch_Island_GameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChurch_Island_GameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChurch_Island_GameState_Statics::ClassParams = {
		&AChurch_Island_GameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AChurch_Island_GameState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChurch_Island_GameState()
	{
		if (!Z_Registration_Info_UClass_AChurch_Island_GameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChurch_Island_GameState.OuterSingleton, Z_Construct_UClass_AChurch_Island_GameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChurch_Island_GameState.OuterSingleton;
	}
	template<> CHURCH_ISLAND_API UClass* StaticClass<AChurch_Island_GameState>()
	{
		return AChurch_Island_GameState::StaticClass();
	}
	AChurch_Island_GameState::AChurch_Island_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChurch_Island_GameState);
	AChurch_Island_GameState::~AChurch_Island_GameState() {}
	struct Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_GameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_GameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChurch_Island_GameState, AChurch_Island_GameState::StaticClass, TEXT("AChurch_Island_GameState"), &Z_Registration_Info_UClass_AChurch_Island_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChurch_Island_GameState), 3669636388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_GameState_h_3477227513(TEXT("/Script/Church_Island"),
		Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_GameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
