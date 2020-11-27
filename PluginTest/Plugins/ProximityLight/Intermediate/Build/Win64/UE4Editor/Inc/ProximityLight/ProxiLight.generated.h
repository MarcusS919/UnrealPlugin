// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef PROXIMITYLIGHT_ProxiLight_generated_h
#error "ProxiLight.generated.h already included, missing '#pragma once' in ProxiLight.h"
#endif
#define PROXIMITYLIGHT_ProxiLight_generated_h

#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProxiLight(); \
	friend struct Z_Construct_UClass_AProxiLight_Statics; \
public: \
	DECLARE_CLASS(AProxiLight, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProximityLight"), NO_API) \
	DECLARE_SERIALIZER(AProxiLight)


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProxiLight(); \
	friend struct Z_Construct_UClass_AProxiLight_Statics; \
public: \
	DECLARE_CLASS(AProxiLight, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProximityLight"), NO_API) \
	DECLARE_SERIALIZER(AProxiLight)


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProxiLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProxiLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProxiLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProxiLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProxiLight(AProxiLight&&); \
	NO_API AProxiLight(const AProxiLight&); \
public:


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProxiLight(AProxiLight&&); \
	NO_API AProxiLight(const AProxiLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProxiLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProxiLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProxiLight)


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_PRIVATE_PROPERTY_OFFSET
#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_11_PROLOG
#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_RPC_WRAPPERS \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_INCLASS \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_INCLASS_NO_PURE_DECLS \
	PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROXIMITYLIGHT_API UClass* StaticClass<class AProxiLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Plugins_ProximityLight_Source_ProximityLight_Public_ProxiLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
