// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Block.h"
#include "Piece.h"
#include "Objeto.h"
#include "Board.h"
#include "TetrisUSFX01GameModeBase.generated.h"

UCLASS()
class TETRISUSFX01_API ATetrisUSFX01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ATetrisUSFX01GameModeBase();

	UPROPERTY()
	ABlock* SpawnedActor;
	
	UPROPERTY()
	APiece* SpawnedPiece;

	

	/*UPROPERTY()
		AObjeto* SpawnedObjeto;*/

	UFUNCTION()
	void DestroyActorFunction();

	virtual void Tick(float DeltaTime) override;

private:
	//The Builder Actor
	/*UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorAlojamientoHotelero* ConstructorHotel;
	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AIngenieroArquitectonico* Ingeniero;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorAlojamientoBarato* ConstructorMotel;*/

private:
	float siguientePosicionZ;

};
