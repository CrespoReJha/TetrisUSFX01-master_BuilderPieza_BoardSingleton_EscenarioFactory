// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioPiedras.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioPiedras() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioPiedras_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioPiedras();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioPiedras::StaticRegisterNativesAEscenarioPiedras()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioPiedras_NoRegister()
	{
		return AEscenarioPiedras::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioPiedras_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioPiedras_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioPiedras_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscenarioPiedras.h" },
		{ "ModuleRelativePath", "EscenarioPiedras.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioPiedras_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioPiedras>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioPiedras_Statics::ClassParams = {
		&AEscenarioPiedras::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioPiedras_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioPiedras_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioPiedras()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioPiedras_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioPiedras, 2729164650);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioPiedras>()
	{
		return AEscenarioPiedras::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioPiedras(Z_Construct_UClass_AEscenarioPiedras, &AEscenarioPiedras::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioPiedras"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioPiedras);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
