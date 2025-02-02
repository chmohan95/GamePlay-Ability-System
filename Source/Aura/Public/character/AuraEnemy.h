// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Intraction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase,public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();

	
	
	virtual void Highlight()override;
	virtual void UnHighlight()override;
	
	UPROPERTY(BlueprintReadOnly)
	bool bHighLighted = false;

protected:
	virtual  void BeginPlay() override; 

	
};
