// Fill out your copyright notice in the Description page of Project Settings.

#include "LineTitleSinger.h"

// Sets default values
ALineTitleSinger::ALineTitleSinger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	DummyRootPosition = CreateDefaultSubobject<USceneComponent>(TEXT("DummyPosition"));
	DummyRootPosition->SetupAttachment(DummyRoot);

	LineTitle = CreateDefaultSubobject<UText3DComponent>(TEXT("LineTitle"));
	LineTitle->SetRelativeLocation(FVector(0.f, 0.f, 230.f));
	LineTitle->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	LineTitle->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	LineTitle->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	LineTitle->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// LineTitle->SetExtrude(20.f);
	LineTitle->SetKerning(3.f);
	// LineTitle->SetText(FText::FromString(""));
	LineTitle->SetupAttachment(DummyRootPosition);

	LineMiddle = CreateDefaultSubobject<UText3DComponent>(TEXT("LineMiddle"));
	LineMiddle->SetRelativeLocation(FVector(-40.f, -10.f, 230.f));
	LineMiddle->SetRelativeRotation(FRotator(269.f, 0.f, 179.f));
	LineMiddle->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	LineMiddle->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	LineMiddle->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// LineMiddle->SetExtrude(20.f);
	LineMiddle->SetKerning(3.f);
	// LineMiddle->SetText(FText::FromString(""));
	LineMiddle->SetupAttachment(DummyRootPosition);

	LineSinger = CreateDefaultSubobject<UText3DComponent>(TEXT("LineSinger"));
	LineSinger->SetRelativeLocation(FVector(-40.f, -10.f, 230.f));
	LineSinger->SetRelativeRotation(FRotator(269.f, 0.f, 179.f));
	LineSinger->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	LineSinger->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	LineSinger->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// LineSinger->SetExtrude(20.f);
	LineSinger->SetKerning(3.f);

	LineSinger->SetupAttachment(DummyRootPosition);

	SplineTitleIn = CreateDefaultSubobject<USplineComponent>(TEXT("SplineTitleIn"));
	SplineTitleIn->SetupAttachment(DummyRoot);

	SplineTitleOut = CreateDefaultSubobject<USplineComponent>(TEXT("SplineTitleOut"));
	SplineTitleOut->SetupAttachment(DummyRoot);
}

FVector ALineTitleSinger::GetSplineTimeArtistIn(float time)
{
	return SplineTitleIn->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ALineTitleSinger::GetSplineTimeArtistOut(float time)
{
	return SplineTitleOut->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

void ALineTitleSinger::PassTimelineTitleArtistIn(float value)
{
	FVector newPosition = GetSplineTimeArtistIn(value);
	//SetActorLocation(newPosition);
	DummyRootPosition->SetRelativeLocation(newPosition);
}

void ALineTitleSinger::PassTimelineTitleArtistOut(float value)
{
	FVector newPosition = GetSplineTimeArtistOut(value);
	DummyRootPosition->SetRelativeLocation(newPosition);
}

void ALineTitleSinger::SetLyricsTitle(FString fSong, FString fSinger)
{
	LineTitle->SetText(FText::FromString(fSong));
	LineSinger->SetText(FText::FromString(fSinger));

	StartTitleArtistAnimate();
	FVector getLocation = GetActorLocation();
	getLocation.Z = 0;
	SetActorLocation(getLocation);
}

void ALineTitleSinger::HideTitle()
{
	StartTitleArtistAnimateOut();
	// FVector getLocation = GetActorLocation();
	// getLocation.Z=-8000;
	// SetActorLocation(getLocation);
}

// Called when the game starts or when spawned
void ALineTitleSinger::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALineTitleSinger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
