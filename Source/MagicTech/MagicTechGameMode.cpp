// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagicTechGameMode.h"
#include "MagicTechCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicTechGameMode::AMagicTechGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
