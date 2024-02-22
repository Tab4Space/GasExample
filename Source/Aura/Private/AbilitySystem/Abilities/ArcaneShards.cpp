// Copyright Tab4Space


#include "AbilitySystem/Abilities/ArcaneShards.h"

FString UArcaneShards::GetDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCoolDown(Level);
	
	if (Level == 1)
	{
		return FString::Printf(TEXT(
			"<Title>ARCANE SHARDS</>\n\n"
			"<Small>Level: </>" "<Level>%d</>\n"
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			"<Default>Summon a shard of arcane energy, "
			"causing radial arcane damage of </>"
			"<Damage>%d</><Default> at the shard origin.</>"),
			Level,
			ManaCost,
			Cooldown,
			ScaledDamage);
	}
	else
	{
		return FString::Printf(TEXT(
			"<Title>ARCANE SHARDS</>\n\n"
			"<Small>Level: </>" "<Level>%d</>\n"
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			"<Default>Summon %d shards of arcane energy, causing radial arcane damage of </>"
			"<Damage>%d</><Default> at the shard origin.</>"),
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, MaxNumShards),
			ScaledDamage);
	}
}

FString UArcaneShards::GetNextLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCoolDown(Level);

	return FString::Printf(TEXT(
			"<Title>NEXT LEVEL</>\n\n"
			"<Small>Level: </>" "<Level>%d</>\n"
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			"<Default>Summon %d shards of arcane energy, causing radial arcane damage of </>"
			"<Damage>%d</><Default> at the shard origin.</>"),
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, MaxNumShards),
			ScaledDamage);
}
