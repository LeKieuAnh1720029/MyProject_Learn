// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Basics/MyTetrisPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisPawn() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisPawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyTetrisPawn::StaticRegisterNativesAMyTetrisPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyTetrisPawn_NoRegister()
	{
		return AMyTetrisPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyTetrisPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTetrisPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTetrisPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Basics/MyTetrisPawn.h" },
		{ "ModuleRelativePath", "Basics/MyTetrisPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTetrisPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTetrisPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTetrisPawn_Statics::ClassParams = {
		&AMyTetrisPawn::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTetrisPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTetrisPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTetrisPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTetrisPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTetrisPawn, 3250484162);
	template<> MYPROJECT_API UClass* StaticClass<AMyTetrisPawn>()
	{
		return AMyTetrisPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTetrisPawn(Z_Construct_UClass_AMyTetrisPawn, &AMyTetrisPawn::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyTetrisPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTetrisPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
