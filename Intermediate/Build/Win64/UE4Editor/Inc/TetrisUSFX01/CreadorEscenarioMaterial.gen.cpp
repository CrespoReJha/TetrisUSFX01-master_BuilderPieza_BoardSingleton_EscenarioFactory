// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CreadorEscenarioMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorEscenarioMaterial() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACreadorEscenarioMaterial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACreadorEscenarioMaterial();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACreadorEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ACreadorEscenarioMaterial::StaticRegisterNativesACreadorEscenarioMaterial()
	{
	}
	UClass* Z_Construct_UClass_ACreadorEscenarioMaterial_NoRegister()
	{
		return ACreadorEscenarioMaterial::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorEscenarioMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materiales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materiales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materiales;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreadorEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreadorEscenarioMaterial.h" },
		{ "ModuleRelativePath", "CreadorEscenarioMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CreadorEscenarioMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreadorEscenarioMaterial, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales_Inner = { "Materiales", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales_MetaData[] = {
		{ "Category", "CreadorEscenarioMaterial" },
		{ "ModuleRelativePath", "CreadorEscenarioMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales = { "Materiales", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreadorEscenarioMaterial, Materiales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::NewProp_Materiales,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorEscenarioMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::ClassParams = {
		&ACreadorEscenarioMaterial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorEscenarioMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorEscenarioMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorEscenarioMaterial, 942809082);
	template<> TETRISUSFX01_API UClass* StaticClass<ACreadorEscenarioMaterial>()
	{
		return ACreadorEscenarioMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorEscenarioMaterial(Z_Construct_UClass_ACreadorEscenarioMaterial, &ACreadorEscenarioMaterial::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACreadorEscenarioMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorEscenarioMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
