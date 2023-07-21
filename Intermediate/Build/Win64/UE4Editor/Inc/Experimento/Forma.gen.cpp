// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento/Forma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForma() {}
// Cross Module References
	EXPERIMENTO_API UClass* Z_Construct_UClass_AForma_NoRegister();
	EXPERIMENTO_API UClass* Z_Construct_UClass_AForma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimento();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AForma::StaticRegisterNativesAForma()
	{
	}
	UClass* Z_Construct_UClass_AForma_NoRegister()
	{
		return AForma::StaticClass();
	}
	struct Z_Construct_UClass_AForma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshForma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshForma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialForma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialForma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AForma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Forma.h" },
		{ "ModuleRelativePath", "Forma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForma_Statics::NewProp_MeshForma_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Forma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForma_Statics::NewProp_MeshForma = { "MeshForma", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForma, MeshForma), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AForma_Statics::NewProp_MeshForma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForma_Statics::NewProp_MeshForma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForma_Statics::NewProp_MaterialForma_MetaData[] = {
		{ "ModuleRelativePath", "Forma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForma_Statics::NewProp_MaterialForma = { "MaterialForma", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForma, MaterialForma), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AForma_Statics::NewProp_MaterialForma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForma_Statics::NewProp_MaterialForma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AForma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForma_Statics::NewProp_MeshForma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForma_Statics::NewProp_MaterialForma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AForma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AForma_Statics::ClassParams = {
		&AForma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AForma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AForma_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AForma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AForma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AForma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AForma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AForma, 1417917388);
	template<> EXPERIMENTO_API UClass* StaticClass<AForma>()
	{
		return AForma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AForma(Z_Construct_UClass_AForma, &AForma::StaticClass, TEXT("/Script/Experimento"), TEXT("AForma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AForma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
