// Roanoke - Tom Shinton 2020

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>
#include <Runtime/Engine/Classes/GameFramework/Pawn.h>

#include "RoanokePlayerPawn.generated.h"

class UCapsuleComponent;
class USceneComponent;
class UPlayerCameraComponent;
class UPlayerMovementComponent;

UCLASS(Blueprintable)
class ARoanokePlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	ARoanokePlayerPawn(const FObjectInitializer& InObjectInitialiser);

protected:

	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* PawnRoot;

	UPROPERTY(VisibleDefaultsOnly)
	UCapsuleComponent* PawnCollision;

	UPROPERTY(VisibleDefaultsOnly)
	UPlayerMovementComponent* MovementComponent;

	UPROPERTY(VisibleDefaultsOnly)
	UPlayerCameraComponent* PlayerCameraComponent;
};
