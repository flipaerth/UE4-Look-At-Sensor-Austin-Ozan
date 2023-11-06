// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LOOKATSENSORCPP_LookAtSensorCPPProjectile_generated_h
#error "LookAtSensorCPPProjectile.generated.h already included, missing '#pragma once' in LookAtSensorCPPProjectile.h"
#endif
#define LOOKATSENSORCPP_LookAtSensorCPPProjectile_generated_h

#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_SPARSE_DATA
#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALookAtSensorCPPProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorCPP"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALookAtSensorCPPProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorCPP"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALookAtSensorCPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALookAtSensorCPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorCPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorCPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorCPPProjectile(ALookAtSensorCPPProjectile&&); \
	NO_API ALookAtSensorCPPProjectile(const ALookAtSensorCPPProjectile&); \
public:


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorCPPProjectile(ALookAtSensorCPPProjectile&&); \
	NO_API ALookAtSensorCPPProjectile(const ALookAtSensorCPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorCPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorCPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALookAtSensorCPPProjectile)


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALookAtSensorCPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALookAtSensorCPPProjectile, ProjectileMovement); }


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_12_PROLOG
#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_SPARSE_DATA \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_RPC_WRAPPERS \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_INCLASS \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_SPARSE_DATA \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOKATSENSORCPP_API UClass* StaticClass<class ALookAtSensorCPPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LookAtSensorCPP_Source_LookAtSensorCPP_LookAtSensorCPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
