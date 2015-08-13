// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "RGB.h"
#include "RGBGameMode.h"
#include "RGBHUD.h"
#include "RGBCharacter.h"

ARGBGameMode::ARGBGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARGBHUD::StaticClass();
}
