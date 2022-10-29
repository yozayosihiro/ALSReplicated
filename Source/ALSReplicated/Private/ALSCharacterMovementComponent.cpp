// Fill out your copyright notice in the Description page of Project Settings.


#include "ALSCharacterMovementComponent.h"

void UALSCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewMaxWalkSpeed, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewMaxWalkSpeedCrounched, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewMaxAcceleration, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewBrakingDecelerationWalking, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewGroundFriction, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UALSCharacterMovementComponent, NewBrakingFricktionFactor, COND_SkipOwner);
}

void UALSCharacterMovementComponent::SetMaxWalkSpeed(float Max_WalkSpeed)
{
	NewMaxWalkSpeed = Max_WalkSpeed;
	Server_MaxWalkSpeed_Implementation(NewMaxWalkSpeed);
	MaxWalkSpeed = NewMaxWalkSpeed;
}

void UALSCharacterMovementComponent::SetMaxWalkSpeedCrounched(float Max_WalkSpeedCrounched)
{
	NewMaxWalkSpeedCrounched = Max_WalkSpeedCrounched;
	Server_MaxWalkSpeedCrounched_Implementation(NewMaxWalkSpeedCrounched);
	MaxWalkSpeedCrouched = NewMaxWalkSpeedCrounched;
}

void UALSCharacterMovementComponent::SetMaxAcceleration(float Max_Acceleration)
{
	NewMaxAcceleration = Max_Acceleration;
	Server_MaxAcceleration_Implementation(Max_Acceleration);
	MaxAcceleration = NewMaxAcceleration;
}

void UALSCharacterMovementComponent::SetBrakingDecelerationWalking(float Braking_DecelerationWalking)
{
	NewBrakingDecelerationWalking = Braking_DecelerationWalking;
	Server_BrakingDecelerationWalking_Implementation(NewBrakingDecelerationWalking);
	BrakingDecelerationWalking = NewBrakingDecelerationWalking;
}

void UALSCharacterMovementComponent::SetGroundFriction(float Ground_Friction)
{
	NewGroundFriction = Ground_Friction;
	Server_GroundFriction_Implementation(NewGroundFriction);
	GroundFriction = NewGroundFriction;
}

void UALSCharacterMovementComponent::SetBrakingFricktionFactor(float Braking_FricktionFactor)
{
	NewBrakingFricktionFactor = Braking_FricktionFactor;
	Server_BrakingFricktionFactor_Implementation(NewBrakingFricktionFactor);
	BrakingFrictionFactor = NewBrakingFricktionFactor;
}

void UALSCharacterMovementComponent::Server_MaxWalkSpeed_Implementation(float Max_WalkSpeed)
{
	NewMaxWalkSpeed = Max_WalkSpeed;
}

bool UALSCharacterMovementComponent::Server_MaxWalkSpeed_Validate(float Max_WalkSpeed)
{
	return true;
}

void UALSCharacterMovementComponent::Server_MaxWalkSpeedCrounched_Implementation(float Max_WalkSpeedCrounched)
{
	MaxWalkSpeedCrouched = Max_WalkSpeedCrounched;
}

bool UALSCharacterMovementComponent::Server_MaxWalkSpeedCrounched_Validate(float Max_WalkSpeedCrounched)
{
	return true;
}

void UALSCharacterMovementComponent::Server_MaxAcceleration_Implementation(float Max_Acceleration)
{
	NewMaxAcceleration = Max_Acceleration;
}

bool UALSCharacterMovementComponent::Server_MaxAcceleration_Validate(float Max_Acceleration)
{
	return true;
}

void UALSCharacterMovementComponent::Server_BrakingDecelerationWalking_Implementation(float Braking_DecelerationWalking)
{
	NewBrakingDecelerationWalking = Braking_DecelerationWalking;
}

bool UALSCharacterMovementComponent::Server_BrakingDecelerationWalking_Validate(float Braking_DecelerationWalking)
{
	return true;
}

void UALSCharacterMovementComponent::Server_GroundFriction_Implementation(float Ground_Friction)
{
	NewGroundFriction = Ground_Friction;
}

bool UALSCharacterMovementComponent::Server_GroundFriction_Validate(float Ground_Friction)
{
	return true;
}

void UALSCharacterMovementComponent::Server_BrakingFricktionFactor_Implementation(float Braking_FricktionFactor)
{
	NewBrakingFricktionFactor = Braking_FricktionFactor;
}

bool UALSCharacterMovementComponent::Server_BrakingFricktionFactor_Validate(float Braking_FricktionFactor)
{
	return true;
}
