// Roanoke - Tom Shinton 2020

#include "Roanoke/Public/RoanokePlayerPawn.h"

#include <Runtime/Camera/Public/PlayerCameraComponent.h>
#include <Runtime/Engine/Classes/Components/CapsuleComponent.h>
#include <Runtime/Engine/Classes/Components/SceneComponent.h>
#include <Runtime/Movement/Public/PlayerMovementComponent.h>

namespace PlayerPawnPrivate
{
	const FName MovementComponentName = TEXT("MovementComponent");
	const FName RootComponentName = TEXT("PawnRoot");
	const FName PawnCollisionComponentName = TEXT("PawnCollision");
	const FName PlayerCameraComponentName = TEXT("PlayerCamera");
}

ARoanokePlayerPawn::ARoanokePlayerPawn(const FObjectInitializer& InObjectInitialiser)
	: Super(InObjectInitialiser)
	, PawnRoot(InObjectInitialiser.CreateDefaultSubobject<USceneComponent>(this, PlayerPawnPrivate::RootComponentName))
	, PawnCollision(InObjectInitialiser.CreateDefaultSubobject<UCapsuleComponent>(this, PlayerPawnPrivate::PawnCollisionComponentName))
	, MovementComponent(InObjectInitialiser.CreateDefaultSubobject<UPlayerMovementComponent>(this, PlayerPawnPrivate::MovementComponentName))
	, PlayerCameraComponent(InObjectInitialiser.CreateDefaultSubobject<UPlayerCameraComponent>(this, PlayerPawnPrivate::PlayerCameraComponentName))
{
	SetRootComponent(PawnRoot);

	PawnCollision->SetupAttachment(PawnRoot);
	PlayerCameraComponent->SetupAttachment(PawnRoot);
}
