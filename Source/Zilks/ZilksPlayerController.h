// Permission to use, copy, modify, and/or distribute this software for any purpose with or without fee is hereby granted.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ZilksPlayerController.generated.h"

UCLASS()
class ZILKS_API AZilksPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	/** Setup input actions and context mappings for player. */
	virtual void SetupInputComponent() override;

	/** Mapping context used for pawn control. */
	UPROPERTY()
		class UInputMappingContext* PawnMappingContext;

	/** Action to update location. */
	UPROPERTY()
		class UInputAction* MoveAction;

	/** Action to update rotation. */
	UPROPERTY()
		class UInputAction* RotateAction;

	/** Action to toggle free fly mode. */
	UPROPERTY()
		class UInputAction* FreeFlyAction;

	/** Action to update spring arm length. */
	UPROPERTY()
		class UInputAction* SpringArmLengthAction;
};