// Roanoke - Tom Shinton 2020

using UnrealBuildTool;
using System.Collections.Generic;

public class RoanokeEditorTarget : TargetRules
{
	public RoanokeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Roanoke" } );
	}
}
