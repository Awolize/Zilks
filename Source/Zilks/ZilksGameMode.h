// Permission to use, copy, modify, and/or distribute this software for any purpose with or without fee is hereby granted.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ZilksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ZILKS_API AZilksGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AZilksGameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
};
