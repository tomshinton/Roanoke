// Roanoke - Tom Shinton 2020

#include "Roanoke/Public/RoanokePlayerPawn.h"

#include <Runtime/Engine/Classes/Components/CapsuleComponent.h>
#include <Runtime/Engine/Classes/Components/SceneComponent.h>
#include <Runtime/Movement/Public/PlayerMovementComponent.h>

namespace PlayerPawnPrivate
{
	const FName MovementComponentName = TEXT("MovementComponent");
	const FName RootComponentName = TEXT("PawnRoot");
	const FName PawnCollisionComponentName = TEXT("PawnCollision");
}

ARoanokePlayerPawn::ARoanokePlayerPawn(const FObjectInitializer& InObjectInitialiser)
	: Super(InObjectInitialiser)
	, PawnRoot(InObjectInitialiser.CreateDefaultSubobject<USceneComponent>(this, PlayerPawnPrivate::RootComponentName))
	, PawnCollision(InObjectInitialiser.CreateDefaultSubobject<UCapsuleComponent>(this, PlayerPawnPrivate::PawnCollisionComponentName))
	, MovementComponent(InObjectInitialiser.CreateDefaultSubobject<UPlayerMovementComponent>(this, PlayerPawnPrivate::MovementComponentName))
{
	SetRootComponent(PawnRoot);

	PawnCollision->SetupAttachment(PawnRoot);
}
