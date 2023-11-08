// Copyright Tab4Space

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_MaxHealth.generated.h"

/**
 Determine MaxHealth using custom calculation
 */
UCLASS()
class AURA_API UMMC_MaxHealth : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	UMMC_MaxHealth();

	// Access gameplay effect spec, which means access all the information
	// Capture attributes
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	// Define attribute to capture
	FGameplayEffectAttributeCaptureDefinition VigorDef; 
};
