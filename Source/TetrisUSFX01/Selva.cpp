// Fill out your copyright notice in the Description page of Project Settings.


#include "Selva.h"

ASelva::ASelva()
{
	SelvaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SelvaMesh"));
	RootComponent = SelvaMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SelvaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush.SM_Bush'"));

	if (SelvaMeshAsset.Succeeded())
	{
		SelvaMesh->SetStaticMesh(SelvaMeshAsset.Object);
		SelvaMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		SelvaMesh->SetWorldScale3D(FVector(1.0f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Selva"));
	}
}
