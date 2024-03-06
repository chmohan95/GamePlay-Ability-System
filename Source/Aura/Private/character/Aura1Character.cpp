// Fill out your copyright notice in the Description page of Project Settings.


#include "character/Aura1Character.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
//#include "AbilitySystem/AuraAttributeSet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/AuraPlayerState.h"


AAura1Character::AAura1Character()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,400.f,0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;


	bUseControllerRotationPitch= false;
	bUseControllerRotationRoll= false;
	bUseControllerRotationYaw = false;
	
}

void AAura1Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilityActorInfo();
}




void AAura1Character::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	InitAbilityActorInfo();
}

void AAura1Character::InitAbilityActorInfo()
{
	AAuraPlayerState* AuraPlayerState =  GetPlayerState<AAuraPlayerState>();
	check(AuraPlayerState)
	AuraPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(AuraPlayerState,this);
	AbilitySystemComponent = Cast<UAuraAbilitySystemComponent>(AuraPlayerState->GetAbilitySystemComponent());
	AttributeSet = AuraPlayerState->GetAttributeSet;
}


