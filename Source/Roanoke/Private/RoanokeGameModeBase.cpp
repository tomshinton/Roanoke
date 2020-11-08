// Roanoke - Tom Shinton 2020

#include "Roanoke/Public/RoanokeGameModeBase.h"

#include "Roanoke/Public/RoanokeGameSession.h"
#include "Roanoke/Public/RoanokePlayerController.h"
#include "Roanoke/Public/RoanokePlayerPawn.h"

ARoanokeGameModeBase::ARoanokeGameModeBase(const FObjectInitializer& InObjectInitializer)
{
	DefaultPawnClass = ARoanokePlayerPawn::StaticClass();
	PlayerControllerClass = ARoanoakPlayerController::StaticClass();
	GameSessionClass = ARoanokeGameSession::StaticClass();
}
