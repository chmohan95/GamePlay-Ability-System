// Copyright Epic Games, Inc. All Rights Reserved.

#include "AuraGameMode.h"
#include "AuraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAuraGameMode::AAuraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
