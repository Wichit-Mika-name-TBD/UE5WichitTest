// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5WichitTest : ModuleRules
{
	public UE5WichitTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "QofL" });
	}
}
