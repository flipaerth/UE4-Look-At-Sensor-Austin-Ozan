// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LookAtSensorCPP/LookAtSensorCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtSensorCPPHUD() {}
// Cross Module References
	LOOKATSENSORCPP_API UClass* Z_Construct_UClass_ALookAtSensorCPPHUD_NoRegister();
	LOOKATSENSORCPP_API UClass* Z_Construct_UClass_ALookAtSensorCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LookAtSensorCPP();
// End Cross Module References
	void ALookAtSensorCPPHUD::StaticRegisterNativesALookAtSensorCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_ALookAtSensorCPPHUD_NoRegister()
	{
		return ALookAtSensorCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALookAtSensorCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LookAtSensorCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LookAtSensorCPPHUD.h" },
		{ "ModuleRelativePath", "LookAtSensorCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALookAtSensorCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::ClassParams = {
		&ALookAtSensorCPPHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALookAtSensorCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALookAtSensorCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALookAtSensorCPPHUD, 1385291745);
	template<> LOOKATSENSORCPP_API UClass* StaticClass<ALookAtSensorCPPHUD>()
	{
		return ALookAtSensorCPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALookAtSensorCPPHUD(Z_Construct_UClass_ALookAtSensorCPPHUD, &ALookAtSensorCPPHUD::StaticClass, TEXT("/Script/LookAtSensorCPP"), TEXT("ALookAtSensorCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALookAtSensorCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
