// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorEscenarioMaterial.h"
#include "EscenarioPiedras.h"
#include "EscenarioColores.h"
#include "EscenarioPasto.h"
#include "Piedra.h"
#include "Selva.h"
#include "ObjetoColorido.h"


ACreadorEscenarioMaterial::ACreadorEscenarioMaterial()
{

    PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("Escenario Scene");
    RootComponent = SceneComponent;

    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_0;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_2;
        FConstructorStatics()
            : Material_0(TEXT("Material'/Game/Blueprints/Rocas_Mat.Rocas_Mat'"))//piedras
            , Material_1(TEXT("Material'/Game/Blueprints/Paisaje_Colores_Mat.Paisaje_Colores_Mat'"))//colores
            , Material_2(TEXT("Material'/Game/Blueprints/Paisaje_verde_Mat.Paisaje_verde_Mat'"))//pasto
        {
        }
    };
    static FConstructorStatics ConstructorStatics;
    Materiales.Add(ConstructorStatics.Material_0.Get());
    Materiales.Add(ConstructorStatics.Material_1.Get());
    Materiales.Add(ConstructorStatics.Material_2.Get());
}

void ACreadorEscenarioMaterial::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

AEscenario* ACreadorEscenarioMaterial::EstablecerMaterial(FString Categoria)
{
    if (Categoria == "Material")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Piedras"));
        //FRotator Rotation(0.0, -90.0, 0.0);
        FTransform SpawnLocation;
        UPROPERTY()
            AEscenario* B;

        B = GetWorld()->SpawnActor<AEscenarioPiedras>(AEscenarioPiedras::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        B->EscenarioMesh->SetMaterial(0, Materiales[0]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

        UPROPERTY()
            AEscenario* Piedra;

        Piedra = GetWorld()->SpawnActor<APiedra>(APiedra::StaticClass(), SpawnLocation);
        Piedra->SetActorRelativeLocation(FVector(0.0, 200.0, -50.0));
        Piedra->SetActorRelativeRotation(FRotator(0.0, 0.0, 0.0));

        Piedra = GetWorld()->SpawnActor<APiedra>(APiedra::StaticClass(), SpawnLocation);
        Piedra->SetActorRelativeLocation(FVector(0.0, -200.0, -50.0));
        Piedra->SetActorRelativeRotation(FRotator(0.0, 0.0, 0.0));

		//return GetWorld()->SpawnActor<AEscenario>(Materiales[0]->GetClass(), GetActorLocation(), GetActorRotation());
        //return Piedra;*/
        return B;
	}
    else if (Categoria == "Material1")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Colores"));
        //FRotator Rotation(0.0, -90.0, 0.0);
        FTransform SpawnLocation;
        AEscenario* B = GetWorld()->SpawnActor<AEscenarioColores>(AEscenarioColores::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        B->EscenarioMesh->SetMaterial(0, Materiales[1]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

        return B;

        /*UPROPERTY()
            AEscenario* ObjetoColorido;

        ObjetoColorido = GetWorld()->SpawnActor<AObjetoColorido>(AObjetoColorido::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        //B->EscenarioMesh->SetMaterial(1, Materiales[1]);

        //Piedra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        ObjetoColorido->SetActorRelativeLocation(FVector(270.0, 20.0, -280.0));
        ObjetoColorido->SetActorRelativeRotation(FRotator(0.0, -180.0, 0.0));

		//return GetWorld()->SpawnActor<AEscenario>(Materiales[1]->GetClass(), GetActorLocation(), GetActorRotation());
        return ObjetoColorido;*/
	}
    else if (Categoria == "Material2")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Pasto"));
        //FRotator Rotation(0.0, -90.0, 0.0);
        FTransform SpawnLocation;
        AEscenario* B = GetWorld()->SpawnActor<AEscenarioPasto>(AEscenarioPasto::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        B->EscenarioMesh->SetMaterial(0, Materiales[2]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

        /*UPROPERTY()
            AEscenario* Selva;

        Selva = GetWorld()->SpawnActor<ASelva>(ASelva::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        //B->EscenarioMesh->SetMaterial(1, Materiales[1]);

        //Piedra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        Selva->SetActorRelativeLocation(FVector(200.0, -130.0, -100.0));
        Selva->SetActorRelativeRotation(FRotator(0.0, 0.0, 0.0));
        //return GetWorld()->SpawnActor<AEscenario>(Materiales[2]->GetClass(), GetActorLocation(), GetActorRotation());
        //return Selva;

        Selva = GetWorld()->SpawnActor<ASelva>(ASelva::StaticClass(), SpawnLocation);
        //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
        //B->EscenarioMesh->SetMaterial(1, Materiales[1]);

        //Piedra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        Selva->SetActorRelativeLocation(FVector(200.0, 130.0, -150.0));
        Selva->SetActorRelativeRotation(FRotator(0.0, 0.0, 0.0));*/

        return B;

        
	}
    return nullptr;
}
