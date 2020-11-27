// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGINTEST_PluginTestGameMode_generated_h
#error "PluginTestGameMode.generated.h already included, missing '#pragma once' in PluginTestGameMode.h"
#endif
#define PLUGINTEST_PluginTestGameMode_generated_h

#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_RPC_WRAPPERS
#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPluginTestGameMode(); \
	friend struct Z_Construct_UClass_APluginTestGameMode_Statics; \
public: \
	DECLARE_CLASS(APluginTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PluginTest"), PLUGINTEST_API) \
	DECLARE_SERIALIZER(APluginTestGameMode)


#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPluginTestGameMode(); \
	friend struct Z_Construct_UClass_APluginTestGameMode_Statics; \
public: \
	DECLARE_CLASS(APluginTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PluginTest"), PLUGINTEST_API) \
	DECLARE_SERIALIZER(APluginTestGameMode)


#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLUGINTEST_API APluginTestGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APluginTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLUGINTEST_API, APluginTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APluginTestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLUGINTEST_API APluginTestGameMode(APluginTestGameMode&&); \
	PLUGINTEST_API APluginTestGameMode(const APluginTestGameMode&); \
public:


#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLUGINTEST_API APluginTestGameMode(APluginTestGameMode&&); \
	PLUGINTEST_API APluginTestGameMode(const APluginTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLUGINTEST_API, APluginTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APluginTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APluginTestGameMode)


#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define PluginTest_Source_PluginTest_PluginTestGameMode_h_9_PROLOG
#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_RPC_WRAPPERS \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_INCLASS \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Source_PluginTest_PluginTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	PluginTest_Source_PluginTest_PluginTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLUGINTEST_API UClass* StaticClass<class APluginTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Source_PluginTest_PluginTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
