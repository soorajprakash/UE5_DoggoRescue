// Copyright Epic Games, Inc. All Rights Reserved.

#include "NaveenGameMode.h"
#include "NaveenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANaveenGameMode::ANaveenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
