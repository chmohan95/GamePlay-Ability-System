// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

class UAuraAbilitySystemComponent;
class UAttributeSet;
 
UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter ,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	AAuraCharacterBase();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category ="Combact")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
};
