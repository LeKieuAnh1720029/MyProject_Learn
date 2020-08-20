#pragma once
//UE4 Includes
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//My Includes


//Generated Includes
#include "MyTetrisPawn.generated.h"

UCLASS()
class MYPROJECT_API AMyTetrisPawn : public APawn
{
	GENERATED_BODY()

protected:
	AMyTetrisPawn();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
