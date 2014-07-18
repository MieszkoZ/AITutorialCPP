// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AITutorialCPP.h"
#include "AI/TutorialAIController.h"
#include "AI/TutorialPathFollowingComponent.h"

ATutorialAIController::ATutorialAIController(const FPostConstructInitializeProperties& PCIP)
: Super(PCIP.SetDefaultSubobjectClass<UTutorialPathFollowingComponent>(TEXT("PathFollowingComponent")))
{

}
