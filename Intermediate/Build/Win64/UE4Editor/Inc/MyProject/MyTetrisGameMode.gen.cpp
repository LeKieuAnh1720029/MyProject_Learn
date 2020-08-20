// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Basics/MyTetrisGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisGameMode() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisGameMode_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyTetrisGameMode::StaticRegisterNativesAMyTetrisGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyTetrisGameMode_NoRegister()
	{
		return AMyTetrisGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyTetrisGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTetrisGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTetrisGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Basics/MyTetrisGameMode.h" },
		{ "ModuleRelativePath", "Basics/MyTetrisGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTetrisGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTetrisGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTetrisGameMode_Statics::ClassParams = {
		&AMyTetrisGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTetrisGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTetrisGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTetrisGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTetrisGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTetrisGameMode, 436735240);
	template<> MYPROJECT_API UClass* StaticClass<AMyTetrisGameMode>()
	{
		return AMyTetrisGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTetrisGameMode(Z_Construct_UClass_AMyTetrisGameMode, &AMyTetrisGameMode::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyTetrisGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTetrisGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
