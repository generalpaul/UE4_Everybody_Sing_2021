// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "SingProjectHttp.generated.h"

UCLASS()
class SINGPROJECT_API ASingProjectHttp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingProjectHttp();
    
	UPROPERTY(EditAnywhere)
	FString CallingClass;
	
	// UPROPERTY(EditAnywhere)
	// class AJackpotTimer* jackpotTimer;	
	
	// UPROPERTY(EditAnywhere)
	// class AJackpotMain* jackpotMain;	

	UPROPERTY(EditAnywhere)
	class AActor* actorToUse;	
	
	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);

	bool boolHasPassed=false;

	bool hasConnection=true;
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	FTimerHandle tmr;
	FString strHttpContent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
