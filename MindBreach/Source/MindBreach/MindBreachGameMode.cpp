// Copyright Epic Games, Inc. All Rights Reserved.

#include "MindBreachGameMode.h"
#include "MindBreachCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMindBreachGameMode::AMindBreachGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
