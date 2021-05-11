// Fill out your copyright notice in the Description page of Project Settings.

#include "MulChoiceMain.h"
#include "MulChoiceItem.h"
#include "../LineSingerName.h"
#include "../LineTitleSinger.h"


// Sets default values
AMulChoiceMain::AMulChoiceMain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	SplineDownToCenter = CreateDefaultSubobject<USplineComponent>(TEXT("SplineDownToCenter"));
	SplineDownToCenter->SetupAttachment(DummyRoot);

	SplineCenterToUp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToUp"));
	SplineCenterToUp->SetupAttachment(DummyRoot);

	
	SplineDownToCenterSelection = CreateDefaultSubobject<USplineComponent>(TEXT("SplineDownToCenterSelection"));
	SplineDownToCenterSelection->SetupAttachment(DummyRoot);

	SplineCenterToUpSelection = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToUpSelection"));
	SplineCenterToUpSelection->SetupAttachment(DummyRoot);


	
	SplineCenterToMCPosition = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToMCPosition"));
	SplineCenterToMCPosition->SetupAttachment(DummyRoot);

	SplineMCPositionToUp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineMCPositionToUp"));
	SplineMCPositionToUp->SetupAttachment(DummyRoot);


}


void AMulChoiceMain::RepeatingFunction()
{

	if (!boolHasPassed)
	{
		boolHasPassed = true;
		Request->ProcessRequest();
		return;
	}

}


void AMulChoiceMain::VaRestResponse(FString VaRestValue)
{

	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp = VaRestValue;//Response->GetContentAsString();
	if (strHttpContent == tmpHttp)
	{
			boolHasPassed = false;
			return;
	}
		

	strHttpContent = tmpHttp;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strHttpContent);
	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");

	//	int hideAnswer = JsonObject->GetIntegerField("hideAnswer");

		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, strEventName);
		if (strEventName == "pass_question" || strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
		{
			
			ChoiceItem->ResetAll();
			strQuestion1 = JsonObject->GetStringField("strQuestion1");
			strQuestion2 = JsonObject->GetStringField("strQuestion2");

			
			if(strEventName == "pass_question")
			{
				ChoiceQuestion->SetValue(strQuestion1, strQuestion2);
				
			}
			else if(strEventName=="ResetAll")
			{
				strHttpContent="";

				strQuestion1="";
				strQuestion2="";
				
				boolHasPassed=false;

				boolAnimateInStartedLine=false;
				boolOutIsShownLine=false;

				SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));

			}
			else if (strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
			{
				/*Name*/
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
				/*End Name*/

				if(JsonObject->GetStringField("strA")!="")
				{
					ChoiceItem->TextLineChoice1Letter->SetText(FText::FromString(JsonObject->GetStringField("strLabelA")));
					ChoiceItem->TextLineChoice2Letter->SetText(FText::FromString(JsonObject->GetStringField("strLabelB")));
					ChoiceItem->TextLineChoice1->SetText(FText::FromString(JsonObject->GetStringField("strA")));
					ChoiceItem->TextLineChoice2->SetText(FText::FromString(JsonObject->GetStringField("strB")));
					
					ChoiceQuestion->SetMaterialColorText(false); //yellow border on material
					ChoiceQuestionOut->SetMaterialColorText(false); //yellow border on material
				}
				else
				{
					ChoiceQuestion->SetMaterialColorText(true); //blue color on everybody sing /intro
					ChoiceQuestionOut->SetMaterialColorText(true); //blue color on everybody sing /intro
				}



				if(ChoiceQuestion->boolLineIsMultipleChoicePosition)
				{
					ChoiceQuestionOut->StartAnimateMCPositionOut();
					ChoiceItem->StartAnimateOutSelection();
				}


				if(boolOutIsShownLine)
				{
					ChoiceQuestionOut->StartAnimateOutLine();
				}

				ChoiceQuestion->FAnimateTypeLine = strEventName;

				//ChoiceQuestion->SetToBaseMaterial();

				ChoiceQuestion->SetValue(strQuestion1, strQuestion2);
			
				ChoiceQuestion->StartAnimateLine();
				

				boolOutIsShownLine=true;

			}
		}
		else if (strEventName == "AnimateLine2")
		{
			ChoiceQuestion->FAnimateTypeLine = strEventName;
			ChoiceQuestion->StartAnimateLine();
		}
		else if (strEventName == "AnimateLineOut") //AnimateOut
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("TRUE2"));
			if (boolOutIsShownLine)
			{
				boolOutIsShownLine = false;
			//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TRUE2"));
				
				ChoiceQuestion->StartAnimateOutLine();
				ChoiceQuestion->FAnimateTypeLine = "AnimateLineOut";

				//ChoiceQuestion->SetValueLineOut();
				ChoiceQuestionOut->StartAnimateOutLine();

				boolAnimateInStartedLine = false;
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("FALSE"));
			}
		}
		else if (strEventName == "SetSelection")
		{
			//ChoiceQuestion->FAnimateTypeLine = strEventName;

			ChoiceItem->TextLineChoice1Letter->SetText(FText::FromString(JsonObject->GetStringField("labelA")));
			ChoiceItem->TextLineChoice2Letter->SetText(FText::FromString(JsonObject->GetStringField("labelB")));
			ChoiceItem->TextLineChoice1->SetText(FText::FromString(JsonObject->GetStringField("letterA")));
			ChoiceItem->TextLineChoice2->SetText(FText::FromString(JsonObject->GetStringField("letterB")));

		}
		else if (strEventName == "RemoveHighlight")
		{
			//ChoiceQuestion->FAnimateTypeLine = strEventName;

			ChoiceItem->RemoveHighlight();
			
		}

		else if (strEventName == "ShowSelection")
		{
			
			FString fGetLetter=JsonObject->GetStringField("letter");
		    
			//before showing choice A
			if(fGetLetter.ToUpper()=="A")
			{
				ChoiceQuestion->StartAnimateMCPosition();
				ChoiceQuestion->SetToGlowMaterial();
				ChoiceQuestion->boolLineIsMultipleChoicePosition=true;
				ChoiceItem->AnimateBoxQuestion();
			}

			ChoiceItem->SelectedItem(fGetLetter);
			ChoiceItem->StartAnimateSelection();
		}
		else if (strEventName == "ShowSelected")
		{

			FString fGetLetter=JsonObject->GetStringField("selected");
			ChoiceItem->SelectedItem(fGetLetter);
			ChoiceItem->Highlight();
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, fGetLetter);
			//ChoiceItem->StartAnimateOutSelection();
			//ChoiceQuestion->FAnimateTypeLine = strEventName;
			//ChoiceQuestion->StartAnimateMCPosition();
		}
		else if (strEventName == "ShowAnswer")
		{

			FString strAnswer=JsonObject->GetStringField("answer");
			ChoiceItem->SetAnswerAndProcess(strAnswer);
			
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
		else if (strEventName == "AnimateOut")
		{
			ChoiceQuestion->StartAnimateMCPositionOut();
			ChoiceItem->StartAnimateOutSelection();
			boolOutIsShownLine=false;
			ChoiceQuestion->boolLineIsMultipleChoicePosition=false;
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
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap", false);
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
	boolHasPassed = false;
}





// Called when the game starts or when spawned
void AMulChoiceMain::BeginPlay()
{
	Super::BeginPlay();
	
	ChoiceItem->OwningGrid = this;
	ChoiceQuestion->OwningGrid = this;
	ChoiceQuestionOut->OwningGrid=this;

return;
	//GetWorld()->Exec(GetWorld(), TEXT("DisableAllScreenMessages"));
	Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &AMulChoiceMain::OnResponseReceived);
	//   //This is the url on which to process the request
	Request->SetURL("http://localhost:8092"); //https://jsonplaceholder.typicode.com/todos/1
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	//Request->ProcessRequest();

	////not timer loop, one time only
	GetWorldTimerManager().SetTimer(tmr, this, &AMulChoiceMain::RepeatingFunction, 0.2f, true);
	//GetWorldTimerManager().SetTimer(tmrUpDown, this, &ASingProjectBlockGrid::RepeatingFunctionUpOrDown, 0.2f, true);


}


// Called every frame
void AMulChoiceMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//finish after showing selection
void AMulChoiceMain::FinishLineOut()
{
	ChoiceQuestion->boolLineIsMultipleChoicePosition=false;
	//Pass value of new question
	//ChoiceQuestionOut->SetValue(strQuestion1, strQuestion2);
}

void AMulChoiceMain::FinishLine()
{
	//Pass value of new question
	ChoiceQuestionOut->SetValue(strQuestion1, strQuestion2);
}



void AMulChoiceMain::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("PASSED"));


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
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strHttpContent);
	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid() && Response.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");

	//	int hideAnswer = JsonObject->GetIntegerField("hideAnswer");

		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, strEventName);
		if (strEventName == "pass_question" || strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
		{
			
			ChoiceItem->ResetAll();
			strQuestion1 = JsonObject->GetStringField("strQuestion1");
			strQuestion2 = JsonObject->GetStringField("strQuestion2");

			
			if(strEventName == "pass_question")
			{
				ChoiceQuestion->SetValue(strQuestion1, strQuestion2);
				
			}
			else if(strEventName=="ResetAll")
			{
				strHttpContent="";

				strQuestion1="";
				strQuestion2="";
				
				boolHasPassed=false;

				boolAnimateInStartedLine=false;
				boolOutIsShownLine=false;

				SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));

			}
			else if (strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
			{
				/*Name*/
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
				/*End Name*/

				if(JsonObject->GetStringField("strA")!="")
				{
					ChoiceItem->TextLineChoice1Letter->SetText(FText::FromString(JsonObject->GetStringField("strLabelA")));
					ChoiceItem->TextLineChoice2Letter->SetText(FText::FromString(JsonObject->GetStringField("strLabelB")));
					ChoiceItem->TextLineChoice1->SetText(FText::FromString(JsonObject->GetStringField("strA")));
					ChoiceItem->TextLineChoice2->SetText(FText::FromString(JsonObject->GetStringField("strB")));
					
					ChoiceQuestion->SetMaterialColorText(false); //yellow border on material
					ChoiceQuestionOut->SetMaterialColorText(false); //yellow border on material
				}
				else
				{
					ChoiceQuestion->SetMaterialColorText(true); //blue color on everybody sing /intro
					ChoiceQuestionOut->SetMaterialColorText(true); //blue color on everybody sing /intro
				}



				if(ChoiceQuestion->boolLineIsMultipleChoicePosition)
				{
					ChoiceQuestionOut->StartAnimateMCPositionOut();
					ChoiceItem->StartAnimateOutSelection();
				}


				if(boolOutIsShownLine)
				{
					ChoiceQuestionOut->StartAnimateOutLine();
				}

				ChoiceQuestion->FAnimateTypeLine = strEventName;

				//ChoiceQuestion->SetToBaseMaterial();

				ChoiceQuestion->SetValue(strQuestion1, strQuestion2);
			
				ChoiceQuestion->StartAnimateLine();
				

				boolOutIsShownLine=true;

			}
		}
		else if (strEventName == "AnimateLine2")
		{
			ChoiceQuestion->FAnimateTypeLine = strEventName;
			ChoiceQuestion->StartAnimateLine();
		}
		else if (strEventName == "AnimateLineOut") //AnimateOut
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("TRUE2"));
			if (boolOutIsShownLine)
			{
				boolOutIsShownLine = false;
			//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TRUE2"));
				
				ChoiceQuestion->StartAnimateOutLine();
				ChoiceQuestion->FAnimateTypeLine = "AnimateLineOut";

				//ChoiceQuestion->SetValueLineOut();
				ChoiceQuestionOut->StartAnimateOutLine();

				boolAnimateInStartedLine = false;
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("FALSE"));
			}
		}
		else if (strEventName == "SetSelection")
		{
			//ChoiceQuestion->FAnimateTypeLine = strEventName;

			ChoiceItem->TextLineChoice1Letter->SetText(FText::FromString(JsonObject->GetStringField("labelA")));
			ChoiceItem->TextLineChoice2Letter->SetText(FText::FromString(JsonObject->GetStringField("labelB")));
			ChoiceItem->TextLineChoice1->SetText(FText::FromString(JsonObject->GetStringField("letterA")));
			ChoiceItem->TextLineChoice2->SetText(FText::FromString(JsonObject->GetStringField("letterB")));

		}
		else if (strEventName == "RemoveHighlight")
		{
			//ChoiceQuestion->FAnimateTypeLine = strEventName;

			ChoiceItem->RemoveHighlight();
			
		}

		else if (strEventName == "ShowSelection")
		{
			
			FString fGetLetter=JsonObject->GetStringField("letter");
		    
			//before showing choice A
			if(fGetLetter.ToUpper()=="A")
			{
				ChoiceQuestion->StartAnimateMCPosition();
				ChoiceQuestion->SetToGlowMaterial();
				ChoiceQuestion->boolLineIsMultipleChoicePosition=true;
				ChoiceItem->AnimateBoxQuestion();
			}

			ChoiceItem->SelectedItem(fGetLetter);
			ChoiceItem->StartAnimateSelection();
		}
		else if (strEventName == "ShowSelected")
		{

			FString fGetLetter=JsonObject->GetStringField("selected");
			ChoiceItem->SelectedItem(fGetLetter);
			ChoiceItem->Highlight();
			//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, fGetLetter);
			//ChoiceItem->StartAnimateOutSelection();
			//ChoiceQuestion->FAnimateTypeLine = strEventName;
			//ChoiceQuestion->StartAnimateMCPosition();
		}
		else if (strEventName == "ShowAnswer")
		{

			FString strAnswer=JsonObject->GetStringField("answer");
			ChoiceItem->SetAnswerAndProcess(strAnswer);
			
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
		else if (strEventName == "AnimateOut")
		{
			ChoiceQuestion->StartAnimateMCPositionOut();
			ChoiceItem->StartAnimateOutSelection();
			boolOutIsShownLine=false;
			ChoiceQuestion->boolLineIsMultipleChoicePosition=false;
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
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap", false);
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
	boolHasPassed = false;
}


