#include "MxUtils.h"
#include "Engine/World.h"


UMxUtils::UMxUtils(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{

}
PRAGMA_DISABLE_OPTIMIZATION
void UMxUtils::DebugErrorInScreen(FString InString)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, *InString);
	}
}
PRAGMA_ENABLE_OPTIMIZATION
void UMxUtils::DebugInfoInScreen(FString InString)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, *InString);
	}
}

void UMxUtils::DebugWarningInScreen(FString InString)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, *InString);
	}
}

