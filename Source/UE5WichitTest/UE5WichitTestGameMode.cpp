// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5WichitTestGameMode.h"
#include "UE5WichitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5WichitTestGameMode::AUE5WichitTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
