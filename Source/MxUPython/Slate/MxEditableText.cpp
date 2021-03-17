#include "MxEditableText.h"

UMxEditableText::UMxEditableText()
{
	MyWidget = SNew(SEditableText);
}

FString UMxEditableText::GetText()
{
	FString OutString = StaticCastSharedPtr<SEditableText>(MyWidget)->GetText().ToString();
	return OutString;
}

