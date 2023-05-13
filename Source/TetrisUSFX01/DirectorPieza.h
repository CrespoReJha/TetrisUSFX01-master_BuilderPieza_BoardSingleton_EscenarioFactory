// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiezas.h"
#include "DirectorPieza.generated.h"

UCLASS()
class TETRISUSFX01_API ADirectorPieza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorPieza();

private:
	//The Builder Actor, that must be a LodgingBuilder
	IConstructorPiezas* ConstructorPieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creates the buildings
	void ConstruirPiezaBase();
	//Set the Builder Actor
	void SetConstructorPiezaBase(AActor* Constructor);

	//Get the Lodging of the Builder
	class APiezaBase* GetPiezaBase();
};
