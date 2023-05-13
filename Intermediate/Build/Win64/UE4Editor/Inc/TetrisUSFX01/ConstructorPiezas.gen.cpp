// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructorPiezas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorPiezas() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiezas_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiezas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UConstructorPiezas::StaticRegisterNativesUConstructorPiezas()
	{
	}
	UClass* Z_Construct_UClass_UConstructorPiezas_NoRegister()
	{
		return UConstructorPiezas::StaticClass();
	}
	struct Z_Construct_UClass_UConstructorPiezas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructorPiezas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructorPiezas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConstructorPiezas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructorPiezas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConstructorPiezas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructorPiezas_Statics::ClassParams = {
		&UConstructorPiezas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructorPiezas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorPiezas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructorPiezas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructorPiezas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructorPiezas, 1232062611);
	template<> TETRISUSFX01_API UClass* StaticClass<UConstructorPiezas>()
	{
		return UConstructorPiezas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructorPiezas(Z_Construct_UClass_UConstructorPiezas, &UConstructorPiezas::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UConstructorPiezas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructorPiezas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
