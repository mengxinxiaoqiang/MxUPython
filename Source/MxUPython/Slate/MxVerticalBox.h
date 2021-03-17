#pragma once

#include "CoreMinimal.h"
#include "MxWidget.h"
#include "MxVerticalBox.generated.h"


UCLASS(BlueprintType)
class UMxVerticalBox : public UMxWidget
{
	GENERATED_BODY()
public:
	UMxVerticalBox();

	UFUNCTION(BlueprintCallable)
		void AddWidget(UMxWidget* InWidget);
};