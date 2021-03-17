#pragma once
#include "CoreMinimal.h"
#include "MxWidget.h"


#include "MxWindow.generated.h"

//class SVerticalBox;
//class SHorizontalBox;

UCLASS(BlueprintType)
class UMxWindow : public UMxWidget
{
	GENERATED_BODY()
public:
	UMxWindow();
	
	UFUNCTION(BlueprintCallable)
		void SetWindowTitle(FString InTile);

	UFUNCTION(BlueprintCallable)
		void SetLayout(UMxWidget* InWidget);

	UFUNCTION(BlueprintCallable)
		void Resize(int w, int h);

	UFUNCTION(BlueprintCallable)
		void Show();

	UFUNCTION(BlueprintCallable)
		void Close();

	//UFUNCTION(BlueprintCallable)
	//	void AddButtonV(FString InName);

	//UFUNCTION(BlueprintCallable)
	//	void AddButtonH(FString InName);

private:
	//TSharedPtr<SWindow> MyWidget;
	//TSharedPtr<SVerticalBox> VerticalBox;
	//TSharedPtr<SHorizontalBox> HorizontalBox;
};