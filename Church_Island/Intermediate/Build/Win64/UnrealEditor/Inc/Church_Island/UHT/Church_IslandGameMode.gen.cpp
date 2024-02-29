// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Church_Island/Church_IslandGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChurch_IslandGameMode() {}
// Cross Module References
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_IslandGameMode();
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_IslandGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Church_Island();
// End Cross Module References
	void AChurch_IslandGameMode::StaticRegisterNativesAChurch_IslandGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChurch_IslandGameMode);
	UClass* Z_Construct_UClass_AChurch_IslandGameMode_NoRegister()
	{
		return AChurch_IslandGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChurch_IslandGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChurch_IslandGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Church_Island,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_IslandGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChurch_IslandGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Church_IslandGameMode.h" },
		{ "ModuleRelativePath", "Church_IslandGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChurch_IslandGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChurch_IslandGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChurch_IslandGameMode_Statics::ClassParams = {
		&AChurch_IslandGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_IslandGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AChurch_IslandGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChurch_IslandGameMode()
	{
		if (!Z_Registration_Info_UClass_AChurch_IslandGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChurch_IslandGameMode.OuterSingleton, Z_Construct_UClass_AChurch_IslandGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChurch_IslandGameMode.OuterSingleton;
	}
	template<> CHURCH_ISLAND_API UClass* StaticClass<AChurch_IslandGameMode>()
	{
		return AChurch_IslandGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChurch_IslandGameMode);
	AChurch_IslandGameMode::~AChurch_IslandGameMode() {}
	struct Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_IslandGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_IslandGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChurch_IslandGameMode, AChurch_IslandGameMode::StaticClass, TEXT("AChurch_IslandGameMode"), &Z_Registration_Info_UClass_AChurch_IslandGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChurch_IslandGameMode), 2104221126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_IslandGameMode_h_1362820053(TEXT("/Script/Church_Island"),
		Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_IslandGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_IslandGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
