// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ObjetoColorido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetoColorido() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObjetoColorido_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObjetoColorido();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObjetoColorido::StaticRegisterNativesAObjetoColorido()
	{
	}
	UClass* Z_Construct_UClass_AObjetoColorido_NoRegister()
	{
		return AObjetoColorido::StaticClass();
	}
	struct Z_Construct_UClass_AObjetoColorido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjetoColoridoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjetoColoridoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjetoColorido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoColorido_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjetoColorido.h" },
		{ "ModuleRelativePath", "ObjetoColorido.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoColorido_Statics::NewProp_ObjetoColoridoMesh_MetaData[] = {
		{ "Category", "ObjetoColorido" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObjetoColorido.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjetoColorido_Statics::NewProp_ObjetoColoridoMesh = { "ObjetoColoridoMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjetoColorido, ObjetoColoridoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjetoColorido_Statics::NewProp_ObjetoColoridoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoColorido_Statics::NewProp_ObjetoColoridoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjetoColorido_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjetoColorido_Statics::NewProp_ObjetoColoridoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjetoColorido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetoColorido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjetoColorido_Statics::ClassParams = {
		&AObjetoColorido::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjetoColorido_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoColorido_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjetoColorido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoColorido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjetoColorido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjetoColorido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjetoColorido, 2807530001);
	template<> TETRISUSFX01_API UClass* StaticClass<AObjetoColorido>()
	{
		return AObjetoColorido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjetoColorido(Z_Construct_UClass_AObjetoColorido, &AObjetoColorido::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AObjetoColorido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetoColorido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
