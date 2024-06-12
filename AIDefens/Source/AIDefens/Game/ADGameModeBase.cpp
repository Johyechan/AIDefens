// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ADGameModeBase.h"
#include "ADGameModeBase.h"
#include "Player/ADPlayerController.h"

AADGameModeBase::AADGameModeBase()
{
	// DefaultPawnClass
	static ConstructorHelpers::FClassFinder<APawn>DefaultPawnClassRef(TEXT("/Script/AIDefens.ADCharacterPlayer"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	// PlayerControllerClass
	static ConstructorHelpers::FClassFinder<APlayerController>PlayerControllerClassRef(TEXT("/Script/AIDefens.ADPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
