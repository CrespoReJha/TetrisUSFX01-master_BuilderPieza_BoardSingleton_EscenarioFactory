// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "ConstructorPiezaColorida.h"
#include "ConstructorPiezaGrande.h"
#include "ConstructorPiezaMetalica.h"
#include "ConstructorPiezaTetromino.h"
#include "ConstructorPiezasHuecas.h"
#include "DirectorPieza.h"
#include "PiezaBase.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
// Sets default values

ABoard::ABoard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    TArray<AActor*> Instancias;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABoard::StaticClass(), Instancias);
    if (Instancias.Num() > 1)
    {
        //If exist at least one of them, set the instance with the first found one
        Instancia = Cast<ABoard>(Instancias[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s already exists"), *Instancia->GetName()));
        //Then Destroy this Actor
        Destroy();
    }

}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();
	
    for (TActorIterator<APiezaBase> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:
        NewPiece();
        CoolLeft = CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            CoolLeft = CoolDown;
            Status = PS_MOVING;
        }
        break;
    default:
        break;
    }
}

// Called to bind functionality to input
void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
    PlayerInputComponent->BindAction("CrearObjeto", IE_Pressed, this, &ABoard::CrearObjeto);
    PlayerInputComponent->BindAction("SpawnBoard", IE_Pressed, this, &ABoard::SpawnBoard);
    //PlayerInputComponent->BindAction("CheckLine", IE_Pressed, this, &ABoard::CheckLine);

}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        CoolLeft = CoolDown;
    }
}

void ABoard::NewPiece()
{
    
    CheckLine();
    if (CurrentPiece)
    {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }

    FVector Location(0.0, 5.0, 195.0);
    FRotator Rotation(0.0, 0.0, 0.0);

   
    DirectorPieza = GetWorld()->SpawnActor<ADirectorPieza>(ADirectorPieza::StaticClass());
    
    int Random = FMath::RandRange(0, 4);
    //int Random = 1;
    switch (Random)
    {
    case 0:
        ConstructorPiezaColorida = GetWorld()->SpawnActor<AConstructorPiezaColorida>(AConstructorPiezaColorida::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaColorida);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA COLORIDA "));
        break;
    case 1:
        ConstructorPiezaGrande = GetWorld()->SpawnActor<AConstructorPiezaGrande>(AConstructorPiezaGrande::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaGrande);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA GRANDE "));
        break;
    case 2:
        ConstructorPiezaMetalica = GetWorld()->SpawnActor<AConstructorPiezaMetalica>(AConstructorPiezaMetalica::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaMetalica);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA METALICA "));
        break;
    case 3:
        ConstructorPiezaTetromino = GetWorld()->SpawnActor<AConstructorPiezaTetromino>(AConstructorPiezaTetromino::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaTetromino);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA TETROMINO "));
        break;
    case 4:
        ConstructorPiezasHuecas = GetWorld()->SpawnActor<AConstructorPiezasHuecas>(AConstructorPiezasHuecas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezasHuecas);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA HUECAS "));
        break;
    }
    //DirectorPieza->SetConstructorPiezaBase(ConstructorPiezasHuecas);
    DirectorPieza->ConstruirPiezaBase();
    
    APiezaBase* PiezaBase = DirectorPieza->GetPiezaBase();
    CurrentPiece = PiezaBase;
    //CurrentPiece = GetWorld()->SpawnActor<APiezaBase>(Location, Rotation);
    CurrentPiece->SetActorRelativeLocation(FVector(Location));
    CurrentPiece->SetActorRelativeRotation(FRotator(Rotation));
    CurrentPiece->SpawnBlocks();
    bGameOver = CheckGameOver();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));
        /*if (GameOverSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), GameOverSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}

void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };

    int z = 0;
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        //DrawDebugBox(GetWorld(), Location, FVector(4.5f, 49.5f, 4.5f), FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        }
        else // this line is full, remove the line
        {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);

            /*if (LineRemoveSoundCue)
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), LineRemoveSoundCue, GetActorLocation(), GetActorRotation());
            }*/
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }

    while (CurrentPiece->MoveDown())
    {
    }

    /*if (MoveToEndSoundCue)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveToEndSoundCue, GetActorLocation(), GetActorRotation());
    }*/

    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        return true;
    }

    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}

void ABoard::CrearObjeto()
{
    

    FVector Location(0.0, -100.0, cont);
    FRotator Rotation(0.0, 0.0, 0.0);
    objeto = GetWorld()->SpawnActor<AObjeto>(Location, Rotation);

    cont -= 50.0f;
}

void ABoard::SpawnBoard()
{
    SpawnedBoard = GetWorld()->SpawnActor<ABoard>(ABoard::StaticClass());
}
