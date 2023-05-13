// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPiezaTetromino.h"
#include "PiezaBase.h"
#include <vector>

// Sets default values
AConstructorPiezaTetromino::AConstructorPiezaTetromino()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorPiezaTetromino::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APiezaBase>(APiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConstructorPiezaTetromino::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorPiezaTetromino::ConstruirColores()
{
	Pieza->setColor(2);
}

void AConstructorPiezaTetromino::ConstruirTipoPieza()
{
}

APiezaBase* AConstructorPiezaTetromino::GetPiezaBase()
{
	//Returns the Lodging Actor of the Builder (this)
	return Pieza;
}