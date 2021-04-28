// Fill out your copyright notice in the Description page of Project Settings.
#include "LineActorAnswer.h"
#include "SingProjectBlockGrid.h"
#include "Components/TextRenderComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Text3DComponent.h"

// Sets default values
ALineActorAnswer::ALineActorAnswer()
{
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TextQuestion1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion1"));
	TextQuestion1->SetRelativeLocation(FVector(0.f, 0.f, 230.f));
	TextQuestion1->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextQuestion1->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	//  TextQuestion1->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	//  TextQuestion1->SetVerticalAlignment(EVerticalTextAligment::EVRTA_TextTop);
	TextQuestion1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextQuestion1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextQuestion1->SetExtrude(20.f);
	//TextQuestion1->SetFreeze(false);
	TextQuestion1->SetKerning(3.f);
	TextQuestion1->SetupAttachment(DummyRoot);
	//TextQuestion1->SetCastShadow(true);
	//TextQuestion1->SetCastDynamicShadow(true);
	//TextQuestion1->SetScaleProportionally(true);
	//TextQuestion1->SetText(FText::FromString("I am just a poor boy"));
	//TextQuestion1->SetText(FText::FromString("TEST"));
	//TextQuestion1->SetBevel(1.f);
	//TextQuestion1->SetWorldSize(500);
	//TextQuestion1->SetCastShadow(true);

	// TextAnswer1Blur = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer1Blur"));
	// TextAnswer1Blur->SetRelativeLocation(FVector(-40.f, -10.f, 230.f));
	// TextAnswer1Blur->SetRelativeRotation(FRotator(269.f, 0.f, 179.f));
	// TextAnswer1Blur->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	// TextAnswer1Blur->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// TextAnswer1Blur->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextAnswer1Blur->SetExtrude(20.f);
	// TextAnswer1Blur->SetKerning(3.f);

	// TextAnswer1Blur->SetupAttachment(DummyRoot);

	TextAnswer1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer1"));
	TextAnswer1->SetRelativeLocation(FVector(-50.f, 0.f, 230.f));
	TextAnswer1->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextAnswer1->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	// TextAnswer1->SetHorizontalAlignment(EText3DHoriontalTextAlignment::EHTA_Center);
	// TextAnswer1->SetVerticalAlignment(EText3dVerticalTextAligment::EVRTA_TextTop);
	// // TextAnswer1->SetWorldSize(500);
	// // TextAnswer1->SetCastShadow(true);

	TextAnswer1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer1->SetExtrude(20.f);
	TextAnswer1->SetKerning(3.f);
	//TextAnswer1->SetActorHiddenInGame(true);
	TextAnswer1->SetupAttachment(DummyRoot);



	TextAnswerH1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerH1"));
	TextAnswerH1->SetRelativeLocation(FVector(-50.f, 0.f, 230.f));
	TextAnswerH1->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextAnswerH1->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextAnswerH1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerH1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerH1->SetExtrude(20.f);
	TextAnswerH1->SetKerning(3.f);
	TextAnswerH1->SetupAttachment(DummyRoot);


	TextAnswer1NoteSymbol = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer1NoteSymbol"));
	TextAnswer1NoteSymbol->SetRelativeLocation(FVector(-50.f, 0.f, 230.f));
	TextAnswer1NoteSymbol->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextAnswer1NoteSymbol->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextAnswer1NoteSymbol->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer1NoteSymbol->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer1NoteSymbol->SetExtrude(20.f);
	TextAnswer1NoteSymbol->SetKerning(3.f);
	TextAnswer1NoteSymbol->SetupAttachment(DummyRoot);



	TextUnderline1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextUnderline1"));
	TextUnderline1->SetRelativeLocation(FVector(0.f, 0.f, 230.f));
	TextUnderline1->SetRelativeRotation(FRotator(270.f, 0.f, 180.f)); //SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextUnderline1->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextUnderline1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextUnderline1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextUnderline1->SetExtrude(20.f);
	TextUnderline1->SetKerning(0.f);

	// TextUnderline1->SetHorizontalAlignment(EText3DHoriontalTextAlignment::EHTA_Center);
	// TextUnderline1->SetVerticalAlignment(EText3dVerticalTextAligment::EVRTA_TextTop);
	// TextUnderline1->SetWorldSize(500);
	// TextUnderline1->SetCastShadow(true);
	// TextUnderline1->SetHorizSpacingAdjust(-2.f);
	TextUnderline1->SetupAttachment(DummyRoot);

	// TextAnswer2Blur = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer2Blur"));
	// TextAnswer2Blur->SetRelativeLocation(FVector(250.f, -10.f, 230.f));
	// TextAnswer2Blur->SetRelativeRotation(FRotator(250.f, 0.f, 160.f));
	// TextAnswer2Blur->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	// TextAnswer2Blur->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// TextAnswer2Blur->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TextAnswer2Blur->SetExtrude(20.f);
	// TextAnswer2Blur->SetKerning(3.f);

	// TextAnswer2Blur->SetupAttachment(DummyRoot);

	TextQuestion2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion2"));
	TextQuestion2->SetRelativeLocation(FVector(300.f, 0.f, 230.f));
	TextQuestion2->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	; //SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextQuestion2->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextQuestion2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextQuestion2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextQuestion2->SetExtrude(20.f);
	TextQuestion2->SetKerning(3.f);
	// TextQuestion2->SetHorizontalAlignment(EText3DHoriontalTextAlignment::EHTA_Center);
	// TextQuestion2->SetVerticalAlignment(EText3dVerticalTextAligment::EVRTA_TextTop);
	// TextQuestion2->SetWorldSize(500);
	// TextQuestion2->SetCastShadow(true);

	TextQuestion2->SetupAttachment(DummyRoot);

	TextAnswer2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer2"));
	TextAnswer2->SetRelativeLocation(FVector(250.f, 0.f, 230.f));
	TextAnswer2->SetRelativeRotation(FRotator(270.f, 0.f, 180.f)); //SetRelativeRotation(FRotator(0.f,0.f,0.f));
	TextAnswer2->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextAnswer2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer2->SetExtrude(20.f);
	TextAnswer2->SetKerning(1.f);
	//TextAnswer2->SetActorHiddenInGame(true);
	// TextAnswer2->SetHorizontalAlignment(EText3DHoriontalTextAlignment::EHTA_Center);
	// TextAnswer2->SetVerticalAlignment(EText3dVerticalTextAligment::EVRTA_TextTop);
	// TextAnswer2->SetWorldSize(500);
	// TextAnswer2->SetCastShadow(true);

	TextAnswer2->SetupAttachment(DummyRoot);



	TextAnswerH2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerH2"));
	TextAnswerH2->SetRelativeLocation(FVector(250.f, 0.f, 230.f));
	TextAnswerH2->SetRelativeRotation(FRotator(270.f, 0.f, 180.f)); //SetRelativeRotation(FRotator(0.f,0.f,0.f));
	TextAnswerH2->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextAnswerH2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerH2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerH2->SetExtrude(20.f);
	TextAnswerH2->SetKerning(1.f);
	TextAnswerH2->SetupAttachment(DummyRoot);


	TextAnswer2NoteSymbol = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer2NoteSymbol"));
	TextAnswer2NoteSymbol->SetRelativeLocation(FVector(-50.f, 0.f, 230.f));
	TextAnswer2NoteSymbol->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextAnswer2NoteSymbol->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextAnswer2NoteSymbol->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer2NoteSymbol->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer2NoteSymbol->SetExtrude(20.f);
	TextAnswer2NoteSymbol->SetKerning(3.f);
	TextAnswer2NoteSymbol->SetupAttachment(DummyRoot);


	TextUnderline2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextUnderline2"));
	TextUnderline2->SetRelativeLocation(FVector(300.f, 0.f, 230.f));
	TextUnderline2->SetRelativeRotation(FRotator(270.f, 0.f, 180.f)); //SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextUnderline2->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextUnderline2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextUnderline2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextUnderline2->SetExtrude(20.f);
	TextUnderline2->SetKerning(0.f);

	TextUnderline2->SetupAttachment(DummyRoot);

	TextQuestion1->SetBevel(1.f);
	TextQuestion2->SetBevel(1.f);
	TextUnderline1->SetBevel(1.f);
	TextUnderline2->SetBevel(1.f);
	TextAnswer1->SetBevel(1.f);
	TextAnswer2->SetBevel(1.f);

	// // add Cylinder to root
	// PlaneBlur1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneBlur1"));
	// PlaneBlur2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneBlur2"));
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	// if (PlaneAsset.Succeeded())
	// {
	// 	PlaneBlur1->SetStaticMesh(PlaneAsset.Object);
	// 	// PlaneBlur1->SetRelativeLocation(FVector(0.0f, 0.0f, 650.0f));
	// 	// PlaneBlur1->SetRelativeScale3D(FVector(10.f,30.f,10.f));
	// 	//PlaneBlur1->SetHiddenInGame(true, true);
	// 	//PlaneBlur1->SetVisibility(false);
	// 	PlaneBlur1->SetupAttachment(DummyRoot);

	// 	PlaneBlur2->SetStaticMesh(PlaneAsset.Object);
	// 	// PlaneBlur2->SetRelativeLocation(FVector(0.0f, 0.0f, 650.0f));
	// 	// PlaneBlur2->SetRelativeScale3D(FVector(10.f,30.f,10.f));
	// 	//PlaneBlur2->SetHiddenInGame(true, true);
	// 	//PlaneBlur2->SetVisibility(false);
	// 	PlaneBlur2->SetupAttachment(DummyRoot);
	// }
}

void ALineActorAnswer::Init(UMaterial *BaseMaterial, UMaterial *GreenMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial,
							UMaterial *BlankMaterial, UMaterial *RedMaterial, UMaterial *BlurGlowMaterial,
							UMaterial *BaseBlurMaterial, int notes, FString gameType)
{

	if (intInit != -1)
		return;
	intInit = 1;

	// if(IsValid(TextQuestion1))
	// {

	// }

	TextQuestion1->SetBevelMaterial(OrangeMaterial);
	TextQuestion1->SetFrontMaterial(BaseMaterial);
	TextQuestion1->SetExtrudeMaterial(OrangeMaterial);

	TextQuestion2->SetBevelMaterial(OrangeMaterial);
	TextQuestion2->SetFrontMaterial(BaseMaterial);
	TextQuestion2->SetExtrudeMaterial(OrangeMaterial);

	TextUnderline1->SetBevelMaterial(YellowMaterial);
	TextUnderline1->SetFrontMaterial(BaseMaterial);
	TextUnderline1->SetExtrudeMaterial(OrangeMaterial);

	TextUnderline2->SetBevelMaterial(YellowMaterial);
	TextUnderline2->SetFrontMaterial(BaseMaterial);
	TextUnderline2->SetExtrudeMaterial(OrangeMaterial);

	TextAnswer1->SetBevelMaterial(BaseMaterial);


	// TextAnswer1Blur->SetBevelMaterial(BlankMaterial);
	// TextAnswer1Blur->SetFrontMaterial(BlankMaterial);
	// TextAnswer1Blur->SetExtrudeMaterial(BlankMaterial);
	// TextAnswer1Blur->SetBackMaterial(BlankMaterial);

	TextAnswer2->SetBevelMaterial(BaseMaterial);


	// TextAnswer2Blur->SetBevelMaterial(BlankMaterial);
	// TextAnswer2Blur->SetFrontMaterial(BlankMaterial);
	// TextAnswer1Blur->SetExtrudeMaterial(BlankMaterial);
	// TextAnswer2Blur->SetBackMaterial(BlankMaterial);

	// PlaneBlur1->SetMaterial(0, BaseBlurMaterial);
	// PlaneBlur2->SetMaterial(0, BaseBlurMaterial);

	if (notes == 1)
	{
	//	boolIsNotes = true;
	}
	else
	{
	//	boolIsNotes = false;

		TextQuestion1->SetBevelMaterial(YellowMaterial);
		TextQuestion2->SetBevelMaterial(YellowMaterial);

	}

	// blur=1;
	// if(blur==1)
	// {
	// PlaneBlur1->SetVisibility(true);
	// PlaneBlur2->SetVisibility(true);

	//TextAnswer1->SetBevelMaterial(BlurGlowMaterial);
	TextAnswer1->SetFrontMaterial(BlurGlowMaterial);

	// TextAnswer1->SetExtrudeMaterial(BlurGlowMaterial);
	// TextAnswer1->SetBackMaterial(BlurGlowMaterial);

	//TextAnswer2->SetBevelMaterial(BlurGlowMaterial);
	TextAnswer2->SetFrontMaterial(BlurGlowMaterial);


	TextAnswerH1->SetBevelMaterial(OrangeMaterial);
	TextAnswerH1->SetFrontMaterial(BaseMaterial);
	TextAnswerH1->SetExtrudeMaterial(OrangeMaterial);

	TextAnswerH2->SetBevelMaterial(OrangeMaterial);
	TextAnswerH2->SetFrontMaterial(BaseMaterial);
	TextAnswerH2->SetExtrudeMaterial(OrangeMaterial);


	// TextAnswer1NoteSymbol->SetBevelMaterial(OrangeMaterial);
	// TextAnswer1NoteSymbol->SetFrontMaterial(BaseMaterial);
	// TextAnswer1NoteSymbol->SetExtrudeMaterial(OrangeMaterial);

	// TextAnswer2NoteSymbol->SetBevelMaterial(OrangeMaterial);
	// TextAnswer2NoteSymbol->SetFrontMaterial(BaseMaterial);
	// TextAnswer2NoteSymbol->SetExtrudeMaterial(OrangeMaterial);

	// TextAnswer2->SetExtrudeMaterial(BlurGlowMaterial);
	// TextAnswer2->SetBackMaterial(BlurGlowMaterial);

	// TextAnswer1Blur->SetBevelMaterial(BlurGlowMaterial);
	// TextAnswer1Blur->SetFrontMaterial(BlurGlowMaterial);
	// TextAnswer1Blur->SetExtrudeMaterial(BlurGlowMaterial);
	// TextAnswer1Blur->SetBackMaterial(BlurGlowMaterial);

	// TextAnswer2Blur->SetBevelMaterial(BlurGlowMaterial);
	// TextAnswer2Blur->SetFrontMaterial(BlurGlowMaterial);
	// TextAnswer2Blur->SetExtrudeMaterial(BlurGlowMaterial);
	// TextAnswer2Blur->SetBackMaterial(BlurGlowMaterial);

	//		TextUnderline1->SetBevelMaterial(BlankMaterial);
	// TextUnderline1->SetFrontMaterial(BlankMaterial);
	// TextUnderline1->SetExtrudeMaterial(BlankMaterial);

	//TextUnderline2->SetBevelMaterial(BlankMaterial);
	TextUnderline2->SetFrontMaterial(BlankMaterial);
	//TextUnderline2->SetExtrudeMaterial(BlankMaterial);

	// TextAnswer1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	// TextAnswer2->SetRelativeLocation(FVector(250.f,0.f,230.f));
	//}
	// else
	// {

	// 	boolIsBlur=false;
	// 	TextUnderline1->SetBevelMaterial(GreenMaterial);
	// 	TextUnderline1->SetFrontMaterial(BaseMaterial);
	// 	TextUnderline1->SetExtrudeMaterial(YellowMaterial);

	// 	TextUnderline2->SetBevelMaterial(GreenMaterial);
	// 	TextUnderline2->SetFrontMaterial(BaseMaterial);
	// 	TextUnderline2->SetExtrudeMaterial(YellowMaterial);

	// }
}

// void ALineActorAnswer::hide()
// {
// 		SetActorHiddenInGame(true);

// 		// Disables collision components
// 		SetActorEnableCollision(false);

// 		// Stops the Actor from ticking
// 		SetActorTickEnabled(false);

// 		boolShownLED = false;
// }

// void ALineActorAnswer::show()
// {
// 	    boolShownLED = true;

// 		SetActorHiddenInGame(false);

// 		// Disables collision components
// 		SetActorEnableCollision(true);

// 		// Stops the Actor from ticking
// 		SetActorTickEnabled(true);
// }

// void ALineActorAnswer::ShowBlur()
// {

// 	PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, 300));
// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, 300));

// 	TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230));
// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230));
// }

// void ALineActorAnswer::HideBlur()
// {
// 	PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, -9000.0f));
// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -9000.0f));

// 	TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, -9000.0f));
// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, -9000.0f));
// }

// void ALineActorAnswer::HasTemporaryAnswer(int isTrue)
// {
// }

void ALineActorAnswer::UpdateVisibility(int IsNotes)
{

	FVector FtxtAnswer1 = TextAnswer1->GetRelativeLocation();
	FVector FtxtAnswer2 = TextAnswer2->GetRelativeLocation();
	//TextAnswerH1->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230.0f));
	//hide answer
	FtxtAnswer1.Z = -9000;
	FtxtAnswer2.Z = -9000;

	TextAnswer1->SetRelativeLocation(FtxtAnswer1);
	TextAnswer2->SetRelativeLocation(FtxtAnswer2);

	FVector FtxtQuestion2 = TextQuestion2->GetRelativeLocation();
	FVector FtxtUnderline2 = TextUnderline2->GetRelativeLocation();

	if (FAnimateType == "")
	{
		//show underline

		FtxtQuestion2.Z = 230;
		TextQuestion2->SetRelativeLocation(FtxtQuestion2);
		FtxtUnderline2.Z = 230;

		
		FVector fTxt1Location =	TextQuestion1->GetRelativeLocation();
		FVector fTxt1AnswerLocation =	TextAnswer1->GetRelativeLocation();
		FVector fTxt1H1Location =	TextAnswerH1->GetRelativeLocation();
		FVector fTxt1NoteLocation =	TextAnswer1NoteSymbol->GetRelativeLocation();
		FVector fTxt1UnderlineLocation =	TextUnderline1->GetRelativeLocation();

		if(FQuestion2!="" || FAnswer2!="")
		{
			
			fTxt1Location.X=0;
			fTxt1AnswerLocation.X=4;
			fTxt1H1Location.X=4;
			fTxt1NoteLocation.X=4;
			fTxt1UnderlineLocation.X=60;
		}
		else
		{
			
			fTxt1Location.X=230;
			fTxt1AnswerLocation.X=234;
			fTxt1H1Location.X=234;
			fTxt1NoteLocation.X=234;
			fTxt1UnderlineLocation.X=294;
		}

		TextQuestion1->SetRelativeLocation(fTxt1Location);
		TextAnswer1->SetRelativeLocation(fTxt1AnswerLocation);
		TextAnswerH1->SetRelativeLocation(fTxt1H1Location);
		TextAnswer1NoteSymbol->SetRelativeLocation(fTxt1NoteLocation);
		TextUnderline1->SetRelativeLocation(fTxt1UnderlineLocation);


		// //if blur remove underline
		// if (IsNotes == 0)
		// {
		// 	FtxtUnderline2.Z = 230;
		// 	//HideBlur();
		// }
		// else
		// {
		// 	FtxtUnderline2.Z = -9000;
		// 	//ShowBlur();
		// }

		// TextAnswer1->SetRelativeLocation(FtxtAnswer1);
		// TextAnswer2->SetRelativeLocation(FtxtAnswer2);
	}
	else if (FAnimateType == "AnimateLine1")
	{

		//hide question
		FtxtQuestion2.Z = -9000;
		TextQuestion2->SetRelativeLocation(FtxtQuestion2);

		// //if blur remove underline
		// if (IsBlur == 1)
		// {
		// 	FtxtUnderline2.Z = -9000;
		// 	PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, 300));
		// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -9000.0f));

		// 	TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230));
		// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, -9000.0f));
		// }
		FVector fTxt1Location =	TextQuestion1->GetRelativeLocation();
		FVector fTxt1AnswerLocation =	TextAnswer1->GetRelativeLocation();
		FVector fTxt1H1Location =	TextAnswerH1->GetRelativeLocation();
		FVector fTxt1NoteLocation =	TextAnswer1NoteSymbol->GetRelativeLocation();
		FVector fTxt1UnderlineLocation =	TextUnderline1->GetRelativeLocation();

		fTxt1Location.X=0;
		fTxt1AnswerLocation.X=4;
		fTxt1H1Location.X=4;
		fTxt1NoteLocation.X=4;
		fTxt1UnderlineLocation.X=60;


		TextQuestion1->SetRelativeLocation(fTxt1Location);
		TextAnswer1->SetRelativeLocation(fTxt1AnswerLocation);
		TextAnswerH1->SetRelativeLocation(fTxt1H1Location);
		TextAnswer1NoteSymbol->SetRelativeLocation(fTxt1NoteLocation);
		TextUnderline1->SetRelativeLocation(fTxt1UnderlineLocation);

		TextAnswerH2->SetRelativeLocation(FtxtAnswer2);
		FtxtUnderline2.Z = -9000;
	}
	else
	{

		//show question
		FtxtQuestion2.Z = 230;
		TextQuestion2->SetRelativeLocation(FtxtQuestion2);

		if(othergameTypeProp!="reversing")
		{
			TextAnswerH2->SetRelativeLocation(FVector(473.f, fAnswerPosition2, 230.0f));
		}
		else
		{
			TextAnswerH2->SetRelativeLocation(FVector(473.f, fAnswerPosition2, -9000.0f));
		}

		
		//if blur remove underline

		// if (IsBlur == 1)
		// {

		// 	FtxtUnderline2.Z = -9000;
		// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, 230));
		// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230));
		// }
		// else
		// {
		// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -9000.0f));
		// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, -9000.0f));
		// 	//TextAnswerH2->SetRelativeLocation(FtxtUnderline2);
		 	//FtxtUnderline2.Z = 230;
		// }
	}

	TextUnderline2->SetRelativeLocation(FtxtUnderline2);

}

void ALineActorAnswer::PassTimeline(float value)
{

	FVector newPosition = OwningGrid->GetSplineLocation(value, (FUnderline1 != "" || FUnderline2 != "" ? true : false));

	if (FAnimateType == "")
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PASSING NONE"));

		// //need to reset positions of 2nd line just in case last animation was animated second line independently
		// FVector TextQuestion2Tmp = TextQuestion2->GetRelativeLocation();
		// FVector TextUnderline2Tmp = TextUnderline2->GetRelativeLocation();
		// FVector txtAnswer2 = TextUnderline2->GetRelativeLocation();

		// TextAnswer1->SetRelativeLocation(FtxtAnswer1);
		// TextAnswer2->SetRelativeLocation(FtxtAnswer2);

		
		
		FVector fTxt1Location =	TextQuestion1->GetRelativeLocation();
		FVector fTxt1AnswerLocation =	TextAnswer1->GetRelativeLocation();
		FVector fTxt1H1Location =	TextAnswerH1->GetRelativeLocation();
		FVector fTxt1NoteLocation =	TextAnswer1NoteSymbol->GetRelativeLocation();
		FVector fTxt1UnderlineLocation =	TextUnderline1->GetRelativeLocation();

		if(FQuestion2!="" || FAnswer2!="")
		{
			if(fTxt1UnderlineLocation.X!=60 || fTxt1Location.X!=0  || fTxt1AnswerLocation.X!=4
			 || fTxt1NoteLocation.X!=4 || fTxt1H1Location.X!=4)
			{
				fTxt1Location.X=0;
				fTxt1AnswerLocation.X=4;
				fTxt1H1Location.X=4;
				fTxt1NoteLocation.X=4;
				fTxt1UnderlineLocation.X=60;
				
				TextQuestion1->SetRelativeLocation(fTxt1Location);
				TextAnswer1->SetRelativeLocation(fTxt1AnswerLocation);
				TextAnswerH1->SetRelativeLocation(fTxt1H1Location);
				TextAnswer1NoteSymbol->SetRelativeLocation(fTxt1NoteLocation);
				TextUnderline1->SetRelativeLocation(fTxt1UnderlineLocation);
			}
			
		}
		else
		{
			//if(fTxt1UnderlineLocation.X!=294)
			if(fTxt1UnderlineLocation.X!=294 || fTxt1Location.X!=230  || fTxt1AnswerLocation.X!=234
			 || fTxt1NoteLocation.X!=234 || fTxt1H1Location.X!=234)
			{
				fTxt1Location.X=230;
				fTxt1AnswerLocation.X=234;
				fTxt1H1Location.X=234;
				fTxt1NoteLocation.X=234;
				fTxt1UnderlineLocation.X=294;

				TextQuestion1->SetRelativeLocation(fTxt1Location);
				TextAnswer1->SetRelativeLocation(fTxt1AnswerLocation);
				TextAnswerH1->SetRelativeLocation(fTxt1H1Location);
				TextAnswer1NoteSymbol->SetRelativeLocation(fTxt1NoteLocation);
				TextUnderline1->SetRelativeLocation(fTxt1UnderlineLocation);
			}
			
		}

	

		SetActorLocation(newPosition);
	}
	else if (FAnimateType == "AnimateLine1")
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("AnimateLine1"));
	
		SetActorLocation(newPosition);
	}
	else
	{
		
		newPosition.X = 473;

		//FVector txtAnswer2 = newPosition;
		FVector txtUnderline2 = newPosition;

		//txtAnswer2.Y=txtAnswer2.Y+fAnswerPosition2;
		txtUnderline2.Y = newPosition.Y + fAnswerPosition2;
		//txtUnderline2.Y = fAnswerPosition2;
		txtUnderline2.X = 523;
		txtUnderline2.Z = 230;

		// if (boolIsBlur)
		// {
		// 	txtUnderline2.Z = -9000;
		// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, newPosition.Y + fBlurLeft2, 300));
		// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, newPosition.Y + fAnswerPosition2, 230));
		// }
		// else
		// {


		// 	// PlaneBlur2->SetRelativeLocation(FVector(330.0f, newPosition.Y+fBlurLeft2, -9000));
		// 	// TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, newPosition.Y+fAnswerPosition2, -9000));
		// }

		//txtAnswer2.X=473;
		
		FVector txtQ2 = newPosition;
		txtQ2.Z = 230;
		TextQuestion2->SetRelativeLocation(txtQ2);
		
		//TextAnswer2->SetRelativeLocation(txtAnswer2);
		TextUnderline2->SetRelativeLocation(txtUnderline2);
		//FString f = FString::SanitizeFloat(value);
		
		FVector FGetVectorFromCurrent = TextAnswerH2->GetRelativeLocation();
		FGetVectorFromCurrent=FVector(473.0f, newPosition.Y + fAnswerPosition2, FGetVectorFromCurrent.Z);
		
		if(othergameTypeProp!="reversing")
		{
			TextAnswerH2->SetRelativeLocation(FVector(473.0f, newPosition.Y + fAnswerPosition2, 230));
		}
		else
		{
			TextAnswerH2->SetRelativeLocation(FGetVectorFromCurrent);
		}

	}

	//FString f=FString::SanitizeFloat(value);
	//FString::Printf(TEXT("%s"),TEXT("TEST"));
	//FString::Printf(TEXT("%s"),FString::SanitizeFloat(value));
	//UE_LOG(YourLog,Log,TEXT("This is grey text!"));
}

void ALineActorAnswer::StartAnimateFinish()
{
	OwningGrid->StartAnimateFinishMain(intIndex);
}

void ALineActorAnswer::StartAnimateOutFinish()
{
	OwningGrid->StartAnimateOutFinishMain(intIndex);
	//OwningGrid->boolAnimateOutStarted=false;
}

void ALineActorAnswer::PassTimelineOut(float value)
{

	// FString f=FString::SanitizeFloat(value);
	// GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Blue, f);
	FVector newPosition = OwningGrid->GetSplineLocationOut(value, (FUnderline1 != "" || FUnderline2 != "" ? true : false));
	SetActorLocation(newPosition);
}

// void ALineActorAnswer::PassRotationTimeline(float value)
// {
// }

//moving up
void ALineActorAnswer::right(UMaterial *GreenMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial, UMaterial *BlankMaterial, UMaterial *GlowMaterial)
{

	//just remove value
	TextAnswerH1->SetText(FText::FromString(""));
	TextAnswerH2->SetText(FText::FromString(""));

	TextAnswer1NoteSymbol->SetText(FText::FromString(""));
	TextAnswer2NoteSymbol->SetText(FText::FromString(""));
	
	FVector FtxtAnswer1 = TextAnswer1->GetRelativeLocation();
	FVector FtxtAnswer2 = TextAnswer2->GetRelativeLocation();

	FtxtAnswer1.Z = 230;
	FtxtAnswer2.Z = 230;

	TextAnswer1->SetRelativeLocation(FtxtAnswer1);
	TextAnswer2->SetRelativeLocation(FtxtAnswer2);

	// TextAnswer1->SetVisibility(true);
	// TextAnswer2->SetVisibility(true);


	TextAnswer1->SetBevelMaterial(GlowMaterial);
	TextAnswer1->SetFrontMaterial(GreenMaterial);
	TextAnswer1->SetExtrudeMaterial(GreenMaterial);

	TextAnswer2->SetBevelMaterial(GlowMaterial);
	TextAnswer2->SetFrontMaterial(GreenMaterial);
	TextAnswer2->SetExtrudeMaterial(GreenMaterial);

	TextUnderline1->SetBevelMaterial(GlowMaterial);
	TextUnderline1->SetFrontMaterial(GreenMaterial);
	TextUnderline1->SetExtrudeMaterial(GlowMaterial);

	TextUnderline2->SetBevelMaterial(GlowMaterial);
	TextUnderline2->SetFrontMaterial(GreenMaterial);
	TextUnderline2->SetExtrudeMaterial(GlowMaterial);

	// if (boolIsBlur)
	// {

	// 	PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, -9000.0f));
	// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -9000.0f));

	// 	TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, -9000.0f));
	// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, -9000.0f));

	// 	// PlaneBlur1->SetVisibility(false);
	// 	// PlaneBlur2->SetVisibility(false);
	// 	// TextAnswer1Blur->SetVisibility(false);
	// 	// TextAnswer2Blur->SetVisibility(false);

	// 	// PlaneBlur1->SetMaterial(0,BlankMaterial);
	// 	// PlaneBlur2->SetMaterial(0,BlankMaterial);

	// 	// TextAnswer1Blur->SetBevelMaterial(BlankMaterial);
	// 	// TextAnswer1Blur->SetFrontMaterial(BlankMaterial);
	// 	// TextAnswer1Blur->SetExtrudeMaterial(BlankMaterial);

	// 	// TextAnswer2Blur->SetBevelMaterial(BlankMaterial);
	// 	// TextAnswer2Blur->SetFrontMaterial(BlankMaterial);
	// 	// TextAnswer2Blur->SetExtrudeMaterial(BlankMaterial);
	// }

	// boolShownLED = true;
}

void ALineActorAnswer::wrong(UMaterial *RedMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial, UMaterial *BlankMaterial, UMaterial *GlowMaterial)
{
	//just remove value
	TextAnswerH1->SetText(FText::FromString(""));
	TextAnswerH2->SetText(FText::FromString(""));

	TextAnswer1NoteSymbol->SetText(FText::FromString(""));
	TextAnswer2NoteSymbol->SetText(FText::FromString(""));
	

	FVector FtxtAnswer1 = TextAnswer1->GetRelativeLocation();
	FVector FtxtAnswer2 = TextAnswer2->GetRelativeLocation();

	FtxtAnswer1.Z = 230;
	FtxtAnswer2.Z = 230;

	TextAnswer1->SetRelativeLocation(FtxtAnswer1);
	TextAnswer2->SetRelativeLocation(FtxtAnswer2);

	// TextAnswer1->SetVisibility(true);
	// TextAnswer2->SetVisibility(true);

	TextAnswer1->SetBevelMaterial(GlowMaterial);
	TextAnswer1->SetFrontMaterial(RedMaterial);
	TextAnswer1->SetExtrudeMaterial(RedMaterial);

	TextUnderline1->SetBevelMaterial(GlowMaterial);
	TextUnderline1->SetFrontMaterial(RedMaterial);
	TextUnderline1->SetExtrudeMaterial(RedMaterial);

	TextAnswer2->SetBevelMaterial(GlowMaterial);
	TextAnswer2->SetFrontMaterial(RedMaterial);
	TextAnswer2->SetExtrudeMaterial(GlowMaterial);

	TextUnderline2->SetBevelMaterial(GlowMaterial);
	TextUnderline2->SetFrontMaterial(RedMaterial);
	TextUnderline2->SetExtrudeMaterial(GlowMaterial);

	// if (boolIsBlur)
	// {
	// 	// PlaneBlur1->SetVisibility(false);
	// 	// PlaneBlur2->SetVisibility(false);
	// 	// TextAnswer1Blur->SetVisibility(false);
	// 	// TextAnswer2Blur->SetVisibility(false);

	// 	PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, -9000.0f));
	// 	PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -9000.0f));

	// 	TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, -9000.0f));
	// 	TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, -9000.0f));
	// }
	// // else
	// // {
	// // 	GEngine->AddOnScreenDebugMessage(3, 2000.0f, FColor::Green, TEXT("PASS"));
	// // }
	// //	   boolShownLED = true;
}

//moving up
void ALineActorAnswer::SetVerticalTop(float position)
{
	topPosition = position;
	intMovement = 1;

	//TextQuestion1->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

// //moving up
// void ALineActorAnswer::SetVerticalTopFinal(float position, UMaterial* blank, UMaterial* defaultRed, UMaterial* defaultBlue)
// {
// 	TextUnderline1->SetExtrude(5.f);
// 	TextUnderline2->SetExtrude(5.f);

// 	TextQuestion1->SetExtrude(5.f);
// 	TextQuestion2->SetExtrude(5.f);

// 	TextAnswer1->SetExtrude(5.f);
// 	TextAnswer2->SetExtrude(5.f);

// 	TextUnderline1->SetBevelMaterial(blank);
// 	TextUnderline1->SetFrontMaterial(blank);
// 	TextUnderline1->SetExtrudeMaterial(blank);

// 	TextUnderline2->SetBevelMaterial(blank);
// 	TextUnderline2->SetFrontMaterial(blank);
// 	TextUnderline2->SetExtrudeMaterial(blank);

// 	if(!boolShownLED)
// 	{
// 		TextAnswer1->SetBevelMaterial(defaultBlue);
// 		TextAnswer1->SetFrontMaterial(defaultRed);
// 		TextAnswer1->SetExtrudeMaterial(defaultBlue);

// 		TextAnswer2->SetBevelMaterial(defaultBlue);
// 		TextAnswer2->SetFrontMaterial(defaultRed);
// 		TextAnswer2->SetExtrudeMaterial(defaultBlue);

// 	}

// 	// if (fstrSaveLine2!="")
// 	// {
// 	// 	TextQuestion2->SetRelativeLocation(FVector(150.f,0.f,230.f));
// 	// 	TextAnswer2->SetRelativeLocation(FVector(150.f,0.f,230.f));
// 	// }

// 	SetActorHiddenInGame(false);

// 	// Disables collision components
// 	SetActorEnableCollision(true);

// 	// Stops the Actor from ticking
// 	SetActorTickEnabled(true);

// 	topPosition=position;
// 	//TextQuestion1->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
// 	SetActorLocation(FVector(topPosition,0.f,0.f));

// 	TextAnswer1->SetRelativeLocation(FVector(0.f,0.f,230.f));
// }

// bool ALineActorAnswer::fStrHasTwoLines()
// {
// 	if (fstrSaveLine2!="")
// 		return true;
// 	else
// 		return false;
// }

void ALineActorAnswer::ShowWord()
{
	
	FVector F1=TextAnswerH1->GetRelativeLocation();
	FVector F2=TextAnswerH2->GetRelativeLocation();

	F1.Z=230;
	F2.Z=230;

	TextAnswerH1->SetRelativeLocation(F1);
	TextAnswerH2->SetRelativeLocation(F2);

}

void ALineActorAnswer::SetValue(FString strQuestion1, FString strAnswer1, FString strAnswerH1, FString strUnderline1,
								FString strQuestion2, FString strAnswer2, FString strAnswerH2, FString strUnderline2,
								float answerPosition1, float blankPosition1,
								float answerPosition2, float blankPosition2,
								// float blurleft1,
								// float blurleft2, float blurwidth1, float blurwidth2,
								int notes,

								UFont *font,
								UMaterial *BaseMaterial, UMaterial* BaseMaterialGlow, UMaterial *YellowMaterial, UMaterial *OrangeMaterial,
								UMaterial *BlueMaterial, UMaterial *BlueBevelMaterial, UMaterial *BlueExtrudeMaterial,
								UMaterial *ESMaterial, UMaterial *ESBevelMaterial, UMaterial *ESExtrudeMaterial,
								FString otherGameType, FString eventName)
{
	othergameTypeProp=otherGameType;
	if (FQuestion1 == strQuestion1 && FQuestion2 == strQuestion2 &&
		FAnswer1 == strAnswer1 &&
		FAnswer2 == strAnswer2 &&
		FUnderline1 == strUnderline1 &&
		FUnderline2 == strUnderline2 &&
		fAnswerPosition1 == answerPosition1 &&
		fBlankPosition1 == blankPosition1 &&
		fAnswerPosition2 == answerPosition2 &&
		fBlankPosition2 == blankPosition2 && 
		FAnswerH1 == strAnswerH1 &&
		FAnswerH2 == strAnswerH2
		//  &&
		// fBlurLeft1 == blurleft1 &&
		// fBlurLeft2 == blurleft2 &&

		// fBlurWidth1 == blurwidth1 &&
		// fBlurWidth2 == blurwidth2
		)
	{

		return;
	}

	FQuestion1 = strQuestion1;
	FQuestion2 = strQuestion2;
	FAnswer1 = strAnswer1;
	FAnswer2 = strAnswer2;
	FUnderline1 = strUnderline1;
	FUnderline2 = strUnderline2;

	FAnswerH1 = strAnswerH1;
	FAnswerH2 = strAnswerH2;

	fAnswerPosition1 = answerPosition1;
	fBlankPosition1 = blankPosition1;
	fAnswerPosition2 = answerPosition2;
	fBlankPosition2 = blankPosition2;



	// fBlurLeft1 = blurleft1;
	// fBlurLeft2 = blurleft2;
	// fBlurWidth1 = blurwidth1;
	// fBlurWidth2 = blurwidth2;

	// TextQuestion1->SetFont(font);
	// TextAnswer1->SetFont(font);
	// TextAnswer1Blur->SetFont(font);
	// TextUnderline1->SetFont(font);
	//FString ff= TextQuestion1->GetText();
	//FString ff2= TextQuestion1->Text(0);
	TextQuestion1->SetText(FText::FromString(strQuestion1));
	TextAnswer1->SetText(FText::FromString(strAnswer1));
	
	//TextAnswer1Blur->SetText(FText::FromString(strAnswer1));
	TextUnderline1->SetText(FText::FromString(strUnderline1));

	TextQuestion2->SetText(FText::FromString(strQuestion2));

	TextAnswer2->SetText(FText::FromString(strAnswer2));

	
	
	//TextAnswer2Blur->SetText(FText::FromString(strAnswer2));
	TextUnderline2->SetText(FText::FromString(strUnderline2));

	//FString f = FString::SanitizeFloat(fAnswerPosition1);
	//GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Yellow, f);
	//FString::Printf(TEXT("%s"),f);

	// FString g=FString::SanitizeFloat(blurleft1);
	// FString::Printf(TEXT("%s"),g);

	// PlaneBlur1->SetRelativeScale3D(FVector(4.f, blurwidth1, 5.f));
	// PlaneBlur1->SetRelativeLocation(FVector(-120.0, blurleft1, 300.0f));

	// PlaneBlur2->SetRelativeScale3D(FVector(4.f, blurwidth2, 5.f));
	// PlaneBlur2->SetRelativeLocation(FVector(330.0f, blurleft2, 300.0f));

	TextAnswer1->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230.0f));
	TextAnswerH1->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230.0f));
	TextAnswer1NoteSymbol->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230.0f));
	TextUnderline1->SetRelativeLocation(FVector(60.0f, fBlankPosition1, 230.0f));

	TextAnswer2->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230.0f));
	TextAnswerH2->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230.0f));
	TextAnswer2NoteSymbol->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230.0f));
	TextUnderline2->SetRelativeLocation(FVector(523.0f, fBlankPosition2, 230.0f));

	// TextAnswer1Blur->SetRelativeLocation(FVector(4.0f, fAnswerPosition1, 230.0f));
	// TextAnswer2Blur->SetRelativeLocation(FVector(473.0f, fAnswerPosition2, 230.0f));


	TextAnswer1->SetFrontMaterial(BaseMaterial);
	TextAnswer2->SetFrontMaterial(BaseMaterial);

	TextAnswerH1->SetFrontMaterial(BaseMaterial);
	TextAnswerH2->SetFrontMaterial(BaseMaterial);


	// TextAnswer1NoteSymbol->SetFrontMaterial(BaseMaterial);
	// TextAnswer2NoteSymbol->SetFrontMaterial(BaseMaterial);


	if(notes)
	{
		TextAnswer1NoteSymbol->SetText(FText::FromString(strAnswerH1));
		TextAnswer2NoteSymbol->SetText(FText::FromString(strAnswerH2));
	}
	else
	{
		TextAnswerH1->SetText(FText::FromString(strAnswerH1));
		TextAnswerH2->SetText(FText::FromString(strAnswerH2));
	}

	
	if (strAnswer1 == "" && strAnswer2 == "")
	{
		TextQuestion1->SetFrontMaterial(ESMaterial);
		TextQuestion1->SetBevelMaterial(ESBevelMaterial);
		TextQuestion1->SetExtrudeMaterial(ESExtrudeMaterial);

		TextQuestion2->SetFrontMaterial(ESMaterial);
		TextQuestion2->SetBevelMaterial(ESBevelMaterial);
		TextQuestion2->SetExtrudeMaterial(ESExtrudeMaterial);
	}
	else
	{
		// if(blur==1)
		// {
		// 	TextQuestion1->SetFrontMaterial(BaseMaterial);
		// 	TextQuestion1->SetBevelMaterial(OrangeMaterial);


		// 	TextQuestion2->SetFrontMaterial(BaseMaterial);
		// 	TextQuestion2->SetBevelMaterial(OrangeMaterial);

		// }
		// else
		// {
			TextQuestion1->SetBevelMaterial(YellowMaterial);
			TextQuestion2->SetBevelMaterial(YellowMaterial);

			TextQuestion1->SetFrontMaterial(BaseMaterialGlow);
			TextQuestion2->SetFrontMaterial(BaseMaterialGlow);
		//}

		TextQuestion2->SetExtrudeMaterial(OrangeMaterial);
		TextQuestion1->SetExtrudeMaterial(OrangeMaterial);

		TextAnswerH1->SetFrontMaterial(BlueMaterial);
		TextAnswerH1->SetBevelMaterial(BlueBevelMaterial);
		TextAnswerH1->SetExtrudeMaterial(BlueExtrudeMaterial);

		TextAnswerH2->SetFrontMaterial(BlueMaterial);
		TextAnswerH2->SetBevelMaterial(BlueBevelMaterial);
		TextAnswerH2->SetExtrudeMaterial(BlueExtrudeMaterial);


	}


		TextUnderline1->SetBevelMaterial(BlueBevelMaterial);
		TextUnderline1->SetFrontMaterial(BlueMaterial);
		TextUnderline1->SetExtrudeMaterial(BlueMaterial);

		TextUnderline2->SetBevelMaterial(BlueBevelMaterial);
		TextUnderline2->SetFrontMaterial(BlueMaterial);
		TextUnderline2->SetExtrudeMaterial(BlueMaterial);
	
	FVector FtxtAnswer1 = TextAnswer1->GetRelativeLocation();
	FVector FtxtAnswer2 = TextAnswer2->GetRelativeLocation();

	FVector FtxtAnswer1Tmp = TextAnswer1->GetRelativeLocation();
	FVector FtxtAnswer2Tmp = TextAnswer2->GetRelativeLocation();

	if(eventName=="pass_question")
	{
		FtxtAnswer1Tmp.Z = 230;
		FtxtAnswer2Tmp.Z = 230;
	}
	else
	{
		FtxtAnswer1Tmp.Z = -8000;
		FtxtAnswer2Tmp.Z = -8000;
	}
	
	



	FVector FtxtAnswerUnderline1 = TextUnderline1->GetRelativeLocation();
	FVector FtxtAnswerUnderline2 = TextUnderline2->GetRelativeLocation();
	FtxtAnswer1.Z = 230;
	FtxtAnswer2.Z = 230;

	FtxtAnswerUnderline1.Z = 230;
	FtxtAnswerUnderline2.Z = 230;


	TextAnswer1->SetRelativeLocation(FtxtAnswer1Tmp);
	TextAnswer2->SetRelativeLocation(FtxtAnswer2Tmp);

	TextAnswerH1->SetRelativeLocation(FtxtAnswer1);
	TextAnswerH2->SetRelativeLocation(FtxtAnswer2);

	if(otherGameType=="reversing")
	{
		FVector F1=FtxtAnswer1;
		FVector F2=FtxtAnswer2;

		F1.Z=-9000;
		F2.Z=-9000;

		TextAnswerH1->SetRelativeLocation(F1);
		TextAnswerH2->SetRelativeLocation(F2);
	}
	


	TextAnswer1NoteSymbol->SetRelativeLocation(FtxtAnswer1);
	TextAnswer2NoteSymbol->SetRelativeLocation(FtxtAnswer2);
	

	TextUnderline1->SetRelativeLocation(FtxtAnswerUnderline1);
	TextUnderline2->SetRelativeLocation(FtxtAnswerUnderline2);
	




}

void ALineActorAnswer::ResetAll()
{
	TextQuestion1->SetText(FText::FromString(""));
	TextAnswer1->SetText(FText::FromString(""));
	TextAnswerH1->SetText(FText::FromString(""));
	//TextAnswer1Blur->SetText(FText::FromString(""));
	TextUnderline1->SetText(FText::FromString(""));

	TextQuestion2->SetText(FText::FromString(""));
	TextAnswer2->SetText(FText::FromString(""));
	TextAnswerH2->SetText(FText::FromString(""));
	//TextAnswer2Blur->SetText(FText::FromString(""));
	TextUnderline2->SetText(FText::FromString(""));

	TextAnswer1NoteSymbol->SetText(FText::FromString(""));
	TextAnswer2NoteSymbol->SetText(FText::FromString(""));

	// PlaneBlur1->SetRelativeScale3D(FVector(4.f, 0, 5.f));
	// PlaneBlur1->SetRelativeLocation(FVector(-120.0, 0, 300.0f));

	// PlaneBlur2->SetRelativeScale3D(FVector(4.f, 0, 5.f));
	// PlaneBlur2->SetRelativeLocation(FVector(330.0f, 0, 300.0f));

	FQuestion1="";
	FQuestion2="";
	FUnderline1="";
	FUnderline2="";
	FAnswer1="";
	FAnswer2="";

	fAnswerPosition1=0;
	fBlankPosition1=0;
	fAnswerPosition2=0;
	fBlankPosition2=0;

	// fBlurLeft1=0;
	// fBlurLeft2=0;
	// fBlurWidth1=0;
	// fBlurWidth2=0;

	FAnimateType=0;
}


//moving up
void ALineActorAnswer::MoveUp(float value)
{
	//topPosition-=value;
	intMovement = 2;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

//moving down
void ALineActorAnswer::MoveDown(float value)
{
	intMovement = 3;
	//topPosition+=value;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

// Called when the game starts or when spawned
void ALineActorAnswer::BeginPlay()
{
	Super::BeginPlay();
	ResetAll();
}

// Called every frame
void ALineActorAnswer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//  if(Multiplier==1000)
	// {
	// 	Multiplier=-1000;
	// }
	// else
	// 	Multiplier+=200;

	// if(intMovement==2)
	// {
	// 	topPosition-=.0002f;
	// }
	// else if(intMovement==3)
	// {
	// 	topPosition+=.0002f;
	// }
	// FString fff = FString::FromInt(intMovement);//FString::Printf(TEXT("%s"),FString::FromInt(objArrayBlanks.Num()));

	//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, FString::FromInt(topPosition));

	//SetActorLocation(FVector(topPosition,0.f,0.f));

	// TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
	// TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
	// TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
}
