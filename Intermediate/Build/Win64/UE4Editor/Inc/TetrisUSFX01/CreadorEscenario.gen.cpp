// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CreadorEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorEscenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACreadorEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACreadorEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ACreadorEscenario::StaticRegisterNativesACreadorEscenario()
	{
	}
	UClass* Z_Construct_UClass_ACreadorEscenario_NoRegister()
	{
		return ACreadorEscenario::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreadorEscenario.h" },
		{ "ModuleRelativePath", "CreadorEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorEscenario_Statics::ClassParams = {
		&ACreadorEscenario::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACreadorEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorEscenario, 4133233181);
	template<> TETRISUSFX01_API UClass* StaticClass<ACreadorEscenario>()
	{
		return ACreadorEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorEscenario(Z_Construct_UClass_ACreadorEscenario, &ACreadorEscenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACreadorEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
