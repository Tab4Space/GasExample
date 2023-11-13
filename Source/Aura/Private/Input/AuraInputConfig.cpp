// Copyright Tab4Space


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActorForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for(const FAuraInputAction& Action : AbilityInputActions)
	{
		if(Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}

	if(bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find ability input action for InputTag [%s], on InputConfit [%s]"), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
