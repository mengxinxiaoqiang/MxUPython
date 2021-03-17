#include "MxHorizontalBox.h"

UMxHorizontalBox::UMxHorizontalBox()
{
	MyWidget = SNew(SHorizontalBox);
}

void UMxHorizontalBox::AddWidget(UMxWidget* InWidget)
{
	StaticCastSharedPtr<SHorizontalBox>(MyWidget)->AddSlot()
		[
			InWidget->MyWidget.ToSharedRef()
		];
}

