// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Objeto.h"
#include "CreadorEscenarioMaterial.h"
#include "Escenario.h"
#include "EscenarioPiedras.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase() {
     // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    DefaultPawnClass = ABoard::StaticClass();
    siguientePosicionZ = 0;
}

void ATetrisUSFX01GameModeBase::BeginPlay()
{
    // Call the parent class version of this function
    Super::BeginPlay();



    ACreadorEscenario* CreadorEscenarioMaterial = GetWorld()->SpawnActor<ACreadorEscenarioMaterial>(ACreadorEscenarioMaterial::StaticClass());
    AEscenario* Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material2"));
    
    //FTransform SpawnLocation;
    //Escenario = GetWorld()->SpawnActor<AEscenarioPiedras>(AEscenarioPiedras::StaticClass(), SpawnLocation);
    
    
    //Escenario->EscenarioMesh->SetMaterial(1, Materiales[0]);
    //Escenario->SetActorRelativeLocation(FVector(480.0, 280.0, 0.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, -90.0, 0.0));

    //GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El nombre del Escenario es: %s"), *Escenario->GetNombreEscenario()));
    // Displays a red message on the screen for 10 seconds
    //GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Block"));
    // Spawn an instance of the AMyFirstActor class at the
    //default location.
    /*FTransform SpawnLocation;
    SpawnedActor = GetWorld()->SpawnActor<ABlock>(ABlock::StaticClass(), SpawnLocation);
    SpawnedActor->SetActorRelativeLocation(FVector(0.0, 0.0, 0.0));

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Piece"));
    SpawnedPiece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass(), SpawnLocation);
    SpawnedPiece->SetActorRelativeLocation(FVector(0.0, 100.0, 0.0));
    SpawnedPiece->SpawnBlocks();*/

    /*FTransform SpawnLocation;
    SpawnedObjeto = GetWorld()->SpawnActor<AObjeto>(AObjeto::StaticClass(), SpawnLocation);
    SpawnedObjeto->SetActorRelativeLocation(FVector(0.0, -100.0, 180.0));*/

    //Spawn Builder and Engineer
    /*ConstructorHotel = GetWorld()->SpawnActor<AConstructorAlojamientoHotelero>(AConstructorAlojamientoHotelero::StaticClass());
    Ingeniero = GetWorld()->SpawnActor<AIngenieroArquitectonico>(AIngenieroArquitectonico::StaticClass());
    //Set the Builder for the Engineer and create the buildings
    Ingeniero->SetConstructorAlojamiento(ConstructorHotel);
    Ingeniero->ConstruirAlojamiento();
    //Get the Engineer's Lodging and Logs the created buildings
    AAlojamiento* Alojamiento = Ingeniero->GetAlojamiento();
    Alojamiento->CaracteristicasAlojamiento();

    ConstructorMotel = GetWorld()->SpawnActor<AConstructorAlojamientoBarato>(AConstructorAlojamientoBarato::StaticClass());
    Ingeniero->SetConstructorAlojamiento(ConstructorMotel);
    Ingeniero->ConstruirAlojamiento();
    AAlojamiento* AlojamientoBarato = Ingeniero->GetAlojamiento();
    AlojamientoBarato->CaracteristicasAlojamiento();*/

    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }

}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);


   /* FTransform SpawnLocation;

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Piece"));
    SpawnedPiece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass(), SpawnLocation);
    SpawnedPiece->SetActorRelativeLocation(FVector(0.0, 100.0, 0.0));
    SpawnedPiece->SpawnBlocks();*/ 

}


void ATetrisUSFX01GameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
   {
      // Displays a red message on the screen for 10 seconds
      GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
      SpawnedActor->Destroy();
   }
}
