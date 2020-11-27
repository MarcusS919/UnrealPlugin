// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGINTEST_PluginTestCharacter_generated_h
#error "PluginTestCharacter.generated.h already included, missing '#pragma once' in PluginTestCharacter.h"
#endif
#define PLUGINTEST_PluginTestCharacter_generated_h

#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_RPC_WRAPPERS
#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPluginTestCharacter(); \
	friend struct Z_Construct_UClass_APluginTestCharacter_Statics; \
public: \
	DECLARE_CLASS(APluginTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginTest"), NO_API) \
	DECLARE_SERIALIZER(APluginTestCharacter)


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPluginTestCharacter(); \
	friend struct Z_Construct_UClass_APluginTestCharacter_Statics; \
public: \
	DECLARE_CLASS(APluginTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginTest"), NO_API) \
	DECLARE_SERIALIZER(APluginTestCharacter)


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APluginTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APluginTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APluginTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APluginTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APluginTestCharacter(APluginTestCharacter&&); \
	NO_API APluginTestCharacter(const APluginTestCharacter&); \
public:


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APluginTestCharacter(APluginTestCharacter&&); \
	NO_API APluginTestCharacter(const APluginTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APluginTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APluginTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APluginTestCharacter)


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APluginTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APluginTestCharacter, FollowCamera); }


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_9_PROLOG
#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_RPC_WRAPPERS \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_INCLASS \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Source_PluginTest_PluginTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	PluginTest_Source_PluginTest_PluginTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLUGINTEST_API UClass* StaticClass<class APluginTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Source_PluginTest_PluginTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
