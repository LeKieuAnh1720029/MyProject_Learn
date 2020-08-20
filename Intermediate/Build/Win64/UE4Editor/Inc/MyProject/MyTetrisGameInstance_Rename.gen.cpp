// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Basics/MyTetrisGameInstance_Rename.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisGameInstance_Rename() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyTetrisGameInstance_Rename_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyTetrisGameInstance_Rename();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyTetrisGameInstance_Rename::StaticRegisterNativesUMyTetrisGameInstance_Rename()
	{
	}
	UClass* Z_Construct_UClass_UMyTetrisGameInstance_Rename_NoRegister()
	{
		return UMyTetrisGameInstance_Rename::StaticClass();
	}
	struct Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Basics/MyTetrisGameInstance_Rename.h" },
		{ "ModuleRelativePath", "Basics/MyTetrisGameInstance_Rename.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTetrisGameInstance_Rename>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::ClassParams = {
		&UMyTetrisGameInstance_Rename::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyTetrisGameInstance_Rename()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyTetrisGameInstance_Rename_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyTetrisGameInstance_Rename, 4002092603);
	template<> MYPROJECT_API UClass* StaticClass<UMyTetrisGameInstance_Rename>()
	{
		return UMyTetrisGameInstance_Rename::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyTetrisGameInstance_Rename(Z_Construct_UClass_UMyTetrisGameInstance_Rename, &UMyTetrisGameInstance_Rename::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyTetrisGameInstance_Rename"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTetrisGameInstance_Rename);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
