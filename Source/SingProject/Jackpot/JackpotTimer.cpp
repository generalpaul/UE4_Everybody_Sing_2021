// Fill out your copyright notice in the Description page of Project Settings.

#include "JackpotTimer.h"
//#include "SingProject/TimerClass.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AJackpotTimer::AJackpotTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRoot"));
	DummyRoot->SetRelativeLocation(FVector(0.f,0.f,0.f));
	DummyRoot->SetRelativeRotation(FRotator(0.f,0.f,0.f));
	
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
	


	//timerObjs=NewObject<UTimerObj>();
	//timerObjs->SetupAttachment(DummyRoot);
	//timer= TimerClass();
	//UTimerClass::BeginPlay();
}

// void AJackpotTimer::RepeatingFunction()
// {
// 	// if (!timer->boolHasPassed)
// 	// {
// 	// 	//boolHasPassed = true;
// 	// 	Request->ProcessRequest();
		
// 	// }
// }

void AJackpotTimer::PassValue(FString value)
{
	// /GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, value);
	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(value);
	
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString strEventName = JsonObject->GetStringField("eventName");
		if (strEventName == "PassTime")
		{
			TextTimer->SetText(FText::AsNumber(JsonObject->GetIntegerField("timeParam")));
		}		
	}
}

// Called when the game starts or when spawned
void AJackpotTimer::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("PASSED4"));
	//httpTimer = GetWorld()->SpawnActor<ASingProjectHttp>(FVector(0,0,0), FRotator(0,0,0));
	//httpCaller->jackpotTimer=this;
	//httpTimer->CallingClass="JackpotTimer";

	//timerObjs->CallingClass="Jackpot";
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("PASSED3"));
	// timerObjs->Begin();

	////not timer loop, one time only
	//GetWorldTimerManager().SetTimer(tmr, this, &AJackpotTimer::RepeatingFunction, 0.2f, true);
}

// Called every frame
void AJackpotTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

