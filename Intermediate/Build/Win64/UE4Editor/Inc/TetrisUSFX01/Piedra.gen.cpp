// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Piedra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiedra() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiedra_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiedra();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APiedra::StaticRegisterNativesAPiedra()
	{
	}
	UClass* Z_Construct_UClass_APiedra_NoRegister()
	{
		return APiedra::StaticClass();
	}
	struct Z_Construct_UClass_APiedra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiedraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiedraMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiedra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiedra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Piedra.h" },
		{ "ModuleRelativePath", "Piedra.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiedra_Statics::NewProp_PiedraMesh_MetaData[] = {
		{ "Category", "Piedra" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Piedra.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiedra_Statics::NewProp_PiedraMesh = { "PiedraMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiedra, PiedraMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APiedra_Statics::NewProp_PiedraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiedra_Statics::NewProp_PiedraMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiedra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiedra_Statics::NewProp_PiedraMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiedra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiedra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiedra_Statics::ClassParams = {
		&APiedra::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APiedra_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APiedra_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiedra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiedra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiedra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiedra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiedra, 3116817640);
	template<> TETRISUSFX01_API UClass* StaticClass<APiedra>()
	{
		return APiedra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiedra(Z_Construct_UClass_APiedra, &APiedra::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiedra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiedra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
