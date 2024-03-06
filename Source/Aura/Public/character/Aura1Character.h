// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Aura1Character.generated.h"



/**
 * 
 */
class UAbilitySystemComponent;
UCLASS()


class AURA_API AAura1Character : public AAuraCharacterBase
{
	GENERATED_BODY()


public:

	AAura1Character();
	
    virtual  void PossessedBy(AController* NewController) override;
	virtual  void OnRep_PlayerState() override;

private:

	void InitAbilityActorInfo();


	
private:

	
};
