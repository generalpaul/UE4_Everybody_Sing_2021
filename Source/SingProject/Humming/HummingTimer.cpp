// Fill out your copyright notice in the Description page of Project Settings.


#include "HummingTimer.h"

// Sets default values
AHummingTimer::AHummingTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	TextTimer = CreateDefaultSubobject<UText3DComponent>(TEXT("TextTimer"));
	TextTimer->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextTimer->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextTimer->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextTimer->SetText(FText::FromString("TextTimer"));
	TextTimer->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextTimer->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextTimer->SetExtrude(20.f);
	TextTimer->SetKerning(2.f);
	TextTimer->SetupAttachment(DummyRoot);




	CylinderObj = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CylinderObj"));

	
	struct FConstructorStaticsItems
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> ShapeCylinder;
		
		FConstructorStaticsItems():
			 ShapeCylinder(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder"))
		{
		}
	};
	
	static FConstructorStaticsItems ConstructorStaticsItems;
	

	CylinderObj->SetStaticMesh(ConstructorStaticsItems.ShapeCylinder.Get());


	CylinderObj->SetupAttachment(DummyRoot);
	

}

void AHummingTimer::PassValue(FString value)
{
	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(value);
	//TextTimer->SetText(FText::AsNumber(50));
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString strEventName = JsonObject->GetStringField("eventName");
		
		if (strEventName == "PassTime")
		{
			// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "ENTERED");
			TextTimer->SetText(FText::AsNumber(JsonObject->GetIntegerField("timeParam")));
			//TextTimer->SetText(FText::AsNumber(20));
		}		
	}
}

// Called when the game starts or when spawned
void AHummingTimer::BeginPlay()
{
	Super::BeginPlay();
	//TextTimer->SetText(FText::AsNumber(30));
}

// Called every frame
void AHummingTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

