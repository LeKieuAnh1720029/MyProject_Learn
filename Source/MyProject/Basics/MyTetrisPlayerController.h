#pragma once
//UE4 Includes
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
//My Includes


//Generated Includes
#include "MyTetrisPlayerController.generated.h"

UCLASS()
class MYPROJECT_API AMyTetrisPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	AMyTetrisPlayerController();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
