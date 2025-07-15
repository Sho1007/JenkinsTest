// Copyright Epic Games, Inc. All Rights Reserved.

#include "JenkinsTestGameMode.h"
#include "JenkinsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJenkinsTestGameMode::AJenkinsTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
