// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LookAtSensorAOHUD.generated.h"

UCLASS()
class ALookAtSensorAOHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALookAtSensorAOHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

