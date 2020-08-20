// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Basics/MyTetrisPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisPlayerController() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisPlayerController_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTetrisPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyTetrisPlayerController::StaticRegisterNativesAMyTetrisPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMyTetrisPlayerController_NoRegister()
	{
		return AMyTetrisPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyTetrisPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTetrisPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTetrisPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Basics/MyTetrisPlayerController.h" },
		{ "ModuleRelativePath", "Basics/MyTetrisPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTetrisPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTetrisPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTetrisPlayerController_Statics::ClassParams = {
		&AMyTetrisPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTetrisPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTetrisPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTetrisPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTetrisPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTetrisPlayerController, 22411312);
	template<> MYPROJECT_API UClass* StaticClass<AMyTetrisPlayerController>()
	{
		return AMyTetrisPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTetrisPlayerController(Z_Construct_UClass_AMyTetrisPlayerController, &AMyTetrisPlayerController::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyTetrisPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTetrisPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
