// Roanoke - Tom Shinton 2020

using UnrealBuildTool;

public class Roanoke : ModuleRules
{
	public Roanoke(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore" 
		});

		PrivateDependencyModuleNames.AddRange(new string[] 
		{
"Camera",
			"Movement"
		});
	}
}
