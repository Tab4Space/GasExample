// Copyright Tab4Space


#include "AbilitySystem/Abilities/AuraFireBlast.h"

FString UAuraFireBlast::GetDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCoolDown(Level);

	return FString::Printf(TEXT(
		"<Title>FIRE BLAST</>\n\n"
		"<Small>Level: </>" "<Level>%d</>\n"
		"<Small>ManaCost: </><ManaCost>%.1f</>\n"
		"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
		"<Default>Launches %d </>"
		"<Default>fire balls in all directions, each coming back and </>"
		"<Default>exploding upon return, causing </>"
		"<Damage>%d</><Default> radial fire damage with "
		"a chance to burn</>"),
		Level,
		ManaCost,
		Cooldown,
		NumFireBalls,
		ScaledDamage);
}

FString UAuraFireBlast::GetNextLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCoolDown(Level);

	return FString::Printf(TEXT(
		"<Title>NEXT LEVEL</>\n\n"
		"<Small>Level: </>" "<Level>%d</>\n"
		"<Small>ManaCost: </><ManaCost>%.1f</>\n"
		"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
		"<Default>Launches %d </>"
		"<Default>fire balls in all directions, each coming back and </>"
		"<Default>exploding upon return, causing </>"
		"<Damage>%d</><Default> radial fire damage with "
		"a chance to burn</>"),
		Level,
		ManaCost,
		Cooldown,
		NumFireBalls,
		ScaledDamage);
}
