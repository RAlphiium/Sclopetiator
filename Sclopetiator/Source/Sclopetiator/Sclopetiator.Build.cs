// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sclopetiator : ModuleRules
{
	public Sclopetiator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
