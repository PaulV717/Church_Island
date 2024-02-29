// Copyright Epic Games, Inc. All Rights Reserved.

#include "Church_IslandGameMode.h"
#include "Church_IslandCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChurch_IslandGameMode::AChurch_IslandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
