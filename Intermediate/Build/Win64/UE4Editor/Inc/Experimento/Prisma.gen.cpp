// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento/Prisma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrisma() {}
// Cross Module References
	EXPERIMENTO_API UClass* Z_Construct_UClass_APrisma_NoRegister();
	EXPERIMENTO_API UClass* Z_Construct_UClass_APrisma();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AForma();
	UPackage* Z_Construct_UPackage__Script_Experimento();
// End Cross Module References
	void APrisma::StaticRegisterNativesAPrisma()
	{
	}
	UClass* Z_Construct_UClass_APrisma_NoRegister()
	{
		return APrisma::StaticClass();
	}
	struct Z_Construct_UClass_APrisma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrisma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AForma,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrisma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Prisma.h" },
		{ "ModuleRelativePath", "Prisma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrisma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrisma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrisma_Statics::ClassParams = {
		&APrisma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APrisma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrisma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrisma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrisma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrisma, 2148886481);
	template<> EXPERIMENTO_API UClass* StaticClass<APrisma>()
	{
		return APrisma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrisma(Z_Construct_UClass_APrisma, &APrisma::StaticClass, TEXT("/Script/Experimento"), TEXT("APrisma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrisma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
