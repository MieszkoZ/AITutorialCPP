// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AITutorialCPP.h"
#include "AI/TutorialCrowdAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

ATutorialCrowdAIController::ATutorialCrowdAIController(const FPostConstructInitializeProperties& PCIP)
: Super(PCIP.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{

}
