// Fill out your copyright notice in the Description page of Project Settings.

#include "WordCloudMain.h"
//#include "WordCloudItem.h"
#include "../LineSingerName.h"
#include "../LineTitleSinger.h"

// Sets default values
AWordCloudMain::AWordCloudMain()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	SplineDownToCenter = CreateDefaultSubobject<USplineComponent>(TEXT("SplineDownToCenter"));
	SplineDownToCenter->SetupAttachment(DummyRoot);

	SplineCenterToUp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToUp"));
	SplineCenterToUp->SetupAttachment(DummyRoot);

	// SplineDownToCenterSelection = CreateDefaultSubobject<USplineComponent>(TEXT("SplineDownToCenterSelection"));
	// SplineDownToCenterSelection->SetupAttachment(DummyRoot);

	// SplineCenterToUpSelection = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToUpSelection"));
	// SplineCenterToUpSelection->SetupAttachment(DummyRoot);


}

// Called when the game starts or when spawned
void AWordCloudMain::BeginPlay()
{
	Super::BeginPlay();

	WCQuestion->OwningGrid = this;
	WCQuestionOut->OwningGrid=this;

	WCQuestion->SetValue("", "");
	WCQuestionOut->SetValue("", "");
	FOnTimelineFloatOut.BindUFunction(this, FName("ControlZoomOut"));
	ZoomTimelineOut.AddInterpFloat(ZoomCurveOut, FOnTimelineFloatOut);

	return;

	GetWorld()->Exec(GetWorld(), TEXT("DisableAllScreenMessages"));
	Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &AWordCloudMain::OnResponseReceived);
	//   //This is the url on which to process the request
	Request->SetURL("http://localhost:8092"); //https://jsonplaceholder.typicode.com/todos/1
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	//Request->ProcessRequest();

	////not timer loop, one time only
	GetWorldTimerManager().SetTimer(tmr, this, &AWordCloudMain::RepeatingFunction, 0.2f, true);


}

void AWordCloudMain::ControlZoomOut(float Value)
{
	FVector newLocation = FMath::Lerp(FVector(-8000,0,0),FVector(0,0,0), Value);
	WContainerOut->SetActorRelativeLocation(newLocation);
	
}
void AWordCloudMain::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{

	if (!Response.IsValid())
	{
		boolHasPassed = false;
		return;
	}

	boolHasPassed = false;
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp = Response->GetContentAsString();

	if (strHttpContent == tmpHttp)
	{
		boolHasPassed = false;
		return;
	}

	strHttpContent = tmpHttp;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");
		
		if (strEventName == "pass_question" || strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
		{

			//WCItem->ResetAll();
			//arrWordCloudItems

			
			// for (int intCount = 0; intCount < 8; ++intCount)
			// {
			// 	arrWordCloudItems[intCount]->ResetAll();
			// }

			strQuestion1 = JsonObject->GetStringField("strQuestion1");
			strQuestion2 = JsonObject->GetStringField("strQuestion2");
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, strQuestion1);
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, strQuestion2);
			if (strEventName == "pass_question")
			{
				WCQuestion->SetValue(strQuestion1, strQuestion2);
			}
			else if (strEventName == "ResetAll")
			{
				strHttpContent = "";

				strQuestion1 = "";
				strQuestion2 = "";

				boolHasPassed = false;

				//boolAnimateInStartedLine = false;
				boolOutIsShownLine = false;

				WCContainer->ResetAll();
				WContainerOut->ResetAll();
				WCQuestion->ResetAll();
				WCQuestionOut->ResetAll();

				SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
			}
			else if (strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
			{
				/*Name*/
				FString strName = JsonObject->GetStringField("strName");

				if (strName != "")
				{
					SingerName->TextSingerName->SetText(FText::FromString(strName));
					SingerName->Blink();
				}
				else
				{
					SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
				}
				/*End Name*/

				if (boolOutIsShownLine)
				{
					WCQuestionOut->StartAnimateOutLine();
				}

				WCQuestion->FAnimateTypeLine = strEventName;

				//WCQuestion->SetToBaseMaterial();

				WCQuestion->SetValue(strQuestion1, strQuestion2);

				WCQuestion->StartAnimateLine();

				boolOutIsShownLine = true;

				if(boolAnimateInStarted)
				{
					boolAnimateInStarted=false;
					WCContainer->SetActorRelativeLocation(FVector(0,0,-8000));
					WContainerOut->ShowWordsEnd();
					ZoomTimelineOut.PlayFromStart();
				}
		
			}
		}
		else if (strEventName == "ShowAnswer")
		{
			FString strAnswer=JsonObject->GetStringField("trigger");
			WCContainer->ShowAnswer(strAnswer);
			WContainerOut->ShowAnswerUnderline(strAnswer);
		}
		else if (strEventName == "AnimateLine2")
		{
			WCQuestion->FAnimateTypeLine = strEventName;
			WCQuestion->StartAnimateLine();
		}
		else if (strEventName == "AnimateLineOut") //AnimateOut
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("TRUE2"));
			if (boolOutIsShownLine)
			{
				boolOutIsShownLine = false;
				//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TRUE2"));

				WCQuestion->StartAnimateOutLine();
				WCQuestion->FAnimateTypeLine = "AnimateLineOut";

				//WCQuestion->SetValueLineOut();
				WCQuestionOut->StartAnimateOutLine();

				//boolAnimateInStartedLine = false;
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("FALSE"));
			}
		}
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
		else if (strEventName == "AnimateOut")
		{
			if (boolOutIsShownLine)
			{
				WCQuestion->StartAnimateOutLine();
				WCQuestion->FAnimateTypeLine = "AnimateLineOut";
				WCQuestionOut->StartAnimateOutLine();
				boolOutIsShownLine=false;
			}
			//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Blue, TEXT("AnimateOut"));
			boolAnimateInStarted=false;
			WCContainer->SetActorRelativeLocation(FVector(0,0,-8000));
			WContainerOut->ShowWordsEnd();
			ZoomTimelineOut.PlayFromStart();
		}
		else if (strEventName == "Start")
		{
			if (boolOutIsShownLine)
			{
				WCQuestion->StartAnimateOutLine();
				WCQuestion->FAnimateTypeLine = "AnimateLineOut";
				WCQuestionOut->StartAnimateOutLine();
				boolOutIsShownLine=false;
			}

			boolAnimateInStarted=true;
			//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));
			WCContainer->setValues(strHttpContent, "ShowWordsStart");
			WContainerOut->setValues(strHttpContent, "ShowWordsOut");
			WCContainer->SetActorRelativeLocation(FVector(0,0,0));
			WContainerOut->SetActorRelativeLocation(FVector(0,0,0));
			//WContainerOut->setValues(strHttpContent, "ShowWords");
		} 
		else if (strEventName == "ShowWords")
		{
			//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));
			WCContainer->setValues(strHttpContent, "ShowWords");
			WContainerOut->setValues(strHttpContent, "ShowWordsEnd");
			WCContainer->SetActorRelativeLocation(FVector(0,0,0));
			WContainerOut->SetActorRelativeLocation(FVector(0,0,0));
			//WContainerOut->setValues(strHttpContent, "ShowWords");
		} 	
		// else if (strEventName == "StartAnimate")
		// {
		// 	//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));
		// 	WCContainer->setValues(strHttpContent, "StartAnimate");
		// 	//WContainerOut->setValues(strHttpContent, "End");
		// } 	
		// else if (strEventName == "MoveItems")
		// {
		// 	//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));
		// 	WCContainer->setValues(strHttpContent, "Start");
		// 	WContainerOut->setValues(strHttpContent, "End");

		// }
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap", false);
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
		}
		else if (strEventName == "Jackpot")
		{
			UGameplayStatics::OpenLevel(this, "JackpotMap");
		}
		else if (strEventName == "Humming")
		{
			UGameplayStatics::OpenLevel(this, "HummingMap");
		}


	}
}

void AWordCloudMain::FinishLine()
{
		// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion1);
		// 	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion2);
	//Pass value of new question
	
		WCQuestionOut->SetValue(strQuestion1, strQuestion2);
}

void AWordCloudMain::RepeatingFunction()
{

	if (!boolHasPassed)
	{
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "boolHasPassed");
		boolHasPassed = true;
		Request->ProcessRequest();
		return;
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, "boolHasPassed");
	}
}

// Called every frame
void AWordCloudMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ZoomTimelineOut.TickTimeline(DeltaTime);
}
