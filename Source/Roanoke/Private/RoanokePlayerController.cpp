// Roanoke - Tom Shinton 2020

#include "Roanoke/Public/RoanokePlayerController.h"

#if !UE_BUILD_SHIPPING
#include "Roanoke/Public/RoanokeCheatManager.h"
#endif //!UE_BUILD_SHIPPING

ARoanoakPlayerController::ARoanoakPlayerController(const FObjectInitializer& InObjectInitialiser)
{
#if !UE_BUILD_SHIPPING
	CheatClass = URoanokeCheatManager::StaticClass();
#endif //!UE_BUILD_SHIPPING
}

void ARoanoakPlayerController::BeginPlay()
{
	Super::BeginPlay();

#if !UE_BUILD_SHIPPING
	EnableCheats();
#endif //!UE_BUILD_SHIPPING
}
