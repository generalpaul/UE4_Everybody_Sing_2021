// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Components/SplineComponent.h"
#include "SingProject/SingProjectHttp.h"
#include "JackpotItem.h"
#include "JackpotTimer.h"
#include "JackpotMain.generated.h"

UCLASS()
class SINGPROJECT_API AJackpotMain : public AActor
{
	GENERATED_BODY()

	bool boolHasPassed;
	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;
	
	
public:	
	// Sets default values for this actor's properties
	AJackpotMain();

	// void RepeatingFunction();
	// void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	// FHttpModule* Http;
	// void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);


	// bool hasConnection=true;
	// FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	// FTimerHandle tmr;
	// FString strHttpContent;

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartWrongMain();

	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j1;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j2;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j3;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j4;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j5;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j6;	
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j7;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j8;	
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j9;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AJackpotItem* j10;	

	TArray<AJackpotItem*> arrLineActor;

	// UPROPERTY(Category = Grid, EditAnywhere)
	// class AJackpotTimer* timerObj;

	UFUNCTION(BlueprintCallable, Category = Grid)
	void IntroFinishMain(int intIndexPass);

	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswerX;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* JackpotTitle;

	
	// UPROPERTY(Category = Grid, BlueprintReadOnly)
	// class ASingProjectHttp* httpCaller;

	UFUNCTION(Category = Grid)
	void PassValue(FString value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
