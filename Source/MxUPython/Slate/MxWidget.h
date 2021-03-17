#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Widgets/SWidget.h"

#include "MxWidget.generated.h"


DECLARE_DYNAMIC_DELEGATE(FMxFunctionDelegate);


UCLASS(BlueprintType)
class UMxWidget : public UObject
{
	GENERATED_BODY()
public:
	UMxWidget();
public:
	TSharedPtr<SWidget> MyWidget;
};