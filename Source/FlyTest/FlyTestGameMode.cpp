// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FlyTestGameMode.h"
#include "FlyTestPawn.h"

AFlyTestGameMode::AFlyTestGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyTestPawn::StaticClass();
}
