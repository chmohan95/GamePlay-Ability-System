// Fill out your copyright notice in the Description page of Project Settings.


#include "character/AuraEnemy.h"

#include "Aura/Aura.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include  "AbilitySystem/AuraAbilitySystemComponent.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);
	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AttributeSet =CreateDefaultSubobject<UAttributeSet>("AttributeSet");
	
}

void AAuraEnemy::Highlight()
{
	
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	
	
}

void AAuraEnemy::UnHighlight()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
	
}
