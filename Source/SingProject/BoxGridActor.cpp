// Fill out your copyright notice in the Description page of Project Settings.

#include "BoxGridActor.h"
#include "BoxImageActor.h"
#include "BoxImageQuestion.h"
#include "LineTitleSinger.h"
#include "LineSingerName.h"
#include "LineFinish.h"

// Sets default values
ABoxGridActor::ABoxGridActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	SplineTopToLow = CreateDefaultSubobject<USplineComponent>(TEXT("SplineTopToLow"));
	SplineTopToLow->SetupAttachment(DummyRoot);

	SplineTopToLowCenter = CreateDefaultSubobject<USplineComponent>(TEXT("SplineTopToLowCenter"));
	SplineTopToLowCenter->SetupAttachment(DummyRoot);

	SplineBottomToUp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineBottomToUp"));
	SplineBottomToUp->SetupAttachment(DummyRoot);

	SplineRightToCenter = CreateDefaultSubobject<USplineComponent>(TEXT("SplineRightToCenter"));
	SplineRightToCenter->SetupAttachment(DummyRoot);

	SplineCenterToOut = CreateDefaultSubobject<USplineComponent>(TEXT("SplineCenterToOut"));
	SplineCenterToOut->SetupAttachment(DummyRoot);

	SplineLineRightToCenter = CreateDefaultSubobject<USplineComponent>(TEXT("SplineLineRightToCenter"));
	SplineLineRightToCenter->SetupAttachment(DummyRoot);

	SplineLineCenterToOut = CreateDefaultSubobject<USplineComponent>(TEXT("SplineLineCenterToOut"));
	SplineLineCenterToOut->SetupAttachment(DummyRoot);
}

FVector ABoxGridActor::GetSplineBoxLocation(float time)
{
	return SplineRightToCenter->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ABoxGridActor::GetSplineLocationBottomToUp(float time)
{
	return SplineBottomToUp->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ABoxGridActor::GetSplineLocationTopToLow(float time)
{
	return SplineTopToLow->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}


FVector ABoxGridActor::GetSplineLocationTopToLowCenter(float time)
{
	return SplineTopToLowCenter->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ABoxGridActor::GetSplineLocationOut(float time)
{
	return SplineCenterToOut->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ABoxGridActor::GetSplineLineBoxLocation(float time)
{
	return SplineLineRightToCenter->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

FVector ABoxGridActor::GetSplineLineLocationOut(float time)
{
	return SplineLineCenterToOut->GetLocationAtTime(time, ESplineCoordinateSpace::World, true);
}

void ABoxGridActor::StartAnimateFinishMain(int index)
{
	boolAnimateInStarted = false;
	boolOutIsShown = true;
	//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("SET"));
}

void ABoxGridActor::StartAnimateFinishMainLine(int index)
{
	boolAnimateInStartedLine = false;
	boolOutIsShownLine = true;
	BoxQuestion->SetValueLineOut();
	//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("SET"));
}

template <typename T>
void ABoxGridActor::FindAllActors(UWorld *World, TArray<T *> &Out)
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

// Called when the game starts or when spawned
void ABoxGridActor::BeginPlay()
{
	Super::BeginPlay();

	BoxImage->OwningGrid = this;
	BoxQuestion->OwningGrid = this;

	
	GetWorld()->Exec(GetWorld(), TEXT("DisableAllScreenMessages"));
	return;

	Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &ABoxGridActor::OnResponseReceived);
	//   //This is the url on which to process the request
	Request->SetURL("http://localhost:8092"); //https://jsonplaceholder.typicode.com/todos/1
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	//Request->ProcessRequest();

	////not timer loop, one time only
	GetWorldTimerManager().SetTimer(tmr, this, &ABoxGridActor::RepeatingFunction, 0.2f, true);
	//GetWorldTimerManager().SetTimer(tmrUpDown, this, &ASingProjectBlockGrid::RepeatingFunctionUpOrDown, 0.2f, true);

	//TitleSingerUse->OwningGrid=this;
	//const FVector BlockLocationI = FVector(0.f, 0.f, 0.f) ;//+ GetActorLocation();

	// 	// Spawn a block
	// AImageActor* NewBlockI = GetWorld()->SpawnActor<ABoxImageActor>(toSpawn,BlockLocationI, FRotator(0,0,0));
	// NewBlockI->IIndex=0;
	//BoxImage->SetURL("http://localhost:8092/dice.jpg");//https://demo-res.cloudinary.com/image/upload/sample.png
	// NewBlockI->OwningGrid=this;
	// NewBlockI->StartDownload();

	// NewBlockI->StartPlay();
	// NewBlockI->StartPlayRotation();
}

void ABoxGridActor::VaRestResponse(FString VaRestValue)
{

	boolHasPassed = false;
	// if(!Response.IsValid())
	// {
	// 	return;	
	// }
	
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp =VaRestValue;// Response->GetContentAsString();
	if (strHttpContent == tmpHttp)
		return;

	strHttpContent = tmpHttp;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);

	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");
		
		if (strEventName == "none")
		{
		}
		else if(strEventName=="ResetAll")
		{
			 strHttpContent="";

			SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
			 strQuestion1="";
			 strQuestion2="";
			 strUrl="";

			 floatSize=0;

			 intAnimateIndex=-1;
			
			 boolHasPassed=false;

			 boolAnimateInStarted=false;
			 boolOutIsShown=false;
			 boolLine2OutIsShown=true;


			 intAnimateIndexLine=-1;
			 boolAnimateInStartedLine=false;
			 boolOutIsShownLine=false;
			 boolLine2OutIsShownLine=true;

			 boolAnswerIsShown=false;
		}
		else if (strEventName == "pass_question" || strEventName == "AnimateIn" || strEventName == "Animate1")
		{

			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			strQuestion1 = Item1->GetStringField("question");

			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");
			strQuestion2 = Item2->GetStringField("question");

			int IntImageLine =  JsonObject->GetIntegerField("IntImageLine");
			float ImagePosition =  JsonObject->GetIntegerField("ImagePosition");

			/*Name*/
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
			/*End Name*/
			
			if(strEventName == "pass_question")
			{
				// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion1);
				// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion2);
				BoxQuestion->SetValue(strQuestion1, strQuestion2);
				BoxImage->SetImageLinePosition(IntImageLine, ImagePosition);
			}
			else if (strEventName == "AnimateIn" || strEventName == "Animate1")
			{
				BoxImage->SetImageLinePosition(IntImageLine, ImagePosition);
				BoxQuestion->SetValue(strQuestion1, strQuestion2);
				// BoxImage->MoveToInitialPosition();
				
				boolAnswerIsShown = false;

				//FString strParam=JsonObject->GetStringField("param");
				int index = JsonObject->GetIntegerField("index");
				BoxQuestion->intIndex = index;
				//FString ss = FString::FromInt(index);

				if (!boolAnimateInStarted && intAnimateIndex != index)
				{

					boolAnimateInStarted = true;
					intAnimateIndex = index;
					// BoxImage->PositionOutObject();
					if (boolOutIsShown)
					{
						boolOutIsShown = false;
						//BoxQuestion->StartAnimateOut();
						BoxImage->SetDuplicateImage(false);
					}
					else
					{
						boolOutIsShown = true;
					}

					
					BoxQuestion->FAnimateTypeForImage = strEventName;	
					//regular lines out
					if (boolOutIsShownLine)
					{
						BoxQuestion->FAnimateTypeLine = strEventName;	
						boolOutIsShownLine = false;
						BoxQuestion->StartAnimateOutLine();
						boolAnimateInStartedLine = false;
					}

					BoxQuestion->IntImageLine = IntImageLine;
					strUrl = JsonObject->GetStringField("param");
					floatSize = JsonObject->GetIntegerField("param2");
					strUrlVideo = JsonObject->GetStringField("param3");

					BoxQuestion->StartAnimate();
					BoxImage->SetScaleWidth(floatSize);
					BoxImage->SetURL(strUrl);
					BoxImage->SetURLVideo(strUrlVideo);
					BoxImage->StartDownload();
					// BoxImage->StartDownloadOut();
					BoxImage->StartPlay();
					BoxImage->StartPlayRotation();
				}
			}
		}
		else if (strEventName == "Animate2")
		{
			BoxQuestion->FAnimateTypeForImage = strEventName;
			BoxQuestion->StartAnimate();
		}
		else if (strEventName == "StartRotateImage")
		{
			BoxImage->StartRotateImage();
		}
		else if (strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
		{

			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			strQuestion1 = Item1->GetStringField("question");

			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");
			strQuestion2 = Item2->GetStringField("question");

			// GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Blue, strQuestion1);
			BoxQuestion->SetValueLine(strQuestion1, strQuestion2);

			int index = JsonObject->GetIntegerField("index");
			BoxQuestion->intIndex = index;
			
			/*Name*/
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
			/*End Name*/

			if (!boolAnimateInStartedLine && intAnimateIndexLine != index)
			{

				boolAnimateInStartedLine = true;
				intAnimateIndexLine = index;

				if (boolOutIsShownLine)
				{
					boolOutIsShownLine = false;
					BoxQuestion->StartAnimateOutLine();
					boolAnimateInStartedLine = false;
				}
				else
				{
					boolOutIsShownLine = true;
				}

				if (boolOutIsShown)
				{
					boolOutIsShown = false;
					BoxQuestion->SetValue("", "");
					//BoxQuestion->StartAnimateOut();
					BoxImage->SetDuplicateImage(true);
				}

				BoxQuestion->FAnimateTypeLine = "";

				if (strEventName == "AnimateLine1")
				{
					//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("AnimateLine1"));
					BoxQuestion->FAnimateTypeLine = strEventName;
					boolLine2OutIsShownLine = false;
				}
				else
				{
					//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("NONE"));
				}

				BoxQuestion->TextLine1->SetText(FText::FromString(strQuestion1));
				BoxQuestion->TextLine2->SetText(FText::FromString(strQuestion2));

				BoxQuestion->StartAnimateLine();
			}
			else
			{
				// if(boolAnimateInStartedLine)
				// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("NO"));
			}
		}
		else if (strEventName == "AnimateLine2")
		{
			if (!boolLine2OutIsShownLine)
			{
				boolLine2OutIsShownLine = true;
				BoxQuestion->FAnimateTypeLine = strEventName;

				BoxQuestion->TextLine1->SetText(FText::FromString(BoxQuestion->FQuestion1));
				BoxQuestion->TextLine2->SetText(FText::FromString(BoxQuestion->FQuestion2));

    			BoxQuestion->StartAnimateLine();
			}
		}
		else if (strEventName == "AnimateLineOut") //AnimateOut
		{

			if (boolOutIsShownLine)
			{
				boolOutIsShownLine = false;
				//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TRUE2"));

				BoxQuestion->FAnimateTypeLine = "AnimateLineOut";

				BoxQuestion->SetValueLineOut();
				BoxQuestion->StartAnimateOutLine();

				boolAnimateInStartedLine = false;
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("FALSE"));
			}
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				BoxQuestion->StartAnimateOut();
				//BoxImage->StartPlayOut();
				BoxImage->SetDuplicateImage(true);
				boolAnimateInStarted = false;
			}
			
		}
		else if (strEventName == "ShowAnswer")
		{
			if (!boolAnswerIsShown)
			{
				boolAnswerIsShown = true;
				BoxImage->ShowImageAnswer();
				FString trigger = JsonObject->GetStringField("trigger");
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, trigger);

				BoxImage->SetAnswer(trigger == "true");
				
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
		else if (strEventName == "AnimateOut")
		{
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				BoxQuestion->StartAnimateOut();
				//BoxImage->StartPlayOut();
				BoxImage->SetDuplicateImage(true);
				boolAnimateInStarted = false;
			}
		}
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2", false);
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
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
// Called every frame
void ABoxGridActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABoxGridActor::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));
	boolHasPassed = false;
	if(!Response.IsValid())
	{
		return;	
	}
	
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	FString tmpHttp = Response->GetContentAsString();
	if (strHttpContent == tmpHttp)
		return;

	strHttpContent = tmpHttp;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(strHttpContent);

	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{

		FString strEventName = JsonObject->GetStringField("eventName");
		
		if (strEventName == "none")
		{
		}
		else if(strEventName=="ResetAll")
		{
			 strHttpContent="";

			SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
			 strQuestion1="";
			 strQuestion2="";
			 strUrl="";

			 floatSize=0;

			 intAnimateIndex=-1;
			
			 boolHasPassed=false;

			 boolAnimateInStarted=false;
			 boolOutIsShown=false;
			 boolLine2OutIsShown=true;


			 intAnimateIndexLine=-1;
			 boolAnimateInStartedLine=false;
			 boolOutIsShownLine=false;
			 boolLine2OutIsShownLine=true;

			 boolAnswerIsShown=false;
		}
		else if (strEventName == "pass_question" || strEventName == "AnimateIn" || strEventName == "Animate1")
		{

			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			strQuestion1 = Item1->GetStringField("question");

			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");
			strQuestion2 = Item2->GetStringField("question");

			int IntImageLine =  JsonObject->GetIntegerField("IntImageLine");
			float ImagePosition =  JsonObject->GetIntegerField("ImagePosition");

			/*Name*/
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
			/*End Name*/
			
			if(strEventName == "pass_question")
			{
				// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion1);
				// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, strQuestion2);
				BoxQuestion->SetValue(strQuestion1, strQuestion2);
				BoxImage->SetImageLinePosition(IntImageLine, ImagePosition);
			}
			else if (strEventName == "AnimateIn" || strEventName == "Animate1")
			{
				BoxImage->SetImageLinePosition(IntImageLine, ImagePosition);
				BoxQuestion->SetValue(strQuestion1, strQuestion2);
				// BoxImage->MoveToInitialPosition();
				
				boolAnswerIsShown = false;

				//FString strParam=JsonObject->GetStringField("param");
				int index = JsonObject->GetIntegerField("index");
				BoxQuestion->intIndex = index;
				//FString ss = FString::FromInt(index);

				if (!boolAnimateInStarted && intAnimateIndex != index)
				{

					boolAnimateInStarted = true;
					intAnimateIndex = index;
					// BoxImage->PositionOutObject();
					if (boolOutIsShown)
					{
						boolOutIsShown = false;
						//BoxQuestion->StartAnimateOut();
						BoxImage->SetDuplicateImage(false);
					}
					else
					{
						boolOutIsShown = true;
					}

					
					BoxQuestion->FAnimateTypeForImage = strEventName;	
					//regular lines out
					if (boolOutIsShownLine)
					{
						BoxQuestion->FAnimateTypeLine = strEventName;	
						boolOutIsShownLine = false;
						BoxQuestion->StartAnimateOutLine();
						boolAnimateInStartedLine = false;
					}

					BoxQuestion->IntImageLine = IntImageLine;
					strUrl = JsonObject->GetStringField("param");
					floatSize = JsonObject->GetIntegerField("param2");
					strUrlVideo = JsonObject->GetStringField("param3");

					BoxQuestion->StartAnimate();
					BoxImage->SetScaleWidth(floatSize);
					BoxImage->SetURL(strUrl);
					BoxImage->SetURLVideo(strUrlVideo);
					BoxImage->StartDownload();
					// BoxImage->StartDownloadOut();
					BoxImage->StartPlay();
					BoxImage->StartPlayRotation();
				}
			}
		}
		else if (strEventName == "Animate2")
		{
			BoxQuestion->FAnimateTypeForImage = strEventName;
			BoxQuestion->StartAnimate();
		}
		else if (strEventName == "StartRotateImage")
		{
			BoxImage->StartRotateImage();
		}
		else if (strEventName == "AnimateLineIn" || strEventName == "AnimateLine1")
		{

			TSharedPtr<FJsonObject> blank = JsonObject->GetObjectField("blank");
			TSharedPtr<FJsonObject> Item1 = blank->GetObjectField("Item1");
			strQuestion1 = Item1->GetStringField("question");

			TSharedPtr<FJsonObject> Item2 = blank->GetObjectField("Item2");
			strQuestion2 = Item2->GetStringField("question");

			// GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Blue, strQuestion1);
			BoxQuestion->SetValueLine(strQuestion1, strQuestion2);

			int index = JsonObject->GetIntegerField("index");
			BoxQuestion->intIndex = index;
			
			/*Name*/
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
			/*End Name*/

			if (!boolAnimateInStartedLine && intAnimateIndexLine != index)
			{

				boolAnimateInStartedLine = true;
				intAnimateIndexLine = index;

				if (boolOutIsShownLine)
				{
					boolOutIsShownLine = false;
					BoxQuestion->StartAnimateOutLine();
					boolAnimateInStartedLine = false;
				}
				else
				{
					boolOutIsShownLine = true;
				}

				if (boolOutIsShown)
				{
					boolOutIsShown = false;
					BoxQuestion->SetValue("", "");
					//BoxQuestion->StartAnimateOut();
					BoxImage->SetDuplicateImage(true);
				}

				BoxQuestion->FAnimateTypeLine = "";

				if (strEventName == "AnimateLine1")
				{
					//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("AnimateLine1"));
					BoxQuestion->FAnimateTypeLine = strEventName;
					boolLine2OutIsShownLine = false;
				}
				else
				{
					//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("NONE"));
				}

				BoxQuestion->TextLine1->SetText(FText::FromString(strQuestion1));
				BoxQuestion->TextLine2->SetText(FText::FromString(strQuestion2));

				BoxQuestion->StartAnimateLine();
			}
			else
			{
				// if(boolAnimateInStartedLine)
				// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("NO"));
			}
		}
		else if (strEventName == "AnimateLine2")
		{
			if (!boolLine2OutIsShownLine)
			{
				boolLine2OutIsShownLine = true;
				BoxQuestion->FAnimateTypeLine = strEventName;

				BoxQuestion->TextLine1->SetText(FText::FromString(BoxQuestion->FQuestion1));
				BoxQuestion->TextLine2->SetText(FText::FromString(BoxQuestion->FQuestion2));

    			BoxQuestion->StartAnimateLine();
			}
		}
		else if (strEventName == "AnimateLineOut") //AnimateOut
		{

			if (boolOutIsShownLine)
			{
				boolOutIsShownLine = false;
				//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("TRUE2"));

				BoxQuestion->FAnimateTypeLine = "AnimateLineOut";

				BoxQuestion->SetValueLineOut();
				BoxQuestion->StartAnimateOutLine();

				boolAnimateInStartedLine = false;
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("FALSE"));
			}
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				BoxQuestion->StartAnimateOut();
				//BoxImage->StartPlayOut();
				BoxImage->SetDuplicateImage(true);
				boolAnimateInStarted = false;
			}
			
		}
		else if (strEventName == "ShowAnswer")
		{
			if (!boolAnswerIsShown)
			{
				boolAnswerIsShown = true;
				BoxImage->ShowImageAnswer();
				FString trigger = JsonObject->GetStringField("trigger");
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, trigger);

				BoxImage->SetAnswer(trigger == "true");
				
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
		else if (strEventName == "AnimateOut")
		{
			if (boolOutIsShown)
			{
				boolOutIsShown = false;
				//boolAnimateOutStarted=true;
				BoxQuestion->StartAnimateOut();
				//BoxImage->StartPlayOut();
				BoxImage->SetDuplicateImage(true);
				boolAnimateInStarted = false;
			}
		}
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2", false);
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
		}
		// else if (strEventName == "PostResult")
		// {

		// 	TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("values");
		// 	TArray<bool> objIsImage;

		// 	// int intTop = JsonObject->GetIntegerField("top");
		// 	// int intSize = JsonObject->GetIntegerField("size");
		// 	//	int intSpacing = JsonObject->GetIntegerField("spacing");
		// 	LineFinishParent->SetTopAndSizeAndSpacing(0, 0, 0);

		// 	int intCount = objArray.Num();
		// 	for (int32 i = 0; i < intCount; i++)
		// 	{

		// 		auto obj = objArray[i]->AsObject();
		// 		FString question = obj->GetStringField("Item1");
		// 		FString url = obj->GetStringField("Item2");
		// 		FString isCorrect = obj->GetStringField("Item3");

		// 		bool boolIsCorrect = (isCorrect == "true" ? true : false);
		// 		objIsImage.Add((url != "" ? true : false));

		// 		LineFinishParent->fnSetGuideImage(question, url, boolIsCorrect, i);
		// 	}

		// 	for (int32 i = intCount; i < 100; i++)
		// 	{
		// 		LineFinishParent->fnSetGuideImage("", "", false, i);
		// 	}

		// 	LineFinishParent->SetPositionsUsingImages(objIsImage);
		// 	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("POST"));
		// 	LineFinishParent->HideLines();
		// }
		// else if (strEventName == "ShowResult")
		// {
		// 	LineFinishParent->ShowLines();
		// }
		// else if (strEventName == "HideResult")
		// {

		// 	LineFinishParent->HideLines();
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
	}
}




void ABoxGridActor::RepeatingFunction()
{

	if (!boolHasPassed)
	{
		boolHasPassed = true;
		Request->ProcessRequest();
		return;
	}

}
