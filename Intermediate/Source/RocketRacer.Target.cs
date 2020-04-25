using UnrealBuildTool;

public class RocketRacerTarget : TargetRules
{
	public RocketRacerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("RocketRacer");
	}
}
