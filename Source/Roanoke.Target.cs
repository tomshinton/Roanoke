// Roanoke - Tom Shinton 2020

using UnrealBuildTool;
using System.Collections.Generic;

public class RoanokeTarget : TargetRules
{
	public RoanokeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Roanoke" } );
	}
}
