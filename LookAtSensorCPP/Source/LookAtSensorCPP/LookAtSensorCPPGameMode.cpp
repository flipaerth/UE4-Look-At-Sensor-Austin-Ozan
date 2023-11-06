// Copyright Epic Games, Inc. All Rights Reserved.

#include "LookAtSensorCPPGameMode.h"
#include "LookAtSensorCPPHUD.h"
#include "LookAtSensorCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALookAtSensorCPPGameMode::ALookAtSensorCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALookAtSensorCPPHUD::StaticClass();
}
