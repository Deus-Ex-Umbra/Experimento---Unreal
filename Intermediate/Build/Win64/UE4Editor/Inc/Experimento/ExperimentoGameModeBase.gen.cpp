// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento/ExperimentoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentoGameModeBase() {}
// Cross Module References
	EXPERIMENTO_API UClass* Z_Construct_UClass_AExperimentoGameModeBase_NoRegister();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AExperimentoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Experimento();
// End Cross Module References
	void AExperimentoGameModeBase::StaticRegisterNativesAExperimentoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AExperimentoGameModeBase_NoRegister()
	{
		return AExperimentoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExperimentoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperimentoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimentoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExperimentoGameModeBase.h" },
		{ "ModuleRelativePath", "ExperimentoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperimentoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperimentoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExperimentoGameModeBase_Statics::ClassParams = {
		&AExperimentoGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExperimentoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimentoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperimentoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExperimentoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExperimentoGameModeBase, 3485227330);
	template<> EXPERIMENTO_API UClass* StaticClass<AExperimentoGameModeBase>()
	{
		return AExperimentoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExperimentoGameModeBase(Z_Construct_UClass_AExperimentoGameModeBase, &AExperimentoGameModeBase::StaticClass, TEXT("/Script/Experimento"), TEXT("AExperimentoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperimentoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
