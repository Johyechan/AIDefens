// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/ADAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UADAnimInstance::UADAnimInstance()
{
	MovingThreshould = 3.0f;
	JumpingThreshould = 100.0f;
}

void UADAnimInstance::NativeInitializeAnimation()
{
}

void UADAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
}
