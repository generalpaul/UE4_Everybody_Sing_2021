
// Fill out your copyright notice in the Description page of Project Settings.

#include "LineActor.h"
#include "Components/TextRenderComponent.h"
#include "Text3DActor.h"
#include "Text3DComponent.h"

//#include "Plugins/Experimental/Text3D/Source/Text3D/Public/UText3DComponent.h"


// Sets default values
ALineActor::ALineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	// RootComponent = DummyRoot;

	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(0.f,0.f,0.f));
	//ScoreText->SetRelativeLocation(FVector(-100.f,-1000.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
    ScoreText->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	ScoreText->SetVerticalAlignment(EVerticalTextAligment::EVRTA_TextTop);
  //  ScoreText->SetRelativeScale3D(FVector(2.f,2.f,2.f));
	ScoreText->SetWorldSize(400);
	//ScoreText->SetRelativeLocation(FVector(0.f,0.f,0.f));
	ScoreText->SetCastShadow(true);
	//ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(0)));
//	ScoreText->SetText("WHEN SELDOM TOLD");
	ScoreText->SetupAttachment(RootComponent);
   
    //Multiplier = 1000;


}


void ALineActor::SetValue(FString strValue)
{
	ScoreText->SetText(strValue);
}

// // Sets default values
// void ALineActor::SetPos(float intX, float intPitch)
// {
//  	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
// 	PrimaryActorTick.bCanEverTick = true;
// 	// DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
// 	// RootComponent = DummyRoot;
// 	ScoreText->HorizSpacingAdjust(.85f);
// 	// Create static mesh component
// 	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
// 	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
// 	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
// 	//ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(0)));
// 	ScoreText->SetText("I THINK I SHALL NEVER SEE, A POEM AS LOVELY");
// 	ScoreText->SetupAttachment(RootComponent);

// }





void ALineActor::setScroll(float scroll) 
{
	scrollFloat=scroll;
}

void ALineActor::hide() 
{
		SetActorHiddenInGame(true);

		// Disables collision components
		SetActorEnableCollision(false);

		// Stops the Actor from ticking
		SetActorTickEnabled(false);
}

void ALineActor::show() 
{
		SetActorHiddenInGame(false);

		// Disables collision components
		SetActorEnableCollision(true);

		// Stops the Actor from ticking
		SetActorTickEnabled(true);
}

//moving up
void ALineActor::SetVerticalTop(float position)
{

	topPosition=position;
	intMovement=1;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}


//moving up
void ALineActor::MoveUp(float value)
{
	//topPosition-=value;
	intMovement=2;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

//moving down
void ALineActor::MoveDown(float value)
{
	intMovement=3;
	//topPosition+=value;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}


// Called when the game starts or when spawned
void ALineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // if(Multiplier==1000)
	// {
	// 	Multiplier=-1000;
	// }
	// else
	// 	Multiplier+=200;

	if(intMovement==2)
	{
		topPosition-=scrollFloat;
	}
	else if(intMovement==3)
	{
		topPosition+=scrollFloat;
	}
  
   FString f=FString::SanitizeFloat(scrollFloat);
  //FString::Printf(TEXT("%s"),FString::SanitizeFloat(scrollFloat));
  //GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, FString::SanitizeFloat(scrollFloat));
	SetActorLocation(FVector(topPosition,0.f,0.f));
	//ScoreText->SetRelativeLocation(FVector(topPosition,0.f,0.f));
}

