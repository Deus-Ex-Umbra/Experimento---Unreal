// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento/Esfera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEsfera() {}
// Cross Module References
	EXPERIMENTO_API UClass* Z_Construct_UClass_AEsfera_NoRegister();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AEsfera();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AForma();
	UPackage* Z_Construct_UPackage__Script_Experimento();
// End Cross Module References
	void AEsfera::StaticRegisterNativesAEsfera()
	{
	}
	UClass* Z_Construct_UClass_AEsfera_NoRegister()
	{
		return AEsfera::StaticClass();
	}
	struct Z_Construct_UClass_AEsfera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEsfera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AForma,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsfera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Esfera.h" },
		{ "ModuleRelativePath", "Esfera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEsfera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEsfera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEsfera_Statics::ClassParams = {
		&AEsfera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEsfera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEsfera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEsfera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEsfera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEsfera, 3287043445);
	template<> EXPERIMENTO_API UClass* StaticClass<AEsfera>()
	{
		return AEsfera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEsfera(Z_Construct_UClass_AEsfera, &AEsfera::StaticClass, TEXT("/Script/Experimento"), TEXT("AEsfera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEsfera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
