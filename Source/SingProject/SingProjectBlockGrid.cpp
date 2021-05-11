
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SingProjectBlockGrid.h"
#include "SingProjectBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextRenderComponent.h"
#include "Components/TextBlock.h"
#include "Engine/World.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Containers/UnrealString.h"
#include "LineActor.h"
#include "LineTitleSinger.h"
#include "LineSingerName.h"

// #include "LineActorAnswer.h"
#include "EngineUtils.h"
#include "Text3DComponent.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGridOK"

ASingProjectBlockGrid::ASingProjectBlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;

	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterialGlow;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> YellowMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> OrangeMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlankMaterial;

		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseBlurMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlurGlowMaterial;
		//ConstructorHelpers::FObjectFinderOptional<UFont> InitFontMaterial;

		ConstructorHelpers::FObjectFinderOptional<UMaterial> GreenMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> RedMaterial;

		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlueBevelMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlueExtrudeMaterial;
		FConstructorStatics()
			: BaseMaterial(TEXT("/Game/Puzzle/Meshes/BeigeNoGlow")), 
			BaseMaterialGlow(TEXT("/Game/Puzzle/Meshes/BeigeGlow")), 
			
		    	YellowMaterial(TEXT("/Game/Puzzle/Meshes/YellowMaterial.YellowMaterial")), 
				OrangeMaterial(TEXT("/Game/Puzzle/Meshes/OrangeMaterial.OrangeMaterial")), BlankMaterial(TEXT("/Game/Puzzle/Meshes/BlackMaterial.BlackMaterial"))

			  ,
			  BaseBlurMaterial(TEXT("/Game/Puzzle/Meshes/BaseBlurMaterial.BaseBlurMaterial"))

			  ,
			  BlurGlowMaterial(TEXT("/Game/Puzzle/Meshes/BlurGlowMaterial.BlurGlowMaterial")), GreenMaterial(TEXT("/Game/Puzzle/Meshes/GreenMaterial.GreenMaterial")), RedMaterial(TEXT("/Game/Puzzle/Meshes/RedMaterial.RedMaterial"))

			  ,
			  BlueMaterial(TEXT("/Game/Puzzle/Meshes/BaseMaterial.BaseMaterial")), BlueBevelMaterial(TEXT("/Game/Puzzle/Meshes/BlueMaterial.BlueMaterial")), BlueExtrudeMaterial(TEXT("/Game/Puzzle/Meshes/BlueGlow.BlueGlow"))

		//	, InitFontMaterial(TEXT("/Game/Puzzle/Meshes/Gotham_Font.Gotham_Font"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	BaseMaterial = ConstructorStatics.BaseMaterial.Get();
	BaseMaterialGlow = ConstructorStatics.BaseMaterialGlow.Get();
	
	YellowMaterial = ConstructorStatics.YellowMaterial.Get();
	OrangeMaterial = ConstructorStatics.OrangeMaterial.Get();

	BlankMaterial = ConstructorStatics.BlankMaterial.Get();
	BaseBlurMaterial = ConstructorStatics.BaseBlurMaterial.Get();
	BlurGlowMaterial = ConstructorStatics.BlurGlowMaterial.Get();
	GreenMaterial = ConstructorStatics.GreenMaterial.Get();
	RedMaterial = ConstructorStatics.RedMaterial.Get();

	BlueMaterial = ConstructorStatics.BlueMaterial.Get();
	BlueBevelMaterial = ConstructorStatics.BlueBevelMaterial.Get();
	BlueExtrudeMaterial = ConstructorStatics.BlueExtrudeMaterial.Get();

	//InitFontMaterial = ConstructorStatics.InitFontMaterial.Get();

	SplineStraightRightToLeft = CreateDefaultSubobject<USplineComponent>(TEXT("SplineStraightRightToLeft"));
	SplineStraightRightToLeft->SetupAttachment(DummyRoot);

	SplineStraightCenterToOut = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToOutStraight"));
	SplineStraightCenterToOut->SetupAttachment(DummyRoot);

	SplineRightToLeft = CreateDefaultSubobject<USplineComponent>(TEXT("SplineRightToLeft"));
	SplineRightToLeft->SetupAttachment(DummyRoot);

	SplineCenterToOut = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToOut"));
	SplineCenterToOut->SetupAttachment(DummyRoot);
}

FVector ASingProjectBlockGrid::GetSplineLocation(float time, bool hasQuestion)
{
	if (hasQuestion)
	{
		return SplineRightToLeft->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
	}
	else
	{
		return SplineStraightRightToLeft->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
	}
}

FVector ASingProjectBlockGrid::GetSplineLocationOut(float time, bool hasQuestion)
{

	if (hasQuestion)
	{
		return SplineCenterToOut->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
	}
	else
	{
		return SplineStraightCenterToOut->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
	}
}

template <typename T>
void ASingProjectBlockGrid::FindAllActors(UWorld *World, TArray<T *> &Out)
{
	for (TActorIterator<AActor> It(World, T::StaticClass()); It; ++It)
	{
		T *Actor = Cast<T>(*It);
		if (Actor && !Actor->IsPendingKill())
		{
			Out.Add(Actor);
		}
	}
}

void ASingProjectBlockGrid::BeginPlay()
{
	Super::BeginPlay();

	// Number of blocks
	const int32 NumBlocks = Size * Size;

	float floatLineStart = 0.f;
	// Loop to spawn each block
	for (int32 BlockIndex = 0; BlockIndex < NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex / Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex % Size) * BlockSpacing; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f); // + GetActorLocation();

		const FVector LineLocation = FVector(floatLineStart, 0.f, 0.f); // + GetActorLocation();
		floatLineStart += 300.f;
		// Spawn a block
		//ASingProjectBlock* NewBlock = GetWorld()->SpawnActor<ASingProjectBlock>(BlockLocation, FRotator(0,0,0));

		// ALineActor* haha = GetWorld	()->SpawnActor<ALineActor>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// arrLineActor.Add(haha);

		// Tell the block about its owner
		// if (NewBlock != nullptr)
		// {
		// 	NewBlock->OwningGrid = this;

		// 	haha->OwningGrid = this;
		// }
	}

	//FActorSpawnParameters SpawnInfo;

	// for(float i = 0; i < 5; i++)
	// {

	// 	ALineActor* haha = GetWorld()->SpawnActor<ALineActor>(FVector(200.0f, 0.0f, 0.0f),FRotator(0.0f, 0.0f, 0.0f),SpawnInfo);
	// 	arrLineActor.Add(haha);
	// 	//test[i]->SetRelativeLocationP(FVector(200.0f, ff, 100.0f));
	// 	//ff+=250.0f;

	// }

	
	ALineActorAnswerIn->OwningGrid = this;
	ALineActorAnswerOut->OwningGrid = this;


return;
	Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &ASingProjectBlockGrid::OnResponseReceived);
	//   //This is the url on which to process the request
	Request->SetURL("http://localhost:8092"); //https://jsonplaceholder.typicode.com/todos/1
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	//Request->ProcessRequest();

	////not timer loop, one time only
	GetWorldTimerManager().SetTimer(tmr, this, &ASingProjectBlockGrid::RepeatingFunction, 0.4f, true);
	//GetWorldTimerManager().SetTimer(tmrUpDown, this, &ASingProjectBlockGrid::RepeatingFunctionUpOrDown, 0.2f, true);

	//TitleSingerUse->OwningGrid=this;

	// FindAllActors(GetWorld(), arrLineActorBlanks);
	// arrLineActorBlanks[0]->OwningGrid=this;
	// arrLineActorBlanks[0]->StartAnimate();
}

// void ASingProjectBlockGrid::OnResponseReceived(FHttpRequestPtr RequestD, FHttpResponsePtr Response, bool bWasSuccessful)
// {
// 	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("PASSED3"));
// }

void ASingProjectBlockGrid::VaRestResponse(FString VaRestValue)
{

	// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, VaRestValue);


	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp = VaRestValue;
	if (strHttpContent == tmpHttp)
	{
		boolHasPassed = false;
		return;
	}
		

	
	strHttpContent = tmpHttp;
	// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, strHttpContent);
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);
	
	//FString ff1= Response->GetContentAsString();
	//FString ff21= ff1.Mid(250,100);
	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, *ff21);
	//return;

	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");
		
	    //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strEventName);
		// boolHasPassed = false;
		// return;
		//if(strEventNameCurrent==strEventName) return;

		//	strEventNameCurrent=strEventName;
		if (strEventName == "none")
		{
			//strEventNameCurrent="none";
		}
		else if(strEventName=="ResetAll")
		{
			ALineActorAnswerIn->ResetAll();
			ALineActorAnswerOut->ResetAll();
			
			SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
		

			boolAnimateInStarted=false;

			boolOutIsShown=true;
			boolLine2OutIsShown=true;
			boolAnswerIsShown=false;

			strQuestion1="";
			strQuestion2="";
			strAnswer1="";
			strAnswer2="";

			strAnswerH1="";
			strAnswerH2="";

			strUnderline1="";
			strUnderline2="";

			strHttpContent="";

			// blurleft1=0;
			// blurwidth1=0;
			answerPosition1=0;
			blankPosition1=0;

			// blurleft2=0;
			// blurwidth2=0;
			answerPosition2=0;
			blankPosition2=0;

			notes=0;
			gameType="";
		}
		else if (strEventName == "pass_question" || strEventName == "AnimateIn" || strEventName == "AnimateLine1")
		{

			notes = JsonObject->GetIntegerField("notes");
			
			int hideAnswer = JsonObject->GetIntegerField("hideAnswer");
			int gametypeInt = JsonObject->GetIntegerField("gametype");


			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");

			FString strAnswer1tmp = Item1->GetStringField("answer");
			FString strAnswer2tmp = Item2->GetStringField("answer");

			//if(strAnswer1==strAnswer1tmp && strAnswer2==strAnswer2tmp) return;

				strQuestion1 = Item1->GetStringField("question");
			strAnswer1 = Item1->GetStringField("answer");
			strAnswerH1 = Item1->GetStringField("answerH");
			strUnderline1 = Item1->GetStringField("blank");
			// blurleft1 = Item1->GetNumberField("blurleft");
			// blurwidth1 = Item1->GetNumberField("blurwidth");
			answerPosition1 = Item1->GetNumberField("answerPosition");
			blankPosition1 = Item1->GetNumberField("blankPosition");

			strQuestion2 = Item2->GetStringField("question");
			strAnswer2 = Item2->GetStringField("answer");
			strAnswerH2 = Item2->GetStringField("answerH");
			strUnderline2 = Item2->GetStringField("blank");
			// blurleft2 = Item2->GetNumberField("blurleft");
			// blurwidth2 = Item2->GetNumberField("blurwidth");

			answerPosition2 = Item2->GetNumberField("answerPosition");
			blankPosition2 = Item2->GetNumberField("blankPosition");

			


			//  FString f1=FString::FromInt(answerPosition1);
			//  GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, f1);

			//  FString f2=FString::FromInt(answerPosition2);
			//  GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, f2);

			//  FString f3=FString::FromInt(blankPosition1);
			//  GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, f3);

			//  FString f4=FString::FromInt(blankPosition2);
			//  GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, f4);


			// FString f5=FString::FromInt(hideAnswer);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f5);

			// FString f6=FString::FromInt(gametypeInt);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f6);

			// FString f7=FString::FromInt(gametypeInt);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f7);

			// strQuestion1 = Item1->GetStringField("question");
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strQuestion1);

			 //strAnswer1 = Item1->GetStringField("answer");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strAnswer1);
			 //strAnswerH1 = Item1->GetStringField("answerH");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strAnswerH1);
			 //strUnderline1 = Item1->GetStringField("blank");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strUnderline1);

			if (hideAnswer == 1)
			{
				gameType = "hideAnswer";
			}
			else if (gametypeInt == 1)
			{
				gameType = "reversing";
			}
			else if (gametypeInt == 1)
			{
				gameType = "englishing";
			}

			ALineActorAnswerIn->boolAsTesting=true;

			if (notes == 1)
			{
				ALineActorAnswerIn->Init(BaseMaterial, GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterial,
										 BlurGlowMaterial, BaseBlurMaterial, notes, gameType);
			}

			ALineActorAnswerIn->SetValue(strQuestion1, strAnswer1, strAnswerH1,
										 strUnderline1, strQuestion2, strAnswer2, strAnswerH2,
										 strUnderline2,
										 answerPosition1, blankPosition1,
										 answerPosition2, blankPosition2,
										//  blurleft1, blurleft2, blurwidth1, blurwidth2, 
										 notes, InitFontMaterial,
										 BaseMaterial, BaseMaterialGlow, YellowMaterial, OrangeMaterial,
										 BlueMaterial, BlueBevelMaterial, BlueExtrudeMaterial,
										 ESMaterial, ESBevelMaterial, ESExtrudeMaterial, 
										 gameType, strEventName);

			if (strEventName == "AnimateIn" || strEventName == "AnimateLine1")
			{
				boolAnswerIsShown = false;
				
				int index = JsonObject->GetIntegerField("index");
				ALineActorAnswerIn->intIndex = index;
				FString ss = FString::FromInt(index);

 				FString strName = Item1->GetStringField("strName");
 							 	FString f8=FString::FromInt(index);
 		
				if(strName!="")
				{
					SingerName->TextSingerName->SetText(FText::FromString(strName));
					SingerName->Blink();	
				}
				else
				{
					SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
				}
				
				//SingerName->SetName(strName);
				if (!boolAnimateInStarted && intAnimateIndex != index)
				{

					boolAnimateInStarted = true;
					intAnimateIndex = index;

					if (boolOutIsShown)
					{
						boolOutIsShown = false;
						ALineActorAnswerOut->StartAnimateOut();
					}
					else
					{
						boolOutIsShown = true;
					}

					ALineActorAnswerIn->FAnimateType = "";

					if (strEventName == "AnimateLine1")
					{
						ALineActorAnswerIn->FAnimateType = strEventName;
						boolLine2OutIsShown = false;
					}

					ALineActorAnswerIn->UpdateVisibility(notes);
					ALineActorAnswerIn->StartAnimate();
					//	boolAnimateOutStarted=false;
				}

				//tmpLine->SetVerticalTop(floatLineStart);
				//ALineActorAnswerIn->hide();

				//haha->Destroy();
			}
		}
		else if (strEventName == "AnimateShowWord")
		{
			ALineActorAnswerIn->ShowWord();
		}
		else if (strEventName == "AnimateLine2")
		{
			if (!boolLine2OutIsShown)
			{
				boolLine2OutIsShown = true;
				ALineActorAnswerIn->FAnimateType = strEventName;
				ALineActorAnswerIn->UpdateVisibility(notes);
				ALineActorAnswerIn->StartAnimate();
			}
		}
		else if (strEventName == "AnimateOut")
		{
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				ALineActorAnswerIn->StartAnimateOut();
				boolAnimateInStarted = false;
			}
		}
		else if (strEventName == "ShowAnswer")
		{

			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("ShowAnswer"));
			if (!boolAnswerIsShown)
			{
				boolAnswerIsShown = true;
				FString trigger = JsonObject->GetStringField("trigger");

				if (trigger == "true")
				{
					ALineActorAnswerIn->right(GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, GreenMaterialGlow);
					ALineActorAnswerOut->right(GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, GreenMaterialGlow);
				}
				else
				{
					ALineActorAnswerIn->wrong(RedMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterialGlow);
					ALineActorAnswerOut->wrong(RedMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterialGlow);
				}

				
				FString strName = JsonObject->GetStringField("strName");
					
				if(strName!="")
				{
					SingerName->TextSingerName->SetText(FText::FromString(strName));
					SingerName->Blink();	
				}
				else
				{
					SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
				}
			}
		}
		// else if (strEventName == "PostResult")
		// {

		// 	TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("values");

		// 	// FVector getLocation = GetActorLocation();
		// 	// getLocation.Z=0;
		// 	// SetActorLocation(getLocation);

		// 	// int intTop = JsonObject->GetIntegerField("top");
		// 	// int intSize = JsonObject->GetIntegerField("size");
		// 	// int intSpacing = JsonObject->GetIntegerField("spacing");
		// 	// LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize,  intSpacing);
		// 	for (int32 i = 0; i < objArray.Num(); i++)
		// 	{

		// 		auto obj = objArray[i]->AsObject();
		// 		FString question = obj->GetStringField("Item1");
		// 		FString answer = obj->GetStringField("Item2");
		// 		float answerLeft = obj->GetNumberField("Item3");
		// 		FString isCorrect = obj->GetStringField("Item4");

		// 		//					 FString f=FString::SanitizeFloat(answerLeft);

		// 		//FString strLeft=obj->GetStringField("Item3");
		// 		//LineFinishParent->SetPaul(strLeft);
		// 		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,strLeft);
		// 		bool boolIsCorrect = (isCorrect == "true" ? true : false);
		// 		//,

		// 		LineFinishParent->fnSetGuide(question, answer, answerLeft, boolIsCorrect, i);
		// 		//LineFinishParent->fnSetFinishLine(question, answer);
		// 	}

		// 	for (int32 i = objArray.Num(); i < 100; i++)
		// 	{
			
		// 		LineFinishParent->fnSetGuide("", "", 0, true, i);
		// 	}

		// 	LineFinishParent->HideLines();
		// }
		// else if (strEventName == "ShowResult")
		// {
		// 	LineFinishParent->ShowLines();
		// }
		// else if (strEventName == "HideResult")
		// {

		// 	// PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, -5000.0f));
		// 	// PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -5000.0f));
		// 	LineFinishParent->HideLines();
		// 	// FVector thisLocation = LineFinishParent->GetActorLocation();

		// 	// thisLocation.Z=-5000;

		// 	// LineFinishParent->SetActorLocation(FVector(-120.0, -5000.0f, -5000.0f));

		// 	//SetActorLocation(thisLocation);
		// 	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, TEXT("SET LYRICS"));
		// }
		// else if (strEventName == "ResultTopAndSpacing")
		// {
		// 	int intTop = JsonObject->GetIntegerField("top");
		// 	int intSize = JsonObject->GetIntegerField("size");
		// 	int intSpacing = JsonObject->GetIntegerField("spacing");
		// 	LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize, intSpacing);
		// }
		// else if (strEventName == "ResultSize")
		// {
		// 	int intSize = JsonObject->GetIntegerField("value");
		// 	LineFinishParent->SetSize(intSize);
		// }
		// else if (strEventName == "AnimateResult")
		// {
		// 	int intTop = JsonObject->GetIntegerField("top");
		// 	int intSize = JsonObject->GetIntegerField("size");
		// 	int intSpacing = JsonObject->GetIntegerField("spacing");

		// 	LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize, intSpacing);
		// 	LineFinishParent->StartAnimateFinishResult();
		// }
		else if (strEventName == "ShowTitle")
		{
			FString title = JsonObject->GetStringField("song");
			FString artist = JsonObject->GetStringField("artist");

			TitleSingerUse->SetLyricsTitle(title, artist);
		}
		else if (strEventName == "HideTitle")
		{
			TitleSingerUse->HideTitle();
		}
		else if (strEventName == "Jackpot")
		{
			UGameplayStatics::OpenLevel(this, "JackpotMap");
		}
		else if (strEventName == "Humming")
		{
			UGameplayStatics::OpenLevel(this, "HummingMap");
		}
		// else if(strEventName==1)
		// {
		// 	float floatLineStart = -2000.f;
		// 	if(strEventName==1 && arrLineActor.Num()>0)
		// 	{
		// 		for (int32 i = 0; i < arrLineActor.Num(); i++)
		// 		{
		// 			arrLineActor[i]->SetVerticalTop(floatLineStart);
		// 			floatLineStart+=350.f;
		// 		}
		// 		return;
		// 	}

		// 	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, TEXT("SET LYRICS"));

		// 	//INTROS
		// 	TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("intro");

		// 	for (int32 i = 0; i < objArray.Num(); i++)
		// 	{

		// 		const FVector LineLocation = FVector(floatLineStart, 0.f , 0.f);// + GetActorLocation();
		// 		floatLineStart+=350.f;

		// 		ALineActor* tmpLine = GetWorld()->SpawnActor<ALineActor>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// 		tmpLine->SetValue(objArray[i]->AsString(), InitFontMaterial);

		// 		tmpLine->SetVerticalTop(floatLineStart);

		// 		//haha->Destroy();

		// 		arrLineActor.Add(tmpLine);

		// 	}

		// 	//floatLineStart
		// 	//BLANKS
		// 	TArray<TSharedPtr<FJsonValue>> objArrayBlanks = JsonObject->GetArrayField("blanks");

		// 	//FString fff = FString::FromInt(objArrayBlanks.Num());//FString::Printf(TEXT("%s"),FString::FromInt(objArrayBlanks.Num()));

		// 	for (int32 i = 0; i < objArrayBlanks.Num(); i++)
		// 	{

		// 		// FString name = objArrayBlanks[i]->AsString();

		// 		// TSharedPtr<FJsonValue> value = objArrayBlanks[i];
		// 		// FString json = value->AsString();
		// 	 	// FString sdfsdf = json.Mid(1,2);

		// 		auto obj = objArrayBlanks[i]->AsObject();
		// 		TSharedPtr<FJsonObject> Item1 = obj->GetObjectField("Item1");
		// 		FString question1 = Item1->GetStringField("question");
		// 		FString answer1 = Item1->GetStringField("answer");
		// 		FString blank1 = Item1->GetStringField("blank");
		// 		float blurleft1 = Item1->GetNumberField("blurleft");
		// 		float blurwidth1 = Item1->GetNumberField("blurwidth");

		// 		TSharedPtr<FJsonObject> Item2 = obj->GetObjectField("Item2");
		// 		FString question2 = Item2->GetStringField("question");
		// 		FString answer2 = Item2->GetStringField("answer");
		// 		FString blank2 = Item2->GetStringField("blank");
		// 		float blurleft2 = Item1->GetNumberField("blurleft");
		// 		float blurwidth2 = Item1->GetNumberField("blurwidth");
		// 		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, serverName1);

		// 		const FVector LineLocation = FVector(0.f, 0.f , 0.f);// + GetActorLocation();
		// 	//	floatLineStart+=350.f;

		// 		ALineActorAnswer* tmpLine = GetWorld()->SpawnActor<ALineActorAnswer>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// 		tmpLine->Init(BaseMaterial, GreenMaterial, YellowMaterial, BlankMaterial, RedMaterial,
		// 		BlurGlowMaterial, BaseBlurMaterial, blur);
		// 		tmpLine->SetValue(question1, answer1, blank1, question2, answer2, blank2, blurleft1,
		// 			 blurleft2, blurwidth1, blurwidth2, blur, InitFontMaterial);
		// 		//tmpLine->SetVerticalTop(floatLineStart);
		// 		tmpLine->hide();
		// 		arrLineActorBlanks.Add(tmpLine);

		// 		//haha->Destroy();

		// 	}

		// }
		else if (strEventName == "up")
		{
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("UP1"));
			intUpOrDown = 1;
		}
		else if (strEventName == "down")
		{
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("DOWN1"));
			intUpOrDown = 2;
		}
		else if (strEventName == "up")
		{
			// if(arrLineActorBlanks.Num()==0) return;

			// int idIndex=JsonObject->GetIntegerField("idIndex");
			// int trigger=JsonObject->GetIntegerField("trigger");

			// if(trigger==0)
			// {
			// 	if(idIndex>0)
			// 	{
			// 		arrLineActorBlanks[idIndex-1]->hide();
			// 	}

			// 	FString ff=FString::FromInt(idIndex);
			// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, ff);
			// 	arrLineActorBlanks[idIndex]->show();
			// }
			// else if(trigger==1)
			// {
			// 	arrLineActorBlanks[idIndex]->right(GreenMaterial, YellowMaterial, BlankMaterial);
			// }
			// else if(trigger==2)
			// {
			// 	arrLineActorBlanks[idIndex]->wrong(RedMaterial, YellowMaterial, BlankMaterial);
			// }
		}
		else if (strEventName == "final") //show final output
		{
			// float floatTop=JsonObject->GetNumberField("top");
			// float floatLineStart = floatTop;
			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->SetVerticalTopFinal(floatLineStart, BlankMaterial, RedMaterial, YellowMaterial);
			// 	// if(!arrLineActorBlanks[i]->fStrHasTwoLines())
			// 	//     floatLineStart+=350;
			// 	// else
			// 	//     floatLineStart+=650;
			// }
		}
		else if (strEventName == "clear") //hide all
		{
			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->hide();
			// }

			// for(int i=0; i<=arrLineActor.Num()-1;++i)
			// {
			// 	arrLineActor[i]->hide();
			// }
		}
		else if (strEventName == "scroll") //scroll up or down
		{
			float floatScroll = JsonObject->GetNumberField("scroll");
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->setScroll(floatScroll);
			}
		}
		else if (strEventName == "reset") // reset
		{
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->Destroy();
			}

			arrLineActor.Empty();

			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->Destroy();
			// 	//arrLineActorBlanks.Pop(true);
			// }

			// arrLineActorBlanks.Empty();
		}
		else if(strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap", false);
		}
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
		}
		// else if(strEventName==2)
		// {
		// 	for(int i=0; i<=arrLineActor.Num();++i)
		// 	{
		// 		arrLineActor[i]->Destroy();
		// 	}
		// }
	}
	boolHasPassed = false;
}

void ASingProjectBlockGrid::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{

//	
	if (!Response.IsValid())
	{
			boolHasPassed = false;
			return;
	}


	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp = Response->GetContentAsString();
	if (strHttpContent == tmpHttp)
	{
		boolHasPassed = false;
		return;
	}
	

	
	strHttpContent = tmpHttp;
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, strHttpContent);
	
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);
	//FString ff1= Response->GetContentAsString();
	//FString ff21= ff1.Mid(250,100);
	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, *ff21);
	//return;

	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");
		

		//if(strEventNameCurrent==strEventName) return;

		//	strEventNameCurrent=strEventName;
		if (strEventName == "none")
		{
			//strEventNameCurrent="none";
		}
		else if(strEventName=="ResetAll")
		{
			ALineActorAnswerIn->ResetAll();
			ALineActorAnswerOut->ResetAll();
			
			SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
		

			boolAnimateInStarted=false;

			boolOutIsShown=true;
			boolLine2OutIsShown=true;
			boolAnswerIsShown=false;

			strQuestion1="";
			strQuestion2="";
			strAnswer1="";
			strAnswer2="";

			strAnswerH1="";
			strAnswerH2="";

			strUnderline1="";
			strUnderline2="";

			strHttpContent="";

			// blurleft1=0;
			// blurwidth1=0;
			answerPosition1=0;
			blankPosition1=0;

			// blurleft2=0;
			// blurwidth2=0;
			answerPosition2=0;
			blankPosition2=0;

			notes=0;
			gameType="";
		}
		else if (strEventName == "pass_question" || strEventName == "AnimateIn" || strEventName == "AnimateLine1")
		{

			notes = JsonObject->GetIntegerField("notes");
			
			int hideAnswer = JsonObject->GetIntegerField("hideAnswer");
			int gametypeInt = JsonObject->GetIntegerField("gametype");


			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");

			FString strAnswer1tmp = Item1->GetStringField("answer");
			FString strAnswer2tmp = Item2->GetStringField("answer");

			//if(strAnswer1==strAnswer1tmp && strAnswer2==strAnswer2tmp) return;

			strQuestion1 = Item1->GetStringField("question");
			strAnswer1 = Item1->GetStringField("answer");
			strAnswerH1 = Item1->GetStringField("answerH");
			strUnderline1 = Item1->GetStringField("blank");
			// blurleft1 = Item1->GetNumberField("blurleft");
			// blurwidth1 = Item1->GetNumberField("blurwidth");
			answerPosition1 = Item1->GetNumberField("answerPosition");
			blankPosition1 = Item1->GetNumberField("blankPosition");

			strQuestion2 = Item2->GetStringField("question");
			strAnswer2 = Item2->GetStringField("answer");
			strAnswerH2 = Item2->GetStringField("answerH");
			strUnderline2 = Item2->GetStringField("blank");
			// blurleft2 = Item2->GetNumberField("blurleft");
			// blurwidth2 = Item2->GetNumberField("blurwidth");

			answerPosition2 = Item2->GetNumberField("answerPosition");
			blankPosition2 = Item2->GetNumberField("blankPosition");
		
			
			 		FString f1=FString::FromInt(answerPosition1);
			 GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f1);

			 FString f2=FString::FromInt(answerPosition2);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f2);

			 FString f3=FString::FromInt(blankPosition1);
			 GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f3);

			 FString f4=FString::FromInt(blankPosition2);
			 GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f4);


			// FString f5=FString::FromInt(hideAnswer);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f5);

			// FString f6=FString::FromInt(gametypeInt);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f6);

			// FString f7=FString::FromInt(gametypeInt);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, f7);

			// strQuestion1 = Item1->GetStringField("question");
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strQuestion1);

			// strAnswer1 = Item1->GetStringField("answer");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strAnswer1);
			// strAnswerH1 = Item1->GetStringField("answerH");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strAnswerH1);
			// strUnderline1 = Item1->GetStringField("blank");

			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, strUnderline1);


			if (hideAnswer == 1)
			{
				gameType = "hideAnswer";
			}
			else if (gametypeInt == 1)
			{
				gameType = "reversing";
			}
			else if (gametypeInt == 1)
			{
				gameType = "englishing";
			}

			ALineActorAnswerIn->boolAsTesting=true;

			if (notes == 1)
			{
				ALineActorAnswerIn->Init(BaseMaterial, GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterial,
										 BlurGlowMaterial, BaseBlurMaterial, notes, gameType);
			}

			ALineActorAnswerIn->SetValue(strQuestion1, strAnswer1, strAnswerH1,
										 strUnderline1, strQuestion2, strAnswer2, strAnswerH2,
										 strUnderline2,
										 answerPosition1, blankPosition1,
										 answerPosition2, blankPosition2,
										//  blurleft1, blurleft2, blurwidth1, blurwidth2, 
										 notes, InitFontMaterial,
										 BaseMaterial, BaseMaterialGlow, YellowMaterial, OrangeMaterial,
										 BlueMaterial, BlueBevelMaterial, BlueExtrudeMaterial,
										 ESMaterial, ESBevelMaterial, ESExtrudeMaterial, 
										 gameType, strEventName);

			if (strEventName == "AnimateIn" || strEventName == "AnimateLine1")
			{
				boolAnswerIsShown = false;
				
				int index = JsonObject->GetIntegerField("index");

			// 	FString f8=FString::FromInt(index);
			// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, f8);

				ALineActorAnswerIn->intIndex = index;
				//FString ss = FString::FromInt(index);

				FString strName = Item1->GetStringField("strName");
				
				if(strName!="")
				{
					SingerName->TextSingerName->SetText(FText::FromString(strName));
					SingerName->Blink();	
				}
				else
				{
					SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
				}
				
				//SingerName->SetName(strName);
				if (!boolAnimateInStarted && intAnimateIndex != index)
				{

					boolAnimateInStarted = true;
					intAnimateIndex = index;

					if (boolOutIsShown)
					{
						boolOutIsShown = false;
						ALineActorAnswerOut->StartAnimateOut();
					}
					else
					{
						boolOutIsShown = true;
					}

					ALineActorAnswerIn->FAnimateType = "";

					if (strEventName == "AnimateLine1")
					{
						ALineActorAnswerIn->FAnimateType = strEventName;
						boolLine2OutIsShown = false;
					}

					ALineActorAnswerIn->UpdateVisibility(notes);
					ALineActorAnswerIn->StartAnimate();
					//	boolAnimateOutStarted=false;
				}

				//tmpLine->SetVerticalTop(floatLineStart);
				//ALineActorAnswerIn->hide();

				//haha->Destroy();
			}
		}
		else if (strEventName == "AnimateShowWord")
		{
			ALineActorAnswerIn->ShowWord();
		}
		else if (strEventName == "AnimateLine2")
		{
			if (!boolLine2OutIsShown)
			{
				boolLine2OutIsShown = true;
				ALineActorAnswerIn->FAnimateType = strEventName;
				ALineActorAnswerIn->UpdateVisibility(notes);
				ALineActorAnswerIn->StartAnimate();
			}
		}
		else if (strEventName == "AnimateOut")
		{
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				ALineActorAnswerIn->StartAnimateOut();
				boolAnimateInStarted = false;
			}
		}
		else if (strEventName == "ShowAnswer")
		{

			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("ShowAnswer"));
			if (!boolAnswerIsShown)
			{
				boolAnswerIsShown = true;
				FString trigger = JsonObject->GetStringField("trigger");

				if (trigger == "true")
				{
					ALineActorAnswerIn->right(GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, GreenMaterialGlow);
					ALineActorAnswerOut->right(GreenMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, GreenMaterialGlow);
				}
				else
				{
					ALineActorAnswerIn->wrong(RedMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterialGlow);
					ALineActorAnswerOut->wrong(RedMaterial, YellowMaterial, OrangeMaterial, BlankMaterial, RedMaterialGlow);
				}

				
				FString strName = JsonObject->GetStringField("strName");
					
				if(strName!="")
				{
					SingerName->TextSingerName->SetText(FText::FromString(strName));
					SingerName->Blink();	
				}
				else
				{
					SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
				}
			}
		}
		// else if (strEventName == "PostResult")
		// {

		// 	TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("values");

		// 	// FVector getLocation = GetActorLocation();
		// 	// getLocation.Z=0;
		// 	// SetActorLocation(getLocation);

		// 	// int intTop = JsonObject->GetIntegerField("top");
		// 	// int intSize = JsonObject->GetIntegerField("size");
		// 	// int intSpacing = JsonObject->GetIntegerField("spacing");
		// 	// LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize,  intSpacing);
		// 	for (int32 i = 0; i < objArray.Num(); i++)
		// 	{

		// 		auto obj = objArray[i]->AsObject();
		// 		FString question = obj->GetStringField("Item1");
		// 		FString answer = obj->GetStringField("Item2");
		// 		float answerLeft = obj->GetNumberField("Item3");
		// 		FString isCorrect = obj->GetStringField("Item4");

		// 		//					 FString f=FString::SanitizeFloat(answerLeft);

		// 		//FString strLeft=obj->GetStringField("Item3");
		// 		//LineFinishParent->SetPaul(strLeft);
		// 		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,strLeft);
		// 		bool boolIsCorrect = (isCorrect == "true" ? true : false);
		// 		//,

		// 		LineFinishParent->fnSetGuide(question, answer, answerLeft, boolIsCorrect, i);
		// 		//LineFinishParent->fnSetFinishLine(question, answer);
		// 	}

		// 	for (int32 i = objArray.Num(); i < 100; i++)
		// 	{
			
		// 		LineFinishParent->fnSetGuide("", "", 0, true, i);
		// 	}

		// 	LineFinishParent->HideLines();
		// }
		// else if (strEventName == "ShowResult")
		// {
		// 	LineFinishParent->ShowLines();
		// }
		// else if (strEventName == "HideResult")
		// {

		// 	// PlaneBlur1->SetRelativeLocation(FVector(-120.0, fBlurLeft1, -5000.0f));
		// 	// PlaneBlur2->SetRelativeLocation(FVector(330.0f, fBlurLeft2, -5000.0f));
		// 	LineFinishParent->HideLines();
		// 	// FVector thisLocation = LineFinishParent->GetActorLocation();

		// 	// thisLocation.Z=-5000;

		// 	// LineFinishParent->SetActorLocation(FVector(-120.0, -5000.0f, -5000.0f));

		// 	//SetActorLocation(thisLocation);
		// 	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, TEXT("SET LYRICS"));
		// }
		// else if (strEventName == "ResultTopAndSpacing")
		// {
		// 	int intTop = JsonObject->GetIntegerField("top");
		// 	int intSize = JsonObject->GetIntegerField("size");
		// 	int intSpacing = JsonObject->GetIntegerField("spacing");
		// 	LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize, intSpacing);
		// }
		// else if (strEventName == "ResultSize")
		// {
		// 	int intSize = JsonObject->GetIntegerField("value");
		// 	LineFinishParent->SetSize(intSize);
		// }
		// else if (strEventName == "AnimateResult")
		// {
		// 	int intTop = JsonObject->GetIntegerField("top");
		// 	int intSize = JsonObject->GetIntegerField("size");
		// 	int intSpacing = JsonObject->GetIntegerField("spacing");

		// 	LineFinishParent->SetTopAndSizeAndSpacing(intTop, intSize, intSpacing);
		// 	LineFinishParent->StartAnimateFinishResult();
		// }
		else if (strEventName == "ShowTitle")
		{
			FString title = JsonObject->GetStringField("song");
			FString artist = JsonObject->GetStringField("artist");

			TitleSingerUse->SetLyricsTitle(title, artist);
		}
		else if (strEventName == "HideTitle")
		{
			TitleSingerUse->HideTitle();
		}
		else if (strEventName == "Jackpot")
		{
			UGameplayStatics::OpenLevel(this, "JackpotMap");
		}
		else if (strEventName == "Humming")
		{
			UGameplayStatics::OpenLevel(this, "HummingMap");
		}
		// else if(strEventName==1)
		// {
		// 	float floatLineStart = -2000.f;
		// 	if(strEventName==1 && arrLineActor.Num()>0)
		// 	{
		// 		for (int32 i = 0; i < arrLineActor.Num(); i++)
		// 		{
		// 			arrLineActor[i]->SetVerticalTop(floatLineStart);
		// 			floatLineStart+=350.f;
		// 		}
		// 		return;
		// 	}

		// 	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, TEXT("SET LYRICS"));

		// 	//INTROS
		// 	TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("intro");

		// 	for (int32 i = 0; i < objArray.Num(); i++)
		// 	{

		// 		const FVector LineLocation = FVector(floatLineStart, 0.f , 0.f);// + GetActorLocation();
		// 		floatLineStart+=350.f;

		// 		ALineActor* tmpLine = GetWorld()->SpawnActor<ALineActor>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// 		tmpLine->SetValue(objArray[i]->AsString(), InitFontMaterial);

		// 		tmpLine->SetVerticalTop(floatLineStart);

		// 		//haha->Destroy();

		// 		arrLineActor.Add(tmpLine);

		// 	}

		// 	//floatLineStart
		// 	//BLANKS
		// 	TArray<TSharedPtr<FJsonValue>> objArrayBlanks = JsonObject->GetArrayField("blanks");

		// 	//FString fff = FString::FromInt(objArrayBlanks.Num());//FString::Printf(TEXT("%s"),FString::FromInt(objArrayBlanks.Num()));

		// 	for (int32 i = 0; i < objArrayBlanks.Num(); i++)
		// 	{

		// 		// FString name = objArrayBlanks[i]->AsString();

		// 		// TSharedPtr<FJsonValue> value = objArrayBlanks[i];
		// 		// FString json = value->AsString();
		// 	 	// FString sdfsdf = json.Mid(1,2);

		// 		auto obj = objArrayBlanks[i]->AsObject();
		// 		TSharedPtr<FJsonObject> Item1 = obj->GetObjectField("Item1");
		// 		FString question1 = Item1->GetStringField("question");
		// 		FString answer1 = Item1->GetStringField("answer");
		// 		FString blank1 = Item1->GetStringField("blank");
		// 		float blurleft1 = Item1->GetNumberField("blurleft");
		// 		float blurwidth1 = Item1->GetNumberField("blurwidth");

		// 		TSharedPtr<FJsonObject> Item2 = obj->GetObjectField("Item2");
		// 		FString question2 = Item2->GetStringField("question");
		// 		FString answer2 = Item2->GetStringField("answer");
		// 		FString blank2 = Item2->GetStringField("blank");
		// 		float blurleft2 = Item1->GetNumberField("blurleft");
		// 		float blurwidth2 = Item1->GetNumberField("blurwidth");
		// 		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, serverName1);

		// 		const FVector LineLocation = FVector(0.f, 0.f , 0.f);// + GetActorLocation();
		// 	//	floatLineStart+=350.f;

		// 		ALineActorAnswer* tmpLine = GetWorld()->SpawnActor<ALineActorAnswer>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// 		tmpLine->Init(BaseMaterial, GreenMaterial, YellowMaterial, BlankMaterial, RedMaterial,
		// 		BlurGlowMaterial, BaseBlurMaterial, blur);
		// 		tmpLine->SetValue(question1, answer1, blank1, question2, answer2, blank2, blurleft1,
		// 			 blurleft2, blurwidth1, blurwidth2, blur, InitFontMaterial);
		// 		//tmpLine->SetVerticalTop(floatLineStart);
		// 		tmpLine->hide();
		// 		arrLineActorBlanks.Add(tmpLine);

		// 		//haha->Destroy();

		// 	}

		// }
		else if (strEventName == "up")
		{
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("UP1"));
			intUpOrDown = 1;
		}
		else if (strEventName == "down")
		{
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("DOWN1"));
			intUpOrDown = 2;
		}
		else if (strEventName == "up")
		{
			// if(arrLineActorBlanks.Num()==0) return;

			// int idIndex=JsonObject->GetIntegerField("idIndex");
			// int trigger=JsonObject->GetIntegerField("trigger");

			// if(trigger==0)
			// {
			// 	if(idIndex>0)
			// 	{
			// 		arrLineActorBlanks[idIndex-1]->hide();
			// 	}

			// 	FString ff=FString::FromInt(idIndex);
			// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, ff);
			// 	arrLineActorBlanks[idIndex]->show();
			// }
			// else if(trigger==1)
			// {
			// 	arrLineActorBlanks[idIndex]->right(GreenMaterial, YellowMaterial, BlankMaterial);
			// }
			// else if(trigger==2)
			// {
			// 	arrLineActorBlanks[idIndex]->wrong(RedMaterial, YellowMaterial, BlankMaterial);
			// }
		}
		else if (strEventName == "final") //show final output
		{
			// float floatTop=JsonObject->GetNumberField("top");
			// float floatLineStart = floatTop;
			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->SetVerticalTopFinal(floatLineStart, BlankMaterial, RedMaterial, YellowMaterial);
			// 	// if(!arrLineActorBlanks[i]->fStrHasTwoLines())
			// 	//     floatLineStart+=350;
			// 	// else
			// 	//     floatLineStart+=650;
			// }
		}
		else if (strEventName == "clear") //hide all
		{
			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->hide();
			// }

			// for(int i=0; i<=arrLineActor.Num()-1;++i)
			// {
			// 	arrLineActor[i]->hide();
			// }
		}
		else if (strEventName == "scroll") //scroll up or down
		{
			float floatScroll = JsonObject->GetNumberField("scroll");
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->setScroll(floatScroll);
			}
		}
		else if (strEventName == "reset") // reset
		{
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->Destroy();
			}

			arrLineActor.Empty();

			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->Destroy();
			// 	//arrLineActorBlanks.Pop(true);
			// }

			// arrLineActorBlanks.Empty();
		}
		else if(strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap", false);
		}
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
		}
		// else if(strEventName==2)
		// {
		// 	for(int i=0; i<=arrLineActor.Num();++i)
		// 	{
		// 		arrLineActor[i]->Destroy();
		// 	}
		// }
	}
	boolHasPassed = false;
}

void ASingProjectBlockGrid::StartAnimateFinishMain(int index)
{
	FString ss = FString::FromInt(intAnimateIndex);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ss);
	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Red, ss);
	// if(intAnimateIndex!=index)
	// {
	//	intAnimateIndex=index;
	boolAnimateInStarted = false;
	boolOutIsShown = true;
	//}

	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, strQuestion1);
	ALineActorAnswerOut->SetValue(strQuestion1, strAnswer1, strAnswerH1, strUnderline1, 
								  strQuestion2, strAnswer2, strAnswerH2,
								  strUnderline2,
								  answerPosition1, blankPosition1,
								  answerPosition2, blankPosition2,
								//   blurleft1, blurleft2, blurwidth1, blurwidth2, 
								  notes,
								   InitFontMaterial, BaseMaterial, BaseMaterialGlow, YellowMaterial, OrangeMaterial,
								  BlueMaterial, BlueBevelMaterial, BlueExtrudeMaterial, 
								  ESMaterial, ESBevelMaterial, ESExtrudeMaterial, 
								  gameType,"");
}

void ASingProjectBlockGrid::StartAnimateOutFinishMain(int index)
{

	//boolOutIsShown=false;
}

void ASingProjectBlockGrid::RepeatingFunctionUpOrDown()
{
	//FString::FromInt(arrLineActor.Num())
	//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT(arrLineActor.Num()));

	if (intUpOrDown == 1)
	{
		if (arrLineActor.Num() > 0)
		{
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->MoveUp(10.f);
			}

			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->MoveUp(10.f);
			// 	// arrLineActorBlanksAnswer[i]->MoveUp(10.f);
			// 	// arrLineActorBlanksUnderscore[i]->MoveUp(10.f);

			// }
		}

		// else
		// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("NO1"));

		//intUpOrDown=100;
	}
	else if (intUpOrDown == 2)
	{
		if (arrLineActor.Num() > 0)
		{
			for (int i = 0; i <= arrLineActor.Num() - 1; ++i)
			{
				arrLineActor[i]->MoveDown(10.f);
			}

			// for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
			// {
			// 	arrLineActorBlanks[i]->MoveDown(10.f);
			// 	// arrLineActorBlanksAnswer[i]->MoveDown(10.f);
			// 	// arrLineActorBlanksUnderscore[i]->MoveDown(10.f);

			// }
		}
		// else
		// {
		// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("NO2"));
		// }

		//intUpOrDown=100;
	}
}
void ASingProjectBlockGrid::RepeatingFunction()
{

	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("BLUE"));

	if (!boolHasPassed)
	{
		boolHasPassed = true;
		Request->ProcessRequest();
		return;
	}
	else
	{
	//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("NO CONNECTION"));
	}


	// if(!hasConnection)
	// {
	// 	GEngine->AddOnScreenDebugMessage(1, 600.0f, FColor::Green, TEXT("NO CONNECTION"));
	// }
}

void ASingProjectBlockGrid::AddScore()
{
	// Increment score
	Score++;
	Score++;
	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
}

#undef LOCTEXT_NAMESPACE
