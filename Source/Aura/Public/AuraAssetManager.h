// Copyright Tab4Space

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "AuraAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	static UAuraAssetManager& Get();

protected:
	// Called very early and start initial loading for our assets for the game
	virtual void StartInitialLoading() override;
};
