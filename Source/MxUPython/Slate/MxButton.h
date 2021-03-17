#pragma once
#include "CoreMinimal.h"
#include "MxWidget.h"

#include "MxButton.generated.h"


class STextBlock;

UCLASS(BlueprintType)
class UMxButton : public UMxWidget
{
	GENERATED_BODY()
public:
	UMxButton();
	~UMxButton();
	//UMxButton(FString InText);
	
	UFUNCTION(BlueprintCallable)
		void OnClickConnect(FMxFunctionDelegate InOnClicked);

	UFUNCTION(BlueprintCallable)
		void SetText(FString InText);

private:
	FMxFunctionDelegate OnMxButtonClick;

	TSharedPtr<STextBlock> TextBlock;
private:
	FReply OnClick();
};
