// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MindBreach/MindBreachGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMindBreachGameMode() {}
// Cross Module References
	MINDBREACH_API UClass* Z_Construct_UClass_AMindBreachGameMode_NoRegister();
	MINDBREACH_API UClass* Z_Construct_UClass_AMindBreachGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MindBreach();
// End Cross Module References
	void AMindBreachGameMode::StaticRegisterNativesAMindBreachGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMindBreachGameMode);
	UClass* Z_Construct_UClass_AMindBreachGameMode_NoRegister()
	{
		return AMindBreachGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMindBreachGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMindBreachGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MindBreach,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMindBreachGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MindBreachGameMode.h" },
		{ "ModuleRelativePath", "MindBreachGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMindBreachGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMindBreachGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMindBreachGameMode_Statics::ClassParams = {
		&AMindBreachGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMindBreachGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMindBreachGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMindBreachGameMode()
	{
		if (!Z_Registration_Info_UClass_AMindBreachGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMindBreachGameMode.OuterSingleton, Z_Construct_UClass_AMindBreachGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMindBreachGameMode.OuterSingleton;
	}
	template<> MINDBREACH_API UClass* StaticClass<AMindBreachGameMode>()
	{
		return AMindBreachGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMindBreachGameMode);
	struct Z_CompiledInDeferFile_FID_MindBreach_Source_MindBreach_MindBreachGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MindBreach_Source_MindBreach_MindBreachGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMindBreachGameMode, AMindBreachGameMode::StaticClass, TEXT("AMindBreachGameMode"), &Z_Registration_Info_UClass_AMindBreachGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMindBreachGameMode), 3130689202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MindBreach_Source_MindBreach_MindBreachGameMode_h_1607487222(TEXT("/Script/MindBreach"),
		Z_CompiledInDeferFile_FID_MindBreach_Source_MindBreach_MindBreachGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MindBreach_Source_MindBreach_MindBreachGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
