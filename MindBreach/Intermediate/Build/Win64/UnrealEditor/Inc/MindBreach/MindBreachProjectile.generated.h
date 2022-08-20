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
struct FHitResult;
#ifdef MINDBREACH_MindBreachProjectile_generated_h
#error "MindBreachProjectile.generated.h already included, missing '#pragma once' in MindBreachProjectile.h"
#endif
#define MINDBREACH_MindBreachProjectile_generated_h

#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_SPARSE_DATA
#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMindBreachProjectile(); \
	friend struct Z_Construct_UClass_AMindBreachProjectile_Statics; \
public: \
	DECLARE_CLASS(AMindBreachProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MindBreach"), NO_API) \
	DECLARE_SERIALIZER(AMindBreachProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMindBreachProjectile(); \
	friend struct Z_Construct_UClass_AMindBreachProjectile_Statics; \
public: \
	DECLARE_CLASS(AMindBreachProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MindBreach"), NO_API) \
	DECLARE_SERIALIZER(AMindBreachProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMindBreachProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMindBreachProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMindBreachProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMindBreachProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMindBreachProjectile(AMindBreachProjectile&&); \
	NO_API AMindBreachProjectile(const AMindBreachProjectile&); \
public:


#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMindBreachProjectile(AMindBreachProjectile&&); \
	NO_API AMindBreachProjectile(const AMindBreachProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMindBreachProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMindBreachProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMindBreachProjectile)


#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_12_PROLOG
#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_SPARSE_DATA \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_RPC_WRAPPERS \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_INCLASS \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_SPARSE_DATA \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MindBreach_Source_MindBreach_MindBreachProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINDBREACH_API UClass* StaticClass<class AMindBreachProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MindBreach_Source_MindBreach_MindBreachProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
