#pragma once
#include "CoreMinimal.h"
#include "MxWidget.h"

#include "MxEditableText.generated.h"


UCLASS(Transient)
class UMxEditableText : public UMxWidget
{
	GENERATED_BODY()
public:
	UMxEditableText();

	UFUNCTION(BlueprintCallable)
		FString GetText();
};