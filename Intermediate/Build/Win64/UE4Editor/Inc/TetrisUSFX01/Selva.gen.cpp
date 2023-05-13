// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Selva.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelva() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASelva_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASelva();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASelva::StaticRegisterNativesASelva()
	{
	}
	UClass* Z_Construct_UClass_ASelva_NoRegister()
	{
		return ASelva::StaticClass();
	}
	struct Z_Construct_UClass_ASelva_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelvaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelvaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelva_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelva_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Selva.h" },
		{ "ModuleRelativePath", "Selva.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelva_Statics::NewProp_SelvaMesh_MetaData[] = {
		{ "Category", "Selva" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Selva.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelva_Statics::NewProp_SelvaMesh = { "SelvaMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASelva, SelvaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASelva_Statics::NewProp_SelvaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASelva_Statics::NewProp_SelvaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelva_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelva_Statics::NewProp_SelvaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelva_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelva>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelva_Statics::ClassParams = {
		&ASelva::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASelva_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASelva_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASelva_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelva_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelva()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelva_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelva, 1261454558);
	template<> TETRISUSFX01_API UClass* StaticClass<ASelva>()
	{
		return ASelva::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelva(Z_Construct_UClass_ASelva, &ASelva::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ASelva"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelva);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
