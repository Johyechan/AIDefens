// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ADPlayerController.h"

void AADPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}
