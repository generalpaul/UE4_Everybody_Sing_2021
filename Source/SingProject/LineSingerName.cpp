// Fill out your copyright notice in the Description page of Project Settings.


#include "LineSingerName.h"

// Sets default values
ALineSingerName::ALineSingerName()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	TextSingerName = CreateDefaultSubobject<UText3DComponent>(TEXT("TextSingerName"));
	TextSingerName->SetRelativeLocation(FVector(0.f, 0.f, 230.f));
	TextSingerName->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextSingerName->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextSingerName->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextSingerName->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextSingerName->SetExtrude(20.f);
    TextSingerName->SetKerning(3.f);
	// TextSingerName->SetText(FText::FromString(""));
	TextSingerName->SetupAttachment(DummyRoot);

	SingerBackground = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SingerBackground"));

	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	if (PlaneAsset.Succeeded())
	{
		SingerBackground->SetStaticMesh(PlaneAsset.Object);
		SingerBackground->SetupAttachment(DummyRoot);
	}

}

// void ALineSingerName::SetName(FString Name)
// {
// 	TextSingerName->SetText(FText::FromString(Name));
// }

// Called when the game starts or when spawned
void ALineSingerName::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALineSingerName::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

