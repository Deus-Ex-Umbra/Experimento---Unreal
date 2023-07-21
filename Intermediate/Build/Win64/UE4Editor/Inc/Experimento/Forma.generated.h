// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPERIMENTO_Forma_generated_h
#error "Forma.generated.h already included, missing '#pragma once' in Forma.h"
#endif
#define EXPERIMENTO_Forma_generated_h

#define Experimento_Source_Experimento_Forma_h_10_SPARSE_DATA
#define Experimento_Source_Experimento_Forma_h_10_RPC_WRAPPERS
#define Experimento_Source_Experimento_Forma_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Experimento_Source_Experimento_Forma_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAForma(); \
	friend struct Z_Construct_UClass_AForma_Statics; \
public: \
	DECLARE_CLASS(AForma, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimento"), NO_API) \
	DECLARE_SERIALIZER(AForma)


#define Experimento_Source_Experimento_Forma_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAForma(); \
	friend struct Z_Construct_UClass_AForma_Statics; \
public: \
	DECLARE_CLASS(AForma, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Experimento"), NO_API) \
	DECLARE_SERIALIZER(AForma)


#define Experimento_Source_Experimento_Forma_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AForma(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AForma) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForma); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForma(AForma&&); \
	NO_API AForma(const AForma&); \
public:


#define Experimento_Source_Experimento_Forma_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForma(AForma&&); \
	NO_API AForma(const AForma&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForma); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AForma)


#define Experimento_Source_Experimento_Forma_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshForma() { return STRUCT_OFFSET(AForma, MeshForma); } \
	FORCEINLINE static uint32 __PPO__MaterialForma() { return STRUCT_OFFSET(AForma, MaterialForma); }


#define Experimento_Source_Experimento_Forma_h_7_PROLOG
#define Experimento_Source_Experimento_Forma_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimento_Source_Experimento_Forma_h_10_PRIVATE_PROPERTY_OFFSET \
	Experimento_Source_Experimento_Forma_h_10_SPARSE_DATA \
	Experimento_Source_Experimento_Forma_h_10_RPC_WRAPPERS \
	Experimento_Source_Experimento_Forma_h_10_INCLASS \
	Experimento_Source_Experimento_Forma_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experimento_Source_Experimento_Forma_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experimento_Source_Experimento_Forma_h_10_PRIVATE_PROPERTY_OFFSET \
	Experimento_Source_Experimento_Forma_h_10_SPARSE_DATA \
	Experimento_Source_Experimento_Forma_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Experimento_Source_Experimento_Forma_h_10_INCLASS_NO_PURE_DECLS \
	Experimento_Source_Experimento_Forma_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTO_API UClass* StaticClass<class AForma>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experimento_Source_Experimento_Forma_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
