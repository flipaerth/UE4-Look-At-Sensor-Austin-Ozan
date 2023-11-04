// Copyright Epic Games, Inc. All Rights Reserved.

#include "LookAtSensorAOGameMode.h"
#include "LookAtSensorAOHUD.h"
#include "LookAtSensorAOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALookAtSensorAOGameMode::ALookAtSensorAOGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALookAtSensorAOHUD::StaticClass();
}
