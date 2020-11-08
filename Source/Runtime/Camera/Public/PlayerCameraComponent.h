// Roanoke - Tom Shinton 2020

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h>

#include "PlayerCameraComponent.generated.h"

class UCameraComponent;

UCLASS()
class CAMERA_API UPlayerCameraComponent : public USpringArmComponent
{
	GENERATED_BODY()

public:

	UPlayerCameraComponent(const FObjectInitializer& InObjectInitialiser);

	UPROPERTY(VisibleDefaultsOnly)
	UCameraComponent* Camera;
};