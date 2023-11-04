// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LookAtSensorAO/LookAtSensorAOHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtSensorAOHUD() {}
// Cross Module References
	LOOKATSENSORAO_API UClass* Z_Construct_UClass_ALookAtSensorAOHUD_NoRegister();
	LOOKATSENSORAO_API UClass* Z_Construct_UClass_ALookAtSensorAOHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LookAtSensorAO();
// End Cross Module References
	void ALookAtSensorAOHUD::StaticRegisterNativesALookAtSensorAOHUD()
	{
	}
	UClass* Z_Construct_UClass_ALookAtSensorAOHUD_NoRegister()
	{
		return ALookAtSensorAOHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALookAtSensorAOHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALookAtSensorAOHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LookAtSensorAO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALookAtSensorAOHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LookAtSensorAOHUD.h" },
		{ "ModuleRelativePath", "LookAtSensorAOHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALookAtSensorAOHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALookAtSensorAOHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALookAtSensorAOHUD_Statics::ClassParams = {
		&ALookAtSensorAOHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALookAtSensorAOHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALookAtSensorAOHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALookAtSensorAOHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALookAtSensorAOHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALookAtSensorAOHUD, 1532586844);
	template<> LOOKATSENSORAO_API UClass* StaticClass<ALookAtSensorAOHUD>()
	{
		return ALookAtSensorAOHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALookAtSensorAOHUD(Z_Construct_UClass_ALookAtSensorAOHUD, &ALookAtSensorAOHUD::StaticClass, TEXT("/Script/LookAtSensorAO"), TEXT("ALookAtSensorAOHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALookAtSensorAOHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
