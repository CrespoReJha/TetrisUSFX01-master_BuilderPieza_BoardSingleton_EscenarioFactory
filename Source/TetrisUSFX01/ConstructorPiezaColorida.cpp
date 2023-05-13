// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPiezaColorida.h"
#include "PiezaBase.h"
#include <vector>

// Sets default values
AConstructorPiezaColorida::AConstructorPiezaColorida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorPiezaColorida::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APiezaBase>(APiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConstructorPiezaColorida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorPiezaColorida::ConstruirColores()
{
	Pieza->setColor(1);
}

void AConstructorPiezaColorida::ConstruirTipoPieza()
{
}

APiezaBase* AConstructorPiezaColorida::GetPiezaBase()
{
	//Returns the Lodging Actor of the Builder (this)
	return Pieza;
}