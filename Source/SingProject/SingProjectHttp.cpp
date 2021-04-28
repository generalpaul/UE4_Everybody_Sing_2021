// Fill out your copyright notice in the Description page of Project Settings.

#include "SingProjectHttp.h"
#include "SingProject/Jackpot/JackpotTimer.h"
#include "SingProject/Jackpot/JackpotMain.h"
#include "SingProject/Humming/HummingTimer.h"
#include "SingProject/Humming/HummingMain.h"

// Sets default values
ASingProjectHttp::ASingProjectHttp()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASingProjectHttp::BeginPlay()
{

	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("BeginPlay"));

	Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &ASingProjectHttp::OnResponseReceived);

//Request->SetURL("http://localhost:8092/timer");
	if(CallingClass.ToLower().Contains("timer"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TIMER"));
		 Request->SetURL("http://localhost:8092/timer");
	}//https://jsonplaceholder.typicode.com/todos/1
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("CALLER"));
		Request->SetURL("http://localhost:8092");
	}
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));

	GetWorldTimerManager().SetTimer(tmr, this, &ASingProjectHttp::RepeatingFunction, 0.4f, true);
	//GetOuter()->GetWorld()->GetTimerManager().SetTimer(tmr, this, &UTimerObj::RepeatingFunction, 0.2f, true);
}

// Called every frame
void ASingProjectHttp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASingProjectHttp::RepeatingFunction()
{
	if (!boolHasPassed)
	{
		boolHasPassed = true;
		Request->ProcessRequest();
	}
}

void ASingProjectHttp::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{

	//Create a pointer to hold the json serialized data

	if (!Response.IsValid())
	{
			boolHasPassed = false;
			return;
	}

	FString tmpHttp = Response->GetContentAsString();

	if (strHttpContent == tmpHttp)
	{
		boolHasPassed = false;
		return;
	}
		

	strHttpContent = tmpHttp;

	// TSharedPtr<FJsonObject> JsonObject;
	// //Create a reader pointer to read the json data
	// TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);

	// //Deserialize the json data given Reader and the actual object to deserialize
	// if (Response.IsValid())
	// {
			
		if (CallingClass == "JackpotTimer")
		{
			//((AJackpotTimer*)GetOwner())->PassValue(tmpHttp);
			((AJackpotTimer*)actorToUse)->PassValue(strHttpContent);
		}
		else if (CallingClass == "JackpotMain")
		{
			((AJackpotMain*)actorToUse)->PassValue(strHttpContent);
		}
		else if (CallingClass == "HummingTimer")
		{
			((AHummingTimer*)actorToUse)->PassValue(strHttpContent);
		}
		else if (CallingClass == "HummingMain")
		{
			((AHummingMain*)actorToUse)->PassValue(strHttpContent);
		}

		boolHasPassed = false;
	//}
}
