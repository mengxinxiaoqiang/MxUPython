#include "MxWindow.h"
#include "MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "Widgets/SWindow.h"
#include "Editor.h"

UMxWindow::UMxWindow()
{
	MyWidget = SNew(SWindow);
}

void UMxWindow::SetWindowTitle(FString InTile)
{
	if (MyWidget)
	{
		StaticCastSharedPtr<SWindow>(MyWidget)->SetTitle(FText::FromString(InTile));
	}
}

void UMxWindow::SetLayout(UMxWidget* InWidget)
{
	StaticCastSharedPtr<SWindow>(MyWidget)->SetContent(InWidget->MyWidget.ToSharedRef());
}

void UMxWindow::Resize(int w, int h)
{
	if (MyWidget)
	{
		StaticCastSharedPtr<SWindow>(MyWidget)->Resize(FVector2D(w, h));
	}
}

void UMxWindow::Show()
{
	if (MyWidget)
	{
		IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
		if (MainFrameModule.GetParentWindow().IsValid())
		{
			FSlateApplication::Get().AddWindowAsNativeChild(StaticCastSharedPtr<SWindow>(MyWidget).ToSharedRef(), MainFrameModule.GetParentWindow().ToSharedRef());
		}
		else
		{
			FSlateApplication::Get().AddWindow(StaticCastSharedPtr<SWindow>(MyWidget).ToSharedRef());
		}
	}
}

void UMxWindow::Close()
{
	if (MyWidget)
	{
		StaticCastSharedPtr<SWindow>(MyWidget)->HideWindow();
	}
}

//void UMxWindow::AddButtonV(FString InName)
//{
//	VerticalBox->AddSlot()
//		[
//			SNew(SButton)
//			[
//				SNew(STextBlock)
//				.Text(FText::FromString(InName))
//			]
//		];
//}
//
//void UMxWindow::AddButtonH(FString InName)
//{
//	HorizontalBox->AddSlot()
//		[
//			SNew(SButton)
//			[
//				SNew(STextBlock)
//				.Text(FText::FromString(InName))
//			]
//		];
//}

