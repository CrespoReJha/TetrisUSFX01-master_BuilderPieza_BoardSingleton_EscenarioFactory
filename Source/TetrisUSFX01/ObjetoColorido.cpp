// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetoColorido.h"

AObjetoColorido::AObjetoColorido()
{
	ObjetoColoridoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObjetoColoridoMesh"));
	RootComponent = ObjetoColoridoMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoColoridoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Couch.SM_Couch'"));

	if (ObjetoColoridoMeshAsset.Succeeded())
	{
		ObjetoColoridoMesh->SetStaticMesh(ObjetoColoridoMeshAsset.Object);
		ObjetoColoridoMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		ObjetoColoridoMesh->SetWorldScale3D(FVector(5.5f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para ObjetoColorido"));
	}
}
