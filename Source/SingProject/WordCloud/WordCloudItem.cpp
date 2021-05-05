// Fill out your copyright notice in the Description page of Project Settings.


#include "WordCloudItem.h"

// Sets default values
AWordCloudItem::AWordCloudItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	 DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DummWordCloudItem"));
	 RootComponent = DummyRoot;


	WWord= CreateDefaultSubobject<UText3DComponent>(TEXT("WWord"));

	WWord->SetRelativeLocation(FVector(0.f,0.f,230.f));
	WWord->SetRelativeRotation(FRotator(270.f,0.f,180.f));

	WWord->SetRelativeScale3D(FVector(5.f,5.f,5.f));

	// WWord->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// WWord->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// WWord->SetExtrude(20.f);
	// WWord->SetBevel(4);
	// WWord->SetText(FText::FromString("Word"));
	WWord->SetKerning(3.f);
	
	WWord->SetupAttachment(DummyRoot);

	WUnderline = CreateDefaultSubobject<UText3DComponent>(TEXT("WUnderline"));

	WUnderline->SetRelativeLocation(FVector(0.f,0.f,230.f));
	WUnderline->SetRelativeRotation(FRotator(270.f,0.f,180.f));


	WUnderline->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	WUnderline->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	WUnderline->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// WUnderline->SetExtrude(20.f);
	// WUnderline->SetBevel(4);
	WUnderline->SetKerning(3.f);
	//WUnderline->SetText(FText::FromString("_____"));

	WUnderline->SetupAttachment(DummyRoot);
}

void AWordCloudItem::ResetAll()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("RESET ITEM"));	
	WWord->SetText(FText::FromString(""));
	WUnderline->SetText(FText::FromString(""));
}

// Called when the game starts or when spawned
void AWordCloudItem::SetupAttachmentWordProp(USceneComponent* ParentRoot)
{

	DummyRoot->AttachToComponent(ParentRoot,FAttachmentTransformRules::KeepRelativeTransform);
	
}


// Called when the game starts or when spawned
void AWordCloudItem::BeginPlay()
{
	Super::BeginPlay();
}

void AWordCloudItem::SetParamsFrom(float top, float left, float width, float height, FString strWord)
{

}

void AWordCloudItem::SetParamsTo(float top, float left, float width, float height, FString strWord)
{

}
void AWordCloudItem::SetUnderlinePosition(float top, float left)
{

}
void AWordCloudItem::PassTimelineStartWordItemShow(float value)
{

}
void AWordCloudItem::PassTimelineStartWordItemCorrectPlace(float value)
{

}

// void AWordCloudItem::PassTimelineStartWordItemOut(float value)
// {

// }

// Called every frame
void AWordCloudItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

