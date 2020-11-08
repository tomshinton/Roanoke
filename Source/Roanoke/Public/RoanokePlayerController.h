// Roanoke - Tom Shinton 2020

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>
#include <Runtime/Engine/Classes/GameFramework/PlayerController.h>

#include "RoanokePlayerController.generated.h"

UCLASS()
class ARoanoakPlayerController : public APlayerController
{
	GENERATED_BODY()

	ARoanoakPlayerController(const FObjectInitializer& InObjectInitialiser);

private:

	void BeginPlay() override;
};
