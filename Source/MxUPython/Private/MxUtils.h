#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "MxUtils.generated.h"


UCLASS()
class UMxUtils : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	// 打印错误信息至屏幕
	UFUNCTION(BlueprintCallable)
	static void DebugErrorInScreen(FString InString);

	// 打印信息至屏幕
	UFUNCTION(BlueprintCallable)
	static void DebugInfoInScreen(FString InString);

	// 打印警告信息至屏幕
	UFUNCTION(BlueprintCallable)
	static void DebugWarningInScreen(FString InString);

};