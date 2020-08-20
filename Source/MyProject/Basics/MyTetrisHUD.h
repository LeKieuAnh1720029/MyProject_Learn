#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyTetrisHUD.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyTetrisHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	AMyTetrisHUD();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
