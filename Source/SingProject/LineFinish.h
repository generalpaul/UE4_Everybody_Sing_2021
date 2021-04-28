// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LineUseForFinish.h"
#include "LineFinish.generated.h"

UCLASS()
class SINGPROJECT_API ALineFinish : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineFinish();
	UPROPERTY(Category = Block, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	TArray<ALineUseForFinish*> arrLineActors;

	//** Text component for the score */
	UPROPERTY(Category =  BPMakeCallable, EditAnywhere)
	TSubclassOf<class ALineUseForFinish> objSpawn;


	UPROPERTY(Category =  BPMakeCallable, EditAnywhere)
	TSubclassOf<class ALineTitleSinger> TitleSinger;

	UFUNCTION()
	void fnSetGuide(FString FQuestion, FString FAnswer, float FAnswerLeft, bool isRight, int intIndex);

	UFUNCTION()
	void fnSetGuideImage(FString FQuestion, FString FUrl, bool isRight, int intIndex);

	UFUNCTION()
	void SetPositionsUsingImages(TArray<bool> arrIfImages);

	UFUNCTION()
	void fnSetFinishLine(FString FQuestion, FString FAnswer);

	UFUNCTION()
	void HideLines();

	UFUNCTION()
	void ShowLines();

	UFUNCTION()
	void SetTopAndSizeAndSpacing(float top, float size, float spacing);

	UFUNCTION()
	void SetSize(float Size);

	float floatDepthSize;

	float floatLineStart;

	float floatSpacing;

	

	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* GreenMaterial;

	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* RedMaterial;
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* GreenMaterialGlow;

	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* RedMaterialGlow;

	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* GreenImageMaterial;

	UPROPERTY(Category = Grid, EditAnywhere)
	class UMaterial* RedImageMaterial;

	// UPROPERTY(Category = Grid, EditAnywhere)
	// class UMaterial* YellowMaterial;

	// UPROPERTY(Category = Grid, EditAnywhere)
	// class UMaterial* OrangeMaterial;
	
	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimateFinishResult)
	void StartAnimateFinishResult();
	
	UFUNCTION(BlueprintCallable, Category = PassTimelineUp)
	void PassTimelineUp(float value);

	UFUNCTION(BlueprintCallable, Category = PassTimelineDepth)
	void PassTimelineDepth(float value);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	template<typename T>
	void FindAllActors(UWorld* World, TArray<T*>& Out);

};
