// Fill out your copyright notice in the Description page of Project Settings.

#include "JackpotItem.h"
#include "JackpotMain.h"


// Sets default values
AJackpotItem::AJackpotItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	DummyParent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyParent"));
	DummyParent->SetRelativeLocation(FVector(0.f,0.f,0.f));
	DummyParent->SetRelativeRotation(FRotator(0.f,0.f,0.f));

	DummyRootNumber = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootNumber"));
	DummyRootContent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootContent"));
	 
	DummyRootNumber->SetupAttachment(DummyParent);
	DummyRootContent->SetupAttachment(DummyParent);
	DummyParent->SetupAttachment(DummyRoot);


	TextNumber = CreateDefaultSubobject<UText3DComponent>(TEXT("TextNumber"));
	TextNumber->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextNumber->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextNumber->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextNumber->SetText(FText::FromString("TextNumber"));
	TextNumber->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextNumber->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextNumber->SetExtrude(20.f);
	TextNumber->SetKerning(2.f);
	TextNumber->SetupAttachment(DummyRootNumber);

	TextAnswerSingleLine = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerSingleLine"));
	TextAnswerSingleLine->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswerSingleLine->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswerSingleLine->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswerSingleLine->SetText(FText::FromString("TextAnswerSingleLine"));
	TextAnswerSingleLine->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerSingleLine->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerSingleLine->SetExtrude(20.f);
	TextAnswerSingleLine->SetKerning(2.f);
	TextAnswerSingleLine->SetupAttachment(DummyRootContent);

	
	TextAnswerLine1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerLine1"));
	TextAnswerLine1->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswerLine1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswerLine1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswerLine1->SetText(FText::FromString("TextAnswerLine1"));
	TextAnswerLine1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerLine1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerLine1->SetExtrude(20.f);
	TextAnswerLine1->SetKerning(2.f);
	TextAnswerLine1->SetupAttachment(DummyRootContent);

	
	
	TextAnswerLine2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerLine2"));
	TextAnswerLine2->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswerLine2->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswerLine2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswerLine2->SetText(FText::FromString("TextAnswerLine2"));
	TextAnswerLine2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerLine2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerLine2->SetExtrude(20.f);
	TextAnswerLine2->SetKerning(2.f);
	TextAnswerLine2->SetupAttachment(DummyRootContent);




	BlockCover = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockCover"));
	//CylinderObj = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CylinderObj"));
	BlockNumberCover = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockNumberCover"));

	struct FConstructorStaticsItems
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> ShapeCube;
		// ConstructorHelpers::FObjectFinderOptional<UStaticMesh> ShapeCylinder;
		
		FConstructorStaticsItems():
			ShapeCube(TEXT("/Game/StarterContent/Shapes/Shape_Cube"))
			// ,
			// ShapeCylinder(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder"))
		{
		}
	};
	
	static FConstructorStaticsItems ConstructorStaticsItems;
	

	BlockCover->SetStaticMesh(ConstructorStaticsItems.ShapeCube.Get());
	BlockCover->SetupAttachment(DummyRootContent);

	// CylinderObj->SetStaticMesh(ConstructorStaticsItems.ShapeCube.Get());
	// CylinderObj->SetupAttachment(DummyParent);


	BlockNumberCover->SetStaticMesh(ConstructorStaticsItems.ShapeCube.Get());
	BlockNumberCover->SetupAttachment(DummyRootNumber);

}


// Called when the game starts or when spawned
void AJackpotItem::ResetAll()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("RESET"));
	DummyParent->SetRelativeLocation(FVector(0.f,0.f,-8000.f));
	
	BlockCover->SetMaterial(0,JackpotBaseMaterial);
	BlockNumberCover->SetMaterial(0,JackpotBaseMaterial);

// TextAnswerSingleLine
// 	class UText3DComponent* ;

// 	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
// 	class UText3DComponent* TextAnswerLine1;

// 	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
// 	class UText3DComponent* TextAnswerLine2;


}

// Called when the game starts or when spawned
void AJackpotItem::IntroFinish()
{
	OwningGrid->IntroFinishMain(intIndex);
}

// Called when the game starts or when spawned
void AJackpotItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJackpotItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

