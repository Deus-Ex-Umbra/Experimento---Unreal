// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento/Cubo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubo() {}
// Cross Module References
	EXPERIMENTO_API UClass* Z_Construct_UClass_ACubo_NoRegister();
	EXPERIMENTO_API UClass* Z_Construct_UClass_ACubo();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AForma();
	UPackage* Z_Construct_UPackage__Script_Experimento();
// End Cross Module References
	void ACubo::StaticRegisterNativesACubo()
	{
	}
	UClass* Z_Construct_UClass_ACubo_NoRegister()
	{
		return ACubo::StaticClass();
	}
	struct Z_Construct_UClass_ACubo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AForma,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cubo.h" },
		{ "ModuleRelativePath", "Cubo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubo_Statics::ClassParams = {
		&ACubo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubo, 1424273897);
	template<> EXPERIMENTO_API UClass* StaticClass<ACubo>()
	{
		return ACubo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubo(Z_Construct_UClass_ACubo, &ACubo::StaticClass, TEXT("/Script/Experimento"), TEXT("ACubo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
