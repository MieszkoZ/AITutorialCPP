// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AITutorialCPP.h"
#include "Navigation/NavArea_Jump.h"

UNavArea_Jump::UNavArea_Jump(const class FPostConstructInitializeProperties& PCIP) 
: Super(PCIP)
{
	FNavAreaHelper::Set(AreaFlags, ENavAreaFlag::Jump);
}
