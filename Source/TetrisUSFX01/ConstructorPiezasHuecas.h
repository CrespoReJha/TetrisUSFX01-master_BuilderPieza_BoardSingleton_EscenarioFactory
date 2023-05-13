// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiezas.h"
#include "ConstructorPiezasHuecas.generated.h"

UCLASS()
class TETRISUSFX01_API AConstructorPiezasHuecas : public AActor, public IConstructorPiezas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructorPiezasHuecas();

private:
	//The Lodging Actor
	UPROPERTY()
		class APiezaBase* Pieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirColores() override;
	virtual void ConstruirTipoPieza() override;
	virtual class APiezaBase* GetPiezaBase() override;

};
