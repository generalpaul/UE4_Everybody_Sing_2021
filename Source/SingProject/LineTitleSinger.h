// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "SingProjectBlockGrid.h"
#include "LineTitleSinger.generated.h"

UCLASS()
class SINGPROJECT_API ALineTitleSinger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineTitleSinger();

	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootPosition;
	

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineTitleIn;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineTitleOut;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* LineTitle;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* LineMiddle;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* LineSinger;
	
	UFUNCTION(Category = SetLyricsTitle)
	void SetLyricsTitle(FString fSong, FString fSinger);

	UFUNCTION(Category = HideTitle)
	void HideTitle();

	UFUNCTION(BlueprintImplementableEvent, Category = StartTitleArtistAnimate)
	void StartTitleArtistAnimate();

	UFUNCTION(BlueprintImplementableEvent, Category = StartTitleArtistAnimateOut)
	void StartTitleArtistAnimateOut();


	UFUNCTION(BlueprintCallable, Category = PassTimelineTitleArtistIn)
	void PassTimelineTitleArtistIn(float value);

	UFUNCTION(BlueprintCallable, Category = PassTimelineTitleArtistOut)
	void PassTimelineTitleArtistOut(float value);

	// UPROPERTY()
	// class ASingProjectBlockGrid* OwningGrid;



	UFUNCTION(BlueprintCallable, Category = GetSplineTimeArtistIn)
	FVector GetSplineTimeArtistIn(float time);

	UFUNCTION(BlueprintCallable, Category = GetSplineTimeArtistOut)
	FVector GetSplineTimeArtistOut(float time);


	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
