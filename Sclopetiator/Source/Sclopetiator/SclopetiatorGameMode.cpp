// Copyright Epic Games, Inc. All Rights Reserved.

#include "SclopetiatorGameMode.h"
#include "SclopetiatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASclopetiatorGameMode::ASclopetiatorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
