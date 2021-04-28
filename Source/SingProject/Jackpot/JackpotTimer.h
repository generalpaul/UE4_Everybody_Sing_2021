// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "SingProject/SingProjectHttp.h"
#include "JackpotTimer.generated.h"


UCLASS()
class SINGPROJECT_API AJackpotTimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJackpotTimer();

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextTimer;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* CylinderObj;

	UFUNCTION(Category = Grid)
	void PassValue(FString value);
	
	// UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	// class UTimerObj* timerObjs;
 	
	// UPROPERTY(Category = Grid, BlueprintReadOnly)
	// class ASingProjectHttp* httpTimer;

	// UFUNCTION(Category = Grid)
	// void RepeatingFunction();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
