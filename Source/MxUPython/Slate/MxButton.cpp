#include "MxButton.h"
#include <Widgets/Input/SButton.h>

UMxButton::UMxButton()
{
	MyWidget = SNew(SButton)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SAssignNew(TextBlock, STextBlock)
			.Text(FText())
		];
}

UMxButton::~UMxButton()
{
	OnMxButtonClick.Unbind();
}

void UMxButton::OnClickConnect(FMxFunctionDelegate InOnClicked)
{
	
	OnMxButtonClick = InOnClicked;
	FOnClicked OnClick = FOnClicked::CreateUObject(this, &UMxButton::OnClick);
	StaticCastSharedPtr<SButton>(MyWidget)->SetOnClicked(OnClick);
}

void UMxButton::SetText(FString InText)
{
	TextBlock->SetText(InText);
}

FReply UMxButton::OnClick()
{
	OnMxButtonClick.ExecuteIfBound();

	return FReply::Handled();
}
