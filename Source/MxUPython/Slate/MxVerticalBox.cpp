#include "MxVerticalBox.h"
#include <Widgets/SBoxPanel.h>

UMxVerticalBox::UMxVerticalBox()
{
	MyWidget = SNew(SVerticalBox);
}

void UMxVerticalBox::AddWidget(UMxWidget* InWidget)
{
	StaticCastSharedPtr<SVerticalBox>(MyWidget)->AddSlot()
		[
			InWidget->MyWidget.ToSharedRef()
		];
}

