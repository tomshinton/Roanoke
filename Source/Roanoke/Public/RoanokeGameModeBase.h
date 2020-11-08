// Roanoke - Tom Shinton 2020

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>
#include <Runtime/Engine/Classes/GameFramework/GameModeBase.h>

#include "RoanokeGameModeBase.generated.h"

UCLASS()
class ARoanokeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ARoanokeGameModeBase(const FObjectInitializer& InObjectInitializer);
};
