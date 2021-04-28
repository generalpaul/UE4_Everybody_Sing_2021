// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "Components/TextBlock.h"
#include "LineActor.generated.h"

UCLASS()
class SINGPROJECT_API ALineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineActor();

	float topPosition;
	void SetVerticalTop(float position);

	void SetValue(FString strValue);

	//** Text component for the score */
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UTextRenderComponent* ScoreText;
	
	

	//UPROPERTY(meta = (BindWidget, OptionalWidget = true))
	//class UTextBlock* OptionalText;

	/** Grid that owns us */
	UPROPERTY()
	class ASingProjectBlockGrid* OwningGrid;

	void MoveUp(float value);
	void MoveDown(float value);

	int intMovement=0;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UPROPERTY(EditAnywhere, Category = Movement)
	// 	float Multiplier;

	void hide();
	void show();

	void setScroll(float scroll);

	float scrollFloat=10;
	

};
