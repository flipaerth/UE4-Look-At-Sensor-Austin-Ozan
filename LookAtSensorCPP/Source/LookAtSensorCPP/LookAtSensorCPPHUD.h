// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LookAtSensorCPPHUD.generated.h"

UCLASS()
class ALookAtSensorCPPHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALookAtSensorCPPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

