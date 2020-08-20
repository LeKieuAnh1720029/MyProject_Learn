#include "MyTetrisPawn.h"

AMyTetrisPawn::AMyTetrisPawn()
{
 		PrimaryActorTick.bCanEverTick = true;

}


void AMyTetrisPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyTetrisPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyTetrisPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

