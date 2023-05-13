// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPiezaMetalica.h"
#include "PiezaBase.h"

// Sets default values
AConstructorPiezaMetalica::AConstructorPiezaMetalica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorPiezaMetalica::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APiezaBase>(APiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AConstructorPiezaMetalica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorPiezaMetalica::ConstruirColores()
{
	Pieza->setColor(3);
}

void AConstructorPiezaMetalica::ConstruirTipoPieza()
{
	/*std::vector<std::vector<std::pair<float, float>>> Shapes =
	{

		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
		{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		//{{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
	};
	Pieza->SetTipoPieza(Shapes);*/
}

APiezaBase* AConstructorPiezaMetalica::GetPiezaBase()
{
	//Returns the Lodging Actor of the Builder (this)
	return Pieza;
}