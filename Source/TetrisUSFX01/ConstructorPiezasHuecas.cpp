// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPiezasHuecas.h"
#include "PiezaBase.h"
#include <vector>

// Sets default values
AConstructorPiezasHuecas::AConstructorPiezasHuecas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorPiezasHuecas::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APiezaBase>(APiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AConstructorPiezasHuecas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorPiezasHuecas::ConstruirColores()
{
	Pieza->setColor(2);
}

void AConstructorPiezasHuecas::ConstruirTipoPieza()
{
	std::vector<std::vector<std::pair<float, float>>> Shapes =
	{

		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {-20.0, 20.0}, {-10.0, 20.0}, {0.0, 20.0}, {10.0, 20.0}, {-20.0, 10.0}, {10.0, 10.0}},
		{{-10.0, 0.0}, {-10.0, 20.0}, {-20.0, 10.0}, {0.0, 10.0}},
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {-20.0, 20.0}, {-10.0, 20.0}, {0.0, 20.0}, {-20.0, 10.0}, {0.0, 10.0}},
		{{0.0, 30.0}, {10.0, 20.0}, {20.0, 10.0}, {10.0, 0.0}, {0.0, -10.0}, {-10.0, 0.0}, {-20.0, 10.0}, {-10.0, 20.0}},
	};
	Pieza->SetTipoPieza(Shapes);
}

APiezaBase* AConstructorPiezasHuecas::GetPiezaBase()
{
	//Returns the Lodging Actor of the Builder (this)
	return Pieza;
}