#pragma once
#include "pch.h"
#include "StandardDialog.h"

using namespace winrt;
using namespace Windows::UI::Xaml::Controls;

StandardDialog::StandardDialog(hstring title, hstring message)
{
	this->dialog = std::make_shared<ContentDialog>(ContentDialog());
	this->dialog->Title(winrt::box_value(title));
	this->dialog->Content(winrt::box_value(message));
	this->dialog->CloseButtonText(L"OK");
}

StandardDialog::StandardDialog(winrt::Windows::UI::Xaml::Controls::ContentControl ContentControl)
{
	this->dialog = std::make_shared<ContentDialog>(ContentDialog());
	this->dialog->Content(ContentControl);
	this->dialog->CloseButtonText(L"OK");
}

void StandardDialog::Show()
{
	this->dialog->ShowAsync();
}
