// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "LineUseForFinish.generated.h"


UCLASS()
class SINGPROJECT_API ALineUseForFinish : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineUseForFinish();
	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BlockAnswer;

	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneAnswer;

	UPROPERTY(EditAnywhere, Category=URLFrom, BlueprintReadWrite)
	FString url;

	UFUNCTION(Category=SetURL, BlueprintCallable)
	void SetURL(FString _url);


	// UFUNCTION(Category=SetURL, BlueprintCallable)
	// void SetImageVisibility(bool value);

	
	UFUNCTION(BlueprintImplementableEvent, Category=StartDownload) //BlueprintCallable
	void StartDownload();


	UFUNCTION(Category = SetLyricsLineResult)
	void SetLyricsLineResult(FString fQuestion, FString fAnswer, UMaterial* pFrontMaterial, UMaterial* pBevelMaterial, UMaterial* pExtruedMaterial, float fAnswerLeft);

	UFUNCTION(Category = SetLyricsLineResultImage)
	void SetLyricsLineResultImage(FString FQuestion, FString FUrl, bool isRight, UMaterial* answerMaterial);

	UFUNCTION(Category = Reset)
	void Reset();

	UFUNCTION(Category = SetItemPosition)
	void SetItemPosition(FVector newPosition);

	UFUNCTION(Category = SetFloatingStartLine)
	void SetFloatingStartLine(float top);

	UFUNCTION(Category = SetupAttachmentProp)
	void SetupAttachmentProp(USceneComponent* ParentRoot);

	UFUNCTION(Category = SetFloatScale)
	void SetFloatScale(float scale);

	float floatTop;
	float floatScale;

	
	float GetFloatingStartLine();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
