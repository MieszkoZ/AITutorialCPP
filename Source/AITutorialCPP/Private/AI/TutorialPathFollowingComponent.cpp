// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AITutorialCPP.h"
#include "AI/TutorialPathFollowingComponent.h"
#include "Navigation/NavArea_Jump.h"

void UTutorialPathFollowingComponent::SetMoveSegment(int32 SegmentStartIndex)
{
	Super::SetMoveSegment(SegmentStartIndex);

	if (CharacterMoveComp != NULL)
	{
		const FNavPathPoint& SegmentStart = Path->GetPathPoints()[MoveSegmentStartIndex];

		if (FNavAreaHelper::HasJumpFlag(SegmentStart))
		{
			// jump! well... fly-in-straight-line!
			CharacterMoveComp->SetMovementMode(MOVE_Flying);
		}
		else
		{
			// regular move
			CharacterMoveComp->SetMovementMode(MOVE_Walking);
		}
	}
}

void UTutorialPathFollowingComponent::SetMovementComponent(UNavMovementComponent* MoveComp)
{
	Super::SetMovementComponent(MoveComp);

	CharacterMoveComp = Cast<UCharacterMovementComponent>(MovementComp);
}