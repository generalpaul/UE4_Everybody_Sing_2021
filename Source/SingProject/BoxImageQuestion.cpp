// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxImageQuestion.h"

// Sets default values
ABoxImageQuestion::ABoxImageQuestion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	 RootComponent = DummyRoot;

	TextQuestion1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion1"));
	TextQuestion1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextQuestion1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextQuestion1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	//TextQuestion1->SetText(FText::FromString("Peter Piper picked a peck"));
	
    //  TextQuestion1->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	//  TextQuestion1->SetVerticalAlignment(EVerticalTextAligment::EVRTA_TextTop);
	TextQuestion1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
    TextQuestion1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
//	TextQuestion1->SetExtrude(20.f);
	//TextQuestion1->SetFreeze(false);
	TextQuestion1->SetKerning(3.f);
	TextQuestion1->SetupAttachment(DummyRoot);

	TextQuestion2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion2"));
	TextQuestion2->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextQuestion2->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	// TextQuestion2->SetText(FText::FromString("of pickled peppers Peter Piper"));
	TextQuestion2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextQuestion2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextQuestion2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextQuestion2->SetExtrude(20.f);
	TextQuestion2->SetKerning(3.f);


	
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
	// TextLine2->SetText(FText::FromString("Line2"));
	TextLine2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLine2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLine2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine2->SetExtrude(20.f);
	TextLine2->SetKerning(3.f);
	TextLine2->SetupAttachment(DummyRoot);






	TextLine1Out = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine1Out"));
	TextLine1Out->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLine1Out->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLine1Out->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	// TextLine1Out->SetText(FText::FromString("TextLine1Out"));
	TextLine1Out->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLine1Out->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine1Out->SetExtrude(20.f);
	TextLine1Out->SetKerning(3.f);
	TextLine1Out->SetupAttachment(DummyRoot);

	TextLine2Out = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLine2Out"));
	TextLine2Out->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextLine2Out->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	// TextLine2Out->SetText(FText::FromString("Line2"));
	TextLine2Out->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLine2Out->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLine2Out->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextLine2Out->SetExtrude(20.f);
	TextLine2Out->SetKerning(3.f);
	TextLine2Out->SetupAttachment(DummyRoot);

    // TextQuestion2->SetHorizontalAlignment(EText3DHoriontalTextAlignment::EHTA_Center);
	// TextQuestion2->SetVerticalAlignment(EText3dVerticalTextAligment::EVRTA_TextTop);
	// TextQuestion2->SetWorldSize(500);
	// TextQuestion2->SetCastShadow(true);

	TextQuestion2->SetupAttachment(DummyRoot);
}

// Called when the game starts or when spawned
void ABoxImageQuestion::BeginPlay()
{
	Super::BeginPlay();
	
    // FVector txtLoc1 = TextLine1Out->GetRelativeLocation();
	// FVector txtLoc2 = TextLine2Out->GetRelativeLocation();

	// txtLoc1.Y = 6510;
	// txtLoc2.Y = 6510;

	// TextLine1Out->SetRelativeLocation(txtLoc1);
	// TextLine2Out->SetRelativeLocation(txtLoc2);
}

// Called every frame
void ABoxImageQuestion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABoxImageQuestion::StartAnimateFinish()
{
	OwningGrid->StartAnimateFinishMain(intIndex);
}



void ABoxImageQuestion::StartAnimateOutFinish()
{
//	OwningGrid-> StartAnimateOutFinishMain(intIndex);
	//OwningGrid->boolAnimateOutStarted=false;
}


void ABoxImageQuestion::PassTimelineLine(float value)
{
	
    FVector newPosition = OwningGrid->GetSplineLineBoxLocation(value);
	
 
	if(FAnimateTypeLine=="")
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2000.0f, FColor::Green, "ALL");

		FVector vector1 = newPosition;
		FVector vector2 = newPosition;
		vector1.X = -200;
		vector2.X = 300;


		TextLine1->SetVisibility(true);
		TextLine2->SetVisibility(true);

		TextLine1->SetText(FText::FromString(FQuestion1));
		TextLine2->SetText(FText::FromString(FQuestion2));


		TextLine1->SetRelativeLocation(vector1);
		TextLine2->SetRelativeLocation(vector2);
	}
	else if(FAnimateTypeLine=="AnimateLine1")
	{
		FVector vector1 = newPosition;
		vector1.X = -200;

		TextLine1->SetVisibility(true);
		TextLine2->SetVisibility(false);

		TextLine2->SetText(FText::FromString(""));
		

		TextLine1->SetRelativeLocation(vector1);
	
	}
	else{

		//GEngine->AddOnScreenDebugMessage(-1, 2000.0f, FColor::Green, FAnimateTypeLine);
	
		FVector vector2 = newPosition;
		vector2.X = 300;
		TextLine2->SetVisibility(true);

		TextLine2->SetText(FText::FromString(FQuestion2));

		TextLine2->SetRelativeLocation(vector2);
	
	}

}

void ABoxImageQuestion::StartAnimateFinishLine()
{
		OwningGrid->StartAnimateFinishMainLine(intIndex);
	// TextLine1->SetVisibility(false);
	// TextLine2->SetVisibility(false);

	// TextLine1Out->SetRelativeLocation(TextLine1->GetRelativeLocation());
	// TextLine2Out->SetRelativeLocation(TextLine2->GetRelativeLocation());

	// TextLine1Out->SetVisibility(true);
	// TextLine2Out->SetVisibility(true);

}

void ABoxImageQuestion::PassTimelineOutLine(float value)
{
	FVector newPosition = OwningGrid->GetSplineLineLocationOut(value);


	FVector vector1 = TextLine1Out->GetRelativeLocation();
	FVector vector2 = TextLine2Out->GetRelativeLocation();


	 vector1.Y = newPosition.Y;
	 vector2.Y = newPosition.Y;

	if(FAnimateTypeLine=="AnimateLineOut" || FAnimateTypeLine=="AnimateIn"  || FAnimateTypeLine=="Animate1")
	{
	    TextLine1->SetVisibility(false);
		TextLine2->SetVisibility(false);

		TextLine1->SetText(FText::FromString(""));
		TextLine2->SetText(FText::FromString(""));
	}
    

	// TextLine1Out->SetVisibility(true);
	// TextLine2Out->SetVisibility(true);

	// TextLine1Out->SetText(FText::FromString("Test1"));
	// TextLine2Out->SetText(FText::FromString("Test2"));
	// FString f=FString::SanitizeFloat(newPosition.X);
	//  GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, f);

	TextLine1Out->SetRelativeLocation(vector1);
	TextLine2Out->SetRelativeLocation(vector2);


	
}


void ABoxImageQuestion::PassTimelineOut(float value)
{

	FString f=FString::SanitizeFloat(value);
	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Blue, f);
	//FVector newPosition = OwningGrid->GetSplineLocationOut(value);
	//SetActorLocation(newPosition);
	TextQuestion1->SetVisibility(false);
	TextQuestion2->SetVisibility(false);

}

void ABoxImageQuestion::PassRotationTimeline(float value)
{
	
}


void ABoxImageQuestion::SetValue(FString strQuestion1, FString strQuestion2) //FString strUrl, float floatSize
{
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, strQuestion1);

	TextQuestion1->SetText(FText::FromString(strQuestion1));
	TextQuestion2->SetText(FText::FromString(strQuestion2));

    TextQuestion1->SetVisibility(true);
	TextQuestion2->SetVisibility(true);

	
	
}

void ABoxImageQuestion::SetValueLine(FString strQuestion1, FString strQuestion2) //FString strUrl, float floatSize
{
	TextLine1->SetText(FText::FromString(strQuestion1));
	TextLine2->SetText(FText::FromString(strQuestion2));

	FQuestion1=strQuestion1;
	FQuestion2=strQuestion2;


}


void ABoxImageQuestion::SetValueLineOut()
{
	
    // TextLine1Out->SetVisibility(false);
	// TextLine2Out->SetVisibility(false);

	TextLine1Out->SetText(FText::FromString(FQuestion1));
	TextLine2Out->SetText(FText::FromString(FQuestion2));

	// TextLine1Out->SetText(FText::FromString("LINE ONE"));
	// TextLine2Out->SetText(FText::FromString("LINE TWO"));
}




void ABoxImageQuestion::PassTimeline(float value)
{
// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, FString::SanitizeFloat(IntImageLine));
	// FString::Printf(TEXT("%s"),FString::FromInt(intImagePosition));

//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, FAnimateTypeForImage);


	if(IntImageLine==0 || IntImageLine==1)
	{
		if(FAnimateTypeForImage=="AnimateIn")
		{
			FVector newPosition1 = OwningGrid->GetSplineLocationTopToLow(value);
			TextQuestion1->SetRelativeLocation(newPosition1);
			
			FVector newPosition2 = OwningGrid->GetSplineLocationBottomToUp(value);
			TextQuestion2->SetRelativeLocation(newPosition2);
		}
		else if(FAnimateTypeForImage=="Animate1")
		{
			FVector newPosition1 = OwningGrid->GetSplineLocationTopToLow(value);
			TextQuestion1->SetRelativeLocation(newPosition1);

			//hide text2 temporary
			FVector setToTmp =  TextQuestion2->GetRelativeLocation();
			setToTmp.X = 4000;
			TextQuestion2->SetRelativeLocation(setToTmp);
		}
		else if(FAnimateTypeForImage=="Animate2")
		{
			FVector newPosition2 = OwningGrid->GetSplineLocationBottomToUp(value);
			TextQuestion2->SetRelativeLocation(newPosition2);
		}
		
	}
	else if(IntImageLine==2) //meaning center text
	{
		FVector newPosition1Center = OwningGrid->GetSplineLocationTopToLowCenter(value);
		TextQuestion1->SetRelativeLocation(newPosition1Center);
	}
	
}



