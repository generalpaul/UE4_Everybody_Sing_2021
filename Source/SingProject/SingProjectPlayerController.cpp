// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SingProjectPlayerController.h"

ASingProjectPlayerController::ASingProjectPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
