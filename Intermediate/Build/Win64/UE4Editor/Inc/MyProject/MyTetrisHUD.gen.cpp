// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Basics/MyTetrisHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisHUD() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisHUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyTetrisHUD::StaticRegisterNativesAMyTetrisHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyTetrisHUD_NoRegister()
	{
		return AMyTetrisHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyTetrisHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTetrisHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTetrisHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Basics/MyTetrisHUD.h" },
		{ "ModuleRelativePath", "Basics/MyTetrisHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTetrisHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTetrisHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTetrisHUD_Statics::ClassParams = {
		&AMyTetrisHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyTetrisHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTetrisHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTetrisHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTetrisHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTetrisHUD, 843253360);
	template<> MYPROJECT_API UClass* StaticClass<AMyTetrisHUD>()
	{
		return AMyTetrisHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTetrisHUD(Z_Construct_UClass_AMyTetrisHUD, &AMyTetrisHUD::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyTetrisHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTetrisHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
