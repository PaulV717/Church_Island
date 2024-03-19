// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AbilitySystemInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ChurchPlayerState.generated.h"


/**
 * 
 */
UCLASS()
class MYPROJECT_API AChurchPlayerState : public APlayerState, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    AChurchPlayerState();
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

    UPROPERTY(BlueprintReadWrite)
    UAbilitySystemComponent* AbilitySystemComponent;
};
