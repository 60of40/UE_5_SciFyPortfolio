// Copyright Epic Games, Inc. All Rights Reserved.

#include "SciFiGamePart1GameMode.h"
#include "SciFiGamePart1Character.h"
#include "UObject/ConstructorHelpers.h"

ASciFiGamePart1GameMode::ASciFiGamePart1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
