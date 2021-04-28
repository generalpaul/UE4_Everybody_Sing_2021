// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/TextRenderComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Text3DComponent.h"
#include "LineActorAnswer.h"

// Sets default values
ALineActorAnswer::ALineActorAnswer()
{
	 DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	 RootComponent = DummyRoot;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TextQuestion1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion1"));
	TextQuestion1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextQuestion1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextQuestion1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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



	TextAnswer1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer1"));
	TextAnswer1->SetRelativeLocation(FVector(-50.f,0.f,230.f));
	TextAnswer1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswer1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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

	
	TextUnderline1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextUnderline1"));
	TextUnderline1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextUnderline1->SetRelativeRotation(FRotator(270.f,0.f,180.f));//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextUnderline1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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




	TextQuestion2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion2"));
	TextQuestion2->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextQuestion2->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextQuestion2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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
	TextAnswer2->SetRelativeLocation(FVector(250.f,0.f,230.f));
	TextAnswer2->SetRelativeRotation(FRotator(270.f,0.f,180.f));//SetRelativeRotation(FRotator(0.f,0.f,0.f));
	TextAnswer2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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

	
	TextUnderline2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextUnderline2"));
	TextUnderline2->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextUnderline2->SetRelativeRotation(FRotator(270.f,0.f,180.f));//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextUnderline2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
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

	
	
	// add Cylinder to root
    Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	if (PlaneAsset.Succeeded())
    {
        Plane->SetStaticMesh(PlaneAsset.Object);
        Plane->SetRelativeLocation(FVector(0.0f, 0.0f, 650.0f));
		Plane->SetRelativeScale3D(FVector(10.f,30.f,10.f));
		Plane->SetupAttachment(DummyRoot);
	}


}

void ALineActorAnswer::Init(UMaterial* BaseMaterial, UMaterial* GreenMaterial, UMaterial* BlueMaterial, 
UMaterial* BlankMaterial, UMaterial* RedMaterial, UMaterial* BlurGlowMaterial,
				  UMaterial* BaseBlurMaterial){
	
	TextQuestion1->SetBevelMaterial(GreenMaterial);
	TextQuestion1->SetFrontMaterial(BaseMaterial);
	TextQuestion1->SetExtrudeMaterial(BlueMaterial);
	

	TextQuestion2->SetBevelMaterial(GreenMaterial);
	TextQuestion2->SetFrontMaterial(BaseMaterial);
	TextQuestion2->SetExtrudeMaterial(BlueMaterial);

	TextUnderline1->SetBevelMaterial(GreenMaterial);
	TextUnderline1->SetFrontMaterial(BaseMaterial);
	TextUnderline1->SetExtrudeMaterial(BlueMaterial);


	TextUnderline2->SetBevelMaterial(GreenMaterial);
	TextUnderline2->SetFrontMaterial(BaseMaterial);
	TextUnderline2->SetExtrudeMaterial(BlueMaterial);


	TextAnswer1->SetBevelMaterial(BlankMaterial);
	TextAnswer1->SetFrontMaterial(BlankMaterial);
	TextAnswer1->SetExtrudeMaterial(BlankMaterial);
	TextAnswer1->SetBackMaterial(BlankMaterial);
	

	TextAnswer2->SetBevelMaterial(RedMaterial);
	TextAnswer2->SetFrontMaterial(RedMaterial);
	TextAnswer2->SetExtrudeMaterial(RedMaterial);
	TextAnswer2->SetBackMaterial(RedMaterial);

	Plane->SetMaterial(0,BaseBlurMaterial);
	
}

void ALineActorAnswer::hide() 
{
		SetActorHiddenInGame(true);

		// Disables collision components
		SetActorEnableCollision(false);

		// Stops the Actor from ticking
		SetActorTickEnabled(false);

		boolShownLED = false;
}

void ALineActorAnswer::show() 
{
	    boolShownLED = true;

		SetActorHiddenInGame(false);

		// Disables collision components
		SetActorEnableCollision(true);

		// Stops the Actor from ticking
		SetActorTickEnabled(true);
}

//moving up



void ALineActorAnswer::right(UMaterial* GreenMaterial, UMaterial* BlueMaterial) 
{
		TextAnswer1->SetBevelMaterial(BlueMaterial);
		TextAnswer1->SetFrontMaterial(GreenMaterial);
		TextAnswer1->SetExtrudeMaterial(BlueMaterial);


		TextAnswer2->SetBevelMaterial(BlueMaterial);
		TextAnswer2->SetFrontMaterial(GreenMaterial);
		TextAnswer2->SetExtrudeMaterial(BlueMaterial);

}


void ALineActorAnswer::wrong(UMaterial* RedMaterial, UMaterial* BlueMaterial) 
{
		TextAnswer1->SetBevelMaterial(BlueMaterial);
		TextAnswer1->SetFrontMaterial(RedMaterial);
		TextAnswer1->SetExtrudeMaterial(BlueMaterial);


		TextAnswer2->SetBevelMaterial(BlueMaterial);
		TextAnswer2->SetFrontMaterial(RedMaterial);
		TextAnswer2->SetExtrudeMaterial(BlueMaterial);

}

//moving up
void ALineActorAnswer::SetVerticalTop(float position)
{

	topPosition=position;
	intMovement=1;


	//TextQuestion1->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}


//moving up
void ALineActorAnswer::SetVerticalTopFinal(float position, UMaterial* blank, UMaterial* defaultRed, UMaterial* defaultBlue)
{
	TextUnderline1->SetExtrude(5.f);
	TextUnderline2->SetExtrude(5.f);

	TextQuestion1->SetExtrude(5.f);
	TextQuestion2->SetExtrude(5.f);

	TextAnswer1->SetExtrude(5.f);
	TextAnswer2->SetExtrude(5.f);
	
	TextUnderline1->SetBevelMaterial(blank);
	TextUnderline1->SetFrontMaterial(blank);
	TextUnderline1->SetExtrudeMaterial(blank);


	TextUnderline2->SetBevelMaterial(blank);
	TextUnderline2->SetFrontMaterial(blank);
	TextUnderline2->SetExtrudeMaterial(blank);

	if(!boolShownLED)
	{
		TextAnswer1->SetBevelMaterial(defaultBlue);
		TextAnswer1->SetFrontMaterial(defaultRed);
		TextAnswer1->SetExtrudeMaterial(defaultBlue);

		TextAnswer2->SetBevelMaterial(defaultBlue);
		TextAnswer2->SetFrontMaterial(defaultRed);
		TextAnswer2->SetExtrudeMaterial(defaultBlue);

	}

	// if (fstrSaveLine2!="")
	// {
	// 	TextQuestion2->SetRelativeLocation(FVector(150.f,0.f,230.f));
	// 	TextAnswer2->SetRelativeLocation(FVector(150.f,0.f,230.f));
	// }
			

	SetActorHiddenInGame(false);

	// Disables collision components
	SetActorEnableCollision(true);

	// Stops the Actor from ticking
	SetActorTickEnabled(true);

	topPosition=position;
	//TextQuestion1->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
	SetActorLocation(FVector(topPosition,0.f,0.f));

	TextAnswer1->SetRelativeLocation(FVector(0.f,0.f,230.f));
}

bool ALineActorAnswer::fStrHasTwoLines()
{
	if (fstrSaveLine2!="")
		return true;
	else
		return false;	
}
void ALineActorAnswer::SetValue(FString strQuestion1,FString strAnswer1,FString strUnderline1,
				  FString strQuestion2,FString strAnswer2,FString strUnderline2, 
				  float blurleft1,
				  float blurleft2,float blurwidth1,float blurwidth2)
{


	TextQuestion1->SetText(FText::FromString(strQuestion1));
	TextAnswer1->SetText(FText::FromString(strAnswer1));
	TextUnderline1->SetText(FText::FromString(strUnderline1));

	TextQuestion2->SetText(FText::FromString(strQuestion2));
	TextAnswer2->SetText(FText::FromString(strAnswer2));
	TextUnderline2->SetText(FText::FromString(strUnderline2));

    Plane->SetRelativeScale3D(FVector(10.f, blurwidth1 ,10.f));

	fstrSaveLine2=strQuestion2;

}

//moving up
void ALineActorAnswer::MoveUp(float value)
{
	//topPosition-=value;
	intMovement=2;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

//moving down
void ALineActorAnswer::MoveDown(float value)
{
	intMovement=3;
	//topPosition+=value;
	//ScoreText->SetRelativeLocation(FVector(topPosition, 0.f , 0.f));
}

// Called when the game starts or when spawned
void ALineActorAnswer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALineActorAnswer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	 if(Multiplier==1000)
	{
		Multiplier=-1000;
	}
	else
		Multiplier+=200;

	if(intMovement==2)
	{
		topPosition-=.0002f;
	}
	else if(intMovement==3)
	{
		topPosition+=.0002f;
	}
// FString fff = FString::FromInt(intMovement);//FString::Printf(TEXT("%s"),FString::FromInt(objArrayBlanks.Num()));
			
 //GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, FString::FromInt(topPosition));

	SetActorLocation(FVector(topPosition,0.f,0.f));

    // TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
	// TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
	// TextQuestion1->SetWorldLocation(FVector(topPosition,0.f,0.f));
}

