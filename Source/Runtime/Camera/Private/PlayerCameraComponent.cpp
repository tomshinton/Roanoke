// Roanoke - Tom Shinton 2020

#include "Runtime/Camera/Public/PlayerCameraComponent.h"

#include <Runtime/Engine/Classes/Camera/CameraComponent.h>

namespace PlayerCameraComponentPrivate
{
	const FName CameraComponentName = TEXT("Camera");
}

UPlayerCameraComponent::UPlayerCameraComponent(const FObjectInitializer& InObjectInitialiser)
	: Super(InObjectInitialiser)
	, Camera(InObjectInitialiser.CreateDefaultSubobject<UCameraComponent>(this, PlayerCameraComponentPrivate::CameraComponentName))
{
	Camera->SetupAttachment(this);
}
