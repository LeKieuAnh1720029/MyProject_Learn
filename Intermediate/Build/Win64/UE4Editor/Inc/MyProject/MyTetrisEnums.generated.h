// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyTetrisEnums_generated_h
#error "MyTetrisEnums.generated.h already included, missing '#pragma once' in MyTetrisEnums.h"
#endif
#define MYPROJECT_MyTetrisEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyTetrisEnums_h


#define FOREACH_ENUM_EMYPROJECT(op) \
	op(EMyProject::Game_None) \
	op(EMyProject::Game_MyProject) \
	op(EMyProject::Game_Tetris) \
	op(EMyProject::Game_PacMan) 

enum class EMyProject : uint8;
template<> MYPROJECT_API UEnum* StaticEnum<EMyProject>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
