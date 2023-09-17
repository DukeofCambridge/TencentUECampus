// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentUECampusGameMode.h"
#include "TencentUECampusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencentUECampusGameMode::ATencentUECampusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
