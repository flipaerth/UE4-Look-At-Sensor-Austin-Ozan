// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LookAtSensorAO/LookAtSensorAOGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtSensorAOGameMode() {}
// Cross Module References
	LOOKATSENSORAO_API UClass* Z_Construct_UClass_ALookAtSensorAOGameMode_NoRegister();
	LOOKATSENSORAO_API UClass* Z_Construct_UClass_ALookAtSensorAOGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LookAtSensorAO();
// End Cross Module References
	void ALookAtSensorAOGameMode::StaticRegisterNativesALookAtSensorAOGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALookAtSensorAOGameMode_NoRegister()
	{
		return ALookAtSensorAOGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALookAtSensorAOGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LookAtSensorAO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LookAtSensorAOGameMode.h" },
		{ "ModuleRelativePath", "LookAtSensorAOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALookAtSensorAOGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::ClassParams = {
		&ALookAtSensorAOGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALookAtSensorAOGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALookAtSensorAOGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALookAtSensorAOGameMode, 287214872);
	template<> LOOKATSENSORAO_API UClass* StaticClass<ALookAtSensorAOGameMode>()
	{
		return ALookAtSensorAOGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALookAtSensorAOGameMode(Z_Construct_UClass_ALookAtSensorAOGameMode, &ALookAtSensorAOGameMode::StaticClass, TEXT("/Script/LookAtSensorAO"), TEXT("ALookAtSensorAOGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALookAtSensorAOGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
