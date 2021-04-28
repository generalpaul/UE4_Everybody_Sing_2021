// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SingProjectGameMode.h"
#include "SingProjectPlayerController.h"
#include "SingProjectPawn.h"

ASingProjectGameMode::ASingProjectGameMode()
{
	// no pawn by default
	DefaultPawnClass = ASingProjectPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ASingProjectPlayerController::StaticClass();
}
