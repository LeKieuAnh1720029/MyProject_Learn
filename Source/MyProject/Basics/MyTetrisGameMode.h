#pragma once
//UE4 Includes
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
//My Includes


//Generated Includes
#include "MyTetrisGameMode.generated.h"


UCLASS()
class MYPROJECT_API AMyTetrisGameMode : public AGameMode
{
	GENERATED_BODY()
	
protected:
	AMyTetrisGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
