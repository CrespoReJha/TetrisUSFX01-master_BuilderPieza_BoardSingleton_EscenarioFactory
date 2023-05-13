// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezaInterfaz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezaInterfaz() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaInterfaz_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaInterfaz();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UPiezaInterfaz::StaticRegisterNativesUPiezaInterfaz()
	{
	}
	UClass* Z_Construct_UClass_UPiezaInterfaz_NoRegister()
	{
		return UPiezaInterfaz::StaticClass();
	}
	struct Z_Construct_UClass_UPiezaInterfaz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPiezaInterfaz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPiezaInterfaz_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PiezaInterfaz.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPiezaInterfaz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPiezaInterfaz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPiezaInterfaz_Statics::ClassParams = {
		&UPiezaInterfaz::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPiezaInterfaz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPiezaInterfaz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPiezaInterfaz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPiezaInterfaz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPiezaInterfaz, 827515466);
	template<> TETRISUSFX01_API UClass* StaticClass<UPiezaInterfaz>()
	{
		return UPiezaInterfaz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPiezaInterfaz(Z_Construct_UClass_UPiezaInterfaz, &UPiezaInterfaz::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UPiezaInterfaz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPiezaInterfaz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
