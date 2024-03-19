// Fill out your copyright notice in the Description page of Project Settings.


#include "ChurchPlayerState.h"
#include "AbilitySystemComponent.h"

AChurchPlayerState::AChurchPlayerState()
{
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}
