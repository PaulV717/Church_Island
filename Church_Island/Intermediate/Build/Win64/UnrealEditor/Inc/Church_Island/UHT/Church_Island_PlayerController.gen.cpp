// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Church_Island/Church_Island_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChurch_Island_PlayerController() {}
// Cross Module References
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_PlayerController();
	CHURCH_ISLAND_API UClass* Z_Construct_UClass_AChurch_Island_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Church_Island();
// End Cross Module References
	void AChurch_Island_PlayerController::StaticRegisterNativesAChurch_Island_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChurch_Island_PlayerController);
	UClass* Z_Construct_UClass_AChurch_Island_PlayerController_NoRegister()
	{
		return AChurch_Island_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AChurch_Island_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChurch_Island_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Church_Island,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChurch_Island_PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Church_Island_PlayerController.h" },
		{ "ModuleRelativePath", "Church_Island_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChurch_Island_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChurch_Island_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChurch_Island_PlayerController_Statics::ClassParams = {
		&AChurch_Island_PlayerController::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChurch_Island_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AChurch_Island_PlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChurch_Island_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AChurch_Island_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChurch_Island_PlayerController.OuterSingleton, Z_Construct_UClass_AChurch_Island_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChurch_Island_PlayerController.OuterSingleton;
	}
	template<> CHURCH_ISLAND_API UClass* StaticClass<AChurch_Island_PlayerController>()
	{
		return AChurch_Island_PlayerController::StaticClass();
	}
	AChurch_Island_PlayerController::AChurch_Island_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChurch_Island_PlayerController);
	AChurch_Island_PlayerController::~AChurch_Island_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChurch_Island_PlayerController, AChurch_Island_PlayerController::StaticClass, TEXT("AChurch_Island_PlayerController"), &Z_Registration_Info_UClass_AChurch_Island_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChurch_Island_PlayerController), 1090432407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerController_h_3625788303(TEXT("/Script/Church_Island"),
		Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Church_Island_Source_Church_Island_Church_Island_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
