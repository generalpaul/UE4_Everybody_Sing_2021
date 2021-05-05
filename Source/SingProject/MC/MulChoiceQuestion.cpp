// Fill out your copyright notice in the Description page of Project Settings.


#include "MulChoiceQuestion.h"

// Sets default values
AMulChoiceQuestion::AMulChoiceQuestion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	 RootComponent = DummyRoot;

	TextLine1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine1"));
	TextLine1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLine1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLine1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	// TextLine1->SetText(FText::FromString("Line1"));
	TextLine1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLine1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine1->SetExtrude(20.f);
	TextLine1->SetKerning(3.f);
	TextLine1->SetupAttachment(DummyRoot);

	TextLine2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine2"));
	TextLine2->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextLine2->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	//TextLine2->SetText(FText::FromString("Line2"));
	TextLine2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLine2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLine2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine2->SetExtrude(20.f);
	TextLine2->SetKerning(3.f);
	TextLine2->SetupAttachment(DummyRoot);

	
	// TextLine1Out = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine1Out"));
	// TextLine1Out->SetRelativeLocation(FVector(0.f,0.f,230.f));
	// TextLine1Out->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	// TextLine1Out->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	// TextLine1Out->SetText(FText::FromString("TextLine1Out"));
	// TextLine1Out->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// TextLine1Out->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine1Out->SetExtrude(20.f);
	// TextLine1Out->SetKerning(3.f);
	// TextLine1Out->SetupAttachment(DummyRoot);

	// TextLine2Out = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine2Out"));
	// TextLine2Out->SetRelativeLocation(FVector(300.f,0.f,230.f));
	// TextLine2Out->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	// TextLine2Out->SetText(FText::FromString("TextLine2Out"));
	// TextLine2Out->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	// TextLine2Out->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// TextLine2Out->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine2Out->SetExtrude(20.f);
	// TextLine2Out->SetKerning(3.f);
	// TextLine2Out->SetupAttachment(DummyRoot);

}

void AMulChoiceQuestion::PassTimelineDownToCenter(float value)
{
	FVector newPosition = OwningGrid->SplineDownToCenter->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
	// DummyRoot->SetRelativeLocation(newPosition);


		
    // FVector newPosition = OwningGrid->GetSplineLineBoxLocation(value);
	
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, FString::SanitizeFloat(value));

	if(FAnimateTypeLine=="AnimateLineIn")
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2000.0f, FColor::Green, "ALL");
		DummyRoot->SetRelativeLocation(newPosition);

		FVector vector1 = newPosition;
		FVector vector2 = newPosition;
		vector1.X = -200;
		vector2.X = 300;


		//FVector vectorText1 = TextLine1->GetRelativeLocation();
		if(FQuestion2 == "")
		{
			vector1.X=0;
		}
	
		// TextLine1->SetVisibility(true);
		// TextLine2->SetVisibility(true);
		TextLine1->SetRelativeLocation(vector1);
		TextLine2->SetRelativeLocation(vector2);
	}
	else if(FAnimateTypeLine=="AnimateLine1")
	{
		DummyRoot->SetRelativeLocation(FVector(0,0,200));
		
		FVector vector1 = newPosition;
		vector1.X = vector1.X -200;

		// TextLine1->SetVisibility(true);
		// TextLine2->SetVisibility(false);
		TextLine1->SetRelativeLocation(vector1);
		TextLine2->SetRelativeLocation(FVector(0,0,-8000));
	
	}
	else{

		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, FString::SanitizeFloat(value));
	
		FVector vector2 = newPosition;
		vector2.X = vector2.X+300;
		//TextLine2->SetVisibility(true);
		TextLine2->SetRelativeLocation(vector2);
	
	}

}


void AMulChoiceQuestion::SetMaterialColorText(bool isEverbodySing)
{
	if(isEverbodySing)
	{
		TextLine1->SetFrontMaterial(BaseMaterialES);
		TextLine1->SetBevelMaterial(BevelMaterialES);
		TextLine1->SetExtrudeMaterial(ExtrudeMaterialES);

		TextLine2->SetFrontMaterial(BaseMaterialES);
		TextLine2->SetBevelMaterial(BevelMaterialES);
		TextLine2->SetExtrudeMaterial(ExtrudeMaterialES);
	}
	else
	{
		TextLine1->SetFrontMaterial(BaseMaterial);
		TextLine1->SetBevelMaterial(BevelMaterial);
		TextLine1->SetExtrudeMaterial(ExtrudeMaterial);

		TextLine2->SetFrontMaterial(BaseMaterial);
		TextLine2->SetBevelMaterial(BevelMaterial);
		TextLine2->SetExtrudeMaterial(ExtrudeMaterial);
	}
}



void AMulChoiceQuestion::StartAnimateLineFinish()
{
	OwningGrid->FinishLine();
}

void AMulChoiceQuestion::StartAnimateOutLineFinish()
{
	OwningGrid->FinishLineOut();
}


void AMulChoiceQuestion::PassTimelineCenterToTop(float value)
{
		FVector newPosition = OwningGrid->SplineCenterToUp->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
		DummyRoot->SetRelativeLocation(newPosition);
}


void AMulChoiceQuestion::PassTimelineCenterToMC(float value)
{
		FVector newPosition = OwningGrid->SplineCenterToMCPosition->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
		DummyRoot->SetRelativeLocation(newPosition);
}


void AMulChoiceQuestion::PassTimelineMCToTop(float value)
{
		FVector newPosition = OwningGrid->SplineMCPositionToUp->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
		DummyRoot->SetRelativeLocation(newPosition);
}



void AMulChoiceQuestion::SetToBaseMaterial()
{
		TextLine1->SetFrontMaterial(BaseMaterial);
		TextLine2->SetFrontMaterial(BaseMaterial);
}



void AMulChoiceQuestion::SetToGlowMaterial()
{
		TextLine1->SetFrontMaterial(GlowMaterial);
		TextLine2->SetFrontMaterial(GlowMaterial);
}


void AMulChoiceQuestion::SetValue(FString strQuestion1, FString strQuestion2) //FString strUrl, float floatSize
{
	TextLine1->SetText(FText::FromString(strQuestion1));
	TextLine2->SetText(FText::FromString(strQuestion2));

	FQuestion1 = strQuestion1;
	FQuestion2 = strQuestion2;
    // TextLine1->SetVisibility(true);
	// TextLine2->SetVisibility(true);

}

// Called when the game starts or when spawned
void AMulChoiceQuestion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMulChoiceQuestion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

