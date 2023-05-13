// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Objeto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjeto() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObjeto_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObjeto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObjeto::StaticRegisterNativesAObjeto()
	{
	}
	UClass* Z_Construct_UClass_AObjeto_NoRegister()
	{
		return AObjeto::StaticClass();
	}
	struct Z_Construct_UClass_AObjeto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjetoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjetoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjeto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objeto.h" },
		{ "ModuleRelativePath", "Objeto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Objeto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto, Instance), Z_Construct_UClass_AObjeto_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Statics::NewProp_ObjetoMesh_MetaData[] = {
		{ "Category", "Objeto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objeto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Statics::NewProp_ObjetoMesh = { "ObjetoMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto, ObjetoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Statics::NewProp_ObjetoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Statics::NewProp_ObjetoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjeto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Statics::NewProp_ObjetoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjeto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjeto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjeto_Statics::ClassParams = {
		&AObjeto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjeto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjeto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjeto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjeto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjeto, 2986088990);
	template<> TETRISUSFX01_API UClass* StaticClass<AObjeto>()
	{
		return AObjeto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjeto(Z_Construct_UClass_AObjeto, &AObjeto::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AObjeto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjeto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
