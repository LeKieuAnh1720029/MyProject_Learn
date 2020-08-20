// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyTetrisEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTetrisEnums() {}
// Cross Module References
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EMyProject();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static UEnum* EMyProject_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EMyProject, Z_Construct_UPackage__Script_MyProject(), TEXT("EMyProject"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<EMyProject>()
	{
		return EMyProject_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMyProject(EMyProject_StaticEnum, TEXT("/Script/MyProject"), TEXT("EMyProject"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_EMyProject_Hash() { return 100798236U; }
	UEnum* Z_Construct_UEnum_MyProject_EMyProject()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMyProject"), 0, Get_Z_Construct_UEnum_MyProject_EMyProject_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMyProject::Game_None", (int64)EMyProject::Game_None },
				{ "EMyProject::Game_MyProject", (int64)EMyProject::Game_MyProject },
				{ "EMyProject::Game_Tetris", (int64)EMyProject::Game_Tetris },
				{ "EMyProject::Game_PacMan", (int64)EMyProject::Game_PacMan },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Game_MyProject.Name", "EMyProject::Game_MyProject" },
				{ "Game_None.Name", "EMyProject::Game_None" },
				{ "Game_PacMan.Name", "EMyProject::Game_PacMan" },
				{ "Game_Tetris.Name", "EMyProject::Game_Tetris" },
				{ "ModuleRelativePath", "MyTetrisEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"EMyProject",
				"EMyProject",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
