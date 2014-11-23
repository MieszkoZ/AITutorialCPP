// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Navigation/PathFollowingComponent.h"
#include "TutorialPathFollowingComponent.generated.h"

class UNavMovementComponent;
class UCharacterMovementComponent;

UCLASS()
class UTutorialPathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()

protected:
	/** cached UCharacterMovementComponent */
	UPROPERTY(transient)
	UCharacterMovementComponent* CharacterMoveComp;

public:
	// used to detect properties of a path's segment a character is about to follow
	virtual void SetMoveSegment(int32 SegmentStartIndex) override;

	// used to cache UCharacterMovementComponent we're using in SetMoveSegment implementation
	virtual void SetMovementComponent(UNavMovementComponent* MoveComp) override;
};