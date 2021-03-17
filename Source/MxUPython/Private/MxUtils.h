#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "MxUtils.generated.h"


UCLASS()
class UMxUtils : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	// ��ӡ������Ϣ����Ļ
	UFUNCTION(BlueprintCallable)
	static void DebugErrorInScreen(FString InString);

	// ��ӡ��Ϣ����Ļ
	UFUNCTION(BlueprintCallable)
	static void DebugInfoInScreen(FString InString);

	// ��ӡ������Ϣ����Ļ
	UFUNCTION(BlueprintCallable)
	static void DebugWarningInScreen(FString InString);

};