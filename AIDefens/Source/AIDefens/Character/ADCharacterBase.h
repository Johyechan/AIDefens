// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ADCharacterBase.generated.h"

UCLASS()
class AIDEFENS_API AADCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AADCharacterBase();

// Item Section
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Equipment)
	TObjectPtr<class USkeletalMeshComponent> Weapon;

};
