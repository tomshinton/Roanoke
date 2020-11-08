// Roanoke - Tom Shinton 2020

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>
#include <Runtime/Engine/Classes/Components/ActorComponent.h>

#include "PlayerMovementComponent.generated.h"

UCLASS( ClassGroup=(Movement), meta=(BlueprintSpawnableComponent) )
class MOVEMENT_API UPlayerMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UPlayerMovementComponent();		
};
