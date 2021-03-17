#pragma once

#include "CoreMinimal.h"
#include "MxWidget.h"

#include "MxHorizontalBox.generated.h"


UCLASS(BlueprintType)
class UMxHorizontalBox : public UMxWidget
{
	GENERATED_BODY()
public:
	UMxHorizontalBox();

	UFUNCTION(BlueprintCallable)
		void AddWidget(UMxWidget* InWidget);
};