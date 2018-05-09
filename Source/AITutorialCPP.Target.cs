// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class AITutorialCPPTarget : TargetRules
{
	public AITutorialCPPTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("AITutorialCPP");
	}

	//
	// TargetRules interface.
	//
}
