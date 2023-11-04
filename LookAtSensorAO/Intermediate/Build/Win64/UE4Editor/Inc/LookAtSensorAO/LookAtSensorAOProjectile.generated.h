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
#ifdef LOOKATSENSORAO_LookAtSensorAOProjectile_generated_h
#error "LookAtSensorAOProjectile.generated.h already included, missing '#pragma once' in LookAtSensorAOProjectile.h"
#endif
#define LOOKATSENSORAO_LookAtSensorAOProjectile_generated_h

#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_SPARSE_DATA
#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALookAtSensorAOProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorAOProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorAOProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorAO"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorAOProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALookAtSensorAOProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorAOProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorAOProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorAO"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorAOProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALookAtSensorAOProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALookAtSensorAOProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorAOProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorAOProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorAOProjectile(ALookAtSensorAOProjectile&&); \
	NO_API ALookAtSensorAOProjectile(const ALookAtSensorAOProjectile&); \
public:


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorAOProjectile(ALookAtSensorAOProjectile&&); \
	NO_API ALookAtSensorAOProjectile(const ALookAtSensorAOProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorAOProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorAOProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALookAtSensorAOProjectile)


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALookAtSensorAOProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALookAtSensorAOProjectile, ProjectileMovement); }


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_12_PROLOG
#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_SPARSE_DATA \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_RPC_WRAPPERS \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_INCLASS \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_SPARSE_DATA \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_INCLASS_NO_PURE_DECLS \
	LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOKATSENSORAO_API UClass* StaticClass<class ALookAtSensorAOProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LookAtSensorAO_Source_LookAtSensorAO_LookAtSensorAOProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
